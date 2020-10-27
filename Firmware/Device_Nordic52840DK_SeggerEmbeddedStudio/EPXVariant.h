#pragma once

#ifdef SI2SPARKLET
	#ifdef DISPLAYTYPE_EMOTICONWS2812
		#define EPX_DEVICEMODEL			"SI2Sprklt64mmEP10"
		#define DISPLAYARRAY_WIDTH		18
		#define DISPLAYARRAY_HEIGHT		18
		#define VARIANT_NUMTRIGGERGPIOS 13
	#elif DISPLAYTYPE_EMOTICONWS2812_MINI
		#define EPX_DEVICEMODEL			"SI2Sprklt50mmEP10"
		#define DISPLAYARRAY_WIDTH		14
		#define DISPLAYARRAY_HEIGHT		14
	#endif

	#define BLE_DEFAULT_DEVICE_NAME "SI2Sprklt"                               /**< Name of device. Will be included in the advertising data. */

	//#define VARIANTCAPABILITY_BEACONACTIVATION
	#define VARIANTCAPABILITY_STORAGE
	#define VARIANTCAPABILITY_PREVIEW
	#define VARIANTCAPABILITY_SECURITY
	#define VARIANTCAPABILITY_DFU
	#define VARIANTCAPABILITY_BATTERY_MONITORING
        #define VARIANTDISPLAYDRIVER_I2SWS2812

	#define NORDIC_PIN_MAP(port, pin) (((port) << 5) | ((pin) & 0x1F))
	#define GPIO_PIN_STATUSLED		13
	#define DISPLAYARRAY_DATAPIN	NORDIC_PIN_MAP(1, 07)
	#define DISPLAYARRAY_CLOCKPIN	20
	#define DISPLAYARRAY_POWERPIN	21

	#define GPIO_PIN_BOOSTER_ENABLE	7

	#define GPIO_PIN_FLASHRAM_CS	22
	#define GPIO_PIN_FLASHRAM_MISO	24
	#define GPIO_PIN_FLASHRAM_SCLK	25
	#define GPIO_PIN_FLASHRAM_MOSI	23

	#define GPIO_PIN_QICHARGING		5
	#define GPIO_PIN_3V3_ACCEN		11
	#define GPIO_PIN_FEATURE		NORDIC_PIN_MAP(1, 0)
	#define GPIO_PIN_SDA			26
	#define GPIO_PIN_SCL			27
	#define GPIO_PIN_D0				NORDIC_PIN_MAP(1, 9)
	#define GPIO_PIN_D1				NORDIC_PIN_MAP(1, 1)
	#define GPIO_PIN_D2				NORDIC_PIN_MAP(1, 2)
	#define GPIO_PIN_D3				9 // on NFC pin - need CONFIG_NFCT_PINS_AS_GPIOS
	#define GPIO_PIN_D4				10 // on NFC pin - need CONFIG_NFCT_PINS_AS_GPIOS
	#define GPIO_PIN_D5				NORDIC_PIN_MAP(1, 12)
	#define GPIO_PIN_D6				NORDIC_PIN_MAP(1, 13)
	#define GPIO_PIN_A0				NORDIC_PIN_MAP(1, 14)
	#define GPIO_PIN_A1				NORDIC_PIN_MAP(1, 15)
	#define GPIO_PIN_A2				3
	#define GPIO_PIN_A3				28
	#define GPIO_PIN_A4				29
	#define GPIO_PIN_A5				4

#elif ADA_NRF52840

        // Requires preprocessor defines
        //    ARDUINO_ARCH_NRF52840
        //    ADA_NRF52840


