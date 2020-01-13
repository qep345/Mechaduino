
#ifndef __CONFIGURATION_H__
#define __CONFIGURATION_H__
#include <Arduino.h>


#if defined(__SAMD51__)
#define SerialUSB Serial
#endif

//-------------------------------------------------- Identifier -------------------------------------------------
//---------------------------------------------------------------------------------------------------------------

// string to identify the mechaduino with the Serial monitor
extern String identifier;



//---------------------------------------------- Hardware Section ----------------------------------------------
//---------------------------------------------------------------------------------------------------------------

// max current per coil 2000 mA for A4954 driver should be lower (thermal conditions)
extern int iMAX;

// max current per coil 2000 mA for A4954 driver should be lower (thermal conditions)
extern int iPEAK;
extern int tPEAK;
extern int tDEAD;


//uncomment this if you want to use a enable pin
extern int USE_ENABLE_PIN;

// microstepping setting for step input
extern int microstepping;

// fullsteps for 360 degrees
extern int steps_per_revolution;

// mm per revolution
extern int mm_rev;

// max error in mm, if the error gets bigger the led turns off
extern float error_led_value;

//uncomment this to invert your motor direction
extern int INVERT;




//------------------------------------------------ Motor Section ------------------------------------------------
//---------------------------------------------------------------------------------------------------------------
// max moment in Nm
extern float M_max;

// rated current for max moment in mA
extern int I_rated;


//----- Coil calibrtaions---------
extern int16_t gainCoilA;
extern int16_t gainCoilB;


//---------------------------------------------- Controller Section ----------------------------------------------
//---------------------------------------------------------------------------------------------------------------

//---- PID Values current control -----

extern float Kp;
extern float Ki;
extern float Kd;

extern float Kff;
extern float Kacc;
extern float Kb;

//----------------------------------------------- Filter  Section -----------------------------------------------
//---------------------------------------------------------------------------------------------------------------
// break frequency in hertz for the error filter
extern int error_LPF;




//----------------------------------------------- Internal Section ----------------------------------------------
//------------------------------------------------- don't change ------------------------------------------------
// baudrate speed bit/s
#define baudrate 250000

// frequency of the PID loop change only if you know what you're doing
#define FPID 5000
#define Fs (5*FPID)
#endif