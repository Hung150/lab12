#include<iostream>
using namespace std;
sign(double x){
	if(x<0){ return -1;
	}if(x=0){ return 0;
	}else{ 
	 return 1;
    }
}
main(){
	float n1,n2;
    cout<<"enter first real number n1: "; cin>>n1;
    cout<<"enter first real number n2: "; cin>>n2;
    cout<<"the value of the expression: "<<sign(n1)+sign(n2);
}
