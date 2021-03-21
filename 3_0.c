/*Page 16*/
/*--Prints out what is entered--*/

# include <stdio.h>

main()
{
    int c;

    c = getchar();
    while (c != EOF){
        putchar(c);
        c = getchar();
    }
}