#include <Renard.h>
#include "Adafruit_Thermal.h"
#include "img_top2.h"
#include "img_bottom2.h"

int arrayOfLuckyNumbers[5];
#define LUCKY_NUMBERS_LENGTH (sizeof(arrayOfLuckyNumbers) / sizeof(arrayOfLuckyNumbers[0]))

char buffer[120]; //max is 109 but just to be on the safe side
const char string_1[] PROGMEM = "You cannot achieve the impossible without attempting the absurd.";
const char string_2[] PROGMEM = "What we see is mainly what we look for.";
const char string_3[] PROGMEM = "What you are is what you have been. What you'll be is what you do now.";
const char string_4[] PROGMEM = "When you doubt your power, you give power to your doubt.";
const char string_5[] PROGMEM = "Fear makes strangers of those who would be friends.";
const char string_6[] PROGMEM = "There is not one big cosmic meaning for all, there is only the meaning we each give to our life.";
const char string_7[] PROGMEM = "If you have made mistakes, there is always another chance. You may have a fresh start any moment you choose.";
const char string_8[] PROGMEM = "Strangers are friends you have yet to meet.";
const char string_9[] PROGMEM = "Happiness is not something ready made. It comes from your own actions.";
const char string_10[] PROGMEM = "Well done is better than well said.";
const char string_11[] PROGMEM = "We don't stop playing because we grow old; we grow old because we stop playing.";
const char string_12[] PROGMEM = "The best place to find a helping hand is at the end of your own arm.";
const char string_13[] PROGMEM = "Until you make peace with who you are, you will never be content with what you have.";
const char string_14[] PROGMEM = "Stay committed in your decisions, but stay flexible in your approach.";
const char string_15[] PROGMEM = "When you're curious, you find lots of interesting things to do.";
const char string_16[] PROGMEM = "By failing to prepare, you are preparing to fail.";
const char string_17[] PROGMEM = "Make your life a mission, not an intermission.";
const char string_18[] PROGMEM = "The secret of happiness is freedom. The secret of freedom is courage.";
const char string_19[] PROGMEM = "Luck is what happens when preparation meets opportunity.";
const char string_20[] PROGMEM = "The difference between try and triumph is a little umph.";
const char string_21[] PROGMEM = "It is better to be faithful than famous.";
const char string_22[] PROGMEM = "Only a life lived for others is worth living.";
const char string_23[] PROGMEM = "Reach high, for stars lie hidden in your soul. Dream deep, for every dream precedes the goal.";
const char string_24[] PROGMEM = "When your values are clear to you, making decisions becomes easier.";
const char string_25[] PROGMEM = "Challenges are what make life interesting; overcoming them is what makes life meaningful.";
const char string_26[] PROGMEM = "Hope is the dream of a soul awake.";
const char string_27[] PROGMEM = "Put your heart, mind, intellect and soul even to your smallest acts. This is the secret of success.";
const char string_28[] PROGMEM = "Ambition is the path to success. Persistence is the vehicle you arrive in.";
const char string_29[] PROGMEM = "Your vocation in life is where your greatest joy meets the world's greatest need.";
const char string_30[] PROGMEM = "The world is but a canvas to the imagination.";
const char string_31[] PROGMEM = "Excellence is to do a common thing in an uncommon way.";
const char string_32[] PROGMEM = "If you are content with the best you have done, you will never become the best you can be.";
const char string_33[] PROGMEM = "An invasion of armies can be resisted, but not an idea whose time has come.";
const char string_34[] PROGMEM = "You've got to have a dream, if you want to have a dream come true.";
const char string_35[] PROGMEM = "A leader is someone who demonstrates what's possible.";
const char string_36[] PROGMEM = "Life is just a chance to grow a soul.";
const char string_37[] PROGMEM = "Failing to prepare is like preparing to fail.";
const char string_38[] PROGMEM = "It always seems impossible until its done.";
const char string_39[] PROGMEM = "If you don't stand for something, you will fall for anything.";
const char string_40[] PROGMEM = "And in the end it's not the years in your life that count; it's the life in your years.";
const char string_41[] PROGMEM = "Make the decision, make it with confidence, and the world will be yours.";
const char string_42[] PROGMEM = "You are Braver than you Believe, Smarter than you Seem, and Stronger than you Think.";
const char string_43[] PROGMEM = "If a man does not know what port he is steering for, no wind is favorable to him.";
const char string_44[] PROGMEM = "A smile is the universal welcome.";
const char string_45[] PROGMEM = "Keep your fears to yourself, but share your courage with others.";
const char string_46[] PROGMEM = "The best way to predict the future is to create it.";
const char string_47[] PROGMEM = "The harder you fall, the higher you bounce.";
const char string_48[] PROGMEM = "Vision is the art of seeing what is invisible to others.";
const char string_49[] PROGMEM = "Don't let your failures define you--let them teach you.";
const char string_50[] PROGMEM = "If you judge people, you have no time to love them.";
const char string_51[] PROGMEM = "Success isn't a result of spontaneous combustion. You must set yourself on fire.";
const char string_52[] PROGMEM = "Anyone who has never made a mistake has never tried anything new.";
const char string_53[] PROGMEM = "Find out who you are and do it on purpose.";
const char string_54[] PROGMEM = "Not everything that counts can be counted, and not everything that can be counted counts.";
const char string_55[] PROGMEM = "The freedom to be your best means nothing unless you are willing to do your best.";
const char string_56[] PROGMEM = "Make the most of yourself, for that is all there is of you.";
const char string_57[] PROGMEM = "Worrying is like a rocking chair, it gives you something to do, but it gets you nowhere.";
const char string_58[] PROGMEM = "Opportunities multiply as they are seized.";
const char string_59[] PROGMEM = "Fall seven times, stand up eight.";
const char string_60[] PROGMEM = "The man who removes a mountain begins by carrying away small stones.";
const char string_61[] PROGMEM = "No snowflake in an avalanche ever feels responsible.";
const char string_62[] PROGMEM = "Optimism is the foundation of courage.";
const char string_63[] PROGMEM = "The question isn't who is going to let me; it's who is going to stop me.";
const char string_64[] PROGMEM = "Change what you can change and acknowledge and accept what you can't.";
const char string_65[] PROGMEM = "No one can make you feel inferior without your consent.";
const char string_66[] PROGMEM = "The only way to discover the limits of the possible is to go beyond them into the impossible.";
const char string_67[] PROGMEM = "Do not take life too seriously; you will never get out of it alive.";
const char string_68[] PROGMEM = "Do not merely believe in miracles, rely on them.";
const char string_69[] PROGMEM = "Everybody is somebody else's weirdo.";
const char string_70[] PROGMEM = "Everything you know is wrong.";
const char string_71[] PROGMEM = "To steal ideas from one person is plagiarism; to steal from many is research.";
const char string_72[] PROGMEM = "Furious activity is no substitute for understanding.";
const char string_73[] PROGMEM = "He who sneezes without a handkerchief takes matters into his own hands.";
const char string_74[] PROGMEM = "If you had any brains, you'd be dangerous.";
const char string_75[] PROGMEM = "Imitation is the sincerest form of plagiarism.";
const char string_76[] PROGMEM = "In theory, theory and practice are the same. In practice, they're different.";
const char string_77[] PROGMEM = "It is easier to run down a hill than up one.";
const char string_78[] PROGMEM = "It's later than you think.";
const char string_79[] PROGMEM = "It's not the fall that kills you, it's the sudden stop.";
const char string_80[] PROGMEM = "Anger is one letter short of danger.";
const char string_81[] PROGMEM = "Nobody expects the Spanish Inquisition.";
const char string_82[] PROGMEM = "People who look down on other people do not end up being looked up to.";
const char string_83[] PROGMEM = "Sometimes the only solution is to find a new problem.";
const char string_84[] PROGMEM = "The chief cause of problems is solutions.";
const char string_85[] PROGMEM = "The problem with the gene pool is that there is no lifeguard.";
const char string_86[] PROGMEM = "When you do not know what you are doing, do it neatly.";

