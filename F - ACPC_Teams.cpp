//Moatz Ahmed
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iomanip>
#include <iostream>
#include<bitset>
#include <string>
#include <string.h>
#include<algorithm>
#include <cstdio>
#include<cmath>
#include<numeric>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll a,b,c;
    cin>>a>>b>>c;
    b>c?cout<<(ll)pow(a,b-c):cout<<(ll)pow(a,c-b);

    return 0;
}
