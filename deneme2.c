#include<stdio.h>
int main()
{
    int sayi,bir,iki,uc,dort,bes;
    printf("bir sayi giriniz.");
    scanf("%d",&sayi);
    bir=sayi%10;
    iki=(sayi%100-bir)/10;
    uc=(sayi%1000-sayi%100)/100;
    dort=(sayi%10000-sayi%1000)/1000;
    bes=(sayi%100000-sayi%10000)/10000;
    printf("%d\n%d\n%d\n%d\n%d\n",bes,dort,uc,iki,bir);
    int abcde,edcba;
    abcde=bes*10000+dort*1000+uc*100+iki*10+bir;
    edcba=bes+dort*10+uc*100+iki*1000+bir*10000;
    printf("%d\n %d\n",abcde,edcba);
    if(abcde==edcba)
    printf("sayiniz palindrom sayidir");
    else
    printf("sayiniz palindrom sayi degildir.");
    return 0;

}