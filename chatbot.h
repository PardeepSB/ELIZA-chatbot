#include <iostream>
#include <climits> // Definition of INT_MIN, ...
#include <string>      // C++ strings (much easier to use than C-strings)
#include <vector>      // C++ vectors (good replacement for arrays in most cases)
#include <ctime>
#include <cstdlib>
#include <memory>
#include <cstring>
#include <locale>
#include <algorithm>
#include <iterator>
#include <set>

using namespace std;

#define arrSize(arr) (sizeof(arr) / sizeof(arr[0]))

//struct created for array of inputs and responses
struct saving{
  const char *input;
  const char *responses[3];
};

//array containing inputs and responses
  saving RespondWith [] = {

      {" hi ",
      {"Hello!",
        "Hey, how are ya!",
        "Hi."}
      },

      {" hey ",
      {"Hello!",
        "Hey, how are ya!",
        "Hi."}
      },

      {" hello ",
      {"Hello!",
        "Hey, how are ya!",
        "Hi."}
      },

      {" what is your name ",
      {"My name is Chatty.",
       "You can call me Chatty.",
       "My name is literally on the left side..."}
      },

      {" who are you ",
      {"My name is Chatty.",
       "You can call me Chatty.",
       "My name is literally on the left side..."}
      },

      {" who you are ",
      {"My name is Chatty.",
       "You can call me Chatty.",
       "My name is literally on the left side..."}
      },

      {" how are you ",
      {"I'm doing fine!",
        "I'm good, thanks for asking!",
        "Great!"}
      },

      {" talk about ",
      {"So you want to focus on (*)?",
        "I want to talk about (*) too!",
        "Great! Please continue."}
      },

      {" thanks ",
      {"You're welcome!",
        "No problem.",
        "No need to thank me."}
      },

      {" thank you ",
      {"You're welcome!",
        "No problem.",
        "No need to thank me."}
      },

      {" really ",
      {"I am not sure.",
        "You are confusing me.",
        "I don't really know."}
      },

      {" are you real ",
      {"You're talking to me aren't you?",
        "why would you ask me that.",
        "Am I not?"}
      },
      
      {" i am ",
      {"How long have you been (*)?",
       "Why are you (*)?",
       "Why do you think you are (*)?"}
      },

      {" you are ",
      {"So, you think that I am (*)?",
       "Why do you think I am (*)?",
       "Am I really?"}
      },

      {" can i ",
      {"If you could (*), would you?",
       "Do you want to (*)?",
       "I'm not sure about that."}
      },

      {" can you ",
      {"I don't think I can (*).",
       "You want me to be able to (*)?",
       "I'm not too sure about that."}
      },

      {" yes ",
      {"Understandable.",
       "I understand.",
       "Are you sure?"}
      },

      {" no ",
      {"Why not?",
       "I understand.",
       "Are you sure?"}
      },

      {" maybe ",
      {"You seem uncertain",
       "Don't you know?",
       "You're not sure?"}
      },

      {" because ",
      {"Is that the real reason?",
       "What else could be the cause?",
       "Does that reason tell you more about yourself?"}
      },

      {" what ",
      {"Why do you ask?",
       "What do you think?",
       "Have you asked anyone else?"}
      },

      {" i want ",
      {"Why do you want (*)?",
       "What if you never get (*)?",
       "I also want (*)."}
      },

      {" i don't ",
      {"Why don't you (*)?",
       "Do you want to (*)?",
       "You really don't (*)?"}
      },

      {" why don't you ",
      {"Do you want me to (*)?",
       "Maybe I will (*) in the future.",
       "Sometimes I can't (*)."}
      },

      {" why can't i ",
      {"Why can't you?",
       "Why do you think you can't (*)?",
       "Do you want to (*)?"}
      },

      {" i don't know ",
      {"Then who knows?",
       "I don't know either.",
       "What do you know then?"}
      },

      {" i'm ",
      {"Do you like being (*)?",
       "Are you talking to me because you are (*)?",
       "Why do you think you are (*)?"}
      },

      {" you ",
      {"We were discussing you, not me",
       "We were discussing you, not me?",
       "We were discussing you, not me"}
      },

      {" i hate ",
      {"Why do you hate (*)?",
       "Where did this hatred come from?",
       "Why this negativity all of a sudden?"}
      },

      {" sorry ",
      {"Why are you sorry?",
       "What made you think you have to apologize?",
       "Sometimes apologies are not needed."}
      },

      {" your ",
      {"Who said my (*)?",
       "My (*)? What about your (*)?",
       "Why are you focused on my (*)?"}
      },

      {" think ",
      {"What are you thinking about?",
       "Do you doubt (*)?",
       "So you aren't certain?"}
      },

      {" who ",
      {"You tell me.",
       "I'm not sure.",
       "That is not for me to say."}
      },

      {" that's ",
      {"Why is it (*)?",
       "That it is.",
       "That is not for me to say."}
      },

      {" i wish ",
      {"Sometimes I wish (*) too.",
       "I hope your wishes come true.",
       "you wish (*)?"}
      },

      {" i saw ",
      {"Where day did you see (*)?",
       "That is interesting.",
       "How does this make you feel?"}
      },

      {" i wish i was ",
      {"Sometimes I wish I was (*) too.",
       "I hope your wishes come true.",
       "you wish you were (*)?"}
      },
      
      {" okay ",
      {"Okay what?",
       "Alright?",
       "Okay."}
      },

      {" ok ",
      {"Ok what?",
       "Alright?",
       "Are you ok?"}
      },
      
      {" i like ",
      {"Why do you like (*)?",
       "I like (*) too!",
       "What else do you like?"}
      },

      {" alike ",
      {"In what way?",
       "How so?",
       "Could there really be a connection?"}
      },

      {" always ",
      {"Always, huh?",
       "When?",
       "Can you tell me a specific moment in time?"}
      },

      {" i need ",
      {"Why do you need (*)?",
       "For what reason do you need (*)?",
       "Do you really need (*)?"}
      },

      {" i feel ",
      {"What makes you feel (*)?",
       "How often do you feel (*)?",
       "When you feel (*) what do you do?"}
      }


  };

