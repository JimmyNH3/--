#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll dp[1000005];
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n, k;
    cin >> n >> k;
    ll price[n];

    for(int i = 0; i < n ;i++) cin >> price[i];

    dp[0] = price[0];
    
    for(int i = 1; i < n; i++) {
        if(i - 1 - k >= 0) {
            dp[i] = max(dp[i - 1 - k] + price[i], dp[i - 1]); // 2.�j��s�N���o�@�Ѯɦܤ֤w�u�@���
        } else {
            dp[i] = max(dp[i - 1], price[i]); //! max ����ɫe�᫬�O�n�ۦP
            // 1. i - 1 - k �p��s�N���o�@�Ѯɳ̦h�u�u�@�@��(�]���n��k��)
            // �Ӧ��ɻ��ȵ����ѳ��S(�u���@�ѡA�`���ȥu���@��) �Ϋe�@�Ѫ�����
        }
        
    }
    cout << dp[n - 1] << endl;
}
