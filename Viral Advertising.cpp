
//problem link:https://www.hackerrank.com/challenges/strange-advertising
// Name        : Viral.cpp
//Neelmani Ram


#include <iostream>

using namespace std;


int main() {
    int sum=0;
   int acceptedpeople=2;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        if(!i)sum+=acceptedpeople;
        else{
            acceptedpeople=(acceptedpeople*3)>>1;
            sum+=acceptedpeople;

        }
    }
    cout<<sum<<"\n";
    return 0;
}

