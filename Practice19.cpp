#include<iostream>
using namespace std;
//18/19 question 4ii
int main(){
    int units;
    double ec;
    cout<<"Enter The Number Of Units Used"<<endl;
    cin>> units;
    if(units >=1 && units <=99){
        ec = 2*units;
    }else if (units >=100 && units <=200){
        ec = units * 3.50;
    }else if(units > 200){
        ec= units*4.50;
    }
    cout<<"Electric Charge Is: "<<ec<<endl;
}