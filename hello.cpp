#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	long long int t;
	cin>>t;
	while(t--){
	    long long int n,count=0,l=0,r=0;
	    cin>>n;
	    vector<pair<pair<long long int,long long int>,long long int>> arr(n);
	    vector<long long int> fin_ans;
	    for(int i=0;i<n;i++)
	    {
	        long long int a;
	        cin>>a;
	        arr[i].first.first=a;
	        arr[i].second=i+1;
	    }
	    
	    //time
	    for(int i=0;i<n;i++)
	    {
	        long long int a;
	        cin>>a;
            if(a>r)
                r=a;
	        arr[i].first.second=a;
	    }
	    
	    sort(arr.begin(),arr.end());
	    
	    for(int i=0;i<n;i++)
	    {
	        cout<<arr[i].first.first<<"  "<<arr[i].first.second<<"  "<<arr[i].second<<endl;
	    }
	    //int check=0;
        /*
	    for(long long int i=0;i<arr.size();i++){
	        if(arr[i].first.first>arr[i].first.second)
	            continue;
	        if(i==0){
	            r=arr[i].first.first;
	            fin_ans.push_back(arr[i].second);
	            fin_ans.push_back(l);
	            fin_ans.push_back(r);
	            l=r;
	            count++;
	            continue;
	        }
	        if(arr[i].first.second-l>=arr[i].first.first){
	            r=arr[i].first.first+l;
	            fin_ans.push_back(arr[i].second);
	            fin_ans.push_back(l);
	            fin_ans.push_back(r);
	            l=r;
	            count++;
	        }
	    }*/

        for(long long int i=0;i<arr.size();i++){
            if(arr[i].first.first>arr[i].first.second)
                continue;
            if(l+arr[i].first.first<=r){
                fin_ans.push_back(arr[i].second);
                fin_ans.push_back(l);
                l=l+arr[i].first.first;
                fin_ans.push_back(l);
                count++;
            }
        }



	    cout<<count<<endl;
	    for(long long int i=0;i<fin_ans.size();i++)
	   {
	       cout<<fin_ans[i]<<" ";
	       if((i+1)%3==0){
	           cout<<endl;
	       }
	   }
	}
	return 0;
}
