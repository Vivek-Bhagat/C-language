#include <stdio.h>
int main()
{
    int p = 20, q = 20, r = 30, outcome;
    outcome = (p == q) && (r > q);
    printf(" The result of ( p == q ) && ( r > q ) is %d \n ", outcome);
    outcome = (p == q) && (r < q);
    printf(" The result of ( p == q ) && ( r < q ) is %d \n ", outcome);
    outcome = (p == q) || (r < q);
    printf(" The result of  ( p == q ) || ( r < q ) is %d \n ", outcome);
    outcome = (p != q) || (r < q);
    printf(" The result of  ( p != q ) || ( r < q ) is %d \n ", outcome);
    outcome = !(p != q);
    printf(" The result of  ! ( p == q ) is %d \n ", outcome);
    outcome = !(p == q);
    printf(" The result of  ! ( p == q ) is %d \n ", outcome);
    return 0;
}