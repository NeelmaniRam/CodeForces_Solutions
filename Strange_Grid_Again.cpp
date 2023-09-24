
//problem link : https://www.hackerrank.com/challenges/strange-grid
// Name        : Strange_Grid_Again.cpp
// Neelmani Ram
#include <iostream>
using namespace std;


int main() {
  long long  row,coloumn;
    cin>>row>>coloumn;
    cout<<(((row-1)/2)*10)+((row-1)%2)+(2*(coloumn-1));
    return 0;
}