const char *
const fortunes[] PROGMEM = {
  string_1,
  string_2,
  string_3,
  string_4,
  string_5,
  string_6,
  string_7,
  string_8,
  string_9,
  string_10,
  string_11,
  string_12,
  string_13,
  string_14,
  string_15,
  string_16,
  string_17,
  string_18,
  string_19,
  string_20,
  string_21,
  string_22,
  string_23,
  string_24,
  string_25,
  string_26,
  string_27,
  string_28,
  string_29,
  string_30,
  string_31,
  string_32,
  string_33,
  string_34,
  string_35,
  string_36,
  string_37,
  string_38,
  string_39,
  string_40,
  string_41,
  string_42,
  string_43,
  string_44,
  string_45,
  string_46,
  string_47,
  string_48,
  string_49,
  string_50,
  string_51,
  string_52,
  string_53,
  string_54,
  string_55,
  string_56,
  string_57,
  string_58,
  string_59,
  string_60,
  string_61,
  string_62,
  string_63,
  string_64,
  string_65,
  string_66,
  string_67,
  string_68,
  string_69,
  string_70,
  string_71,
  string_72,
  string_73,
  string_74,
  string_75,
  string_76,
  string_77,
  string_78,
  string_79,
  string_80,
  string_81,
  string_82,
  string_83,
  string_84,
  string_85,
  string_86
};

