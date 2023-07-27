#include <iostream>
#include<math.h>
#include<iomanip>
#include<string.h>
#include <stdio.h>
#include <string.h>
#include<bits/stdc++.h>
using namespace std;



int main()
{


int a1,a2,a3,b1,b2,b3,n;
cin>>a1>>a2>>a3>>b1>>b2>>b3>>n;
int cups=a1+a2+a3,medals=b1+b2+b3;
while(medals>0){
    medals-=10;
    n--;
}
while(cups>0){
    cups-=5;
    n--;
}
if(n>=0)
    cout<<"YES";
else
    cout<<"NO";

    return 0;
}





