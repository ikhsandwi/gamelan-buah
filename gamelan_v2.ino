#include <MIDI.h>
//MIDI_CREATE_DEFAULT_INSTANCE();
#define LED 13           // LED pin on Arduino Uno
int i=0;
int a[16]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int batas=5,state=0,waktu=10;
int note2 = 0;
//int gem=13;
int flag;
int dx=100;

void setup()
{
    MIDI.begin();   
         Serial.begin(115200);
       //Serial.begin(9600);
    //pinMode(gem,OUTPUT);
    
}

void loop()
{
  midimusik1();
}

void ofData()
{
        MIDI.sendNoteOff(0x40,0,1); 
        MIDI.sendNoteOff(0x3C,0,1);   
        MIDI.sendNoteOff(0x3B,0,1);  
        MIDI.sendNoteOff(0x39,0,1); 
        MIDI.sendNoteOff(0x37,0,1); 
        MIDI.sendNoteOff(0x35,0,1);   
        MIDI.sendNoteOff(0x34,0,1);   
        MIDI.sendNoteOff(0x30,0,1);  
}


void midimusik1()
{
       a[1]=analogRead(A12);
       a[2]=analogRead(A13);
       a[3]=analogRead(A14);
       a[4]=analogRead(A15);
       a[5]=analogRead(A6);
       a[6]=analogRead(A7);
       a[7]=analogRead(A8);
       a[8]=analogRead(A9);
       a[9]=analogRead(A10);
       a[10]=analogRead(A11);
       a[11]=analogRead(A0);
       a[12]=analogRead(A1);
       a[13]=analogRead(A2);
       a[14]=analogRead(A3);
       a[15]=analogRead(A4);
       a[16]=analogRead(A5);
      //Serial.println(a[1]);
      //delay(1000);
      if(a[1]<=batas)
       {
         flag=1;
         MIDI.sendNoteOn(0x30,127,1); 
         delay(waktu);
         MIDI.sendNoteOff(0x30,0,1);
         while(flag==1)
         {
           flag=0;
           for(int x=0;x<dx;x++)
           {
             a[1]=analogRead(A12);
             if(a[1]==batas)
               flag=1;
           }
         }
       }
     
       else if(a[2]<=batas)
       {
         flag=1;
         MIDI.sendNoteOn(0x32,127,1); 
         delay(waktu);
         MIDI.sendNoteOff(0x32,0,1);
         while(flag==1)
         {
           flag=0;
           for(int x=0;x<dx;x++)
           {
             a[2]=analogRead(A13);
             if(a[2]==batas)
               flag=1;
           }
         }   
       }
        else if(a[3]<=batas)
       {
         flag=1;
         MIDI.sendNoteOn(0x34,127,1); 
         delay(waktu);
         MIDI.sendNoteOff(0x34,0,1);
         while(flag==1)
         {
           flag=0;
           for(int x=0;x<dx;x++)
           {
             a[3]=analogRead(A14);
             if(a[3]==batas)
               flag=1;
           }
         }
       }
        else if(a[4]<=batas)
       {
         flag=1;
         MIDI.sendNoteOn(0x35,127,1); 
         delay(waktu);
         MIDI.sendNoteOff(0x35,0,1);
         while(flag==1)
         {
           flag=0;
           for(int x=0;x<dx;x++)
           {
             a[4]=analogRead(A15);
             if(a[4]==batas)
               flag=1;
           }
         }   
       }
       else if(a[5]<=batas)
       {
         flag=1;
         MIDI.sendNoteOn(0x37,127,1); 
         delay(waktu);
         MIDI.sendNoteOff(0x37,0,1);
         while(flag==1)
         {
           flag=0;
           for(int x=0;x<dx;x++)
           {
             a[5]=analogRead(A6);
             if(a[5]==batas)
               flag=1;
           }
         }   
       }
        else if(a[6]<=batas)
       {
         flag=1;
         MIDI.sendNoteOn(0x39,127,1); 
         delay(waktu);
         MIDI.sendNoteOff(0x39,0,1);
         while(flag==1)
         {
           flag=0;
           for(int x=0;x<dx;x++)
           {
             a[6]=analogRead(A7);
             if(a[6]==batas)
               flag=1;
           }
         }   
       }
        else if(a[7]<=batas)
       {
         flag=1;
         MIDI.sendNoteOn(0x3B,127,1); 
         delay(waktu);
         MIDI.sendNoteOff(0x3B,0,1);
         while(flag==1)
         {
           flag=0;
           for(int x=0;x<dx;x++)
           {
             a[7]=analogRead(A8);
             if(a[7]==batas)
               flag=1;
           }
         }  
       }
        else if(a[8]<=batas)
       {
         flag=1;
         MIDI.sendNoteOn(0x3C,127,1); 
         delay(waktu);
         MIDI.sendNoteOff(0x3C,0,1);
         while(flag==1)
         {
           flag=0;
           for(int x=0;x<dx;x++)
           {
             a[8]=analogRead(A9);
             if(a[8]==batas)
               flag=1;
           }
         }  
       }
       else if(a[9]<=batas)
       {
         flag=1;
         MIDI.sendNoteOn(0x3C,127,1); 
         delay(waktu);
         MIDI.sendNoteOff(0x3C,0,1);
         while(flag==1)
         {
           flag=0;
           for(int x=0;x<dx;x++)
           {
             a[9]=analogRead(A10);
             if(a[9]==batas)
               flag=1;
           }
         }  
       }
       else if(a[10]<=batas)
       {
         flag=1;
         MIDI.sendNoteOn(0x3E,127,1); 
         delay(waktu);
         MIDI.sendNoteOff(0x3E,0,1);
         while(flag==1)
         {
           flag=0;
           for(int x=0;x<dx;x++)
           {
             a[10]=analogRead(A11);
             if(a[10]==batas)
               flag=1;
           }
         }  
       }
       else if(a[11]<=batas)
       {
         flag=1;
         MIDI.sendNoteOn(0x40,127,1); 
         delay(waktu);
         MIDI.sendNoteOff(0x40,0,1);
         while(flag==1)
         {
           flag=0;
           for(int x=0;x<dx;x++)
           {
             a[11]=analogRead(A0);
             if(a[11]==batas)
               flag=1;
           }
         }  
       }
       else if(a[12]<=batas)
       {
         flag=1;
         MIDI.sendNoteOn(0x41,127,1); 
         delay(waktu);
         MIDI.sendNoteOff(0x41,0,1);
         while(flag==1)
         {
           flag=0;
           for(int x=0;x<dx;x++)
           {
             a[12]=analogRead(A1);
             if(a[12]==batas)
               flag=1;
           }
         }  
       }
       else if(a[13]<=batas)
       {
         flag=1;
         MIDI.sendNoteOn(0x43,127,1); 
         delay(waktu);
         MIDI.sendNoteOff(0x43,0,1);
         while(flag==1)
         {
           flag=0;
           for(int x=0;x<dx;x++)
           {
             a[13]=analogRead(A2);
             if(a[13]==batas)
               flag=1;
           }
         }  
       }
       else if(a[14]<=batas)
       {
         flag=1;
         MIDI.sendNoteOn(0x45,127,1); 
         delay(waktu);
         MIDI.sendNoteOff(0x45,0,1);
         while(flag==1)
         {
           flag=0;
           for(int x=0;x<dx;x++)
           {
             a[14]=analogRead(A3);
             if(a[14]==batas)
               flag=1;
           }
         }  
       }
       else if(a[15]<=batas)
       {
         flag=1;
         MIDI.sendNoteOn(0x47,127,1); 
         delay(waktu);
         MIDI.sendNoteOff(0x47,0,1);
         while(flag==1)
         {
           flag=0;
           for(int x=0;x<dx;x++)
           {
             a[15]=analogRead(A4);
             if(a[15]==batas)
               flag=1;
           }
         }  
       }
       else if(a[16]<=batas)
       {
         flag=1;
         MIDI.sendNoteOn(0x48,127,1); 
         delay(waktu);
         MIDI.sendNoteOff(0x48,0,1);
         while(flag==1)
         {
           flag=0;
           for(int x=0;x<dx;x++)
           {
             a[16]=analogRead(A5);
             if(a[16]==batas)
               flag=1;
           }
         }  
       }
   delay(10);
   
}


