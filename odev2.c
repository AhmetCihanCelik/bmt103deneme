#include<stdio.h>
int main()
{
    int yas,kilo;
    float boy,vki;
    printf("lutfen yasinizi giriniz:\n");
    scanf("%d",&yas);
    printf("lutfen kilonuzu giriniz:\n");
    scanf("%d",&kilo);
    printf("lutfen boyunuzu giriniz:\n");
    scanf("%f",&boy);
    vki=kilo/(boy*boy);
    printf("%f\n",vki);
        if(yas<=17&&yas>=13&&vki<=24.99&&vki>=18.50)
    printf("vucut kitle endeksiniz %f\n yasiniz %d\n girmeye hak kazandiniz",vki,yas);
    else
    printf("vucut kitle endeksiniz %f\n yasiniz %d\n girmeye hak kazanamadiniz",vki,yas);
    return 0;
 

}