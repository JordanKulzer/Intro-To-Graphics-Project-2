# HW2
This is the second homework for COSC 4370

Jordan Kulzer  PSID: 1863479

Environment: I built this project using Microsoft Visual Studio 2019

# Problem 1:
The objective of this problem was to render teapots in a pyramid shape.

It did take quite a while to get used to OpenGl's functions.  After a couple hours of trial and error, I finally managed to make some progress.  
It wasn't until I was almost done that I realized that I could've done some for loops to make things easier for myself.  
However, I still managed to render the teapot pyramid without them.
Once I was done with this first problem, I had also become comfortable with camerPos and glViewPort.

# Problem 2:
The objective of this problem was to render a staircase.

Once I finished problem 1, I was more comfortable with the different functions that were entailed, like the glPushMatric, glTranslatef, and glPopMatrix.
This second problem didn't take nearly as long as the first one.  However, once again, I had already started it before considering using for loops, which would've been much easier on me.

# gluPerspective, gluLookAt, and the keyboard function

Once I finished the first two problems, I decided to focus on finishing the rest of the required code before coming back to problem 3 since I was becoming more comfortable with how OpenGl works.
These took a lot of trial and error as far as figuring out the right numbers to go in the gluLookAt matrix and GluPerspective code.

With the keyboard function, I decided to go with a switch.  It seemed to make more sense to me than an if/else statement, plus it looks better to me personally.

# Problem 3
The objective of this problem was to be creative in making something.

I had the most fun with this one honestly.  I played around for a couple hours trying different ideas.  
I started with trying to make a pig, but struggled with the ears and tail.  Plus wasn't sure about coloring quite yet. I then tried a basketball hoop, but that didn't work out either.
Eventually I decided on a car.  It was actually quite simple once I found out how to do the wheels using glutSolidTorus. Then to add more cars, I just added or subtracted 0.7 from the x value in the glTranslatef function.

# Final thoughts
I actually enjoyed doing this project all in all.  I learned tons about OpenGl, and some of the possibilities with it.  I really regret not doing the for loops to save time, memory, and pain, but I've learned my lesson.
