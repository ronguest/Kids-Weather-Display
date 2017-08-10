/*
 *  Defines key constants for the Weahter Display app
 */

// To keep the Arduino code simple each bit of data is stored in it's own text file
// I believe opening and reading from the SD card is slow. However for a weather display application
// the performance isn't important
#define TemperatureFileName "/mnt/sd/temperature.txt"
#define HumidityFileName "/mnt/sd/humidity.txt"
#define TodaysForecastHighFileName "/mnt/sd/todays_high.txt"
#define TodaysForecastLowFileName "/mnt/sd/todays_low.txt"
#define TodaysForecastPopFileName "/mnt/sd/todays_pop.txt"
#define TodaysForecastConditionsFileName "/mnt/sd/todays_conditions.txt"
#define TomorrowsForecastHighFileName "/mnt/sd/tomorrows_high.txt"
#define TomorrowsForecastLowFileName "/mnt/sd/tomorrows_low.txt"
#define TomorrowsForecastPopFileName "/mnt/sd/tomorrows_pop.txt"
#define TomorrowsForecastConditionsFileName "/mnt/sd/tomorrows_conditions.txt"
//#define CurrentIconFileName "/mnt/sd/current_icon.txt"
//#define TomorrowIconFileName "/mnt/sd/tomorrow_icon.txt"

// Used to set what the bottom area of the screen should display
// Using an enum in case I decide to add more options
enum bottomContent { todayExtras, tomorrow, clothing };
bottomContent bottom = todayExtras;

// This is the size used for the current temperature - it is the largest size used in this sketch
// The size of other text is relative to this size
const int DefaultTextSize = 9;
const int forecastTextSize = 5;
const int extrasTextSize = 3;
const int extrasTextColor = ILI9341_GREEN;

const unsigned long oneMinute = 60L*1000L;   // One minute is how often we check to see if door still open/closed
const int updateMinutes=2;                      // How often to update the display
const int bottomSeconds=5;

// Get a couple of useful metrics on the screen
int tftWidth;
// This is the height in pixels
int tftHeight;
// This is the middle of the screen, used in separator drawing and erasing the bottom of the screen
int tftMiddle;
// Width of the separator line, also how far below the bottom to do the erase
const int separatorWidth = 2;

// We want to use orange text but there is no pre-defined code for that
// But every thing I have tried for Orange is very dim on the screen and not easily readible
#define ORANGE 0xFF8C00

// For the Adafruit shield, these are the default.
#define TFT_DC 9
#define TFT_CS 10

// Use hardware SPI (on Uno, #13, #12, #11) and the above for CS/DC
Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC);

// Global storage for weather conditions
Conditions todayConditions = Conditions();
Conditions tomorrowConditions = Conditions();
int currentTemperature;
int currentHumidity;
String todayPop;
String todayForecastConditions;
String tomorrowPop;
String tomorrowForecastConditions;

Process date;
int hours, minutes, seconds;

void loadData(), loadCurrent(), loadToday(), loadTomorrow();
void displayCurrent(), displayClothes(), displayHeader(String s), displayTodaysForecast(), displayTodaysExtras();
void displayTomorrowsForecast(), displayHumidity(int, int), displayConditions(int, String), getDate();
void eraseBottom(), printIntTemperature(int, int, int);
int pickColor(int), pickPopColor(String);
boolean readFile(File f, String& s);
