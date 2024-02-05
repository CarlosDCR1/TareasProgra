Algoritmo Positivo_Negativo
	// Indique si la suma de dos valores es positiva, negativa o cero.
	Escribir 'Ingrese el primer numero';
	Leer n1;
	Escribir 'Ingrese el segundo numero';
	Leer n2;
	suma <- n1+n2;
	Si suma>0 Entonces
		Escribir 'El resultado de la suma es Positivo: ', suma;
	SiNo
		Si suma==0 Entonces
			Escribir 'El resultado de la suma es Cero: ', suma;
		SiNo
			Si suma<0 Entonces
				Escribir 'El resultado de la suma es Negativo: ', suma;
			FinSi
		FinSi
	FinSi
FinAlgoritmo
