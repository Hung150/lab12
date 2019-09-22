#include<iostream>
using namespace std;
int quater(double x, double y){
	if(x>0&&y>0){ return 1;
	}
	if(x<0&&y>0){ return 2;
	}
	if(x<0&&y<0){ return 3;
	}
	if(x>0&&y<0){ return 4;
	}
}
main(){
	double x1,y1,x2,y2,x3,y3; 
	cout<<"enter the coordinates of the first point: "; cin>>x1;
	cout<<"\nenter the degrees of the first point: "; cin>>y1;
	cout<<"\nenter the coordinates of the second point: "; cin>>x2;
	cout<<"\nenter the degrees of the second point: "; cin>>y2;
	cout<<"\nenter the coordinates of the third point: "; cin>>x3;
	cout<<"\nenter the degrees of the third point: "; cin>>y3;
	cout<<"\nthe number of coordinate quaters of the first point: "<<quater(x1,y1);
	cout<<"\nthe number of coordinate quaters of the second point: "<<quater(x2,y2);
	cout<<"\nthe number of coordinate quaters of the third point: "<<quater(x3,y3);
}
