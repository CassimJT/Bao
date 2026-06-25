# GAME APPLICATION

**Game Name:** Bao

## TARGET PLATFORM
- Android (Main target)
- Desktop (Windows, Linux, macOS)
- iOS

## GAME DESCRIPTION

Bao is a local board game played by 2 players using playing balls. It is played on a board consisting of 32 holes, with 2 territories of 16 holes each. There are many types of Bao games, with the following common types:

### HOUSE

This Bao type of game has a house which the players protect, hence the name. For convenience, the gameplay is grouped into 3 phases.

---

#### 1. TRAP PHASE

- The game uses 64 balls total, with only 13 balls allowed to make the house and the trap
- Each side has 32 balls to use, kept at the reserve (a big hole outside each territory)
- **House**: Made using 8 playing balls
- **Trap**: Made using 5 playing balls
- A player is allowed to use less than 5 balls to make traps and place the remaining playing balls in the house
- A player is allowed to use less than 8 balls (but not less than or equal to 0) to build the house and can use the remaining balls to make traps
- **A winner cannot be determined at this phase**

---

#### 2. DEFENSE PHASE

The main objective of this phase is to protect the house. It uses balls from the reserve. Player can choose to move the house whenever they want, provided the rules below apply.

**Gameplay:**
- Player uses a ball from the reserve and places it at a position where there is one ball or more, and eats what is on the corresponding hole from the other territory

**Rules:**
1. If a user has nowhere to eat, they can place a ball in any hole where there is greater than 0 balls and play the game
2. Player cannot move the house by using the playing ball directly from the reserve
3. If there is no hole with playing balls greater than 0 on the front holes, player can take one from the house and one from the reserve (making a total of 2) and move in any direction
4. **Player wins if they eat all the front line balls from the enemy territory**

---

#### 3. MATCH PHASE

This is the phase after the defense phase. Player enters this phase the moment they get their playing balls out of the reserve.

**Gameplay:**
- Players use targs to match with the enemy
- If player has no targ, they can move any hole with greater than 0 playing balls
- A hole is not a targ if it has playing balls greater than or equal to 16 and less than or equal to one
- **Player wins if they eat all the front line balls from the enemy territory**

---

## GAME RULES

Table 1.0 shows the holes and balls in one territory. The rules outlined below apply to all territories.

| Position | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 |
|----------|---|---|---|---|---|---|---|---|---|----|----|----|----|----|----|----|
| **Holes** | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 |

**Table 1.0**

### General Rules

1. When player eats playing balls from enemy territory with a targ coming from a direction (right or left), the eaten balls will be distributed starting from where the targ comes from, except when players eat at position 2 or 7 (as shown in Table 1.0). Refer to other rules to see what happens when player eats at these positions.

2. If a player eats at position 2 with a targ coming from right, the taken balls shall start at position 1, reversing the direction of the targ.

3. If a player eats at position 7 with a targ coming from left, the eaten balls shall be distributed starting from position 8, reversing the direction of the targ.

4. Player cannot move position or distribute playing balls outside their territory.

5. If player has no targ, they cannot move a position from the outer line of the territory unless the player does not have a position with greater than or equal to 2 from the inner line of the territory.

6. A hole with only one playing ball or less is not a targ.

7. A hole with greater than or equal to 16 is not a targ.

8. Player cannot make a move at an empty hole.

9. Only one ball is allowed to be distributed in each playing state.

10. Player cannot directly move a house.

---

## GAME FUNCTIONALITY

### 1. IN-APP PURCHASE SUPPORT

The app shall support (but not limited to) the following in-app purchases:

- **a.** Special move (auto targ calculation)
- **b.** Playing balls styles
- **c.** Board styles

---

### 2. MULTIPLAYER SUPPORT

The game shall allow 2 players to play a match in 2 ways:

- **a. WAN** - A player can play with another player at the WWW level
- **b. LAN** - A player can play with another player at the local network via Bluetooth or WiFi

Apart from multiplayer support, a player will also be able to play with the machine (AI).

---

### 3. GAME TYPE

The game will allow only 2 Bao types:

- **a.** House
- **b.** Free matching

---

### 4. GAME MODE

The game will support 3 game modes. These modes will only be available when playing with the machine (AI):

- **a.** Easy
- **b.** Medium
- **c.** Hard

---

### 5. GAME PLAY

Player will be able to choose from the following game play options:

- **a.** Multiplayer

---

### 6. BAO LEAGUE

Players will be able to form teams and play Bao tournaments.

---

### 7. ADS

The game app will have ad support. Players will be able to buy moves, playing balls, and boards by watching ads.

---

## KEY WORDS

**Targ:** Any hole with more than one playing ball that can reach a non-empty hole in the inner hole line of the territory with the balls in the corresponding hole from the other territory.

**Reserve:** A big hole outside each territory used for keeping the playing balls in Phase 2 (refer to the Defense Phase section for details).