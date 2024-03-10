#include<bits/stdc++.h>
#include <iomanip>
using namespace std;

int main(){

    int n,l;
    cin>>n>>l;
    vector <int> arr;
    double d = 0.00;
    int temp;
    for( int i=0;i<n;i++){

        cin>>temp;
        arr.push_back(temp);
    }

    sort(arr.begin(), arr.end());


    double max_distance = 0;

    for (int i=0;i<n-1;i++){
        if ( abs(arr[i]-arr[i+1])>max_distance){
            max_distance=abs(arr[i]-arr[i+1]);
        }
    }

    max_distance =  double(max_distance/2.00);
     if (abs(l-arr[n-1])>max_distance || arr[0]>max_distance ){
        if (abs(l-arr[n-1])>arr[0]){
            d = abs(l-arr[n-1]);
        }
        else{
            d=arr[0];
        }
     }else{
        d= max_distance;
     }

    cout<<fixed<< setprecision(10)<<d<<endl;

    return 0;
}