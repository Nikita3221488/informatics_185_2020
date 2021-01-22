#include <iostream>
#include <cstring>
#include <ctime>
using namespace std;
float srznach(float arr[],int N){
      float l;
      int sum=0;
       for(int i=0;i<N;i++)
       sum+=arr[i];
       l=float(sum)/N;
       return l;
    }
    int main(){
          int N;
          srand(time(NULL));
          cout<<"Enter the value N "<<endl;
          cin>>N;
          float arr[N];
          for (int i=0;i<N;i++){
             arr[i]=rand()% 10;
             cout<<arr[i]<<"\t";
          }
        cout<<srznach(arr, N)<<"\t";
    
     }