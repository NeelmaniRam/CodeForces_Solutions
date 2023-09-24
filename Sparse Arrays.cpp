/*
problem name:Sparse Arrays ;
problem link:https://www.hackerrank.com/challenges/sparse-arrays/problem ;
Neelmani Ram
*/
//#include <bits/stdc++.h>
#include<iostream>
using namespace std;
 

int main() {
  int n;
  cin >> n;
 
  map<string, int> ma;
    map<string, int> :: iterator it;
    


  for (int i = 0; i < n; i++) {
      string x;
      cin>>x;
      ++ma[x];

  }
  int q;
  cin >> q;
  for (int i = 0; i < q; i++) {
      string x;
      cin>>x;
      cout<<ma[x]<<"\n";

  }

    return 0;
}
