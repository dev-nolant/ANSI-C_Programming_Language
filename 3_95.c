/*Page 19*/
/*--Adds a number to a variable every new line --*/

# include <stdio.h>
# include <string.h>

main()
{
    int nl, c;


    nl = 0;

    while ((c = getchar()) != EOF){
        if (c == '\n')  {
            ++nl;
        }
        if (c == '\b') {
            --nl;
        }

        printf("%d\n", nl);
        
    }
}