#ifdef DISPLAYTYPE_EMOTICONWS2812
		#define EPX_DEVICEMODEL			"SI2Sprklt64mmEP10"
		#define DISPLAYARRAY_WIDTH		18
		#define DISPLAYARRAY_HEIGHT		18
		#define VARIANT_NUMTRIGGERGPIOS 13
	#elif DISPLAYTYPE_EMOTICONWS2812_MINI
		#define EPX_DEVICEMODEL			"SI2Sprklt50mmEP10"
		#define DISPLAYARRAY_WIDTH		14
		#define DISPLAYARRAY_HEIGHT		14
        #elif DISPLAYTYPE_16x16
		#define EPX_DEVICEMODEL			"ADAGeneric16x16"
		#define DISPLAYARRAY_WIDTH		16
		#define DISPLAYARRAY_HEIGHT		16
        #elif DISPLAYTYPE_22x22
		#define EPX_DEVICEMODEL			"ADAGeneric22x22"
		#define DISPLAYARRAY_WIDTH		22
		#define DISPLAYARRAY_HEIGHT		22	
        #endif
        #define VARIANT_NUMTRIGGERGPIOS                 13

	#define BLE_DEFAULT_DEVICE_NAME "ADAFeathDisp"                               /**< Name of device. Will be included in the advertising data. */

	//#define VARIANTCAPABILITY_BEACONACTIVATION
	#define VARIANTCAPABILITY_STORAGE
	//#define VARIANTCAPABILITY_PREVIEW
	#define VARIANTCAPABILITY_SECURITY
	#define VARIANTCAPABILITY_DFU
	#define VARIANTCAPABILITY_BATTERY_MONITORING
        #define VARIANTDISPLAYDRIVER_ADANEOPIXEL

	#define NORDIC_PIN_MAP(port, pin) (((port) << 5) | ((pin) & 0x1F))
	#define GPIO_PIN_STATUSLED		13
	#define DISPLAYARRAY_DATAPIN	3 //26
	#define DISPLAYARRAY_CLOCKPIN	0
	#define DISPLAYARRAY_POWERPIN	0

	#define GPIO_PIN_BOOSTER_ENABLE	0

	#define GPIO_PIN_FLASHRAM_CS	20
	#define GPIO_PIN_FLASHRAM_MISO	22
	#define GPIO_PIN_FLASHRAM_SCLK	19
	#define GPIO_PIN_FLASHRAM_MOSI	17

	#define GPIO_PIN_QICHARGING		5
	#define GPIO_PIN_3V3_ACCEN		11
	#define GPIO_PIN_FEATURE		NORDIC_PIN_MAP(1, 0)
	#define GPIO_PIN_SDA			26
	#define GPIO_PIN_SCL			27
	#define GPIO_PIN_D0				NORDIC_PIN_MAP(1, 9)
	#define GPIO_PIN_D1				NORDIC_PIN_MAP(1, 1)
	#define GPIO_PIN_D2				NORDIC_PIN_MAP(1, 2)
	#define GPIO_PIN_D3				9 // on NFC pin - need CONFIG_NFCT_PINS_AS_GPIOS
	#define GPIO_PIN_D4				10 // on NFC pin - need CONFIG_NFCT_PINS_AS_GPIOS
	#define GPIO_PIN_D5				NORDIC_PIN_MAP(1, 12)
	#define GPIO_PIN_D6				NORDIC_PIN_MAP(1, 13)
	#define GPIO_PIN_A0				NORDIC_PIN_MAP(1, 14)
	#define GPIO_PIN_A1				NORDIC_PIN_MAP(1, 15)
	#define GPIO_PIN_A2				3
	#define GPIO_PIN_A3				28
	#define GPIO_PIN_A4				29
	#define GPIO_PIN_A5				4

#elif ADA_CPXBLUE

        // Requires preprocessor defines
        //    ARDUINO_ARCH_NRF52840
        //    ADA_NRF52840


#ifdef DISPLAYTYPE_EMOTICONWS2812
		#define EPX_DEVICEMODEL			"SI2Sprklt64mmEP10"
		#define DISPLAYARRAY_WIDTH		18
		#define DISPLAYARRAY_HEIGHT		18
		#define VARIANT_NUMTRIGGERGPIOS 13
	#elif DISPLAYTYPE_EMOTICONWS2812_MINI
		#define EPX_DEVICEMODEL			"SI2Sprklt50mmEP10"
		#define DISPLAYARRAY_WIDTH		14
		#define DISPLAYARRAY_HEIGHT		14
        #elif DISPLAYTYPE_16x16
		#define EPX_DEVICEMODEL			"EPXGeneric16x16"
		#define DISPLAYARRAY_WIDTH		16
		#define DISPLAYARRAY_HEIGHT		16
        #elif DISPLAYTYPE_22x22
		#define EPX_DEVICEMODEL			"EPXGeneric22x22"
		#define DISPLAYARRAY_WIDTH		22
		#define DISPLAYARRAY_HEIGHT		22	
        #endif
        #define VARIANT_NUMTRIGGERGPIOS                 13

	#define BLE_DEFAULT_DEVICE_NAME "CPXBlueDisp"                               /**< Name of device. Will be included in the advertising data. */
        #define EPX_FWVERSIONSRC ""

	#define VARIANTCAPABILITY_STORAGE
	#define VARIANTCAPABILITY_PREVIEW
	#define VARIANTCAPABILITY_SECURITY
	#define VARIANTCAPABILITY_DFU
	// #define VARIANTCAPABILITY_BATTERY_MONITORING
        #define VARIANTDISPLAYDRIVER_I2SWS2812

	#define NORDIC_PIN_MAP(port, pin) (((port) << 5) | ((pin) & 0x1F))
	#define GPIO_PIN_STATUSLED	13
	#define DISPLAYARRAY_DATAPIN	29
	#define DISPLAYARRAY_CLOCKPIN	0
	#define DISPLAYARRAY_POWERPIN	0

	#define GPIO_PIN_BOOSTER_ENABLE	0

	#define GPIO_PIN_FLASHRAM_CS	15
	#define GPIO_PIN_FLASHRAM_MISO	23
	#define GPIO_PIN_FLASHRAM_SCLK	19
	#define GPIO_PIN_FLASHRAM_MOSI	21

	#define GPIO_PIN_QICHARGING		0
	#define GPIO_PIN_3V3_ACCEN		0
	#define GPIO_PIN_FEATURE		0
	#define GPIO_PIN_SDA			0
	#define GPIO_PIN_SCL			0
	#define GPIO_PIN_D0			0
	#define GPIO_PIN_D1			0
	#define GPIO_PIN_D2			0
	#define GPIO_PIN_D3			0
	#define GPIO_PIN_D4			0
	#define GPIO_PIN_D5			0
	#define GPIO_PIN_D6			0
	#define GPIO_PIN_A0			0
	#define GPIO_PIN_A1			0
	#define GPIO_PIN_A2			0
	#define GPIO_PIN_A3			0
	#define GPIO_PIN_A4			0
	#define GPIO_PIN_A5			0
#endif

extern char g_szDEFAULT_BLE_NAME[];
