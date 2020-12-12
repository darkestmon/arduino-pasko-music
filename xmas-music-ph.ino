/* 
 *  Loop Play of Filipino Christmas Songs
 * 
 * Composition based on existing sheets in the internet
 *
 *
 * Code adapted from:
 * https://github.com/irshadshalu/Nokia_Composer_Music_Arduino
 * 
 */

 // including custom library file, all the function bodies are contained in it. refer to it for more details of implementation
#include"composer_music.h"

char* saMayBahay1 = "8d3 8d3 4d3 3g3 8d3 8d3 8#a2 4d3 4c3 4- 8d3 8d3 4d3 3a3 8c4 8#a3 8#f3 4a3 4g3 4- 8d3 8d3 4d3 3g3 8a3 8g3 8d3 4f3 4#d3 8- 8c3 8d3 8#d3 8d3 8d3 8g3 8#a3 8a3 8g3 8#f3 8a3 2g3 8-";
char* saMayBahay2 = "8f3 8g3 4f3 4d3 8- 8f3 8g3 8d3 4f3 4#d3 4- 8#d3 8f3 4#d3 4c3 8- 8f3 8a3 8f3 4g3 4f3 4- 8f3 8g3 4f3 4d3 8- 8d3 8#d3 8f3 4g3 4c4 8- 8#a3 8a3 8g3 8f3 8d3 8f3 8#a3 8a3 8f3 8a3 8c4 2#a3";
char* nocheBuena1 = "4e3 4#d3 2e3 4c3 4b2 2c3 4a2 4b2 4c3 4d3 4e3 4f3 2d3 4f3 4e3 2f3 4d3 4#c3 2d3 4b2 4c3 4d3 4e3 4f3 4g3 2e3 4a3 4#g3 2a3 4e3 4#d3 2e3 4c3 4d3 4e3 4f3 4g3 4a3 2f3 4b3 4a3 2b3 4a3 4#g3 2a3 3#g3 8#f3 3e3 8e3 4#c4 8- 8b3 8a3 2a3";
char* nocheBuena2 = "4e3 4e3 2#c4 4a3 2e3 4e3 4d3 4e3 2#g3 4#f3 2d3 4- 4e3 4e3 2b3 4#g3 2e3 4e3 4d3 4e3 2#f3 4e3 2#c3 4- 4#c3 4d3 2e3 2#f3 2#g3 2a3 3b3 8a3 4b3 4#c4 2d4 4#c4 4b3 2#c4 4b3 4a3 2b3 4a3 4#g3 1a3";
char* paskoNaNaman1 = "4e3 2a3 3b3 8c4 2a3 4e3 4e3 4a3 4#g3 4a3 4b3 2#g3 4- 4e3 2#g3 3a3 8b3 2#g3 3#g3 8a3 4b3 4#g3 4a3 4b3 2c4 4- 4e3 2a3 3b3 8c4 2a3 4#g3 4a3 4#a3 4a3 4g3 4e3 2f3 4- 4d3 2f3 3g3 8a3 2e3 4a3 4c4 3b3 8a3 4#g3 4b3 2a3 4-";
char* paskoNaNaman2 = "4e3 2#c4 4- 4e3 2b3 4- 4e3 4a3 8#g3 8a3 3b3 8a3 2#g3 4b2 4#c3 2d3 2e3 2#g3 3#f3 8#g3 4#f3 4e3 4#d3 4#f3 2e3 4- 4e3 2#c4 4- 4e3 2b3 4- 4e3 4a3 8#g3 8a3 3b3 8a3 2#f3 4#g3 4#f3 2e3 2d4 4#c4 2#c4 4b3 1a3 ";

void setup() {
  Serial.begin(9600);
  // the prototype for playMusic function is 
  // playMusic(Pin-No, music string, tempo,frequency factor);
  // playMusic(4,paskoNaNaman1,230,7);
  // playMusic(4,paskoNaNaman2,230,7);
  /*
   * 
   * Function usage : Explanation
   * pin-no : (int) PWM supported pin where the speaker is connected, the other terminal of speaker should be connected to ground.
   * Music string : (char* )character array where the music is stored in nokia composer music format, refer above elise;
   * tempo : (int) speed of playing, in BPM beats per minute 
   * frequency factor : (float) try adjusting this 1-5 if the pitch doesn't match, could depend on the speaker and board as well.
   */
}

void loop() {
  
  playMusic(4,saMayBahay1,140,6);
  playMusic(4,saMayBahay2,140,6);
  delay(3000);
  
  playMusic(4,paskoNaNaman1,230,6);
  playMusic(4,paskoNaNaman2,230,6);
  delay(3000);
  
  playMusic(4,nocheBuena1,250,6);
  playMusic(4,nocheBuena2,250,6);
  delay(3000);
}
