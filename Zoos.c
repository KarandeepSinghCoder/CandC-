/*KARANDEEP SINGH
Zoos:
You are required to enter a word that consists of  and  that denote the number of Zs and Os respectively. 
The input word is considered similar to word zoo if
2*x=y
*/


#include <string.h>
#include <stdio.h>
int main()
{
    char s[20];
    gets(s);int l;
    l=strlen(s);
    int i=0;
    while(s[i]!='o')
    {
        i++;
    }
    if(i*2==(l-i))
        printf("Yes");
    else
        printf("No");
    return 0;
}