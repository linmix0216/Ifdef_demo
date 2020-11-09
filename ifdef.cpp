#include<iostream>
#include<string>
#include "config.h"

using namespace std;

#ifdef USE_MI
 #include "add_mi.h"
#endif

int main()
{
    int input_a;
    cout<<"Please input you ID(number only): ";
    cin>>input_a;
    cout<<"You pure input is: "<<input_a<<endl;

    #ifdef USE_MI
        int input_add1;
        input_add1=do_mi(input_a);
        cout<<"The add one result is: "<<input_add1<<endl;
    #endif
    return 0;
}