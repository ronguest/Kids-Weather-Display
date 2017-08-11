//
//  Copyright (C) 2017 Ronald Guest <http://about.me/ronguest>

class Conditions {
  public:
    void setLow(int temperature);
    int getLow();
    void setHigh(int temperature);
    int getHigh();
    void setHumidity(int humidity);
    int getHumidity();
    void setTemperature(int temperature);
    int getTemperature();
    void setPop(char* apop); // Unused, logistics around char * / String handling unclear
    char* getPop();
  protected:
    int lowTemperature;
    int highTemperature;
    int theHumidity;
    char* pop;
    int theTemperature;      // In some cases we only have a current temperature
};
