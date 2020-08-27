#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int all_functions() {
  //----------memset-----------
  char cdizi[] = "Bilgisayar";
  printf("cdizi bellek: %s\n", cdizi); //��kt� = bilgisayar
  memset(cdizi, 'h', 5); //(kopyalanan yer, yerine ge�ecek de�er, ba�tan 5 karakteri h yapar)
  printf("cdizi bellek: %s\n\n", cdizi); //��kt� = hhhhhsayar
  //---------------------------
  
  //-----memcpy & memccpy------
  const char *cp = "Bilgisayar&Programlama";
    char dest[40];

    memset(dest, '\0', 40); //dest'in i�ini temizliyor
    memcpy(dest, cp, 40); //(kopyalanaca�� yer, kopyalanan de�er, kopyalanan karater say�s�)
    printf("%s\n", dest); //��kt� = Bilgisayar&Programlama

    memset(dest, '\0', 40);
    memccpy(dest, cp, '&', 40); //(kopyalanaca�� yer, kopyalancak de�erin ba��n� g�steren de�er, kopyalaman�n bitece�i yer, kopyalanacak karakter say�s�)
    printf("%s\n\n", dest); //��kt� = Bilgisayar&
  //---------------------------

  //-----------memchr----------
   const char *tp = "Bilgisayar";
    const char td = 'g';
    char *degisken = memchr(tp, td, strlen(tp)); //(arama yap�lacak b�lge, neyin adresinin aranaca��, aranacak b�lgenin uzunlu�u)
    printf("%c karakterinin bellek adresi: %p\n\n", td, degisken); //��kt� = g karakterinin bellek adresi: 0000000000405060
  //---------------------------
  
  //-----------strlen----------
   const char *kp = "Bilgisayar";
    int ret;
    ret = strlen(kp); //(uzunlu�u bulunacak b�lgenin ad�)
    printf("%s karakter dizisinin uzunlugu: %d\n\n", kp, ret); //��kt� = Bilgisayar karakter dizisinin uzunlugu: 10
  //---------------------------
  
  //-----------memcmp----------
   const char *wp1 = "Bilgisayar";
    const char *wp2 = "Bilgileri";
    int wet;
    wet = memcmp(wp1, wp2, 5); //(kar��la�t�rma yap�lacak ilk b�lge, kar��la�t�rma yap�lacak ikinci b�lge, kar��la�t�rma yap�lacak byte say�s�)
    if(wet<0) printf("wp1 bellek icerigi wp2 bellek iceriginden kucuktur!\n\n");
    else if(wet>0) printf("wp2 bellek icerigi wp1 bellek iceriginden kucuktur!\n\n");
    else printf("wp1 bellek icerigi wp2 bellek icerigine esittir!\n\n"); //��kt� = 
  //---------------------------
  
  //-----------memmove----------
   char cdizi1[] = "Bilgisayar";
    const char cdizi2[] = "Programlar";
    printf("cdizi1 bellek icerigi: %s, cdizi2 bellek icerigi: %s\n", cdizi1, cdizi2); //��kt� = cdizi1 bellek icerigi: Bilgisayar, cdizi2 bellek icerigi: Programlar
    memmove(cdizi1, cdizi2, 10); //(2. de�erin kopyalanaca�� yer, 1. b�lgeye kopyalanacak de�er, kopyalanacak maksimum karakter say�s�)
    printf("cdizi1 bellek icerigi: %s, cdizi2 bellek icerigi: %s\n\n", cdizi1, cdizi2); //��kt� = cdizi1 bellek icerigi: Programlar, cdizi2 bellek icerigi: Programlar
  //---------------------------
  
  //-----------strcat----------
   char cdizi4[] = "Bilgisayar";
    const char cdizi5[] = " Programlama";
    strcat(cdizi4, cdizi5); //(ilk de�er, ikinci de�er)
    printf("cdizi1 bellek icerigi: %s\n\n", cdizi4); //��kt� = cdizi1 bellek icerigi: Bilgisayar Programlama
  //---------------------------
  
  //-----------strchr----------
   const char cdizi6[] = "Bilgisayar";
    char *set;
    set = strchr(cdizi6, 's'); //(araman�n yap�laca�� yer, arama yap�lacak de�er)
    printf("Bulunan karakterden itibaren dizi icerigi: %s\n\n", set); //��kt� = Bulunan karakterden itibaren dizi icerigi: sayar
  //---------------------------
  
  //-----------strcmp----------
  //kar��la�t�r�lan de�erler ayn� ise 0 d�ner.
    const char *qp1 = "Bilgisayar";
    const char *qp2 = "Bilgileri";
    int qet;
    qet = strcmp(qp1, qp2); //(kar��la�t�rma yap�lacak ilk de�er, kar��la�t�rma yap�lacak ikinci de�er)
    if(qet<0) printf("qp1 karakter dizisi qp2 karakter dizisinden kucuktur!\n\n");
    else if(qet>0) printf("qp2 karakter dizisi qp1 karakter dizisinden kucuktur!\n\n"); //��kt� =
    else printf("qp1 karakter dizisi qp2 karakter dizisine esittir!\n\n");
  //---------------------------
  
  //-----------strcpy----------
  	char cdizi11[] = "Bilgisayar";
    const char cdizi12[] = "Programlama";
    strcpy(cdizi11, cdizi12); //(kopyalaman�n yap�laca�� yer, kopyalanacak de�er)
    printf("cdizi1 bellek icerigi: %s\n\n", cdizi11); //��kt� = cdizi1 bellek icerigi: Programlama
  //---------------------------
  
  //-----------strcspn----------
  	const char cdizi13[] = "Bilgisayar";
    const char cdizi24[] = "er";
    int tet;
    tet = strcspn(cdizi13, cdizi24); //(karakter aranancak yer, her karakter cdizi13 i�erisinde aran�r ve ilk e�it gelen de�er d��ar� ��kar)
    printf("Bulunan karakterin indeks degeri: %d\n\n", tet); //��kt� = Bulunan karakterin indeks degeri: 9
  //---------------------------
  
  //-----------strncat----------
  	char cdizi221[] = "Bilgisayar";
    const char cdizi222[] = " Programlama";
    strncat(cdizi221, cdizi222, 4); //(ilk de�er, ikinci de�er, ikinci de�erden eklenecek karakter say�s�)
    printf("cdizi1 bellek icerigi: %s\n\n", cdizi221); //��kt� = cdizi1 bellek icerigi: Bilgisayar Pro
  //---------------------------
  
  //-----------strncpy----------
  	char cdizi133[] = "Bilgisayar";
    const char cdizi233[] = "Programlama";
    strncpy(cdizi133, cdizi233, 7); //(ilk de�er, ikinci de�er, ilk de�erin al�nacak karakter say�s�)
    printf("cdizi1 bellek icerigi: %s\n\n", cdizi133); //��kt� = Programyar
    //---------------------------
    
    //-----------strrchr----------
  	const char cdizi44[] = "Bilgisayar";
    char yd = 'i';
    char *yet;
    yet = strrchr(cdizi44, yd); //(arama yap�lacak yer, aranacak de�er)
    printf("Bulunan son %c karakterinden itibaren dizi icerigi: %s\n\n", yd, yet); //��kt� = Bulunan son i karakterinden itibaren dizi icerigi: isayar
    //---------------------------
    
    //-----------strspn----------
  	const char *jp1 = "Bilgisayar";
    const char *jp2 = "Bilg";
    int uet;
    uet = strspn(jp1, jp2);
    printf("cp2 dizisi icindeki karakterlerin cp1 dizisi icindeki sayisi: %d\n\n", uet); //��kt� = cp2 dizisi icindeki karakterlerin cp1 dizisi icindeki sayisi: 5
    //---------------------------
    
    //-----------strxfrm----------
    const char cdizi155[20] = "Bilgisayar";
    char cdizi255[20];
    int ket;
    ket = strxfrm (cdizi255, cdizi155, 5); //(�evrilen de�erin koyulaca�� yer, �evrilecek de�er, �evrilecek de�er say�s�)
    cdizi255[5]='\0'; //dizinin 5. de�erini bo�alt demek
    printf("Ilk karakter dizisi: %s, cevrilen karakter sayisi: %d\n", cdizi155, ket); //��kt� = Ilk karakter dizisi: Bilgisayar, cevrilen karakter sayisi: 10
    printf("Elde edilen yeni karakter dizisi: %s", cdizi255); //��kt� = Elde edilen yeni karakter dizisi: Bilgi
    //---------------------------
}
