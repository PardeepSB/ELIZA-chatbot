# ELIZA-chatbot


## About

My chatbot is an Eliza style chatbot with somewhat beyond-Eliza functionality. The chatbot itself is self-explanatory as it can follow along with any topic discussed by the user. Each function present in the chatbot.h file works on different sections of the user input to create a response. The tell function receives user input, and with the help of surrounding functions, the input is made lowercase, “please” and “?!.,;” symbols are removed from the input and spaces are added to the beginning and end of the string. These changes condition the string to be inserted in functions. The modified input is sent to a variety of functions, the major ones being; FindLargest, find_input_match, and find_keyword.<br /> 

These three functions are the main functions used to create a response: <br /> 

* FindLargest finds the longest input position within the user input and gives the “find” functions the position.<br /> 
* The find_input_match function uses the largest position to find the corresponding responses and returns a vector containing the responses to be later used for responding to the user.<br />  
* The find_keyword function is mandatory for the chatbot to respond to certain questions. It finds the position of the longest input and removes everything up until that point, leaving behind keywords the bot will use to respond to the user.<br /> 
There are other important functions; “swapping” and “separator”, which are used for swapping/transposing of words such as “you” to “me”, “are” to “am”, etc. They work together to make for better responses to user input.


Short run example:

Please enter your name followed by '@' to begin.
When you are done talking, say goodbye.
Name example: Toby Donaldson@

Please enter your name here:You> Test@
Chatty> Nice to meet you Test.
My name is Chatty, what would you like to talk about?

You> Hi how are you
Chatty> I'm good, thanks for asking!

You> can you help me with my homework?
Chatty> You want me to be able to help you with your homework?

You> yes, I am struggling
Chatty> How long have you been struggling?

You> All night, I can't sleep. I don't understand anything
Chatty> Do you want to understand anything?

You> Yes ofcourse.
Chatty> Are you sure?

You> so can you help me?
Chatty> You want me to be able to help you?

You> yes!
Chatty> I understand.

You> I am done with you, bye!
Chatty> Bye! It was nice talking to you Test. Have a great day!

(loop ends)


References- 

I tried to understand their chatbot, but was only able to understand some components, not all. I do not know what boost is or how to use it and I did not understand how they transposed/swapped words using push_back and make_pair. Their bots code is kind of confusing, so I did not understand majority of it.

http://www.martinbroadhurst.com/eliza-in-c.html

I read this books chapter to further my understanding.

https://link.springer.com/chapter/10.1007/978-3-030-50146-4_3
