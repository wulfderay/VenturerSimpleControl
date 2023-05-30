#include <IRremote.h>

unsigned long VENTURER_UNK_1    = 0x20DF00FF; // cancel when item selected.
unsigned long VENTURER_UNK_2    = 0x20DF807F; // also cancel?
unsigned long VENTURER_UP  = 0x20DFE21D; //up, menu up, channel up.
unsigned long VENTURER_DOWN  = 0x20DF12ED; // DVD DOWN?
unsigned long VENTURER_LEFT = 0x20DF9A65; // DVD resume
unsigned long VENTURER_RIGHT = 0x20DF5AA5; // arrow right
unsigned long VENTURER_OK  = 0x20DF1AE5;  //ok?
unsigned long VENTURER_VOL_UP   = 0x20DF40BF;
unsigned long VENTURER_VOL_DOWN = 0x20DFC03F;
unsigned long VENTURER_MENU     = 0x20DF20DF;
unsigned long VENTURER_MENU_UP  = 0x20DFA25D; // up
unsigned long VENTURER_MENU_DOWN  = 0x20DF629D; // down
unsigned long VENTURER_SLEEP_TIMER = 0x20DF52AD; // sleep timer
unsigned long VENTURER_INPUT_SELECT  = 0x20DFA45B; // Input select!!!!
unsigned long VENTURER_UNK_3    = 0x20DFA05F;
unsigned long VENTURER_UNK_4    = 0x20DF609F;
unsigned long VENTURER_UNK_5    = 0x20DFE01F;
unsigned long VENTURER_ONOFF    = 0x20DF10EF; 
unsigned long VENTURER_MUTE     = 0x20DF906F;
unsigned long VENTURER_UNK_6    = 0x20DF50AF;
unsigned long VENTURER_UNK_7    = 0x20DFD02F;
unsigned long VENTURER_UNK_8    = 0x20DF30CF;
unsigned long VENTURER_UNK_9    = 0x20DFB04F;
unsigned long VENTURER_UNK_10   = 0x20DF708F;
unsigned long VENTURER_UNK_11   = 0x20DFF00F;

unsigned long VENTURER_UNK_1_1  = 0x20DF01FE;
unsigned long VENTURER_UNK_1_2  = 0x20DF817E; 
unsigned long VENTURER_UNK_1_3  = 0x20DF41BE;
unsigned long VENTURER_UNK_1_4  = 0x20DFC13E;
unsigned long VENTURER_UNK_1_5  = 0x20DF21DE;
unsigned long VENTURER_UNK_1_6  = 0x20DFA15E;
unsigned long VENTURER_UNK_1_7  = 0x20DF619E;
unsigned long VENTURER_UNK_1_8  = 0x20DFE11E;
unsigned long VENTURER_UNK_1_9  = 0x20DF11EE; 
unsigned long VENTURER_UNK_1_10 = 0x20DF916E;
unsigned long VENTURER_UNK_1_11 = 0x20DF51AE;
unsigned long VENTURER_UNK_1_12 = 0x20DFD12E;
unsigned long VENTURER_UNK_1_13 = 0x20DF31CE;
unsigned long VENTURER_UNK_1_14 = 0x20DFB14E;
unsigned long VENTURER_UNK_1_15 = 0x20DF718E;
unsigned long VENTURER_UNK_1_16 = 0x20DFF10E;

unsigned long VENTURER_UNK_2_1  = 0x20DF02FD; //cc
unsigned long VENTURER_UNK_2_2  = 0x20DF827D; 
unsigned long VENTURER_UNK_2_3  = 0x20DF42BD;
unsigned long VENTURER_UNK_2_4  = 0x20DFC23D;
unsigned long VENTURER_UNK_2_5  = 0x20DF22DD; 
unsigned long VENTURER_UNK_2_6  = 0x20DFA25D; // up
unsigned long VENTURER_UNK_2_7  = 0x20DF629D; // down

unsigned long VENTURER_UNK_2_10 = 0x20DF926D;
unsigned long VENTURER_UNK_2_11 = 0x20DF52AD; // sleep timer
unsigned long VENTURER_UNK_2_12 = 0x20DFD22D;
unsigned long VENTURER_UNK_2_13 = 0x20DF32CD; // DVD root
unsigned long VENTURER_UNK_2_14 = 0x20DFB24D;
unsigned long VENTURER_UNK_2_15 = 0x20DF728D;
unsigned long VENTURER_UNK_2_16 = 0x20DFF20D; // DVD sound?

