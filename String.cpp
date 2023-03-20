//
//#include <stdio.h>
//#include<string.h>
//#include<ctype.h>
//int main()
//{   char a[100];
//    gets(a);
//    int n=strlen(a);
//    for(int i=0;i<n;i++){
//        char c= tolower(a[i]);
//        printf("%c",c);
//		}
//    
//    return 0;
//}




#include<iostream>
using namespace std;

int main() {
    int num,rem,rev,sum=0;
    cin>>num;
    while(num!=0){
	rem=num%10;
	sum=10*sum+rem;
    num=num/10;
	}
	cout<<sum;
	  return 0;
}
