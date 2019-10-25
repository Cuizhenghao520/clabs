#include <stdio.h>
int main( )
{
    int fathr,celsius;
    int lower, upper,step;

    lower =0;
    upper=100;
    step=5;

     print("celsius fahr\n");
    celsius=lower;
    while(celsius <=upper){
         fathr=[(9*celsius)/5]+32;
         printf("%d\t%d\n",celsius,fahr );
         celsius=celsius+step;
        }
        return 0;
}
