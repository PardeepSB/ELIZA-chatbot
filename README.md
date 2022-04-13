# ELIZA-chatbot


## About

My chatbot is an Eliza style chatbot with somewhat beyond-Eliza functionality. The chatbot itself is self-explanatory as it can follow along with any topic discussed by the user. Each function present in the chatbot.h file works on different sections of the user input to create a response. The tell function receives user input, and with the help of surrounding functions, the input is made lowercase, “please” and “?!.,;” symbols are removed from the input and spaces are added to the beginning and end of the string. These changes condition the string to be inserted in functions. The modified input is sent to a variety of functions, the major ones being; FindLargest, find_input_match, and find_keyword. <br /> 

These three functions are the main functions used to create a response: <br /> 

* FindLargest finds the longest input position within the user input and gives the “find” functions the position.<br /> 
* The find_input_match function uses the largest position to find the corresponding responses and returns a vector containing the responses to be later used for responding to the user.<br />  
* The find_keyword function is mandatory for the chatbot to respond to certain questions. It finds the position of the longest input and removes everything up until that point, leaving behind keywords the bot will use to respond to the user.<br /> 

There are other important functions; “swapping” and “separator”, which are used for swapping/transposing of words such as “you” to “me”, “are” to “am”, etc. They work together to make for better responses to user input.

## Demo

![ELIZAtestRun](https://user-images.githubusercontent.com/73859429/163278156-2baf5853-e4d0-48d0-bb4d-30ccfa416ced.PNG)

(loop ends, have to run program again to start a new conversation)

## Future Improvements

	1. Implement memory for bot to remember previous conversations it has had or previous talking points of user 
	2. Create a website to host the Chatbot
	3. Customize it for a specific purpose rather than a "therapy" type bot
	4. Remove the need for use to put @ at the end of their name to initialize their name
	5. Remove all possible responses or user inputs to make it fully functional and have ability to reply to any user input

  
## References 

I tried to understand this chatbot, but was only able to understand some components, not all. I do not know what boost is or how to use it yet and I did not understand how they transposed/swapped words using push_back and make_pair.
http://www.martinbroadhurst.com/eliza-in-c.html

I read this books chapter to further my understanding.
https://link.springer.com/chapter/10.1007/978-3-030-50146-4_3