unsigned long VENTURER_UNK_3_1  = 0x20DF03FC;
unsigned long VENTURER_UNK_3_2  = 0x20DF837C; 
unsigned long VENTURER_UNK_3_3  = 0x20DF43BC;
unsigned long VENTURER_UNK_3_4  = 0x20DFC33C;
unsigned long VENTURER_UNK_3_5  = 0x20DF23DC;
unsigned long VENTURER_UNK_3_6  = 0x20DFA35C;
unsigned long VENTURER_UNK_3_7  = 0x20DF639C;
unsigned long VENTURER_UNK_3_8  = 0x20DFE31C;
unsigned long VENTURER_UNK_3_9  = 0x20DF13EC; 
unsigned long VENTURER_UNK_3_10 = 0x20DF936C;
unsigned long VENTURER_UNK_3_11 = 0x20DF53AC;
unsigned long VENTURER_UNK_3_12 = 0x20DFD32C;
unsigned long VENTURER_UNK_3_13 = 0x20DF33CC;
unsigned long VENTURER_UNK_3_14 = 0x20DFB34C;
unsigned long VENTURER_UNK_3_15 = 0x20DF738C;
unsigned long VENTURER_UNK_3_16 = 0x20DFF30C;

unsigned long VENTURER_UNK_4_1  = 0x20DF04FB; 
unsigned long VENTURER_UNK_4_2  = 0x20DF847B; // dvd program
unsigned long VENTURER_UNK_4_3  = 0x20DF44BB;
unsigned long VENTURER_UNK_4_4  = 0x20DFC43B;
unsigned long VENTURER_UNK_4_5  = 0x20DF24DB;
unsigned long VENTURER_UNK_4_6  = 0x20DFA45B; // Input select!!!!
unsigned long VENTURER_UNK_4_7  = 0x20DF649B; // dvd program?
unsigned long VENTURER_UNK_4_8  = 0x20DFE41B; // sound mode
unsigned long VENTURER_UNK_4_9  = 0x20DF14EB; 
unsigned long VENTURER_UNK_4_10 = 0x20DF946B;
unsigned long VENTURER_UNK_4_11 = 0x20DF54AB;
unsigned long VENTURER_UNK_4_12 = 0x20DFD42B;
unsigned long VENTURER_UNK_4_13 = 0x20DF34CB;
unsigned long VENTURER_UNK_4_14 = 0x20DFB44B;
unsigned long VENTURER_UNK_4_15 = 0x20DF748B;
unsigned long VENTURER_UNK_4_16 = 0x20DFF40B;

unsigned long VENTURER_UNK_5_1  = 0x20DF05FA;
unsigned long VENTURER_UNK_5_2  = 0x20DF857A; 
unsigned long VENTURER_UNK_5_3  = 0x20DF45BA;
unsigned long VENTURER_UNK_5_4  = 0x20DFC53A;
unsigned long VENTURER_UNK_5_5  = 0x20DF25DA;
unsigned long VENTURER_UNK_5_6  = 0x20DFA55A;
unsigned long VENTURER_UNK_5_7  = 0x20DF659A;
unsigned long VENTURER_UNK_5_8  = 0x20DFE51A;
unsigned long VENTURER_UNK_5_9  = 0x20DF15EA; 
unsigned long VENTURER_UNK_5_10 = 0x20DF956A;
unsigned long VENTURER_UNK_5_11 = 0x20DF55AA;
unsigned long VENTURER_UNK_5_12 = 0x20DFD52A;
unsigned long VENTURER_UNK_5_13 = 0x20DF35CA;
unsigned long VENTURER_UNK_5_14 = 0x20DFB54A;
unsigned long VENTURER_UNK_5_15 = 0x20DF758A;
unsigned long VENTURER_UNK_5_16 = 0x20DFF50A;

