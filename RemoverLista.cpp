#include <stdio.h>


	void remover lista(int valor) //Para remover um elemento da lista, eu mexo sempre no anterior
	{
		struct No *ant;
		struct No *aux;
		aux = cabeca;
		
		while(aux -> info != valor and aux -> prox != NULL) //Faça enquanto a info em que o aux está apontando for diferente do valor
		{
			ant = aux; //Guarda o endereço anterior
			aux = aux -> prox;		
		}
		
		if(aux == cabeca)
		{
			cabeca = aux -> prox;	
		}
		else
		{
			ant -> prox = aux -> prox;
		}
			free(aux); //Usada para liberar endereço na memória. que no caso é o 2F8H		
	}

