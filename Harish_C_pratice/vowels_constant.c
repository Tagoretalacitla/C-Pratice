#include <stdio.h>
#include <string.h>

int main()
{
    char str[30];
    int vow = 0, cons = 0, i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0')
    {
        if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
        {
            if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||
               str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||
               str[i]=='u'||str[i]=='U')
                vow++;
            else
                cons++;
        }
        i++;
    }

    printf("\nNumber of Vowels = %d", vow);
    printf("\nNumber of Consonants = %d\n", cons);

    return 0;
}
