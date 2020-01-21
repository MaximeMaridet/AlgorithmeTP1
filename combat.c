#include <stdio.h>

int main() {
	int MonsterHP = 345;
	int damage = 20;
	
	printf("HP:%d\n", MonsterHP);
	MonsterHP -= damage;
	printf("Vous subissez %d points de degats\n", damage);
	printf("HP:%d\n", MonsterHP);
	
	return 0;
}