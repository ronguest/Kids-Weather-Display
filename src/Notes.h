To Dos

25. Find a box for and permanently mount the temperature sensing unit - currently using a temperary hack
14. Post a blog article on what I did and also post to Adafruit and Arduino Yun forums
15. Add some sort of touch detection which could cause some display mode change, for example 
    toggle for more detailed forecast text? Touch top half for today's details, bottom half for tomorrow's?
11. Can I use the current temperature or forecast to trigger any events?
17. Make display code robust enough to deal with triple digit temperatures. Note this should only ever
    happen for the high, so only for the second number on each row of data. Might work out
------ These are all done
1. Add rounding
2. Clean up display 
3. Add icons or a bit of text on precipiation. 
4. Add more forecast info 
5. Add headings 
6. Code color by temperature DONE (consider using an ORANGE though)
7. Need to switch to tomorow's forecast or add another line for it after about 7pm NOT NEEDED NOW
12. Find a way to display the current humidity (as part of a rotating set of bottom content?)
13. Refactor the code: especially reading values from a file, which is repeated many times
16. Switch to at least a 1 minute delay between screen refreshes 
18. Possibly have rotating content on the bottom half of
   the display (tomorrrow's forecast, today's precip, tomorrow's precip). Could either replace the bottom
   forecast text or periodically make it much smaller and show the extra info below it.
   I don't think this will undermine the device's main use case as today's forecast will always be visible
   a. 'conditions' has a short phrase of current or forecast conditions
   b. 'pop' has the probability of precipitation (without the %)
21. Only show the precip pop line if the pop chance is > 0
10. Probably as a precursor to the above, come up with an internal inter-device messaging backbone so
    the Arduinos can talk directly to each other.
9. Get the current indoor temperature from Guardian and display that in rotation or upon touch
24. Isolate the temperature sensor from the Arduino to improve accuracy
19. Since the display updates much more often than the weather info, consider splitting up the code so that
    the data update is separated from the display update cycle. Have the data update on an interrupt/timer schedule?
    ISTR the interrupt isnt available on the Yun so a time loop instead.
22. Add forecast icons - attempt to do this has failed due to rgb color issue, source of issue unclear. Filed 
    report at Arduino forum _ I got icons working but the were a bit distracting and slow
20. Implement a smart word wrap for weather conditions so that words and not broken in the middle but put on 
    separate lines, consider adjuting font size a bit too


   
