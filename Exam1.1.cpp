#include <iostream>
#include <cstring>
using namespace std;
int* array( int arr[], int N, int K){
    int*new_array= new int [K];
    int l;
    for(int i=0;i<N;i++)
        if(arr[i]%2!=0){
            new_array[l]=arr[i];
            l++;
        }
        return new_array;
}
int main() {
    int N;
    int K=0;
    cout<<"Enter the value N "<<endl;
    cin>>N;
     int a[N];
    for(int i=0;i<N;i++){
        a[i]=rand() % 100;
        cout<<a[i]<<"  ";
    }

    cout<<endl;
    for(int i=0;i<N;i++){
        if(a[i]%2!=0)
        K++;
    }
 int* a1 = array(a, N, K);
 for(int i=0;i<K;i++)
 cout<<a1[i]<<"\t";
 delete [] a1;
 return 0;
    }