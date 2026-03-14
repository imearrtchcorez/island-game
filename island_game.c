#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int island_x, island_y;
    int click_x, click_y;
    int attempts = 0;
    
    srand(time(0));
    
    // Random island position
    island_x = rand() % 100;
    island_y = rand() % 100;
    
    printf("ISLAND GAME \n");
    printf("Find and click the island to win!\n");
    printf("Island is somewhere between (0-99, 0-99)\n\n");
    
    while (1) {
        attempts++;
        printf("Attempt %d - Enter coordinates (x y): ", attempts);
        scanf("%d %d", &click_x, &click_y);
        
        if (click_x == island_x && click_y == island_y) {
            printf("\n YOU WIN! Found the island in %d attempts!\n", attempts);
            break;
        } else {
            printf(" Missed! Try again.\n\n");
        }
    }
    
    return 0;
}
