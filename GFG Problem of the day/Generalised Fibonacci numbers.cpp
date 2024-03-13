class Solution:
    def multiply(self, A, B, m):
        size = len(A)
        result = [[0] * size for _ in range(size)]
        for i in range(size):
            for j in range(size):
                for k in range(size):
                    result[i][j] = (result[i][j] + (A[i][k] % m * B[k][j] % m) % m) % m
        return result

    def power(self, mat, R, m):
        if R == 1:
            return mat
        ans = self.power(mat, R // 2, m)
        ans = self.multiply(ans, ans, m)
        if R % 2 == 1:
            ans = self.multiply(ans, mat, m)
        return ans

    def genFibNum(self, a, b, c, n, m):
        if n <= 2:
            return 1 % m
        mat = [[a, b, c], [1, 0, 0], [0, 0, 1]]
        ans = self.power(mat, n - 2, m)
        return (ans[0][0] + ans[0][1] + ans[0][2]) % m