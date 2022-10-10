#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++)
	{
	    int val;
	    cin>>val;
	    v.push_back(val);
	}
	stack<int> st;
	vector<int> ans;
	for(int i=0;i<n;i++)
	{
	    if(st.size()==0)
	    {
	        ans.push_back(-1);
	    }
	    else if(st.size()>0 && st.top()>v[i])
	    {
	        ans.push_back(st.top());
	    }
	    else if(st.size()>0 && st.top()<=v[i])
	    {
	        while(st.size()>0 && st.top()<=v[i])
	        {
	            st.pop();
	        }
	        if(st.size()==0)
	        {
	            ans.push_back(-1);
	        }
	        else{
	            ans.push_back(st.top());
	        }
	    }
	    st.push(v[i]);
	}
	for(int ele : ans)
	{
	    cout<<ele<<" ";
	}
	return 0;
}
