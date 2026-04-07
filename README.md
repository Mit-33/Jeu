# Jeu
Jeu is a little game in C++.
## How to play
Use z,q,s,d to move your carater (the "*&*").
Avoid the spike (the "*x*") and get some objects (the "*o*").
Get object increase your score.

## How to use classes
### Ground and Drawable
Ground is the "screen" and can be show with *Ground::str()*.
You can draw on the ground with Drawable.

#### Ground's methods
> clear()\
Fill the ground with empty cases

> std::string str()\
Return the ground formatted

#### Drawable's methods
> draw(Ground &ground,int pos[])\
Draw Drawable::img on the ground at pos

### Movable
Movable is a tool to manage position.
**Must** be used by a child.
Movable child must have a update methods which bind public and protected methods

#### Movable's public methods
> bool collide(Movable a)\
Return true if collide *a*

### Movable's protected methods
> move(int coords[2])\
move(std::array<int,2> coords)\
Move the Movable by *coords*

> moveto(int coords[2])\
moveto(std::array<int,2> coords)\
Move the Movable to *coords*

### MoveDraw
MoveDraw is Movable **and** Drawable child.
**Must** be used by a child.
MovaDraw child must have a update methods which bind public and protected methods.

#### MoveDraw's public methods
> draw(Ground &ground)\
Combine Drawable::draw and Movable::pos

#### MoveDraw's protected methods
> bool confirm(Ground &ground,int coords[])\
bool confirm(Ground &ground,std::array<int,2> coords)\
Return false if new pos by coords is out of bounds
