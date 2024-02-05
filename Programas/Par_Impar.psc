Algoritmo Par_Impar
	// Indique si el numero es Par o  Impar
	Escribir 'Ingrese un numero: ';
	Definir n Como Entero;
	Leer n;
	p <- n MOD 2;
	Si p==0 Entonces
		Escribir 'El numero es Par';
	SiNo
		Escribir 'El numero es Impar';
	FinSi
FinAlgoritmo
