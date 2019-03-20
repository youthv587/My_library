#include <iostream>
#include<vector>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	vector<int>que(N);                                  //vector示例
	for (int i = 0; i < N;i++)cin >> que[i];            //输入数组


	for (int i = 0; i < N; i++) {
		if(i!=N-1)cout << que[((i+N-M%N) % N)] <<" ";     //巧用%,循环右/左移（注意%前不能为负）
		else cout << que[((i+N-M%N) % N)];                //末尾无空格
	}

	return 0;
}
