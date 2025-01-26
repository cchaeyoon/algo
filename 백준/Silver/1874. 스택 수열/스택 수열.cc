#include <iostream>
#include <stack>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	vector<int>v(n);		//입력받는 수열
	stack <int> s;
	int k = 0;				//수열의 index값
	vector<char>out;		//push, pop

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	for (int i = 1; i <= n; i++) {		//1부터 n까지를 stack에 넣음 
		s.push(i);
		out.push_back('+');

		while (k < n && !s.empty() && s.top() == v[k]) {	//이때 stack의 top이 수열의 원소와 같다면 pop하고
			s.pop();
			out.push_back('-');
			k++;		//다음 수열의 원소 체크 (반복)
		}
	}
	if (!s.empty()) {		//stack이 안비어있으면 불가능
		cout << "NO";
	}
	else {		//push, pop 따로 출력
		for (int i = 0; i < out.size(); i++) {
			cout << out[i] << '\n';
		}
	}
	return 0;
}