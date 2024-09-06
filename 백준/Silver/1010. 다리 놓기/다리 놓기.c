#include <stdio.h>

long long combination(int n, int m) {
    long long result = 1;

    for (int i = 1; i <= n; i++) {
        result = result * (m - i + 1) / i;
    }

    return result;
}

int main() {
	int T;
	scanf("%d", &T); // 테스트 케이스의 수 입력

	while (T--) {
		int N, M;
		scanf("%d %d", &N, &M); // 사이트 수 입력
		printf("%lld\n", combination(N, M));
	}
	return 0;
}