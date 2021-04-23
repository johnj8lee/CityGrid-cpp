# game-cpp
Game with Player/Computer interface. C++

Gameplay:
Player (indicated by @) in a rectangular city filled with Flatulans (usually indicated by F).
At each turn, the user will select an action for the player to take.
The player will take the action, and then each Flatulan will move one step in a random direction.
The attempt to move will make each Flatulan break wind.
If the Flatulan is orthogonally adjacent to the player, the player is affected by the blast of gas.
If the player suffers twelve such blasts during the game, the player passes out and the game is over.

Code Structure:
Game:
To create a Game, you specify a number of rows and columns and the number of Flatulans to start with. The Game object creates an appropriately sized City and populates it with the Player and the Flatulans.
A game may be played. (Notice that the city is displayed after the Flatulans have had their turn to move, but not after the player has had its turn.)
City:
When a City object of a particular size is created, it has no Flatulans or player. In the City coordinate system, row 1, column 1 is the upper-left-most position that can be occupied by a Flatulan or Player. (If a City were created with 7 rows and 8 columns, then the lower-right-most position that could be occupied would be row 7, column 8.)
You may tell a City object that the Flatulans around the player are being preached to. Flatulans that are converted must be removed from the City, since they serve no further purpose in the game.
A City object may be displayed on the screen, showing the locations of the Flatulans and player, along with other status information.
Player:
A Player is created at some position (using the City coordinate system, where row 1, column 1 is the upper-left-most position, etc.).
Flatulan:
A Flatulan is created at some position (using the City coordinate system, where row 1, column 1 is the upper-left-most position, etc.).
You may tell a Flatulan to move.
You may ask a Flatulan object for its position.
