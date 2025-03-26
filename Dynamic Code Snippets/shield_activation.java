// Filename: shield_activation.java
// Description: This code demonstrates conditional execution to activate a magic shield in a game.
// Usage:  This code snippet would be used within a larger game program where the character's
//         mana level determines whether their shield is activated or if they rely on basic defense.

public class ShieldActivation {
    public static void main(String[] args) {
        // Example usage:
        int manaLevel = 60; // Character's current mana level
        boolean shieldActivated = false; // Initial state of the shield
        boolean basicDefense = true;  // Initial state of basic defense

        System.out.println("Initial state: shieldActivated=" + shieldActivated + ", basicDefense=" + basicDefense + ", manaLevel=" + manaLevel);

        if (manaLevel >= 50) {
            shieldActivated = true;
            basicDefense = false;
        } else {
            shieldActivated = false;
            basicDefense = true;
        }

        System.out.println("After shield check: shieldActivated=" + shieldActivated + ", basicDefense=" + basicDefense);
    }
}
