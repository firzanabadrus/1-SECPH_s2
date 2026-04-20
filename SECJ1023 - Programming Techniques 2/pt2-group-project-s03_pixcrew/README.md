[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/jkzM6ab-)
# Meow Munch Madness

### PixCrew

## Group Members

- [LUBNA AL HAANI BINTI RADZUAN](https://github.com/haani1224)
- [NUR FIRZANA BINTI BADRUS HISHAM](https://github.com/firzanabadrus)
- [ANIS SAFIYYA BINTI JANAI](https://github.com/anissj)
- [NURUL ASYIKIN BINTI KHAIRUL ANUAR](https://github.com/NASYIKINKHAI)

## Description

During an exciting adventure exploring the globe, players suddenly bump into a hungry stray cat and decide to help it.
In this fun game, players are tasked with helping an adorable cat satisfy its insatiable appetite for delectable delights. As delicious food rains down, players must help a hungry cat catch falling food items before they hit the ground.
As the game progresses, the food falls faster, challenging players' reflexes. With colorful graphics and catchy music, it's a fun and addictive casual experience for players of all ages

## Gameplay

- **Controls:** Use the left and right srrow key to change the direction of the player.
- **Objectives:** Collect food to get the highest score while maintaining lives by not letting the food touch the floor.

## Game Mission
After the game starts, Players need to control the
cat's movement left and right across the screen
using keyboard controls. As foods rain down, players
must position the cat under the food to catch it.
Each successful catch earns points, while missed
food items are deducted from the player's score lives.
 <br>Since there is no maximum limit on number of food
consume, the player needs to survive until the game
ends. But, the maximum number of player’s lives is 3,
so after the player used up all the lives, the game
end.


## Project Structure
[Provide description about your project structure including each file and folder.]
### 1. background folder
- This folder contains the background.hpp and cpp files, with the background.cpp file containing the implementation of the game's background images and animations. This file is used to draw and update the background scenery. The background.hpp file contains a header file for the background class. It defines the functions and variables utilized in the background.cpp.

### 2. floor folder
- For the floor folder, the floor.cpp file implements the floor features where food items fall if not caught by the player. This file contains the logic behind the floor's appearance and interaction.
There is also a file called floor.hpp, which contains the header for the floor class. It defines the functions and variables used in floor.cpp.

### 3. food folder
- The food.cpp file in the food folder controls the food items that fall from the top of the screen. This file contains logic that generates food items at random intervals, moves them down the screen, and draws them. The food class's header file, food.hpp, declares the functions and variables used in food.cpp.

### 4. game folder
- The game folder contain both game.hpp and game.cpp which representing the flow and the whole game of our project which initialziing the background and drawing the player and the floor, it also running the game including create new food or delete food if it hit either player of floor.

### 5. hitArea folder
- HitArea folder only contain hitArea.hpp since HitArea class is used as the parent class for polymorphism for the child class player and floor class. In hitArea.hpp, the gotHit method is declared as pure virtual method to apply polymorphism technique in this project.
  
### 6. player folder
- Player class contain player.hpp and player.cpp. Player.hpp contain the declaration for player class and the header for each method needed in player class. Player.cpp contain the method definition in the player class.

### 7. point folder
- In the point folder, point.hpp declares the Point class, which has attributes for x and y coordinates as well as public methods for setting and retrieving them. It also declares a default and parameterized constructor.
point.cpp implements the methods described in point.hpp, allowing to initialize, set, and obtain a point's x and y coordinates.

### 8. score folder
- Score folder contains score.cpp file which utilizes a score display. This file contains the logic for storing high scores, obtaining previous scores, and showing the current score on the screen. The score.hpp file declares the functions and variables that will be specified in score.cpp.
 
