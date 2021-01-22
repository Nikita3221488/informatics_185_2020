#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main() {
    int N;
    int a[N];
    cout<<"Enter the value N "<<endl;
    cin>>N;
    for(int i=0;i<N;i++){
        a[i]=rand() % 100;
        cout<<a[i]<<"  ";

    }
    cout<<endl<<endl;
    for(int i=0;i<N;i++){
        if(a[i]%2==0){
            a[i]=0;
            }
            cout<<a[i]<<"  ";
    }
}


  