//size of array. arrSize defined above
size_t nRespondWithSize = arrSize(RespondWith);


const char* a[] = {" you aren't "," i ", " am ", " i'd ", " you'd ", " you're ", " i've ", " i'll ", " i'm ", " you've ", " you'll ", " aren't "," weren't ", 
            " was ", " yours ", " mine ", " you ", " me ", " are ", " your ", " my ", " yourself ", " myself "};

const char* b[] = {" I am not ", " you ", " are ", " you would ", " I would ", " I am ", " you have ", " you will ", " you are ", " I have "," I will ", " am not ", 
            " wasn't ", " were ", " mine ", " yours ", " me ", " you ", " am ",  " my ", " your ", " myself ", " yourself "};


//I tried saving user input and returning the most common non determiner word to user, but I was unsuccessful

/*    const char* determiners[] = {" you aren't "," i ", " am ", " i'd ", " you'd ", " you're ", " i've ", " i'll ", " i'm ", " you've ", " you'll ", " aren't "," weren't ", 
               " was ", " yours ", " mine ", " you ", " me ", " are ", " your ", " my ", " yourself ", " myself ", " the ", " a ", " then ", " her ", " his ", " our ",
               " much ", " some ", " several ", " little ", " all ", " any ", " many ", " no "," yes ", " lot ", " another ", " enough ", " had ", " have ", " rather ",
               " such ", " both ", " double ", " twice ", " quite ", " what ", " of ", " first ", " second ", " third ", " one ", " two ", " three ", " ten ", " thousand ",
               " their ", " there ", " they're ", " them ", " hundred ", " its ", " whose ", " those ", " that ", " this ", " an ", " how ", " few ", " very ", " next ",
               " next ", " either ", " neither ", " every "}; */

