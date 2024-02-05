Algoritmo Calcu2
	Repetir
		Escribir '¿Que desa realizar?';
		Escribir '1. Sumar';
		Escribir '2. Restar';
		Escribir '3. Multiplicar';
		Escribir '4. Dividir';
		Escribir '0. Salir';
		Leer opcion;
		Según opcion Hacer
			1:
				Escribir 'Ingrese un primer valor: ';
				Leer n1;
				Escribir 'Ingrese un segundo valor: ';
				Leer n2;
				resultado <- n1+n2;
				Escribir 'El resultado de la suma es de: ', n1, ' + ', n2, ' = ', resultado;
			2:
				Escribir 'Ingrese un primer valor: ';
				Leer n1;
				Escribir 'Ingrese un segundo valor: ';
				Leer n2;
				resultado <- n1-n2;
				Escribir 'El resultado de la resta es de: ', n1, ' - ', n2, ' = ', resultado;
			3:
				Escribir 'Ingrese un primer valor: ';
				Leer n1;
				Escribir 'Ingrese un segundo valor: ';
				Leer n2;
				resultado <- n1*n2;
				Escribir 'El resultado de la multiplicacion es de: ', n1, ' * ', n2, ' = ', resultado;
			De Otro Modo:
				Escribir 'Ingrese un primer valor: ';
				Leer n1;
				Escribir 'Ingrese un segundo valor: ';
				Leer n2;
				Mientras n2=0 Hacer
					Escribir 'Error... Ingrese un numero que no sea 0';
					Leer n2;
				FinMientras
				resultado <- n1/n2;
				Escribir 'El resultado de la division de: ', n1, ' / ', n2, ' = ', resultado;
		FinSegún
		Escribir '¿Desea Continuar?';
		Escribir '1. Continuar';
		Escribir '0. Salir';
		Leer opcion;
	Hasta Que opcion=0
FinAlgoritmo
