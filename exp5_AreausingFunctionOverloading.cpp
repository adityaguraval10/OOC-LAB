#include<iostream>
using namespace std;
int area(int);
int area(int,int);
float area(float);
float area(float,float);
int main(){

    int s,l,b;
    float r,bs,ht;
    cout<<"Enter the side of square: ";
    cin>>s;
    cout<<"Enter the length and breadth of rectangle: ";
    cin>>l>>b;
    cout<<"Enter the radius of circle: ";
    cin>>r;
    cout<<"Enter the base and height of triangle: ";
    cin>>bs>>ht;
    
    cout<<"\n Area of square: "<<area(s)<<endl;
    cout<<"\n Area of rectangle: "<<area(l,b)<<endl;
    cout<<"\n Area of circle: "<<area(r)<<endl;
    cout<<"\n Area of triangle: "<<area(bs,ht)<<endl;
}

int area(int s){
    return (s*s);
}

int area(int l, int b){
    return(l*b);

}
float area(float r){
    return(3.14*r*r);
}
float area(float bs, float ht){
    return(0.5*bs*ht);
}





