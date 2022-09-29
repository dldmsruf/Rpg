/*
-Author: ¿Ã¿∫∞·
-Data: 22.09.29
-Description: Basic RPG game
*/
#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	
	int player_hp = 100;
	int player_att = 10;
	int player_def = 8;
	
	int monster_hp = 80;
	int monster_att = 10;
	int monster_def = 8;

	srand(time(NULL));

	while (1) {
		printf("Player status==========\n");
		printf("- HP: %d\n", player_hp);
		printf("- def: %d\n", player_def);
		printf("- att: %d\n", player_att);

		printf("monster status==========\n");
		printf("- HP: %d\n", monster_hp);
		printf("- def: %d\n", monster_def);
		printf("- att: %d\n", monster_att);





		printf("Menu=====================");
		printf("1. Attack, \n");
		printf("2. Defense, \n");
		printf("3. Run, \n");

		int choice;
		scanf("%d", &choice);

		if (choice == 1) {
			int damage = player_att - monster_def;
			int is_critical = rand() % 2;

			if (is_critical) damage *= 2;

			printf("Hit the monster with damage % d.\n", damage);
			monster - hp - +damage;
		}
		else if (choice == 3) {
			printf(Bye bye!\n);
			break;
		}
		else {
			printf("Wrong Input\n")
			continue;
	}
			if (player_hp <= 0) {
				printf("You lose.\n");
				break;
			}
			else if (monster_hp <= 0) {
				printf("You win.\n");
				break;
			}






		}



	return 0;
}