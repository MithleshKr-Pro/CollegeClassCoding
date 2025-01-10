#include <stdio.h>
void multiplyPointerFunc(int m, int n, int x[m][n], int y[m][n]);
int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    int x[m][n], y[m][n];
    int(*a)[n] = x, (*b)[n] = y;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    multiplyPointerFunc(m, n, a, b);
    return 0;
}
void multiplyPointerFunc(int m, int n, int x[m][n], int y[m][n])
{
    int multiply = 1;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            multiply *= x[i][j] * y[i][j];
        }
    }
    printf("\nProduct = %d", multiply);
}