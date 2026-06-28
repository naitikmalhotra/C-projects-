#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void speak(char text[])
{
    printf("Jarvis: %s \n", text);
}
void tellTime()
{
    time_t t;
    time(&t);
    printf("Current Time: %s", ctime(&t));
}
int main()
{
    char command[100];
    speak("Hello !!! I am Jarvis");
    while (1)
    {
        printf("\n You: ");
        fgets(command, sizeof(command), stdin);
        command[strcspn(command, "\n")] = 0;
        if (strcmp(command, "time") == 0)
        {
            tellTime();
        }
        else if (strcmp(command, "google") == 0)
        {
            speak("Opening Google");
            system("start https://www.google.com");
        }
        else if (strcmp(command, "youtube") == 0)
        {
            speak("Opening Youtube");
            system("start  https://www.youtube.com");
        }
        else if (strcmp(command, "song") == 0)
        {
            speak("Playing Song");
            system("start start https://www.youtube.com/watch?v=4DfVxVeqk2o&list=RD4DfVxVeqk2o&start_radio=1");
        }
        else if (strcmp(command, "chatgpt") == 0)
        {
            speak("Opening ChatGpt");
            system("start  https://chatgpt.com/");
        }
        else if (strcmp(command, "notepad") == 0)
        {
            speak("Opening notepad");
            system("notepad");
        }
        else if (strcmp(command, "exit") == 0)
        {
            speak("GoodBye !!! Have a nice day :)");
            break;
        }
        else
        {
            printf("Sorry, I can't understand that command \n");
        }
    }

    return 0;
}