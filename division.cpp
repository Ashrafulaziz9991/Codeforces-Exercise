// Created by tamzid on 12/25/23.

#include <iostream>
int main()
{
    int t;std::cin>>t;
    while (t--)
    {
        int x;std::cin>>x;
        std::cout<<"Division "<<(x>=1900? 1:(x>=1600? 2:(x>=1400? 3:4)))<<std::endl;
    }
    return  0;
}