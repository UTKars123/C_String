
#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{   char a[100];
    gets(a);
    int n=strlen(a);
    for(int i=0;i<n;i++){
        char c= tolower(a[i]);
        printf("%c",c);
		}
    
    return 0;
}
