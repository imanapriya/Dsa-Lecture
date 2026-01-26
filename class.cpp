#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"sum "<<a+b<<endl;
    cout<<"Subtraction "<<a-b<<endl;
    cout<<"Multipication "<<a*b<<endl;
    cout<<"Division "<<a/b<<endl;
    cout<<"Left Shift "<<(a<<2)<<endl;
    cout<<"Right Shift "<<(a>>4)<<endl;
    if(a>b){
        cout<<a;
    }
    else{
        cout<<b;
    }
    
    


return 0;
}