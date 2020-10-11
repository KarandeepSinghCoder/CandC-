/*
Author: Karandeep Singh
Regno : 19BCB0055
OS-LAB-DA
Problem Statement:
Implementation of page replacement algorithm
(a) FIFO (b) LRU.
Reference string 4, 7, 6, 1, 7, 6, 1, 2, 7, 2., number of frames 3 Page replacement policies LRU and FIFO, check the number of page faults, if they are 6, and 6

*/


#include<stdio.h>
int n;                      //To store length of page reference sequence
int nf;                     //Total number of frames
int in[100];                //Array to store the page reference sequence
int p[50];
int hit=0;                  //To store hit
int i,j,k;                  //Iterative variables
int pgfaultcnt=0;           //To store the total number of page faults


void initialize()           //this function will initialize the number of frames with 9999 so that page hit will not never happen initially
{
    pgfaultcnt=0;
    for(i=0; i<nf; i++)     //all frames initialized
        p[i]=9999;
}

int isHit(int data)         //checks whether the input is currently available in any of the frame
{
    hit=0;
    for(j=0; j<nf; j++)
    {
        if(p[j]==data)
        {
            hit=1;          //if present hit becomes one
            break;
        }

    }

    return hit;             //return hit 1 if found else 0
}

int getHitIndex(int data)   //to get the index of hit in the frame
{
    int hitind;
    for(k=0; k<nf; k++)
    {
        if(p[k]==data)
        {
            hitind=k;       //the index k is then stored in hitind
            break;
        }
    }
    return hitind;          //hitind is finally returned
}

void dispPages()            //a function to display all current pages present in the frame
{
    for (k=0; k<nf; k++)
    {
        if(p[k]!=9999)
            printf(" %d",p[k]);
    }

}

void dispPgFaultCnt()       //function which reads the final global variable "pgfaultcnt" and displays its final value is number of page faults
{
    printf("\nTotal no of page faults:%d",pgfaultcnt);
}

void fifo()                 //Function to implement First in First out page replacement algorithm
{
    initialize();           //initialize all frames
    for(i=0; i<n; i++)
    {
        printf("\nFor %d :",in[i]);

        if(isHit(in[i])==0) //if no hit then implement this segment
        {

            for(k=0; k<nf-1; k++)
                p[k]=p[k+1];    //change page order in the frame one page removed

            p[k]=in[i];         //new frame added
            pgfaultcnt++;       //number of page faults is incremented
            dispPages();
        }
        else
            printf("No page fault");    //else no page fault this no change in frame
    }
    dispPgFaultCnt();           // display total page faults at the end
}
void lru()
{
    initialize();
    int least[50];              //array to store the recently used page
    for(i=0; i<n; i++)
    {

        printf("\nFor %d :",in[i]);

        if(isHit(in[i])==0)     //check for page hit
        {

            for(j=0; j<nf; j++)
            {
                int pg=p[j];    //each page is stored in pg and checked
                int found=0;    //flag variable acts as an indicator
                for(k=i-1; k>=0; k--)
                {
                    if(pg==in[k])   //checks the page in the reference string
                    {
                        least[j]=k; //index of the page is then noted and stored in least array
                        found=1;    //found is made one as a indicator of identification
                        break;
                    }
                    else
                        found=0;
                }
                if(!found)
                    least[j]=-9999;     //if not found least[j] is made -9999
            }
            int min=9999;
            int repindex;
            for(j=0; j<nf; j++)
            {
                if(least[j]<min)
                {
                    min=least[j];       //min will the minimum index after the execution of the for loop
                    repindex=j;         //repindex stores the index where new page is to be inserted
                }
            }
            p[repindex]=in[i];          //new page is finally entered in the after removing least recently used page
            pgfaultcnt++;               //page fault is then incremented
            dispPages();                //to display all current pages present in the frame
        }
        else
            printf("No page fault!");
    }
    dispPgFaultCnt();                   // display total page faults at the end
}
void lfu()
{
    int usedcnt[100];                   //array to store the used count
    int least,repin,sofarcnt=0,bn;
    initialize();
    for(i=0; i<nf; i++)
        usedcnt[i]=0;                       //initializing the array with 0 because count is zero at the beginning

    for(i=0; i<n; i++)
    {

        printf("\n For %d :",in[i]);
        if(isHit(in[i]))                    //check for page hits
        {
            int hitind=getHitIndex(in[i]);      //store the hit index
            usedcnt[hitind]++;                  //increment the value in the usedcnt having the same index as hitind
            printf("No page fault!");           //If hit no page fault
        }
        else
        {
            pgfaultcnt++;                   //if no hit increase page count
            if(bn<nf)
            {
                p[bn]=in[i];
                usedcnt[bn]=usedcnt[bn]+1;
                bn++;
            }
            else
            {
                least=9999;                 //lease is given a big number so that can be decremented accordingly
                for(k=0; k<nf; k++)
                    if(usedcnt[k]<least)        //if the count stored in the array
                    {
                        least=usedcnt[k];       //the values is interchanged
                        repin=k;                //index k is stored
                    }
                p[repin]=in[i];                 //new page is entered in place of least recently used
                sofarcnt=0;
                for(k=0; k<=i; k++)
                    if(in[i]==in[k])            //loop through
                        sofarcnt=sofarcnt+1;    //if found sofarcnt is incremented
                usedcnt[repin]=sofarcnt;        //sofarcnt is assigned to usedcnt array
            }

            dispPages();                            //display all pages currently in the frame
        }

    }
    dispPgFaultCnt();                               //display total page faults
}

int main()
{
    int choice;
    //*******************GET THE REQUIRED INPUTS*******************//
    printf("Enter length of page reference sequence:");
    scanf("%d",&n);
    printf("Enter the page reference sequence:");
    for(i=0; i<n; i++)
        scanf("%d",&in[i]);
    printf("Enter no of frames:");
    scanf("%d",&nf);
    //*******************GET THE REQUIRED INPUTS*******************//
    while(1)
    {
    //*******************CHOICE MENU START*******************//
        printf("\n******************************\n");
        printf("Page Replacement Algorithms");
        printf("\n1.FIFO");
        printf("\n2.LRU");
        printf("\n3.LFU");
        printf("\n3.Exit");
        printf("\nEnter your choice:");
        scanf("%d",&choice);
    //*******************CHOICE MENU ENDS *******************//
        switch(choice)
        {
        case 1:
            fifo();         //if choice is 1 implement FIFO
            break;
        case 2:
            lru();          //if choice is 2 implement LRU
            break;
        case 3:
            lfu();          //if choice is 3 implement LFU
            break;
        case 4:
            exit(0);        //Trigger to Exit from the code
            break;

        }
    }
}
