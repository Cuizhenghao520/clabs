#include<stdio.h>
#include<string.h>
int strindex (char s[], char t[])
{
    int m,n,g,e=0;
    for(m = 0;s[m] !='\0'; m++){
        for(n = m,g=0;t[g]!='\0'&& s[n]==t[g];n++,g++);
        if(t[g]=='\0'){
         e= m+1;
    }
    }
    if(e >0)
    return e-1;
    return -1;
}
int main(){
    char a[100];
    char b[100];
    printf("please input the chain of characters\n");
    scanf("%s %s", a,b);
    printf("%d\n",strindex(b,a));
}