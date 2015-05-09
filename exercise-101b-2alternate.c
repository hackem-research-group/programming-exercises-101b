#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,decenasmil,centenasmil,factmilcent,factmildec,miles, centenas, decenas,unidades,factormil,factorcientos,factordecenas;
    printf("LEE NUMERO");
    printf("\nInserta numero: ");
    scanf("%d",&n);
    centenasmil=n/100000;
    factmilcent=n%100000;
	decenasmil=n/10000;
    factmildec=n%10000;
	miles=n/1000;
     factormil =n%1000;
    centenas =factormil/100;
     factorcientos =factormil%100;
    decenas =factorcientos/10;
    factordecenas =factorcientos%10;
     unidades =factordecenas;
     switch(centenasmil){
case 1:
printf("cienmil ");
break;
case 2:
    printf("doscientosmil ");
break;
case 3:
    printf("trescientosmil ");
break;
case 4:
    printf("cuatrocientosmil ");
break;
case 5:
    printf("quinientos mil ");
break;
case 6:
    printf("seiscientos mil ");
break;
case 7:
    printf("setecientosmil ");
break;
case 8:
    printf("ochocientosmil ");
break;
case 9:
    printf("novecientosmil ");
break;
}
 
  switch(decenasmil){
case 1:
printf("diezmil ");
break;
case 2:
    printf("veintemil ");
break;
case 3:
    printf("treintamil ");
break;
case 4:
    printf("cuarentamil ");
break;
case 5:
    printf("cincuentamil ");
break;
case 6:
    printf("sesentamil ");
break;
case 7:
    printf("setentamil ");
break;
case 8:
    printf("ochentamil ");
break;
case 9:
    printf("noventamil ");
break;
}
	
	switch(miles){
case 1:
printf("mil ");
break;
case 2:
    printf("dosmil ");
break;
case 3:
    printf("tresmil ");
break;
case 4:
    printf("cuatromil ");
break;
case 5:
    printf("cincomil ");
break;
case 6:
    printf("seismil ");
break;
case 7:
    printf("sietemil ");
break;
case 8:
    printf("ochomil ");
break;
case 9:
    printf("nuevemil ");
break;
}
switch(centenas){
case 1:
printf("cien ");
break;
case 2:
    printf("doscientos ");
break;
case 3:
    printf("trescientos ");
break;
case 4:
    printf("cuatrocientos ");
break;
case 5:
    printf("quinientos ");
break;
case 6:
    printf("seiscientos ");
break;
case 7:
    printf("sietecientos ");
break;
case 8:
    printf("ochocientos ");
break;
case 9:
    printf("nuevecientos ");
break;
}
 switch(decenas){
 case 1:
printf("diez ");
break;
case 2:
    printf("veinte ");
break;
case 3:
    printf("treinta ");
break;
case 4:
    printf("cuarenta ");
break;
case 5:
    printf("cincuenta ");
break;
case 6:
    printf("sesenta ");
break;
case 7:
    printf("setenta ");
break;
case 8:
    printf("ochenta ");
break;
case 9:
    printf("noventa ");
break;


 }
switch (unidades){
case 0:
printf(" ");
break;
case 1:
printf("uno ");
break;
case 2:
    printf("dos ");
break;
case 3:
    printf("tres ");
break;
case 4:
    printf("cuatro ");
break;
case 5:
    printf("cinco ");
break;
case 6:
    printf("seis ");
break;
case 7:
    printf("siete ");
break;
case 8:
    printf("ocho ");
break;
case 9:
    printf("nueve ");
break;

}
    return 0;
}
