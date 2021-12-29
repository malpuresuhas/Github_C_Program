//Below C Program will print ASCII value of A to Z
#include <stdio.h>
int main()
{
    char ascCh; //declaring variable which start from Alphabet A
    for(ascCh='A'; ascCh<='Z'; ascCh++)
    {
        printf("ASCII Value of %c is %d\n", ascCh,ascCh);
    }
    return 0;
}