unsigned long VENTURER_UNK_6_1  = 0x20DF06F9;
unsigned long VENTURER_UNK_6_2  = 0x20DF8679;  // DVD input Select
unsigned long VENTURER_UNK_6_3  = 0x20DF46B9; // dvd chapter?
unsigned long VENTURER_UNK_6_4  = 0x20DFC639;
unsigned long VENTURER_UNK_6_5  = 0x20DF26D9; // dvd 1/2 speed
unsigned long VENTURER_UNK_6_6  = 0x20DFA659; // sound mode?
unsigned long VENTURER_UNK_6_7  = 0x20DF6699; // dvd reset?
unsigned long VENTURER_UNK_6_8  = 0x20DFE619; 
unsigned long VENTURER_UNK_6_9  = 0x20DF16E9; 
unsigned long VENTURER_UNK_6_10 = 0x20DF9669;
unsigned long VENTURER_UNK_6_11 = 0x20DF56A9; // tv mode
unsigned long VENTURER_UNK_6_12 = 0x20DFD629; // YUV mode ?
unsigned long VENTURER_UNK_6_13 = 0x20DF36C9; // yuv mode?
unsigned long VENTURER_UNK_6_14 = 0x20DFB649;
unsigned long VENTURER_UNK_6_15 = 0x20DF7689;
unsigned long VENTURER_UNK_6_16 = 0x20DFF609; // AV/SVideo

unsigned long VENTURER_UNK_7_1  = 0x20DF07F8;
unsigned long VENTURER_UNK_7_2  = 0x20DF8778; 
unsigned long VENTURER_UNK_7_3  = 0x20DF47B8;
unsigned long VENTURER_UNK_7_4  = 0x20DFC738;
unsigned long VENTURER_UNK_7_5  = 0x20DF27D8;
unsigned long VENTURER_UNK_7_6  = 0x20DFA758;
unsigned long VENTURER_UNK_7_7  = 0x20DF6798;
unsigned long VENTURER_UNK_7_8  = 0x20DFE718;
unsigned long VENTURER_UNK_7_9  = 0x20DF17E8; 
unsigned long VENTURER_UNK_7_10 = 0x20DF9768;
unsigned long VENTURER_UNK_7_11 = 0x20DF57A8;
unsigned long VENTURER_UNK_7_12 = 0x20DFD728;
unsigned long VENTURER_UNK_7_13 = 0x20DF37C8;
unsigned long VENTURER_UNK_7_14 = 0x20DFB748;
unsigned long VENTURER_UNK_7_15 = 0x20DF7788;
unsigned long VENTURER_UNK_7_16 = 0x20DFF708;

unsigned long VENTURER_0  = 0x20DF08F7;
unsigned long VENTURER_1  = 0x20DF8877; 
unsigned long VENTURER_2  = 0x20DF48B7;
unsigned long VENTURER_3  = 0x20DFC837;
unsigned long VENTURER_4  = 0x20DF28D7;
unsigned long VENTURER_5  = 0x20DFA857;
unsigned long VENTURER_6  = 0x20DF6897;
unsigned long VENTURER_7  = 0x20DFE817;
unsigned long VENTURER_8  = 0x20DF18E7; 
unsigned long VENTURER_9 = 0x20DF9867;
unsigned long VENTURER_UNK_8_11 = 0x20DF58A7; //possibly ok.
unsigned long VENTURER_UNK_8_12 = 0x20DFD827;
unsigned long VENTURER_UNK_8_13 = 0x20DF38C7;
unsigned long VENTURER_UNK_8_14 = 0x20DFB847;
unsigned long VENTURER_UNK_8_15 = 0x20DF7887;
unsigned long VENTURER_UNK_8_16 = 0x20DFF807;

unsigned long VENTURER_UNK_9_1  = 0x20DF09F6;
unsigned long VENTURER_UNK_9_2  = 0x20DF8976; 
unsigned long VENTURER_UNK_9_3  = 0x20DF49B6;
unsigned long VENTURER_UNK_9_4  = 0x20DFC936;
unsigned long VENTURER_UNK_9_5  = 0x20DF29D6;
unsigned long VENTURER_UNK_9_6  = 0x20DFA956;
unsigned long VENTURER_UNK_9_7  = 0x20DF6996;
unsigned long VENTURER_UNK_9_8  = 0x20DFE916;
unsigned long VENTURER_UNK_9_9  = 0x20DF19E6; 
unsigned long VENTURER_UNK_9_10 = 0x20DF9966;
unsigned long VENTURER_UNK_9_11 = 0x20DF59A6;
unsigned long VENTURER_UNK_9_12 = 0x20DFD926;
unsigned long VENTURER_UNK_9_13 = 0x20DF39C6;
unsigned long VENTURER_UNK_9_14 = 0x20DFB946;
unsigned long VENTURER_UNK_9_15 = 0x20DF7986;
unsigned long VENTURER_UNK_9_16 = 0x20DFF906;

