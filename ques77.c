//Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True
*/

#include <stdio.h>
int main() {
    int n, m, i, j, k, flag=1;
    scanf("%d %d", &n, &m);
    int a[n][m], diag[n], d=0;
    
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
            scanf("%d", &a[i][j]);
    
    for(i=0; i<n && i<m; i++)
        diag[d++] = a[i][i];
    
    for(i=0; i<d; i++) {
        for(j=i+1; j<d; j++) {
            if(diag[i] == diag[j]) {
                flag=0;
                break;
            }
        }
        if(flag==0) break;
    }
    
    if(flag) printf("True");
    else printf("False");
    
    return 0;
}