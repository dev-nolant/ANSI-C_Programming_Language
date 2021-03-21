/*Page 18*/
/*--Adds a number to a variable every syllable --*/

# include <stdio.h>

main()
{
    long nc;

    nc = 0;

    while ((getchar()) != EOF){
        ++nc;
    printf("%ld\n", nc);
    }
}