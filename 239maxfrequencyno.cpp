#include<iostream>
#include<map>
#include<vector>
#include<climits>
#include<unordered_map>
using namespace std;

int maxfreq(vector<int> &arr,int n){
    unordered_map<int,int> count;
    int maxfreq=0;
    int maxans=0;
    for(int i=0;i<arr.size();i++){
        count[arr[i]]++;
        maxfreq=max(maxfreq,count[arr[i]]);
    }

    for(int i=0;i<arr.size();i++){
        if(maxfreq==count[arr[i]]){
            maxans=arr[i];
            break;
        }
    }
    return maxans;
}

int main(){
    vector<int> arr={1,2,2,3,1,1};
    int n=arr.size();
    cout<<maxfreq(arr,n);
    return 0;
}