//size of array containing swaps, don't need size of B as B is the same length as A
size_t nA = arrSize(a);


class Chatbot{
  private:
  //declaring all variables
    const string name;
    string sInput;
    string sPreviousInput = "";
    string sPreviousResponse = "";
    int Selection;
    int total = -1;
    const string sEliminate = "?!.,;";
    const string replace = "(*)";
    time_t t = time(0);
    tm* now = localtime(&t);
    vector<string> FindName;
    
  public:
  //declaring functions
    //class constructor with string parameter, which saves the name of bot
    Chatbot(string str)
      :name(str)
    {
      cout << "\n" << "Please enter your name followed by '@' to begin.\n"
                   << "When you are done talking, say goodbye.\n"
                   << "Name example: Toby Donaldson@\n\n"
                   << "Please enter your name here:";
      
    }

    //getter function gets name of bot
    string get_name() const {

      return name;
    
    }

    //tell function saves user input and saves username at FindName[0]
    void tell (string& uInput){

      sInput = lowercase(uInput);
      sInput = RemovePlease(sInput);
      sInput = space_elim(sInput);
      FindName.push_back(uInput);

    }

    //USER function finds the username input by user in beginning
    string USER(){
    
        string removal = FindName[0];
        string need_to_find = "@";
        size_t find_removal = removal.find(need_to_find);
    
        if(find_removal != string::npos){
    
          removal.replace(find_removal, find_removal+2, "");
    
        }
    
        return removal;
    
    } 

    //lowercase function makes all input to lowercase
    string lowercase(string input){

      string str = "";
      locale loc;

      for (int i = 0; i < input.length(); i++){

        str += tolower(input[i], loc);

      }

      return str;
    
    }

    //RemovePlease function removes the word 'please', so it is not reused in responses
    string RemovePlease(string sInput){

      string please = "please";
      size_t find = sInput.find(please);

      if (find != string::npos){

        sInput.erase(find-1, please.length()+1);

      }

      return sInput;
    
    }

    //space_elim removes '?!.,;' and adds a space to beginning and end of string
    string space_elim(string input){

      for (int i = 0; i < sEliminate.length(); i++){

          input.erase(remove(input.begin(), input.end(), sEliminate[i]), input.end());

      }

      input.insert(0, " ");
      input.append(" ");
      return input;

    }  

    // these two functions transfer the strings into a vector
    //first transfer function transfers strings in array to vector
    void transfer(const char* arr[], vector<string> &v){

      for(int i = 0; i < 3; i++){
      
        v.push_back(arr[i]);
      
      }
    
    }

    //second transfer function transfers string to vector
    void transfer(string str, vector<string> &v){
      
      v.push_back(str);
    
    }

    //FindLargest function finds the largest/best input from user. used in find_input_match and find_keyword
    void FindLargest(string sInput){

      vector<string> larger;
      string bigger;

      for(int i = 0; i < nRespondWithSize; i++){

        size_t found = sInput.find(string(RespondWith[i].input));
        transfer(string(RespondWith[i].input), larger);
        string smaller = larger[i];

        for(int j = 0; j < larger.size(); j++){

          if(found != string::npos){
          
            if(smaller.size() > bigger.size()){
          
              bigger = smaller;
              total = i;
          
            }
          }
        }          
      } 
    }

    //find_input_match finds the best set of outputs according to the best input and returns a vector containing the 3 different outputs
    vector<string> find_input_match(string sInput, int num){
      
      vector<string> result;

        size_t found = sInput.find(string(RespondWith[num].input));

        if(found != string::npos){

          transfer(RespondWith[num].responses, result); 
          return result;
        
        }
        
        return result;
      
    }

    //find_keyword function deletes the largest(best) input and returns the remaining keywords to be added to output
    string find_keyword(string sInput, int num){

      string keywords;

      string Respond_input = string(RespondWith[num].input);

      size_t found = sInput.find(RespondWith[num].input); 
      size_t found2 = found + Respond_input.length();

      if(found != string::npos){

          sInput.replace(0, found2-1, "");
      
      }
      
      keywords = sInput;
      return keywords;
    
    }

