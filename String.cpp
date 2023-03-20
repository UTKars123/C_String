//Reverse the number without an array
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



// Capital letter into small letter using ASCII difference
//  ASCII diffrence is 32 b/w capital and small letter.  
#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    gets(a);
    int n=strlen(a);
	
    for(int i=0;i<n;i++){
    	int c;  
        if(65<=a[i]&&a[i]<=90){
        c=a[i]+32;
	}
	else{
	c=a[i];
	}
	    
        printf("%c",c);
    }
    
    return 0;
}
