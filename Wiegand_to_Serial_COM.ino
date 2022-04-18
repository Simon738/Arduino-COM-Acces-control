#include <WiegandMega2560.h>

#define FALSE 0			
#define TRUE  1	


WIEGAND wg;

void setup() {
	Serial.begin(9600);  
	wg.begin(TRUE, TRUE, FALSE);  // wg.begin(GateA , GateB, GateC) el dos es 20 y 21
}

void loop() {
	if(wg.available())
	{
		Serial.print("INI");
    Serial.print(wg.getGateActive());		
    Serial.print(";");
    Serial.print(wg.getCode());
    Serial.println(";FIN");    
   	}
}
