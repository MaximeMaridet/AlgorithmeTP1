#include <stdio.h>

int main() {
	int PlayerHP = 100;
	int MonsterHP = 140;
	int tour = 1;
	int monstreDmg = 15;
	int playerDmg = 30;
	
	while (MonsterHP>0 && PlayerHP>0) {
		printf("Tour %d\n", tour);
		
		printf("HP:%d\n", MonsterHP);
		MonsterHP -= playerDmg;
		printf("Le monstre subit %d points de degats\n", playerDmg);
		printf("HP:%d\n", MonsterHP);
		
		if (MonsterHP >0) {
			printf("Hp Joueur : %d\n", PlayerHP);
			PlayerHP -= monstreDmg;
			printf("Vous subissez %d points de degats\n", monstreDmg);
			printf("HP: %d\n", PlayerHP);
		}
		printf("#############################\n");
		tour += 1;
	}
	
	if (PlayerHP <= 0) {
		printf("YOU ARE DEAD, THAT'S SAD\n");
	} else {
		printf("YOU WON, CONGRATZ !\n");
	}
	
	return 0;
}