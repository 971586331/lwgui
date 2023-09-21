#ifndef __STM32_U8G2_H
#define __STM32_U8G2_H
 
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "u8g2.h"
/* USER CODE BEGIN Includes */
 
/* USER CODE END Includes */
 
 
 
/* USER CODE BEGIN Private defines */
 
/* USER CODE END Private defines */
#define u8         unsigned char  // ?unsigned char ????
#define MAX_LEN    128  //
#define OLED_ADDRESS  0x78 // oled
#define OLED_CMD   0x00  // 
#define OLED_DATA  0x40  // 
 
/* USER CODE BEGIN Prototypes */
void u8g2Init(u8g2_t *u8g2);
void draw(u8g2_t *u8g2);
void testDrawPixelToFillScreen(u8g2_t *u8g2);
 
#endif