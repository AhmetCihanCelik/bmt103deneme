#include<stdio.h>
int main()
{
int ales,yab_dil,agno;
float ort;
printf("ALES puaninizi giriniz:\n");
scanf("%d",&ales);
printf("YABANCI DIL puaninizi giriniz:\n");
scanf("%d",&yab_dil);
printf("AGNO puaninizi giriniz:\n");
scanf("%d",&agno);
ort=(ales*0.5)+(yab_dil*0.25)+(agno*0.25);
if(ort>=60)
printf("ortalamaniz : %2f\nsiralamaya girmeye hak kazandiniz.",ort);
else
printf("ortalamaniz : %2f\nsiralamaya girmeye hak kazanamadiniz.",ort);
return 0;
}