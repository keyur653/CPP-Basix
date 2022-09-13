#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a,b,c,d,count=0;
    cout<<"Enter the 4 no.s:"
    cin>>a>>b>>c>>d;
    if(b>a){
        count++;
    }
        if(c>a){
        count++;
    }
        if(d>a){
        count++;
    }
    cout<<count;
    return 0;
}