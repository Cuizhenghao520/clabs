#include<stdio.h>
#include<stdlib.h>
int main(int argc,char*argv[]){
    int a[1000];
    int b = 1;
    int c = 0;
    int x = 0;
    int y = 0;
    int m;
    while(b < argc)
    {
        a[c] = atof(argv[b]);
        b++;
        c++;
    }
    while(x <argc - 2)
    {
        if(a[x] < a[x+1])
        {
            m = a[x];
            a[x] = a[x + 1];
            a[x+1] = m;
            x++;
        }
    }
printf("The min is：%d\n",a[argc-2]);
return 0;
}