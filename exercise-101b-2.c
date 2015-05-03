/* Programa para convertir numeros en palabras*/

#include <stdio.h>

// metodo para calcular las decenas de mil
int deciMil(int x) {
  int num = x/10000;
  if (num != 0) {
    return num;
  }
  else {
    return -1; // por si da cero
  }
}

// metodo para calcular las unidades de mil
int unitMil(int x) {
  int uniMil = x / 1000;
  if (uniMil != 0) {
    return uniMil;
  }
  else {
    return -1; // por si da cero
  }
}

// metodo para calcular las centena
int centenaF(int x) {
  int centena = x / 100;
  if (centena != 0) {
    return centena;
  }
  else {
    return -1; // por si da cero
  }
}

// metodo para calcular las decenas
int decenaF(int x) {
  int decena = x / 10;
  if (decena != 0) {
    return decena;
  }
  else {
    return -1; // por si da cero
  }
}


// metodo para calcular las unidades
int unidades(int x) {
  if (x != 0) {
    return x;
  }
  else {
    return -1; // por si da cero
  }
}

int main()
{
  // variables
  int decMil, uniMil, centena, decena, unidad, numero, auxNumero;

  printf("Ingresar el numero\n");
  scanf("%d",&numero);

  decMil = deciMil(numero);     // aplicamos el método deciMil

  if (decMil == -1) {
    uniMil = unitMil(numero);

    if (uniMil == -1) {
      centena = centenaF(numero);

      if (centena == -1) {
	decena = decenaF(numero);

	if (decena == -1) {
	  unidad = unidades(numero);
	} else {
	  decena = decenaF(numero);
	  auxNumero = numero % 10;
	  unidad = unidades(auxNumero);
	}
      } else {
	centena = centenaF(numero);
	auxNumero = numero % 100;
	decena = decenaF(auxNumero);
	auxNumero = numero % 10;
	unidad = unidades(auxNumero);
      }
    } else {
      uniMil = unitMil(numero);
      auxNumero = numero % 1000;
      centena = centenaF(auxNumero);
      auxNumero = numero % 100;
      decena = decenaF(auxNumero);
      auxNumero = numero % 10;
      unidad = unidades(auxNumero);
    }
  } else {
    auxNumero = numero % 10000;
    uniMil = unitMil(auxNumero);
    auxNumero = numero % 1000;
    centena = centenaF(auxNumero);
    auxNumero = numero % 100;
    decena = decenaF(auxNumero);
    auxNumero = numero % 10;
    unidad = unidades(auxNumero);
  }


  if (decMil != -1)
    {
  
      switch (decMil) {
      case 1:
	if (uniMil == -1 && centena == -1 && decena == -1 && unidad == -1) {
	  printf("diez mil\n");
	} else if (uniMil == -1) {
	  printf("diez mil ");
	} else {
	  switch (uniMil) {
	  case 1:
	    printf("once ");
	    break;
	  case 2:
	    printf("doce ");
	    break;
	  case 3:
	    printf("trece ");
	    break;
	  case 4:
	    printf("catorce ");
	    break;
	  case 5:
	    printf("quince ");
	    break;
	  case 6:
	    printf("dieciseis ");
	    break;
	  case 7:
	    printf("diecisiete ");
	    break;
	  case 8:
	    printf("dieciocho ");
	    break;
	  case 9:
	    printf("diecinueve ");
	    break;
	  default:
	    break;
	  }
	}
	break;
      case 2:
	if (uniMil == -1 && centena == -1 && decena == -1 && unidad == -1) {
	  printf("veinte mil\n");
	} else if (uniMil == -1) {
	  printf("veinte mil ");
	} else {
	  switch (uniMil) {
	  case 1:
	    printf("veintiun");
	    break;
	  case 2:
	    printf("veinti");
	    break;
	  case 3:
	    printf("veinti");
	    break;
	  case 4:
	    printf("veinti");
	    break;
	  case 5:
	    printf("veinti");
	    break;
	  case 6:
	    printf("veinti");
	    break;
	  case 7:
	    printf("veinti");
	    break;
	  case 8:
	    printf("veinti");
	    break;
	  case 9:
	    printf("veinti");
	    break;
	  default:
	    break;
	  }
	}
	break;
      case 3:
	if (uniMil == -1 && centena == -1 && decena == -1 && unidad == -1) {
	  printf("treinta mil\n");
	} else if (uniMil == -1) {
	  printf("treinta mil ");
	} else {
	  switch (uniMil) {
	  case 1:
	    printf("treinta y un ");
	    break;
	  case 2:
	    printf("treinta y ");
	    break;
	  case 3:
	    printf("treinta y ");
	    break;
	  case 4:
	    printf("treinta y ");
	    break;
	  case 5:
	    printf("treinta y ");
	    break;
	  case 6:
	    printf("treinta y ");
	    break;
	  case 7:
	    printf("treinta y ");
	    break;
	  case 8:
	    printf("treinta y ");
	    break;
	  case 9:
	    printf("treinta y ");
	    break;
	  default:
	    break;
	  }
	}
	break;
      case 4:
	if (uniMil == -1 && centena == -1 && decena == -1 && unidad == -1) {
	  printf("cuarenta mil\n");
	} else if (uniMil == -1) {
	  printf("cuarenta mil ");
	} else {
	  switch (uniMil) {
	  case 1:
	    printf("cuarenta y un ");
	    break;
	  case 2:
	    printf("cuarenta y ");
	    break;
	  case 3:
	    printf("cuarenta y ");
	    break;
	  case 4:
	    printf("cuarenta y ");
	    break;
	  case 5:
	    printf("cuarenta y ");
	    break;
	  case 6:
	    printf("cuarenta y ");
	    break;
	  case 7:
	    printf("cuarenta y ");
	    break;
	  case 8:
	    printf("cuarenta y ");
	    break;
	  case 9:
	    printf("cuarenta y ");
	    break;
	  default:
	    break;
	  }
	}
	break;
      case 5:
	if (uniMil == -1 && centena == -1 && decena == -1 && unidad == -1) {
	  printf("cincuenta mil\n");
	} else if (uniMil == -1) {
	  printf("cincuenta mil ");
	} else {
	  switch (uniMil) {
	  case 1:
	    printf("cincuenta y un ");
	    break;
	  case 2:
	    printf("cincuenta y ");
	    break;
	  case 3:
	    printf("cincuenta y ");
	    break;
	  case 4:
	    printf("cincuenta y ");
	    break;
	  case 5:
	    printf("cincuenta y ");
	    break;
	  case 6:
	    printf("cincuenta y ");
	    break;
	  case 7:
	    printf("cincuenta y ");
	    break;
	  case 8:
	    printf("cincuenta y ");
	    break;
	  case 9:
	    printf("cincuenta y ");
	    break;
	  default:
	    break;
	  }
	}
	break;
      case 6:
	if (uniMil == -1 && centena == -1 && decena == -1 && unidad == -1) {
	  printf("sesenta mil\n");
	} else if (uniMil == -1) {
	  printf("sesenta mil ");
	} else {
	  switch (uniMil) {
	  case 1:
	    printf("sesenta y un ");
	    break;
	  case 2:
	    printf("sesenta y ");
	    break;
	  case 3:
	    printf("sesenta y ");
	    break;
	  case 4:
	    printf("sesenta y ");
	    break;
	  case 5:
	    printf("sesenta y ");
	    break;
	  case 6:
	    printf("sesenta y ");
	    break;
	  case 7:
	    printf("sesenta y ");
	    break;
	  case 8:
	    printf("sesenta y ");
	    break;
	  case 9:
	    printf("sesenta y ");
	    break;
	  default:
	    break;
	  }
	}
	break;

      case 7:
	if (uniMil == -1 && centena == -1 && decena == -1 && unidad == -1) {
	  printf("setenta mil\n");
	} else if (uniMil == -1) {
	  printf("setenta mil ");
	} else {
	  switch (uniMil) {
	  case 1:
	    printf("setenta y un ");
	    break;
	  case 2:
	    printf("setenta y ");
	    break;
	  case 3:
	    printf("setenta y ");
	    break;
	  case 4:
	    printf("setenta y ");
	    break;
	  case 5:
	    printf("setenta y ");
	    break;
	  case 6:
	    printf("setenta y ");
	    break;
	  case 7:
	    printf("setenta y ");
	    break;
	  case 8:
	    printf("setenta y ");
	    break;
	  case 9:
	    printf("setenta y ");
	    break;
	  default:
	    break;
	  }
	}
	break;

      case 8:
	if (uniMil == -1 && centena == -1 && decena == -1 && unidad == -1) {
	  printf("ochenta mil\n");
	} else if (uniMil == -1) {
	  printf("ochenta mil ");
	} else {
	  switch (uniMil) {
	  case 1:
	    printf("ochenta y un ");
	    break;
	  case 2:
	    printf("ochenta y ");
	    break;
	  case 3:
	    printf("ochenta y ");
	    break;
	  case 4:
	    printf("ochenta y ");
	    break;
	  case 5:
	    printf("ochenta y ");
	    break;
	  case 6:
	    printf("ochenta y ");
	    break;
	  case 7:
	    printf("ochenta y ");
	    break;
	  case 8:
	    printf("ochenta y ");
	    break;
	  case 9:
	    printf("ochenta y ");
	    break;
	  default:
	    break;
	  }
	}
	break;

      case 9:
	if (uniMil == -1 && centena == -1 && decena == -1 && unidad == -1) {
	  printf("noventa mil\n");
	} else if (uniMil == -1) {
	  printf("noventa mil ");
	} else {
	  switch (uniMil) {
	  case 1:
	    printf("noventa y un ");
	    break;
	  case 2:
	    printf("noventa y ");
	    break;
	  case 3:
	    printf("noventa y ");
	    break;
	  case 4:
	    printf("noventa y ");
	    break;
	  case 5:
	    printf("noventa y ");
	    break;
	  case 6:
	    printf("noventa y ");
	    break;
	  case 7:
	    printf("noventa y ");
	    break;
	  case 8:
	    printf("noventa y ");
	    break;
	  case 9:
	    printf("noventa y ");
	    break;
	  default:
	    break;
	  }
	}
	break;
      default:
	break;
      }
    }
  
  switch (uniMil) {
  case 1:
    if (centena == -1 && decena == -1 && unidad == -1) {
      printf("mil\n");
    } else {
      printf("mil ");
    }
    break;
  case 2:
    if (centena == -1 && decena == -1 && unidad == -1) {
      printf("dos mil\n");
    } else if (decMil == 1){
      printf("mil ");
    } else {
      printf("dos mil ");
    }
    break;
  case 3:
    if (centena == -1 && decena == -1 && unidad == -1) {
      printf("tres mil\n");
    } else if (decMil == 1){
      printf("mil ");
    } else {
      printf("tres mil ");
    }
    break;
  case 4:
    if (centena == -1 && decena == -1 && unidad == -1) {
      printf("cuatro mil\n");
    } else if (decMil == 1){
      printf("mil ");
    } else {
      printf("cuatro mil ");
    }
    break;
  case 5:
    if (centena == -1 && decena == -1 && unidad == -1) {
      printf("cinco mil\n");
    } else if (decMil == 1){
      printf("mil ");
    } else {
      printf("cinco mil ");
    }
    break;
  case 6:
    if (centena == -1 && decena == -1 && unidad == -1) {
      printf("seis mil\n");
    } else if (decMil == 1){
      printf("mil ");      
    } else {
      printf("seis mil ");
    }
    break;
  case 7:
    if (centena == -1 && decena == -1 && unidad == -1) {
      printf("siete mil\n");
    } else if (decMil == 1){
      printf("mil ");
    } else {
      printf("siete mil ");
    }
    break;
  case 8:
    if (centena == -1 && decena == -1 && unidad == -1) {
      printf("ocho mil\n");
    } else if (decMil == 1){
      printf("mil ");
    } else {
      printf("ocho mil ");
    }
    break;
  case 9:
    if (centena == -1 && decena == -1 && unidad == -1) {
      printf("nueve mil\n");
    } else if (decMil == 1){
      printf("mil ");
    } else {
      printf("nueve mil ");
    }
    break;
  default:
    break;
  }

  switch (centena) {
  case 1:
    if (decena == -1 && unidad == -1) {
      printf("cien\n");
    } else {
      printf("ciento ");
    }
    break;
  case 2:
    if (decena == -1 && unidad == -1) {
      printf("doscientos\n");
    } else {
      printf("doscientos ");
    }
    break;
  case 3:
    if (decena == -1 && unidad == -1) {
      printf("trescientos\n");
    } else {
      printf("trescientos ");
    }
    break;
  case 4:
    if (decena == -1 && unidad == -1) {
      printf("cuatrocientos\n");
    } else {
      printf("cuatrocientos ");
    }
    break;
  case 5:
    if (decena == -1 && unidad == -1) {
      printf("quinientos\n");
    } else {
      printf("quinientos ");
    }
    break;
  case 6:
    if (decena == -1 && unidad == -1) {
      printf("seiscientos\n");
    } else {
      printf("seiscientos ");
    }
    break;
  case 7:
    if (decena == -1 && unidad == -1) {
      printf("setecientos\n");
    } else {
      printf("setecientos ");
    }
    break;
  case 8:
    if (decena == -1 && unidad == -1) {
      printf("ochocientos\n");
    } else {
      printf("ochocientos ");
    }
    break;
  case 9:
    if (decena == -1 && unidad == -1) {
      printf("novecientos\n");
    } else {
      printf("novecientos ");
    }
    break;
  default:
    break;
  }

  
  switch (decena) {
  case 1:
    if (unidad == -1) {
      printf("diez\n");
    } else { 
      switch (unidad) {
      case 1:
	printf("once\n");
	break;
      case 2:
	printf("doce\n");
	break;
      case 3:
	printf("trece\n");
	break;
      case 4:
	printf("catorce\n");
	break;
      case 5:
	printf("quince\n");
	break;
      case 6:
	printf("dieciseis\n");
	break;
      case 7:
	printf("diecisiete\n");
	break;
      case 8:
	printf("dieciocho\n");
	break;
      case 9:
	printf("diecinueve\n");
	break;
      default:
	break;
      }
    }  
    break;

  case 2:
    if (unidad == -1) {
      printf("veinte\n");
    } else {
      printf("veinte y ");
    }
    break;
  case 3:
    if (unidad == -1) {
      printf("treinta\n");
    } else {
      printf("treinta y ");
    }
    break;
  case 4:
    if (unidad == -1) {
      printf("cuarenta\n");
    } else {
      printf("cuarenta y ");
    }
    break;
  case 5:
    if (unidad == -1) {
      printf("cincuenta\n");
    } else {
      printf("cincuenta y ");
    }
    break;
  case 6:
    if (unidad == -1) {
      printf("sesenta");
    } else {
      printf("sesenta y ");
    }
    break;
  case 7:
    if (unidad == -1) {
      printf("setenta\n");
    } else {
      printf("setenta y ");
    }
    break;
  case 8:
    if (unidad == -1) {
      printf("ochenta\n");
    } else {
      printf("ochenta y ");
    }
    break;
  case 9:
    if (unidad == -1) {
      printf("noventa\n");
    } else {
      printf("noventa y ");
    }
    break;
  default:
    break;
  }

  if (decena != 1 && unidad != 0 )
    {
      switch (unidad) {
      case 1:
	printf("uno\n");
	break;
      case 2:
	printf("dos\n");
	break;
      case 3:
	printf("tres\n");
	break;
      case 4:
	printf("cuatro\n");
	break;
      case 5:
	printf("cinco\n");
	break;
      case 6:
	printf("seis\n");
	break;
      case 7:
	printf("siete\n");
	break;
      case 8:
	printf("ocho\n");
	break;
      case 9:
	printf("nueve\n");
	break;
      default:
	break;
      }
    }

  printf("numero: %d \n",numero);
  printf("decMil: %d \n",decMil);
  printf("uniMil: %d \n",uniMil);
  printf("centena: %d \n",centena);
  printf("decena: %d \n",decena);
  printf("unidad: %d \n",unidad);
  
  return 0;
}
