Lets know the setup before adding code in ur ARDUINO IDE 2.3.6.

Step 1:
Search Blynk in any of your search engine.

create new template in development zone -note the template id and password select your hardware (here we have ESP8266) .

There create dataStreams i,e. strings or integer , type of variables depends on project .

we have created a v0 and v1 integers type virtual pins where v0 has range(0-1) and v1 (0-255).

v0 is for light switch on and off . v1 is for brightness adjustment from 0 to 255.

save and apply

step 2: add your device . note down the auth code



In arduino uno run the code present in sketch_apr5a.ino 

steps to follow before compilation

install libraries - blynk and ESP8266WiFi

now provide your template id , password and auth code which you have noted before 

provide your wifi credentials which has internet access

now compile and upload the code after uploading goto serial monitor where wifi gets connected after wifi is connected do the below

In your smart mobile open Blynk iot login with your credentails .

select the template which you have created and then add tools to on/off the light and slider for adjusting brightness.

select the tool and select the virtual pin . here v0 for on/off and v1 for slider.

now go back and once you click on/off it will display in serial monitor

connect the nodemcu and led light as shown below
