#include <bits/stdc++.h>
using namespace std;

//n�O�X�Ӽƭn�զX�Acom�O�C�ӼƦ��X�إi����զX�ơ�com^n

int n, com;
vector<int> ans;

void dfs(int index) {
    if(index >= n) {
        for(auto &v: ans) cout << v << " ";
        cout << "\n";
    } else {
        for(int i = 0; i < com; i++) {
            ans.push_back(i);
            dfs(index + 1);
        }        
    }
    ans.pop_back();
}

int main() {
    cin >> n >> com;
    dfs(0);
}
