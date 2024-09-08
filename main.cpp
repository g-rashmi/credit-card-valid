#include<bits/stdc++.h>
using namespace std; 
void solve(){cout << "Enter the elements of the array: ";
  int arr[16];
  int sum=0;
  for(int i=0;i<16;i++) 
  cin>>arr[i];
  for(int i=0;i<16;i++){
if(i%2!=0){sum+=arr[i]; continue;}
    arr[i]+=arr[i];
    
    if(arr[i]>9){
      int x=0;
      while(arr[i]!=0){
        x+=(arr[i]%10);
        arr[i]/=10;
      }
      arr[i]=x;
    
    }
      cout<<arr[i]<<" ";
    sum+=arr[i];
  }
if(sum%10==0) {
  cout<<"IT IS VALID CARD NUMBER "<<sum;
}
else{
  cout<<"IT IS NOT VALID CARD NUMBER "<<sum;
}

}
int main(){
  solve();
}