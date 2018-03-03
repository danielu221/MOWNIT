#include <iostream>
#include <stdio.h>

using namespace std;

float yF(float x){
    return 4*x-3*x*x;
}
double yD(double x){
    return 4*x-3*x*x;
}

int main() 
{
    int wyraz;
    cin>>wyraz;
    float prevF;
    prevF=0.01;
    float currentF;
    double prevD;
    prevD=0.01;
    double currentD;
    for(int i =0;i<wyraz;i++)
    {
        currentF=yF(prevF);
        prevF=currentF;
        currentD=yD(prevD);
        prevD=currentD;
        cout<<"wyraz "<<i+1<<"="<<currentF<<"(float)";
        cout<<"\twyraz "<<i+1<<"="<<currentD<<"(double)";
        cout<<"\troznica"<<currentF-currentD<<endl;
    }
    
    

}