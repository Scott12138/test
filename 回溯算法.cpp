#include<iostream>
#include<stack>
#include<queue>
#include<vector>
using namespace std;

void all(string sublist,vector<string> results,int leftnum,int rightnum){
	if(leftnum==0&&rightnum==0){
		cout<<sublist<<endl;
		results.push_back(sublist);
	}
	if(leftnum<rightnum){
		all(sublist+")",results,leftnum,rightnum-1);
	}
	if(leftnum>0){
		all(sublist+"(",results,leftnum-1,rightnum);
	}
}

int main(){
	int leftnum,rightnum;
	cin>>leftnum>>rightnum;
	vector<string> results;
	all("",results,leftnum,rightnum);
	for(int i=0;i<results.size();i++){
		cout<<results[i]<<endl;
	}
	return 0;
}
