# Horseracep2
include-
    iostream
    cstdlib
    ctime

constants-
    racelength = 15
    num horse = 5
## UML
'''mermaid
class Horse
{
        -int spot
        -int index
        -int track length
        Horse()
        init(int index, int tracklength)
        +void advance()
        +int getSpot()
        +PrintLane()
        bool isWinner()
    }

class Race
{
 int num_horses
        int track_length
        Horse horses[num_horses]
        Race ()
        start()
    }

Race --> Horse
'''

Initialize the horses starting position at 0
Horse::horse()
    spot number = 0
    index = 0
    track length = 15

inint(int index, int tracklength)
    set spot 0
    set Horse::index to index
    set Horse::tracklength to track length

void Horse::advance()
    generate a random integer between 0-1 (c style not c++)
    create a 50% chance for the horse to move
    add coin to position, put result back in position
 
void Horse::PrintLane()
    if pos == Horse::position
        print Horse::index
    else
        print "."
    
bool Horse::isWinner
    isWinner = false
    if position >= tracklength
        isWinner = true
        print "horse 'num' is the winner!"
    return result



void Race::Race()
    num_horses = 5 - const static int
    track_length = 15 - const int

    initialize horse array
    for each horse:
        initialize with index and tracklength
        

void Race::start()
    set bool continueon = true
    cycle through all horses and call PrintLane(n) 
    
    pause the game and wait for the user to press enter
    if user presses enter start the count down

    while (continueon) 
        for each horse
            roll the dice to see if the horse gets to advance
            print the horses updated track
            if a horse gets a spot see if the horse reached the finish line
                stop the race
                print out the horse that won

    if (continueon)
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