unsigned long VENTURER_UNK_A_1  = 0x20DF0AF5;
unsigned long VENTURER_UNK_A_2  = 0x20DF8A75; 
unsigned long VENTURER_UNK_A_3  = 0x20DF4AB5;
unsigned long VENTURER_UNK_A_4  = 0x20DFCA35;
unsigned long VENTURER_UNK_A_5  = 0x20DF2AD5;
unsigned long VENTURER_UNK_A_6  = 0x20DFAA55;
unsigned long VENTURER_UNK_A_7  = 0x20DF6A95; // dvd settings menu
unsigned long VENTURER_UNK_A_8  = 0x20DFEA15;


unsigned long VENTURER_UNK_A_12 = 0x20DFDA25;
unsigned long VENTURER_UNK_A_13 = 0x20DF3AC5; // "Full"
unsigned long VENTURER_UNK_A_14 = 0x20DFBA45;
unsigned long VENTURER_UNK_A_15 = 0x20DF7A85;
unsigned long VENTURER_UNK_A_16 = 0x20DFFA05;

unsigned long VENTURER_UNK_B_1  = 0x20DF0BF4;
unsigned long VENTURER_UNK_B_2  = 0x20DF8B74; 
unsigned long VENTURER_UNK_B_3  = 0x20DF4BB4;
unsigned long VENTURER_UNK_B_4  = 0x20DFCB34;
unsigned long VENTURER_UNK_B_5  = 0x20DF2BD4;
unsigned long VENTURER_UNK_B_6  = 0x20DFAB54;
unsigned long VENTURER_UNK_B_7  = 0x20DF6B94;
unsigned long VENTURER_UNK_B_8  = 0x20DFEB14;
unsigned long VENTURER_UNK_B_9  = 0x20DF1BE4; 
unsigned long VENTURER_UNK_B_10 = 0x20DF9B64;
unsigned long VENTURER_UNK_B_11 = 0x20DF5BA4;
unsigned long VENTURER_UNK_B_12 = 0x20DFDB24;
unsigned long VENTURER_UNK_B_13 = 0x20DF3BC4;
unsigned long VENTURER_UNK_B_14 = 0x20DFBB44;
unsigned long VENTURER_UNK_B_15 = 0x20DF7B84;
unsigned long VENTURER_UNK_B_16 = 0x20DFFB04;

unsigned long VENTURER_UNK_C_1  = 0x20DF0CF3; //Freverse
unsigned long VENTURER_UNK_C_2  = 0x20DF8C73; // FF
unsigned long VENTURER_UNK_C_3  = 0x20DF4CB3;
unsigned long VENTURER_UNK_C_4  = 0x20DFCC33;
unsigned long VENTURER_UNK_C_5  = 0x20DF2CD3;
unsigned long VENTURER_UNK_C_6  = 0x20DFAC53;
unsigned long VENTURER_UNK_C_7  = 0x20DF6C93;
unsigned long VENTURER_UNK_C_8  = 0x20DFEC13;
unsigned long VENTURER_UNK_C_9  = 0x20DF1CE3; 
unsigned long VENTURER_UNK_C_10 = 0x20DF9C63;// Stop
unsigned long VENTURER_UNK_C_11 = 0x20DF5CA3; //Ttle bar /video info
unsigned long VENTURER_UNK_C_12 = 0x20DFDC23; 
unsigned long VENTURER_UNK_C_13 = 0x20DF3CC3; 
unsigned long VENTURER_UNK_C_14 = 0x20DFBC43;
unsigned long VENTURER_UNK_C_15 = 0x20DF7C83;
unsigned long VENTURER_UNK_C_16 = 0x20DFFC03;

unsigned long VENTURER_UNK_D_1  = 0x20DF0DF2; // maybe ok/enter
unsigned long VENTURER_UNK_D_2  = 0x20DF8D72; 
unsigned long VENTURER_UNK_D_3  = 0x20DF4DB2;
unsigned long VENTURER_UNK_D_4  = 0x20DFCD32;
unsigned long VENTURER_UNK_D_5  = 0x20DF2DD2;
unsigned long VENTURER_UNK_D_6  = 0x20DFAD52;
unsigned long VENTURER_UNK_D_7  = 0x20DF6D92;
unsigned long VENTURER_UNK_D_8  = 0x20DFED12;
unsigned long VENTURER_UNK_D_9  = 0x20DF1DE2; 
unsigned long VENTURER_UNK_D_10 = 0x20DF9D62;
unsigned long VENTURER_UNK_D_11 = 0x20DF5DA2;
unsigned long VENTURER_UNK_D_12 = 0x20DFDD22;
unsigned long VENTURER_UNK_D_13 = 0x20DF3DC2;
unsigned long VENTURER_UNK_D_14 = 0x20DFBD42;
unsigned long VENTURER_UNK_D_15 = 0x20DF7D82;
unsigned long VENTURER_UNK_D_16 = 0x20DFFD02;

