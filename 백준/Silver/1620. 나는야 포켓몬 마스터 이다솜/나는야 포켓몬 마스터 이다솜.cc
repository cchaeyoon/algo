#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int n, m;
   cin >> n >> m;

   map<string, int> poke;
   string name[100001];

   for (int i = 1; i <= n; i++) {
      string pokemon;   
      cin >> pokemon;      

      poke.insert(pair<string, int>(pokemon, i));      // 이름 주어질 경우 find로 번호 알아내기
      name[i] = pokemon;      // 번호 주어질 경우 이름 알아내기
   }

   for (int i = 0; i < m; i++) {
      string input;
      cin >> input;

      if (isdigit(input[0])) {   // 번호로 입력받으면
         cout << name[stoi(input)] << '\n';
      }
      else{   // 이름으로 입력받으면
         cout << poke.find(input)->second << '\n';
      }
   }
}