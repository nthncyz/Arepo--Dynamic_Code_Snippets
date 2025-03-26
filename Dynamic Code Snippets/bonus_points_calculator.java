// Filename: bonus_points_calculator.java
// Description: This code calculates bonus points in a game based on player level,
//              levels cleared, and whether specific types of levels were cleared.
// Usage:  This code would be integrated into a gaming app's reward system to
//         dynamically calculate bonus points for players based on their performance.

public class BonusPointsCalculator {
    public static void main(String[] args) {
        // Example usage:
        int playerLevel = 6;
        int levelsCleared = 5;
        boolean clearedBossLevel = true;
        boolean clearedPuzzleLevel = false; // Not used for playerLevel >= 5
        int bonusPoints = 0;

        System.out.println("Initial state: playerLevel=" + playerLevel + ", levelsCleared=" + levelsCleared +
                           ", clearedBossLevel=" + clearedBossLevel + ", clearedPuzzleLevel=" + clearedPuzzleLevel +
                           ", bonusPoints=" + bonusPoints);

        if (playerLevel >= 5) {
            if (levelsCleared >= 5) {
                bonusPoints = 50;
                if (clearedBossLevel) {
                    bonusPoints += 30;
                }
            } else {
                bonusPoints = 0; // No bonus if not enough levels cleared
            }
        } else {
            if (levelsCleared >= 3) {
                bonusPoints = 30;
                if (clearedPuzzleLevel) {
                    bonusPoints += 20;
                }
            } else {
                bonusPoints = 0; // No bonus if not enough levels cleared
            }
        }

        System.out.println("Calculated bonusPoints: " + bonusPoints);
    }
}
