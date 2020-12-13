#include<stdlib.h>
#include<stdio.h>

int main() {
	int n = 100;   //entier
	int somme = 0; // somme
	int i = 0; // itérateur
	for (i = 0; i <= n; i++) //boucle version 1
	{
		somme += i;
	}

	printf(" n = %d\n", n);

	printf("somme avec boucle for = %d\n", somme); //affichage résultat

	int i2 = 0;
	int somme2 = 0;


	while (i2 <= n) { somme2 += i2; i2 += 1; } //bouxle version 2 
	printf("somme avecc boucle while = %d\n", somme2);

	int i3 = 0;
	int somme3 = 0;
	do { somme3 +=i3; i3 +=1; } while (i3 <= n); // boucle verison 3 
	printf("somme avec do while = %d\n", somme3);


	unsigned short int n2 = 100;
	unsigned short int i4 = 0;
	unsigned short int somme4 = 0;
	unsigned short int vmax= 65535; // valeur max pour un unsigned short int

	while ((i4 <= n2) && ((vmax-somme4) >= i4)) { somme4 +=i4; i4 +=1; } //boucle avec calcul sans dépassement
	printf("somme sans dépassement = %u\n", somme4);
	
	
	unsigned short int n3 = 0;
	scanf_s("%hu", &n3); // choix de l'entier au clavier par l'itilisateur (reprise de la verison 1)
	i4 = 0;
	somme4 = 0;
	for (i4 = 0; i4 <= n3; i4++)
	{somme4 += i4;}
	printf("somme avec scanf= %u\n", somme4);
    

	scanf_s("%hu", &n3); // reprise de la version 1 mais on oblige l'utilisateur à choisir une valeur possible
	if (n3 > 361)
	{
		printf("dépassement de capacités, veuillez choisir un nombre plus petit:");
		scanf_s("%hu", &n3);
	}
	i4 = 0;
	somme4 = 0;
	for (i4=0;i4<=n3;i4++)
	{
		somme4 += i4;
	}
	printf("somme = %u", somme4);


}