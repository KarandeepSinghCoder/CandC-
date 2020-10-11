/*
Author: Karandeep Singh
Regno : 19BCB0055
OS-LAB-DA
Problem Statement:
Simulation of producer consumer problem using semaphore User defined buffer
*/

#include<stdio.h>
#include<stdlib.h>

//Global variables which can be accessed by all functions;
int mutex=1;            //This prevents producer and consumer to implement at a time.
// when mutex is one producer() or consumer() can be called
//when mutex is one producer executes
//when mutex is two Consumer executes
int full=0;            // Initially, all slots are empty. Thus full slots are 0
int empty;             // All slots are empty initially. So total empty slots must be equal to total buffer size which is taken from user as input
int x=0;               //x is the current entity which is either being produced or consumed

int main()
{
	int n;
	printf("enter the buffer size:");
	scanf("%d",&empty);                 //Initializing empty with buffer size;
	printf("\n");
	void producer();                    //Deceleration of function producer()
	void consumer();                    //Deceleration of function consumer()
	int wait(int);                      //Implements the waiting condition
	int signal(int);                    //value of the input variable is increased by 1 whenever signal() is called



//************* MENU SECTION STARTS*************//
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Make your choice:\n");
    printf("Enter 1 for producer\n");
    printf("Enter 2 for Consumer\n");
    printf("Enter 1 to  Exit\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
//************* MENU SECTION ENDS*************//
	while(1)
	{
		printf("\nEnter your choice:");
		scanf("%d",&n);                     //Taking user desired choice
		switch(n)
		{
			case 1:	if((mutex==1)&&(empty!=0))      //initial check conditions before producers() is called
						producer();
					else
						printf("Buffer is full!!");
					break;
			case 2:	if((mutex==1)&&(full!=0))       //initial check conditions before consumer() is called
						consumer();
					else
						printf("Buffer is empty!!");
					break;
			case 3:
					exit(0);                        //Trigger to Exit from the code
					break;
		}
	}

	return 0;
}

int wait(int s)
{
	return (--s);           //wait() decrements the input variable by 1 every time it is called
}

int signal(int s)
{
	return(++s);            //Signal() increments the input variable by 1 every time it is called
}

//Producers function
void producer()
{
	mutex=wait(mutex);      //here mutex value will become 0 thus indicating either of producer() or consumer() is in running state
	full=signal(full);      //every production will add on to the number of full slots
	empty=wait(empty);      //after entering new product unit the total number of empty slots must be reduced by 1
	x++;                    //current instance of product being produced
	printf("Producer produces the item %d \n",x);
	mutex=signal(mutex);    //so that other process can enter into the critical section.
}
// consumers function
void consumer()
{
	mutex=wait(mutex);      //so that no other process can enter into the critical section.
	full=wait(full);        //if some data is consumed by the consumer then the variable full must be decreased by one.
	empty=signal(empty);    //after taking the data from the buffer, one space is freed from the buffer and the variable "empty" must be increased.
	printf("Consumer consumes item %d \n",x);
	x--;                    //current instance of product being consumed
	mutex=signal(mutex);    //so that other process can enter into the critical section.
}
