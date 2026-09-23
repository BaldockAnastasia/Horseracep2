# Horseracep2
include-
    iostream
    cstdlib
    ctime

constants-
    racelength = 15
    num horse = 5

class Horse
- int spot
+ void advance 
+ void getSpot

class Race
- int tracklength
- int num horses
- Horse horses(num horses)
+ Race()
+ void start()

Initialize the horses starting position at 0
Horse::horse()
    spot number = 0

void Horse::advance()
generate a random integer between 1-50
create a 50% chance for the horse to move
if odds > 25 horse has 50% chance to move
spot++



int Horse::getSpot() const 
    return spot


Race::race()
    length = racelength


void Race::pLane(int horsenum)
    int loc = horses(horsenum).getSpot()
    loop through each unit of raacetrack from 0 - -1
    if i == loc
        print the horses number
    else
        print "."
        

void Race::start()
    set bool continue = true
    cycle through all horses and call pLane(n) 
    
    pause the game and wait for the user to press enter
    if user presses enter start the count down


    while continue 
        Go through each horse
            roll the dice to see if the horse gets to advance
            print the horses updated track
            if a horse gets a spot see if the horse reached the finish line
                stop the race
                print out eh horse that won

    if continue
        give user instructions to press enter for another turn
        recieve the feedback


int main
    seed the rand number generator
    give user instructions to press enter to start the race
    recieve the feedback
    
    Race race
    if user presses enter start the race

    show an end of the race message

    return 0
