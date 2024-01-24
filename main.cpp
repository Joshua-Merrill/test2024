/**
 * @file size.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-01-23
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <iostream>
#include <string>
using namespace std;

int main()

{
    //Print size of variables
    cout<<"int: "<<sizeof(int)<<endl;
    cout<<"Short: "<<sizeof(short)<<endl;
    cout<<"long: "<<sizeof(long)<<endl;
    cout<<"long long: "<<sizeof(long long)<<endl;
    cout<<"Enter your name:";
    string name;
    cin>>name;
    cout<<"Your name is "<<name<<endl;
    return 0;

}