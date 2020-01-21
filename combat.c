#include <stdio.h>

int main() {
	int tour = 1;
	int MonsterHP = 140;
	int damage = 20;
	
	while (MonsterHP>0) {
		printf("Tour %d\n", tour);
		printf("HP:%d\n", MonsterHP);
		MonsterHP -= damage;
		printf("Vous subissez %d points de degats\n", damage);
		printf("HP:%d\n", MonsterHP);
		
		printf("#############################\n");
		tour += 1;
	}
	
	return 0;
}