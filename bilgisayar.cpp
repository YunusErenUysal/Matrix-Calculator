#include <stdio.h>
#include <stdlib.h>
main() {
int dizi1[5],dizi2[5],dizi[5];
int n,k,*ptr,*ptr2,*ptr3,secim,islem;
ptr3=&dizi[0];
ptr2=&dizi2[0];
ptr=&dizi1[0];
printf("\n\n\n--------Matematik Programi--------\n\n\n");
for (n=0;n<5;n++)
{
printf("1.dizinin %d.elamanini giriniz:",n+1);
scanf("%d",&*(ptr+n));
}
printf("\n\n\n");
for (n=0;n<5;n++)
{
printf("2.dizinin %d.elamanini giriniz:",n+1);
scanf("%d",&*(ptr2+n));
}
do
{
printf("\n----------------------------------\n");
printf("Yapmak istediginiz islemi seciniz:");
printf("\n----------------------------------\n");
printf("1-)iki dizinin elamanlarinin toplayarak yeni bir diziolusturun:\n");
printf("2-)iki dizinin elamanlarini carparak yeni bir diziolusturun:\n");
printf("3-)iki dizinin elamanlarinin karesini alma:\n");
printf("4-)iki dizinin elamanlarini tersten yazdirma:\n");
printf("5-)iki dizinin elemanlarindaki cift sayilari bulma:\n");
printf("6-)iki dizinin elamanlarindaki tek sayilari bulma:\n");
scanf("%d",&secim);
switch(secim)
{
 case 1:printf("iki dizinin elamanlarinin sirasiyla toplami: \n");
 for(n=0;n<5;n++)
 *(ptr3+n)=*(ptr2+n)+*(ptr+n);
break;
 case 2:printf("iki dizinin elamanlarinin sirasiyla carpimi: \n");
for(n=0;n<5;n++)
*(ptr3+n)=*(ptr2+n)*(*(ptr+n));
for(n=0;n<5;n++)
break;
case 3: printf("Dizi elamanlarinin karesi:\n");
for(n=0;n<5;n++)
{
*(ptr+n)=*(ptr+n)*(*(ptr+n));
*(ptr2+n)=*(ptr2+n)*(*(ptr2+n));
}
printf("-------1.Dizi-------\n");
for(n=0;n<5;n++)
printf("1.dizinin %d. elamani:%d\n",n+1,*(ptr+n));
printf("-------2.Dizi-------\n");
for(n=0;n<5;n++)
printf("2.dizinin %d. elamani:%d\n",n+1,*(ptr2+n));
break;
case 4: printf("Dizinin elamanlarini tersten yazdirma:\n");
for(k=4;k>=0;k--)
 printf("1.dizinin %d. elamani:%d\n",k+1,*(ptr+k));
printf("\n\n\n");
for(k=4;k>=0;k--)
printf("2.dizinin %d. elamani:%d\n",k+1,*(ptr2+k));
break;
case 5: printf("Dizilerdeki cift elamanlari bulma:\n\n");
printf("------1.Dizi------\n");
for(k=0;k<5;k++)
 if(*(ptr+k)%2==0) printf("%d\n",*(ptr+k));
printf("------2.Dizi------\n");
for(k=0;k<5;k++)
 if(*(ptr2+k)%2==0) printf("%d\n",*(ptr2+k));
break;
case 6: printf("Dizilerdeki tek elamanlari bulma:\n\n");
printf("------1.Dizi------\n");
for(k=0;k<5;k++)
 if(*(ptr+k)%2!=0) printf("%d\n",*(ptr+k));
printf("------2.Dizi------\n");
for(k=0;k<5;k++)
 if(*(ptr2+k)%2!=0) printf("%d\n",*(ptr2+k));
break;
default: printf("lutfen dogru islem kodunu giriniz: ");
}
printf ("\n\n\nisleme devam etmek icin 5, programi sonlandirmak icin0 tusuna basiniz:");
scanf ("%d",&islem);
}while (islem==5);
}

