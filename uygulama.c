#include<stdio.h>
int main(){
    int k,n;
    float toplam;
    k=1;
    toplam=0;
    printf("bir sayi giriniz\n");
    scanf("%d",&n);
    while(k<=n)
    {
        toplam=toplam+(k+k+1.23)/(k-0.325);
     
        k++;
    
    }
       printf("toplam %f dir",toplam);
    
}