# Revisiting BuildingEscape
I finished Battle tanks and now I am here to make building escape game look / play better.

### Things to keep in mind
1. We’ll iterate around a loop while making this game
2. Constantly asking “what’s least fun”
3. Remember we’re not AAA studios
4. Let’s find the essence of fun of this game.

## Concept
Building Escape is a First person shooter game.

It has beautiful visuals like water falls, grasslands and what not. Terrain and buildings can be used as a tactical advantage.

Focus will be on gameplay flow and feel

## Rules
1. You can move anywhere in the terrain, blocking volumes will prevent you from moving out of bounds
2. Both AI robots and Main character pawn start with finite health, but ammo of main character is infinite.
3. Each direct hit takes away health
4. The player wins if he finds the cup and puts it in a certain place

## Requirements
1. __SFX__: Shooting sound, Winning end of game sound, player died sound

2. __Static mesh__:   
    1. 3rd person body - can be found in unreal official tutorials
    2. 1st person hands animated - same
    3. Robots - Ai robots with wheels looks like r2d2 from starwars, should have barrel, turret, body, tracks
    4. House structures - walls, roof, ... etc
    5. Trees, grass, rocks - for environment.
    6. Cup - for the win.
    7. Gun - for shooting weapon (optional)

3. __Textures__:
    1. Grass Texture - Can be imported from Grass tool project
    2. Rock Texture - same
    3. Trees Texture - import with trees from Procedural Folliage tool project
    4. Texture for robots, Texture for walls, Texture for the floor, Texture for cup .. etc all come from Starter content imports
    5. Gun flares - same

4. __Music__: Background music to create tension.

## Iterative cycle
We'll keep looking at this iterative cycle again and again as we keep moving on in the game.

Look at __BuildingEscapeAdvancedIterativeCycle.png__ in this directory.
