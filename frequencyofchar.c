#include <stdio.h>
#include <string.h>
int main()
{
    char str[20],ch,a_char;
    int freq[26],counter,len;
    for(counter=0;counter<26;counter++)
    freq[counter]=0;
    printf("INPUT THE STRING :\n");
    scanf("%[^\n]s",str);
    len=strlen(str);
    for(counter=0;counter<len;counter++)
    {
        ch=str[counter];
        if(isalpha(ch))
        {
            ch=tolower(ch);
            freq[ch-'a']++;
        }
    }
    a_char= 'a';
    printf("YOUR OUTPUT IS :\n");
    for(counter=0;counter<26;counter++)
        printf("%c\t%d\n",a_char+counter,freq[counter]);
    return 0;
}
