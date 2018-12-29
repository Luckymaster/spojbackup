#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	int Q;
	stack<int> m,s;
	cin >> Q;
	string oper;
	while(Q--){
		int n;
		cin >> oper;
		if("PUSH" == oper){
			cin >> n;
			m.push(n);
			//puts("PUSH OP MAIN STACK");
			if(!s.empty()){
				if(m.top() <= s.top()){
					s.push(n);
					//puts("PUSH MIN in AUX stack");
				}
			}else{
				s.push(n);
			}
			
		}
		else if("POP" == oper){
			//puts("POP OPERATION");
			
			if(!m.empty()){
				int aux = m.top();
				m.pop();
				if(s.top() == aux)
				s.pop();
			}else{
				cout<<"EMPTY"<<endl;
			}
		}else{
			if(!s.empty())cout<<s.top()<<endl;
			else cout<<"EMPTY"<<endl;
		}
	}
	return 0;
}
