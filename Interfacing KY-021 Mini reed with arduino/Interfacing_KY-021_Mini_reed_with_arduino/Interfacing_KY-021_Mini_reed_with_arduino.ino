//Author: Danny van den Brande, arduinosensors.nl.
//Hello world! I made a simple example on the KY-021 mini reed switch.
//Do what ever you like with this code! This code will turn on a relay.
//In my video i used a lamp, but you can add any device to the relay if you want.
//reed switches can be used for a dozen of things but is mostly known for its use
//in burglar alarms, and work with a magnetic field.
int Relay = 9 ;
int MiniReed = 8; 

int val ;
void setup ()
{
  pinMode (Relay, OUTPUT);
  pinMode (MiniReed, INPUT);
}
void loop ()
{
  val = digitalRead (MiniReed) ;
  if (val == HIGH) 
  {
    digitalWrite (Relay, HIGH);
  }
  else
  {
    digitalWrite (Relay, LOW);
  }
}
