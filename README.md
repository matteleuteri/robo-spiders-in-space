# Robo Spiders In Space!

This is a project I am working on to learn c++ and computer graphics programming.

To do list:

1. change enemy motion to be at an angle plus or minus some offset instead of a vector plus or minus some offset.
<!-- 
    -something like plus or minus 10 degrees
    -does not need to be updated every time
 -->
2. animate the player and enemy.

3. any object that can trigger an animation needs to receive the pointer to the scene's animator in it's update function

4. make all four corners potnetial spawn points

5. implement player enemy collision detection

6. fix bug of mouse pointer rotation after resizng window

7. all the animationms have a similar form. the animator only takes each object, and tells it to flip bitmaps at a certain time. All this should do is keep track of objects it needs to animate, the timing of their creation, and the timing of when they need to flip, in maybe an array of timeframes. When it is time to flip, it just calls the flip bitmap function of the corresponding object. also when to start and stop, and which particular animations are playing


Completed:

1. make player point towards the mouse

2. make enemies point towards player

3. use array for enemies instead of vector

4. made projectiles a bitmap pointing in proper direction instead of a plain rectangle.

5. added an animation of an explosion

6. fix the mess of bitmap assignment