#include <stdio.h>
#include <stdlib.h>

int main() {
	int PlayerHP = 100;
	int MonstreHP = 140;
	int tour = 1;
	int monstreDmg = 15;
	int playerDmg = 30;
	int playerAction = 0;
	int damage = 0;
	int monstreAction = 0;
	
	
	while (MonstreHP>0 && PlayerHP>0) {
		printf("Tour %d\n", tour);
		
		printf("(1) Attaquer (2) Defendre\n");
		while (playerAction != 1 && playerAction != 2) {
			scanf("%d", &playerAction);
			printf("%d\n", playerAction);
		}
		monstreAction = rand()%2+1;
		
		if (playerAction == 1) {
				printf("HP Monstre:%d\n", MonstreHP);
			
			if (monstreAction == 2) {
				damage = playerDmg/4;
			} else {
				damage = playerDmg;
			}
			MonstreHP -= damage;
			printf("Le monstre subit %d points de degats\n", damage);
			printf("HP Monstre:%d\n", MonstreHP);
		} else if (playerAction == 2) {
			printf("Vous vous recroquevillez en position defensive\n");
		}
		
		if (MonstreHP >0) {
			printf("Hp Joueur : %d\n", PlayerHP);
			if (monstreAction == 1) {
				if (playerAction == 2) {
					damage = monstreDmg/4;
				} else {
					damage = monstreDmg;
			}
				PlayerHP -= damage; 
				printf("Vous subissez %d points de degats\n", damage);
			printf("Hp Joueur: %d\n", PlayerHP);
			}
		}
		printf("#############################\n");
		tour += 1;
		playerAction = 0;
	}
	
	if (PlayerHP <= 0) {
		printf("YOU ARE DEAD, THAT'S SAD\n");
	} else {
		printf("YOU WON, CONGRATZ !\n");
	}
	
	return 0;
}