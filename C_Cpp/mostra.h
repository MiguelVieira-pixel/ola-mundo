float mostra(char sexo, float altura){
	float pesoIdeal = 0;
	
	if((sexo == 'M') || (sexo == 'm'))
		return(pesoIdeal = (72.7 * altura) - 58);
	else 
		return(pesoIdeal = (62.1 * altura) - 44.7);
}
