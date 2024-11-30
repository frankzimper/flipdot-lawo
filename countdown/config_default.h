// Replace with your network details
const char* ssid     = "YOUR SSID";
const char* password = "YOUR WIFI PASSWORD";

struct Event {
  long timeBegin;
  long timeEnd;
  String text1;
  String text2;
  String text3;
};

// Timestamps ermitteln bspw. mit Python:
// from datetime import datetime
// datetime(2024, 12, 24, 0, 0, 0, 0).timestamp()

#define EVENTDATA { \
  { \
    1703444400, 1703703600, \
    "   bis Weihnachten   ", \
    "    Wir wuenschen    ", \
    "  Frohe Weihnachten  "\
  }, \
  { \
    1704063600, 1704322800, \
    "     bis Neujahr     ", \
    "    Wir wuenschen    ", \
    "ein gutes Neues Jahr!" \
  }, \
  { \
    1800000000, 1800003600, \
    "      bis Dings!     ", \
    "    Wir wuenschen    ", \
    "ein gutes Neues Jahr!" \
  } \
}

Event events[3] = EVENTDATA;
