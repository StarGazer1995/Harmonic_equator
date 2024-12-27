/* ---------------------------------------------------------------------------------------------------------------------------------
 * Extended configuration for OnStepX INFREQUENTLY USED options
 *
 *          For more information on setting OnStep up see http://www.stellarjourney.com/index.php?r=site/equipment_onstep 
 *                      and join the OnStep Groups.io at https://groups.io/g/onstep
 * 
 *           *** Read the compiler warnings and errors, they are there to help guard against invalid configurations ***
 *
 * ---------------------------------------------------------------------------------------------------------------------------------
 * ADJUST THE FOLLOWING TO CONFIGURE YOUR CONTROLLER FEATURES ----------------------------------------------------------------------
 * <-Req'd = always must set, <-Often = usually must set, Option = optional, Adjust = adjust as req'd, Infreq = infrequently changed
*/
//      Parameter Name              Value   Default  Notes                                                                      Hint

// =================================================================================================================================
// CONTROLLER ======================================================================================================================

// DEBUG ---------------------------------------------------------------------------------------------------------------------------
// Enables additional debugging and/or status messages on the specified SERIAL_DEBUG port (be sure to disable when done!)
// Note: The SERIAL_DEBUG port is often (almost always) attached to the same SERIAL_A port so it cannot be used for normal
//       LX200 protocol communications.  If this is the case set both to the same (faster) baud rate specified below.
#define DEBUG                         OFF //    OFF, Use ON for background error messages only, use VERBOSE for all           Infreq
                                          //         error and status messages, use CONSOLE for VT100 debug console,
                                          //         or use PROFILER for VT100 task profiler.
#define DEBUG_SERVO                   OFF //    OFF, n. Where n=1 to 9 as the designated axis for logging servo activity.     Option
#define DEBUG_ECHO_COMMANDS           ON //    OFF, Use ON or ERRORS_ONLY to log commands to the debug serial port.          Option
#define SERIAL_DEBUG               Serial // Serial, Use any available h/w serial port. Serial1 or Serial2, etc.              Option
#define SERIAL_DEBUG_BAUD          9600 // 230400, n. Where n=9600,19200,57600,115200,230400,460800 (common baud rates.)    Option

// ESP32 VIRTUAL SERIAL BLUETOOTH AND IP COMMAND CHANNELS --------------------------------------------------------------------------
#define SERIAL_BT_MODE                SLAVE //    OFF, Use SLAVE to enable the interface (ESP32 only.)                          Option
#define SERIAL_BT_NAME          "OnStepX-DreamLife" //         "OnStepX", Bluetooth device name.                                        Adjust
// #define SERIAL_IP_MODE                WIFI_ACCESS_POINT //    OFF, WIFI_ACCESS_POINT or WIFI_STATION enables interface (ESP32 only.)        Option
// #define MDNS_NAME               "OnStepX-DreamLife" //    "onstepx", mDNS device name.                                                  Adjust
// #define WEB_SERVER                    ON //    OFF, ON enables Webserver (for Website plugin.)                               Option
// #define AP_SSID                       "OnStepX-DreamLife"   
// #define AP_PASSWORD                   "password"

 //#define SERIAL_TMC_HARDWARE_UART
#define DRIVER_TMC_STEPPER

// NON-VOLATILE STORAGE ------------------------------------------------------------------------------------------------------------
#define NV_WIPE                       OFF //         OFF, Causes the defaults to be written back into NV (FLASH,EEPROM,etc.)  Infreq
                                          //              ***     IMPORTANT: ENABLE THIS OPTION THEN UPLOAD, WAIT A MINUTE    ***
// Warning --->                           //              ***     OR TWO THEN SET THIS OPTION TO OFF AND UPLOAD AGAIN.        ***
                                          //              ***     LEAVING THIS OPTION ENABLED CAN CAUSE EXCESSIVE NV          ***
                                          //              ***     WEAR AND DAMAGE THE MICROCONTROLLER NV SUBSYSTEM !!!        ***

// ---------------------------------------------------------------------------------------------------------------------------------