unsigned long VENTURER_UNK_E_1  = 0x20DF0EF1;
unsigned long VENTURER_UNK_E_2  = 0x20DF8E71; 
unsigned long VENTURER_UNK_E_3  = 0x20DF4EB1;
unsigned long VENTURER_UNK_E_4  = 0x20DFCE31;
unsigned long VENTURER_UNK_E_5  = 0x20DF2ED1;
unsigned long VENTURER_UNK_E_6  = 0x20DFAE51;
unsigned long VENTURER_UNK_E_7  = 0x20DF6E91;
unsigned long VENTURER_UNK_E_8  = 0x20DFEE11;
unsigned long VENTURER_UNK_E_9  = 0x20DF1EE1; 
unsigned long VENTURER_UNK_E_10 = 0x20DF9E61;
unsigned long VENTURER_UNK_E_11 = 0x20DF5EA1;
unsigned long VENTURER_UNK_E_12 = 0x20DFDE21;
unsigned long VENTURER_UNK_E_13 = 0x20DF3EC1;
unsigned long VENTURER_UNK_E_14 = 0x20DFBE41;
unsigned long VENTURER_UNK_E_15 = 0x20DF7E81;
unsigned long VENTURER_UNK_E_16 = 0x20DFFE01;

unsigned long VENTURER_UNK_F_1  = 0x20DF0FF0;
unsigned long VENTURER_UNK_F_2  = 0x20DF8F70; 
unsigned long VENTURER_UNK_F_3  = 0x20DF4FB0;
unsigned long VENTURER_UNK_F_4  = 0x20DFCF30;
unsigned long VENTURER_UNK_F_5  = 0x20DF2FD0;
unsigned long VENTURER_UNK_F_6  = 0x20DFAF50;
unsigned long VENTURER_UNK_F_7  = 0x20DF6F90;
unsigned long VENTURER_UNK_F_8  = 0x20DFEF10;
unsigned long VENTURER_UNK_F_9  = 0x20DF1FE0; 
unsigned long VENTURER_UNK_F_10 = 0x20DF9F60;
unsigned long VENTURER_UNK_F_11 = 0x20DF5FA0;
unsigned long VENTURER_UNK_F_12 = 0x20DFDF20;
unsigned long VENTURER_UNK_F_13 = 0x20DF3FC0;
unsigned long VENTURER_UNK_F_14 = 0x20DFBF40;
unsigned long VENTURER_UNK_F_15 = 0x20DF7F80;
unsigned long VENTURER_UNK_F_16 = 0x20DFFF00;



unsigned long VENTURER_SND_TYPE = 0x20DFA659;

unsigned long VENTURER_TV_CC    = 0x20DF02FD;

unsigned long VENTURER_TV_0     = 0x20DF08F7;
unsigned long VENTURER_TV_1     = 0x20DF8877;   //1st byte is address 5th nybble is number in little-endian. 6th nybble seems to be category
unsigned long VENTURER_TV_2     = 0x20DF48B7;
unsigned long VENTURER_TV_3     = 0x20DFC837;
unsigned long VENTURER_TV_4     = 0x20DF28D7;
unsigned long VENTURER_TV_5     = 0x20DFA857;
unsigned long VENTURER_TV_6     = 0x20DF6897;
unsigned long VENTURER_TV_7     = 0x20DFE817;
unsigned long VENTURER_TV_8     = 0x20DF18E7;
unsigned long VENTURER_TV_9     = 0x20DF9867;

unsigned long VENTURER_TV_BACK  = 0x20DF58A7;




int POWER_BUTTON_PIN = 12;
int INPUT_BUTTON_PIN = 10;
int STATUS_PIN = 13;
int incomingByte = 0; // for incoming serial data

IRsend irsend;

decode_results results;

void setup()
{
  Serial.begin(9600);
  pinMode(POWER_BUTTON_PIN, INPUT);
  pinMode(INPUT_BUTTON_PIN, INPUT);
  pinMode(STATUS_PIN, OUTPUT);
}




