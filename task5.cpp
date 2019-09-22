#include<iostream>
using namespace std;
long fact21(long n){
    long i,f21=1;
    for(i=1;i<=n;i+=2){
    	f21=f21*i;
	}
    return f21;
}
long fact22(long n){
	long i,f22=1;
    for(i=2;i<=n;i+=2){
		f22=f22*i;
	}
    return f22;
}
main(){
	long n;
	cout<<"enter positive integer n: "; cin>>n;
	if(n<0){ cout<<"error(please enter a positive integer)";
	}
	if(n%2==1){ cout<<"n!! = "<<fact21(n);
	}
	if(n%2==0){ cout<<"n!! = "<<fact22(n);
	}
}
