#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double sum=0;

    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<n;i++)
    {
        sum+=A[i];
    }
    double volume=sum/n;
    cout<<setprecision(15);
    cout<<volume<<endl;
}