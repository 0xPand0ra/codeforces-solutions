#include <iostream>
#include <string>
#include <queue>
#include <stack>
using namespace std;
int main(){

	string s;
	cin >> s;
	s+='+';
	priority_queue<int> q;
	stack<int> a;
	string s0="";
	for(int i=0;i<s.length();++i){
		if(s[i] == '+'){
			q.push(stoi(s0));
			s0 = "";
		}
		else s0 += s[i];
	}
	int b = q.size();
	for(int i=0;i<b;++i){
		a.push(q.top());
		q.pop();
	}
	for(int i=0;i<b;++i){
		if(i!=b-1) cout << a.top()<<"+";
		else cout << a.top();
		a.pop();
	}
	return 0;
}
