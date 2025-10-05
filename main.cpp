#include<bits/stdc++.h>

using namespace std;
int main()
{
   

   vector<int> v;
   v.push_back(2);
   v.push_back(3);
   v.push_back(5);
   v.push_back(6);

   //cout<<v[1]<<endl;

   //cout<<v.size()<<endl;
 /*  for (int i=0;i<v.size();i++)
   {
   	cout<<v[i]<<" ";
   	cout<<endl;
   }*/


  int n,a;
  cout<<"Please Enter a number"<<endl;
  cin>>n;
   for(int  i=0;i<n;i++)
   {
   	 cin>>a;

   	 v.push_back(a);
   }
   cout<<v[0];
}

