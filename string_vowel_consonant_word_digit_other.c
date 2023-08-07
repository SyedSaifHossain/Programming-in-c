//Find out numbers of vowel,consonant,word,digit and other character in string print in programming in c.

#include<stdio.h>
int main()
{
    char string[100],ch;
    int i,vowel,consonant,word,digit,other;
    printf("Enter any string : ");
    gets(string);
    i=vowel=consonant=word=digit=other=0;
    while((ch=string[i])!='\0')
    {
        if(ch=='A' || ch=='E' || ch=='I' || ch=='O'|| ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        {
            vowel++;
        }

        else if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
        {
            consonant++;
        }
        else if(ch==' ')
        {
            word++;
        }
        else if(ch>='0' && ch<='9')
        {
            digit++;
        }
        else
        {
            other++;
        }
        i++;
    }
    word++;
    printf("Numbers of vowel = %d\n",vowel);
    printf("Numbers of consonant = %d\n",consonant);
    printf("Numbers of word = %d\n",word);
    printf("Numbers of digit = %d\n",digit);
    printf("Numbers of other = %d\n",other);
    return 0;
}
