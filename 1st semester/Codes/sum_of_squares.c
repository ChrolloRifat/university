#include <stdio.h>
int square(int a);
int sum(int x,int y,int z);
int main()
{
    int n1,n2,n3;
    int s1,s2,s3,add;
    scanf("%d%d%d",&n1,&n2,&n3);
    s1 = square(n1);
    s2 = square(n2);
    s3 = square(n3);
    add = sum(s1,s2,s3);
    printf("%d", add);
    return 0;

}
int square(int a){

    return a * a;

}
int sum(int x,int y,int z){

return x + y + z;
}