//RENARD
#define RENARD_CHANNEL_RESET 1
#define RENARD_CHANNEL_GLOBE 7
#define RENARD_CHANNEL_PRINTER 8
#define RENARD_CHANNEL_SPOTLIGHTS 2

//PINS
#define PIN_BUTTON_PRESSED 53
#define PIN_BUTTON_LIGHT 46

#define PIN_RELAY_GLOBE 28
#define PIN_RELAY_1 24

#define PIN_SPOTLIGHTS 7

#define PIN_MAKEY_MAKEY 45

//SERIAL
#define SERIAL_RENARD Serial
#define SERIAL_PRINTER Serial3

int nextFortunePlace = 0;

#define FORTUNES_LENGTH 86

Renard renard(SERIAL_RENARD, 8);



Adafruit_Thermal printer( & SERIAL_PRINTER);


// Constants for gamma correction on LEDs.
const uint8_t PROGMEM gamma[] = {

  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,
  1,  1,  1,  1,  1,  1,  1,  1,  1,  2,  2,  2,  2,  2,  2,  2,
  2,  3,  3,  3,  3,  3,  3,  3,  4,  4,  4,  4,  4,  5,  5,  5,
  5,  6,  6,  6,  6,  7,  7,  7,  7,  8,  8,  8,  9,  9,  9, 10,
  10, 10, 11, 11, 11, 12, 12, 13, 13, 13, 14, 14, 15, 15, 16, 16,
  17, 17, 18, 18, 19, 19, 20, 20, 21, 21, 22, 22, 23, 24, 24, 25,
  25, 26, 27, 27, 28, 29, 29, 30, 31, 32, 32, 33, 34, 35, 35, 36,
  37, 38, 39, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 50,
  51, 52, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 66, 67, 68,
  69, 70, 72, 73, 74, 75, 77, 78, 79, 81, 82, 83, 85, 86, 87, 89,
  90, 92, 93, 95, 96, 98, 99, 101, 102, 104, 105, 107, 109, 110, 112, 114,
  115, 117, 119, 120, 122, 124, 126, 127, 129, 131, 133, 135, 137, 138, 140, 142,
  144, 146, 148, 150, 152, 154, 156, 158, 160, 162, 164, 167, 169, 171, 173, 175,
  177, 180, 182, 184, 186, 189, 191, 193, 196, 198, 200, 203, 205, 208, 210, 213,
  215, 218, 220, 223, 225, 228, 231, 233, 236, 239, 241, 244, 247, 249, 252, 255
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void setup() {
  randomSeed(analogRead(0));
  pinMode(PIN_BUTTON_PRESSED, INPUT_PULLUP);
  pinMode(PIN_BUTTON_LIGHT, OUTPUT);

  pinMode(PIN_RELAY_GLOBE, OUTPUT);
  pinMode(PIN_RELAY_1, OUTPUT);

  pinMode(PIN_SPOTLIGHTS, OUTPUT);

  digitalWrite(PIN_RELAY_GLOBE, HIGH);
  digitalWrite(PIN_RELAY_1, HIGH);

  pinMode(PIN_MAKEY_MAKEY, OUTPUT);
  digitalWrite(PIN_MAKEY_MAKEY, HIGH);

  SERIAL_PRINTER.begin(19200); // Use this instead if using hardware serial
  SERIAL_RENARD.begin(57600); //Renard Serial
  SERIAL_RENARD.print("Renard");
  printer.begin(); // Init printer (same regardless of serial type)
  nextFortunePlace = random(0, FORTUNES_LENGTH);
  print();
}

boolean last = false;
boolean isRunning = false;
int brightness = 0;
int fadeAmount = 5;
long millisLastFade = 0;

void processNonPrintingEvents()
{
  renard.processInput();


  int renardGlobeValue = renard.channelValue(RENARD_CHANNEL_GLOBE);
  int renardChannelReset = renard.channelValue(RENARD_CHANNEL_RESET);
  int renardSpotlightsValue = renard.channelValue(RENARD_CHANNEL_SPOTLIGHTS);

  writeGammaCorrectedAnalog(PIN_SPOTLIGHTS, renardSpotlightsValue);

  if (renardChannelReset >= 128) {
    isRunning = false;
  }

  if (renardGlobeValue >= 128) {
    digitalWrite(PIN_RELAY_GLOBE, LOW);
  }
  else {
    digitalWrite(PIN_RELAY_GLOBE, HIGH);
  }

  if (digitalRead(PIN_BUTTON_PRESSED) == LOW) {
    if (last == false) {
      //START
      digitalWrite(PIN_MAKEY_MAKEY, LOW);
      isRunning = true;
    }
    last = true;
  }
  else {
    last = false;
    digitalWrite(PIN_MAKEY_MAKEY, HIGH);
  }

  if (isRunning) {
    //Turn the LED in the button off
  }
  else {
    if (millis() > millisLastFade + 30) {
      millisLastFade = millis();

      //Fade the led in the button
      writeGammaCorrectedAnalog(PIN_BUTTON_LIGHT, brightness);

      brightness = brightness + fadeAmount;

      if (brightness <= 0 || brightness >= 255) {
        fadeAmount = -fadeAmount;
      }
    }
  }

}

void loop() {
  processNonPrintingEvents();

  int renardPrinterValue = renard.channelValue(RENARD_CHANNEL_PRINTER);
  if (renardPrinterValue >= 128) {
    print();
  }
}

void print() {

  printer.printBitmap(img_top_width, img_top_height, img_top_data);
  processNonPrintingEvents();

  printer.feed(2);
  processNonPrintingEvents();

  printer.println(getFortune());
  processNonPrintingEvents();

  printer.feed(2);
  processNonPrintingEvents();

  printer.printBitmap(img_bottom_width, img_bottom_height, img_bottom_data);
  processNonPrintingEvents();

  printer.feed(2);
  processNonPrintingEvents();

  printer.print(F("Your lucky numbers are: "));
  processNonPrintingEvents();

  getMeSomeLuckyNumbers();
  sortNumbers(arrayOfLuckyNumbers, LUCKY_NUMBERS_LENGTH);

  for (int i = 0; i < LUCKY_NUMBERS_LENGTH; i++) {
    if (i == LUCKY_NUMBERS_LENGTH - 1) {
      printer.print(F("and "));
    }
    printer.print(arrayOfLuckyNumbers[i]);
    printer.print(F(" "));
    processNonPrintingEvents();
  }
  printer.feed(5);
  processNonPrintingEvents();
  printer.wake(); // MUST wake() before printing again, even if reset
  processNonPrintingEvents();
  printer.setDefault(); // Restore printer to defaults
}

void printerTest() {
  printer.println(F("Arduino Reset!"));

  printer.feed(5);
  printer.wake(); // MUST wake() before printing again, even if reset
  printer.setDefault(); // Restore printer to defaults
}

char * getFortune() {
  char * fortune = strcpy_P(buffer, (char * ) pgm_read_word( & (fortunes[nextFortunePlace]))); // Necessary casts and dereferencing, just copy.
  nextFortunePlace++;
  if (nextFortunePlace >= FORTUNES_LENGTH) {
    //printer.print(nextFortunePlace);  printer.print(F(">=")); printer.print(FORTUNES_LENGTH); printer.println();
    nextFortunePlace = 0;

  }
  return fortune;
}

int getRandomNumber() {
  return random(0, 100);
}

void getMeSomeLuckyNumbers() {
  for (int i = 0; i < LUCKY_NUMBERS_LENGTH; i++) {
    bool duplicate = false;
    do {
      duplicate = false;
      int myRandomNumber = getRandomNumber();
      arrayOfLuckyNumbers[i] = myRandomNumber;
      for (int j = 0; j < i; j++) {
        if (arrayOfLuckyNumbers[j] == myRandomNumber) {
          duplicate = true;
        }
      }
    } while (duplicate);
  }
}

void sortNumbers(int *a, int n)
{
  for (int i = 1; i < n; ++i)
  {
    int j = a[i];
    int k;
    for (k = i - 1; (k >= 0) && (j < a[k]); k--)
    {
      a[k + 1] = a[k];
    }
    a[k + 1] = j;
  }
}

void writeGammaCorrectedAnalog(int pin, int value)
{
  int gammaCorrected = pgm_read_byte(&gamma[value]);
  analogWrite(pin, gammaCorrected);
}
