# Fitness Activity Tracker Game

## Overview
The **Fitness Activity Tracker Game** is an interactive, console-based game where players can engage in various physical activities like **Jogging**, **Cycling**, and **Swimming**. As players perform activities, they burn calories and lose energy. To keep going, they must manage their energy levels by either resting or eating to restore energy. The goal is to stay active, keep track of calories burned, and avoid running out of energy.

## Features
- **Track Calories Burned:** Each physical activity (Jogging, Cycling, Swimming) burns a set number of calories based on the time spent in the activity.
- **Energy Management:** Players start with 100 energy points. Energy decreases after each activity based on calories burned.
- **Energy Restoration:** Players can restore energy by choosing the **Eat to Restore Energy** option, which replenishes their energy to 100.
- **Game-like Interface:** The game provides clear options and prompts for the player to track their progress.
- **End the Game:** The player can choose to end the game anytime by selecting the quit option.

## How It Works
1. **Start with a Menu:** The game begins by presenting a menu with options for activities and restoring energy.
2. **Select an Activity:** Players choose an activity (Jogging, Cycling, Swimming), and the program prompts them to enter the time spent. The calories burned are then calculated, and energy is reduced based on the calories burned.
3. **Restore Energy:** If energy runs low or reaches zero, the player can select **Eat to Restore Energy** to replenish energy points and continue the game.
4. **Quit the Game:** The player can end the game at any point by selecting the **Quit** option.

## Energy & Activity Calculation

- **Jogging:** Calories burned = `0.75 * duration (minutes)`
- **Cycling:** Calories burned = `0.5 * duration (minutes)`
- **Swimming:** Calories burned = `0.8 * duration (minutes)`
- **Eating (Restoring Energy):** Restores 30 energy points, but the energy can't exceed the 100 energy cap.

## Installation

To run the game, follow these steps:

1. **Clone the repository:**
   ```bash
   git clone https://github.com/nthncyz/Arepo--Dynamic_Code_Snippets.git
   ```

2. **Navigate to the project directory:**
   ```bash
   cd Arepo--Dynamic_Code_Snippets
   ```

3. **Compile the C++ code:**
   ```bash
   g++ -o fitness_activity_tracker_game main.cpp
   ```

4. **Run the game:**
   ```bash
   ./fitness_activity_tracker_game
   ```

## Example Output

### Sample Run 1:
```
Fitness Activity Tracker Game

1. Jogging
2. Cycling
3. Swimming
4. Eat to Restore Energy
5. Quit

Enter your choice (1-5): 1
Enter the time spent jogging in minutes: 30
Calories burned: 22.5
Energy left: 77.5

Enter your choice (1-5): 4
You decided to eat something to restore your energy.
Energy restored! Current energy: 100

Enter your choice (1-5): 2
Enter the time spent cycling in minutes: 20
Calories burned: 10
Energy left: 90

Enter your choice (1-5): 5
Program ending.
```

### Sample Run 2 (Out of Energy):
```
Fitness Activity Tracker Game

1. Jogging
2. Cycling
3. Swimming
4. Eat to Restore Energy
5. Quit

Enter your choice (1-5): 1
Enter the time spent jogging in minutes: 200
Calories burned: 150
Energy left: -50
You're out of energy! Please eat to restore it.

Enter your choice (1-5): 4
You decided to eat something to restore your energy.
Energy restored! Current energy: 100

Enter your choice (1-5): 5
Program ending.
```

## Notes
- The game provides a fun and interactive way to track fitness activities while balancing energy management.
- Ensure your energy doesn't drop too low, or you might find yourself unable to continue until you restore energy.
- The game does not track real-world physical changes, but it offers a simple simulation of fitness activities.

## License
This project is open-source and available under the MIT License.
```

### How to add this to your repository:
1. Open your GitHub repository page.
2. Click on the "Add file" dropdown button.
3. Select "Create new file".
4. Name the file `README.md`.
5. Copy and paste the content above into the editor.
6. Commit the changes by clicking "Commit new file".
