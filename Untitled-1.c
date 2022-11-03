/* uygulama 1.
girilen 4 basamaklı bir sayının (ABCD) ilk iki basamağı
 ile son iki basamağının çarpımı rakamlarının yer değiştirmiş hali ile 
 çarpımına eşit olan sayılara tersyüz sayı dendiğini varsayınız.
 klavyeden girilen bir sayının tersyüz olma durumun ekrana yazan programı kodlayınız
 ABxCD=BAxDC
 */

#include<stdio.h>
int main() 
{
    int sayi,bir,iki,uc,dort;
    //integer degerinde(4byte)5 adet değişken atadık:
    printf("Lutfen dort basamakli bir sayi giriniz:");
    //ekrana Lütfen dört basamaklı bir sayı giriniz yazdırır.
    scanf("%d",&sayi);
    //kullanıcıdan bir sayı ister.
    bir=sayi%10;
    //atanılan sayıyı 10 a böler ve kalanı atar.(10 a göre modunu alır)
    iki=(sayi%100-sayi%10)/10;
    //atanılan sayıyı 100 e böler,kalanı alır, kalandanda ona göre modunu çıkarıp 10 a böler(10 lar basamağını yazar)
    uc=(sayi%1000-sayi%100)/100;
    //atanılan sayıyı 1000 e böler, kalanı alır, kalandanda yüze göre modunu ve ona göre modunu çıkarıp yüze böler
    dort=(sayi%10000-sayi%1000)/1000;
    //atanılan sayıyı 10000 e böler ve kalanı alır ayrıca ondan bine göre yüze göre ve ona göre modunu çıkarıp bine böler
    printf("binler basamagi %d\nyuzler basamagi %d\nonlar basamagi %d\nbirler basamagi %d\n",bir,iki,uc,dort);
    //denklemleri yazdırır.
    if((dort*10+uc)*(iki*10+bir)==(uc*10+dort)*(bir*10+iki))
    //tek ""="" atama , ""=="" ise koşul eğer eşit ise anlamında;
    printf("sayiniz ters yuz sayidir");
    //tek bir deyim olduğu için if yapısında kırlangıç parantez kullanmak zorunlu değil,
    else
    printf("sayiniz ters yuz sayi degildir");
    //koşul sağlanmaz ise sayiniz ters yüz sayi değildir yazdırır.
    return 0;

}