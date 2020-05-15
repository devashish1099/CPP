#include <iostream>

using namespace std;


class A{
    public : 
        int b;
        const int& a = b;

        A(int x){
            b = x;
        }

        int out(int x){
            b = x;
        }
};

int main(){
    A anu(6);
    cout<< anu.a<<endl;
    anu.out(5);
    cout<<anu.a<<endl;
    return 0;
}