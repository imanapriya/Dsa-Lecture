#include <iostream>
using namespace std;
int main(){
    string *ptr = new string("Hello");
    string **ptr2=&ptr;
    string ***ptr3=&ptr2;
    cout<<ptr2<<endl;
    cout<<***ptr3<<endl;
    return 0;


}