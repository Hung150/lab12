#include<iostream>
#include<math.h>
using namespace std;
double rings(double r1,double r2){ 
return 3.14*(pow(r1,2)-pow(r2,2));
}
int main(){ 
        double r1,r2; cout<<"enter radius r1(r1>0): "; cin>>r1;
        cout<<"enter radius r2(0<r2<r1): "; cin>>r2;
        if(r1<0||r2<0){ cout<<"error(please enter radius>0)";
        }
		if(r1<r2){ cout<<"error(please enter r1>r2)";
        }else{
		cout<<"the area of three rings for which the external and internal radii are given: "<<rings(r1,r2);
        }
}