    //separator function separates string, pushes it into vector, adds space to the beginning and end of each word, and returns the vector
    vector<string> separator(string str, vector<string> words){

      size_t find = str.find(" ");
      size_t last = 0;

      while (find != string::npos){

        words.push_back(str.substr(last, find - last));
        last = find + 1;
        find = str.find(" ", last);

      }

      words.push_back(str.substr(last, find - last));

      for (int i = 0; i < words.size(); i++){

        words[i].insert(0," ");
        words[i].append(" ");

      }

      words.erase(words.begin());
      words.pop_back();
      return words;

    }      
    
    //swapping function swaps all words such as "you" -> "me", "are" -> "am", etc, etc
    string swapping(vector<string> swap){

      string output;

      for (int i = 0; i < swap.size(); i++){
        
        string in = swap[i];

        for(int j = 0; j < nA; j++){

          if(in == a[j]){

            in = b[j];
            break;

          }

        }

        in = in.substr(0, in.length()-1);
        output += in;

      }

      return output;
    
    }

    //getter that returns a response to user
    string get_reply(){

      string sResponse = "";
      vector<string> responses;
      string keywords;
      string username = USER();
      vector<string> complicated;

      FindLargest(sInput);

      //total global variable in private:, set to -1, if the function FindLargest find a valid input, it returns >= 0
      if (total > -1){

        responses = find_input_match(sInput, total);
        keywords = find_keyword(sInput, total);
        complicated = separator(keywords, complicated);
        keywords = swapping(complicated);
        keywords.erase(0,1);
        
      } else {

        responses.clear();
      
      }

      //says bye to user and ends driver loop
      if(sInput.find("bye") != string::npos){

        sResponse = "Bye! It was nice talking to you "; 
        sResponse += username; 
        sResponse += ". Have a great day!";
    
        cout << name << "> " << sResponse << "\n\n";
        exit(1);

        //if user asks for date, present date is displayed
      } else if(sInput.find(" date ") != string::npos) {

        cout << "\nThe date today is " << (now->tm_year + 1900) << "-" << (now->tm_mon + 1)<< "-" << now->tm_mday << "\n";
        sResponse = "^^^";

        //if user asks for time, the current time is displayed
      } else if(sInput.find(" time ") != string::npos) {

        cout << "\nThe current time is " << now->tm_hour << ":" << now->tm_min << ":" << now->tm_sec << "\n";
        sResponse = "^^^";

        //greeting message at start of bot, after user inputs their name
      } else if(sInput.find("@") != string::npos) {

        sResponse = "Nice to meet you ";
        sResponse += username;
        sResponse += ".\nMy name is Chatty, what would you like to talk about?";

      //responses for what it cannot comprehend
      } else if(responses.size() == 0) {

        vector<string> responseArr = {

          "I don't know what you mean, sorry!",
          "What do you mean by that?",
          "That is quite interesting.",
          "Can you elaborate on that?",
          "I'm not sure I understand you fully."

        };

        sResponse = responseArr[rand() % 5];

      //accounts for same input
      } else if(sInput == sPreviousInput) {

        sResponse = "You said that already";
      
      } else {

        //select one of the 3 responses, if it contains (*), it replaces it with the saved keyword from input
        Selection = rand() % 3;
        sResponse = responses[Selection];

        if(sResponse.find("(*)") != string::npos) {

          int pos = sResponse.find("(*)");

          for (int i = 0; i < replace.length(); i++) {

            sResponse.erase(remove(sResponse.begin(), sResponse.end(), replace[i]), sResponse.end());
          }
   
          sResponse.insert(pos, keywords);

        }

      }
      //previous response and input set
      sPreviousResponse = sResponse;
      sPreviousInput = sInput;
      return sResponse;
      
    }

    //destructor called
    ~Chatbot() {};
};
