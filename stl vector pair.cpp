#include<bits/stdc++.h>
using namespace std;
void vpout(vector<pair<int,int> >a){
for(int j=0;j<a.size();j++){
    cout<<a[j].first<<" "<<a[j].second<<endl;
}
}
int main(){
    //intialization and output
vector<pair<int,int> >v;
v={{2,3},{3,4},{4,5},{5,6}};
cout<<v[0].first<<" "<<v[0].second<<endl;
cout<<v[1].first<<" "<<v[1].second<<endl;
cout<<v[2].first<<" "<<v[2].second<<endl;
cout<<v[3].first<<" "<<v[3].second<<endl;
//Multiple number input and output
int t;
vector<pair<int,int> >varry;
cin>>t;
for(int i=0;i<t;i++){
    int x,y;
    cin>>x>>y;
    //varry.push_back({x,y});
    varry.push_back(make_pair(x,y));
}
cout<<endl;
for(int i=0;i<varry.size();i++){
    cout<<varry[i].first<<" "<<varry[i].second<<endl;
}
cout<<endl;
vpout(varry);

return 0;}
