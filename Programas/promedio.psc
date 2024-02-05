Algoritmo promedio
	// Calcular el promedio de N numeros
	Escribir 'Cuantos numeros desea ingresar: ';
	Leer numt;
	suma <- 0;
	contador <- 0;
	Mientras contador<numt Hacer
		Escribir 'Escriba un numero';
		Leer n;
		suma <- suma+n;
		contador <- contador+1;
	FinMientras
	prom <- suma/numt;
	Escribir 'El promedio es de: ', prom;
FinAlgoritmo
