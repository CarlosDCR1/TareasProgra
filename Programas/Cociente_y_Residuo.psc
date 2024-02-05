Algoritmo Cociente_y_Residuo
	// Calcular el cociente y residuo de la divicion de dos numero a y b
	Escribir 'Ingrese un primer valor: ';
	Leer n1;
	Escribir 'Ingrese un segundo valor: ';
	Leer n2;
	Mientras n2=0 Hacer
		Escribir 'Error... Ingrese un numero que no sea 0';
		Leer n2;
	FinMientras
	cociente <- n1/n2;
	residuo <- n1 MOD n2;
	Escribir 'El cociente de la division es de: ', cociente, ' Y el residuo es de: ', residuo;
FinAlgoritmo
