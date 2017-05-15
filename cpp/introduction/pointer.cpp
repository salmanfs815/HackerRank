#include <stdio.h>

void update(int *a,int *b)
// modify a to equal a + b
// modify b to equal |a - b|
{
	int x = *a, y = *b;
	*a = x + y;
	*b = x>y?x-y:y-x;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}