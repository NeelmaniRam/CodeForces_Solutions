/*

problem link:https://www.hackerrank.com/challenges/string-construction/problem
problem name:String Construction
Neelmani Ram

*/


//#include <bits/stdc++.h>
#include<iostream>
using namespace std;

 

int main()
{
    int n;
    cin>>n;
    while(n--){
    int cost=0;
    string s;
    string p="";
    cin>>s;
    int len=s.length();
     
     for(int i=0;i<len;i++)
     {
         if(p.find(s[i])==-1)
         {
             p+=s[i];
             ++cost;
         }
         else
         {
             p+=s[i];
         }

     }

     cout<<cost<<endl;

    }
   
    return 0;
}
