#include <stdio.h>
int n = 1, a = 1, b = 1, fa = 1, fb = 1, fn = 3628800;

int fat(int v)
{
    if(v > 0)return v*(fat(v-1));
    return 1;
}

int main() 
{ 
    int result;
    scanf("%d %d %d", &n, &a, &b);
    
    if(a == 1 || b ==1)
    {
        if (a == 1)
        {
            if(b == n) printf("YES\n");
            else printf("NO\n");
        }   
        else
        {
            if(a == n) printf("YES\n");
            else printf("NO\n");
        } 
    }
    else if(n != 10) printf("NO\n");
    else
    {
        if(a < 11 && b < 11) {
            fa = fat(a); fb = fat(b);
            result = fa * fb;
            if(result == fn) printf("YES\n");
            else printf("NO\n");
        }
        else printf("NO\n");
    }
    
	return 0; 
} 
