#include<stdio.h>
#include<string.h>
int strindex (char s[], char t[])
{
    int e,f,g,pos=0;
    for(e = 0;s[e] !='\0'; e++){
        for(f = e,g=0;t[g]!='\0'&& s[f]==t[g];f++,g++);
        if(t[g]=='\0'){
        pos = e+1;
    }
    }
    if(pos >0)
    return pos-1;
    return -1;
}
int main(){
    char a[100];
    char b[100];
    printf("please input the chain of characters\n");
    scanf("%s %s", a,b);
    printf("%d\n",strindex(b,a));
}