void loop() {
  // If button pressed, send the code.
  int powerButtonState = digitalRead(POWER_BUTTON_PIN);
  
  int inputButtonState = digitalRead(INPUT_BUTTON_PIN);
 
  if (powerButtonState) {
    
    SendIR(VENTURER_ONOFF);
    /*Serial.print("Power pressed, sending ");
    digitalWrite(STATUS_PIN, HIGH);
    Serial.println(VENTURER_ONOFF, HEX);
    irsend.sendNEC(VENTURER_ONOFF, 32);
    digitalWrite(STATUS_PIN, LOW);
    delay(50); // Wait a bit between retransmissions
    */
  } 
  else if (inputButtonState) {
    SendIR(VENTURER_INPUT_SELECT);
   /* Serial.print("Input pressed, sending ");
    digitalWrite(STATUS_PIN, HIGH);
    Serial.println(VENTURER_INPUT_SELECT, HEX);
    irsend.sendNEC(VENTURER_INPUT_SELECT, 32);
    digitalWrite(STATUS_PIN, LOW);
    delay(50); // Wait a bit between retransmissions
    */
  } 

  char input[10];
  int charsRead;
  unsigned long val = 0;
  
  if (Serial.available() > 0) {
    charsRead = Serial.readBytesUntil('\n', input, 9);  // fetch the two characters
    
    input[charsRead] = '\0';                            // Make it a string
    if ( strcmp("help",input) == 0)
    {
      PrintHelp();
    }
    else if ( strcmp("ok",input) == 0 || strcmp("exit",input) == 0)
    {
      SendIR(VENTURER_OK);
    }
    else if ( strcmp("up",input) == 0)
    {
      SendIR(VENTURER_UP);
    }
    else if ( strcmp("down",input) == 0)
    {
      SendIR(VENTURER_DOWN);
    }
    else if ( strcmp("left",input) == 0)
    {
      SendIR(VENTURER_LEFT);
    }
    else if ( strcmp("right",input) == 0)
    {
      SendIR(VENTURER_RIGHT);
    }
    else if ( strcmp("menu",input) == 0)
    {
      SendIR(VENTURER_MENU);
    }
    else if ( strcmp("input",input) == 0)
    {
      SendIR(VENTURER_INPUT_SELECT);
    }
    else if ( strcmp("power",input) == 0)
    {
      SendIR(VENTURER_ONOFF);
    }
    else if ( strcmp("0",input) == 0)
    {
      SendIR(VENTURER_0);
    }
    else if ( strcmp("1",input) == 0)
    {
      SendIR(VENTURER_1);
    }
    else if ( strcmp("2",input) == 0)
    {
      SendIR(VENTURER_2);
    }
    else if ( strcmp("3",input) == 0)
    {
      SendIR(VENTURER_3);
    }
    else if ( strcmp("4",input) == 0)
    {
      SendIR(VENTURER_4);
    }
    else if ( strcmp("5",input) == 0)
    {
      SendIR(VENTURER_5);
    }
    else if ( strcmp("6",input) == 0)
    {
      SendIR(VENTURER_6);
    }
    else if ( strcmp("7",input) == 0)
    {
      SendIR(VENTURER_7);
    }
    else if ( strcmp("8",input) == 0)
    {
      SendIR(VENTURER_8);
    }
    else if ( strcmp("9",input) == 0)
    {
      SendIR(VENTURER_9);
    }
    else if ( strcmp("vup",input) == 0)
    {
      SendIR(VENTURER_VOL_UP);
    }
    else if ( strcmp("vdown",input) == 0)
    {
      SendIR(VENTURER_VOL_DOWN);
    }
    else
    {
      //if (input[0] == 'x')
      val = StrToHex(input);                              // Convert it
  
      if (val > 0)
      {
        SendIR(val);
      }
      else
      {
        Serial.print("Unknown command. Ignoring.\n");
        PrintHelp();
      }
    }
  }
}


unsigned long StrToHex(char str[])
{
  return strtol(str, 0, 16);
}

void SendIR(unsigned long val)
{
  Serial.print("Sending ");
    digitalWrite(STATUS_PIN, HIGH);
    Serial.println(val, HEX);
    irsend.sendNEC(val, 32);
    digitalWrite(STATUS_PIN, LOW);
    delay(50); // Wait a bit between retransmissions
}

void PrintHelp()
{
  Serial.println("The following commands are supported: up,down,left,right,vup,vdown,menu,input,power,ok,help");
  Serial.println("Additionally you can specify 32bit hex values to be output via NEC IR protocol (40khz)");
}
