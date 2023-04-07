#include <stdio.h>
#include <stdlib.h>

int hesaplama(int num1, int num2) {
    int sonuc = 0;
    while (num1 > 0 && num2 > 0) {
        if (num1 >= num2) {
            num1 -= num2;
        } else {
            num2 -= num1;
        }
        sonuc++;
    }//yapilmasi istenen dongu
    return sonuc;
}
//cagrialacak islem fonksiyonu

int main(int argc, char *argv[]) {
	
	int num1, num2;
    printf("Iki tane negatif olmayan sayi girin: ");
    scanf("%d %d", &num1, &num2);//kullanicdan girilmesi istenen sayilar
    int hesap_sayisi = hesaplama(num1, num2);//cagrilan fonksiyon
    printf("num1 veya num2'yi '0 yapmak icin gereken islem sayisi: %d", hesap_sayisi);//sonuc
	
	return 0;
}
