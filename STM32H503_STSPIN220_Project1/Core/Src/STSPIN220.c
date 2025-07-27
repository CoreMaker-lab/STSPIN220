#include "main.h"
#include "STSPIN220.h"
//  SL NO.   MODE4  MODE3  MODE2  MODE1  Step mode 
//           (DIR)  (STCK)                                   
//     1       0       0      0     0     Full      step
//     2       0       1      0     1     1/2       step
//     3       1       0      1     0     1/4th     step
//     4       1       1      0     1     1/8th     step
//     5       1       1      1     1     1/16th    step
//     6       0       0      1     0     1/32nd    step
//     7       1       0      1     1     1/64th    step
//     8       0       0      0     1     1/128th   step
//     9       0       0      1     1     1/256th   step  


void STSPIN220_SetStepMode(uint16_t stepMode)
{
    switch (stepMode)
    {
                  //  MODE4   MODE3  MODE2 MODE1
      case 0:     //    0       0      0     0
			HAL_GPIO_WritePin(MODE1_GPIO_Port, MODE1_Pin, 0);
			HAL_GPIO_WritePin(MODE2_GPIO_Port, MODE2_Pin, 0);			
			HAL_GPIO_WritePin(MODE3_GPIO_Port, MODE3_Pin, 0);
			HAL_GPIO_WritePin(MODE4_GPIO_Port, MODE4_Pin, 0);				
      break;			
      case 1:     //    0       0      0     0
			HAL_GPIO_WritePin(MODE1_GPIO_Port, MODE1_Pin, 0);
			HAL_GPIO_WritePin(MODE2_GPIO_Port, MODE2_Pin, 0);			
			HAL_GPIO_WritePin(MODE3_GPIO_Port, MODE3_Pin, 0);
			HAL_GPIO_WritePin(MODE4_GPIO_Port, MODE4_Pin, 0);				
      break;      
      case 2:      //    0       1      0    1 
			HAL_GPIO_WritePin(MODE1_GPIO_Port, MODE1_Pin, 1);
			HAL_GPIO_WritePin(MODE2_GPIO_Port, MODE2_Pin, 0);			
			HAL_GPIO_WritePin(MODE3_GPIO_Port, MODE3_Pin, 1);
			HAL_GPIO_WritePin(MODE4_GPIO_Port, MODE4_Pin, 0);				
      break;   			
      case 4:      //    1       0      1     0
			HAL_GPIO_WritePin(MODE1_GPIO_Port, MODE1_Pin, 0);
			HAL_GPIO_WritePin(MODE2_GPIO_Port, MODE2_Pin, 1);			
			HAL_GPIO_WritePin(MODE3_GPIO_Port, MODE3_Pin, 0);
			HAL_GPIO_WritePin(MODE4_GPIO_Port, MODE4_Pin, 1);				
      break;                  
      case 8:      //    1       1      0     1
			HAL_GPIO_WritePin(MODE1_GPIO_Port, MODE1_Pin, 1);
			HAL_GPIO_WritePin(MODE2_GPIO_Port, MODE2_Pin, 0);			
			HAL_GPIO_WritePin(MODE3_GPIO_Port, MODE3_Pin, 1);
			HAL_GPIO_WritePin(MODE4_GPIO_Port, MODE4_Pin, 1);				
      break; 
      case 16:      //    1       1     1     1
			HAL_GPIO_WritePin(MODE1_GPIO_Port, MODE1_Pin, 1);
			HAL_GPIO_WritePin(MODE2_GPIO_Port, MODE2_Pin, 1);			
			HAL_GPIO_WritePin(MODE3_GPIO_Port, MODE3_Pin, 1);
			HAL_GPIO_WritePin(MODE4_GPIO_Port, MODE4_Pin, 1);				
      break; 
      case 32:      //    0       0     1     0
			HAL_GPIO_WritePin(MODE1_GPIO_Port, MODE1_Pin, 0);
			HAL_GPIO_WritePin(MODE2_GPIO_Port, MODE2_Pin, 1);			
			HAL_GPIO_WritePin(MODE3_GPIO_Port, MODE3_Pin, 0);
			HAL_GPIO_WritePin(MODE4_GPIO_Port, MODE4_Pin, 0);				
      break; 
      case 64:      //    1       0     1     1
			HAL_GPIO_WritePin(MODE1_GPIO_Port, MODE1_Pin, 1);
			HAL_GPIO_WritePin(MODE2_GPIO_Port, MODE2_Pin, 1);			
			HAL_GPIO_WritePin(MODE3_GPIO_Port, MODE3_Pin, 0);
			HAL_GPIO_WritePin(MODE4_GPIO_Port, MODE4_Pin, 1);				
      break;                  
      case 128:      //    0       0     0    1
			HAL_GPIO_WritePin(MODE1_GPIO_Port, MODE1_Pin, 1);
			HAL_GPIO_WritePin(MODE2_GPIO_Port, MODE2_Pin, 0);			
			HAL_GPIO_WritePin(MODE3_GPIO_Port, MODE3_Pin, 0);
			HAL_GPIO_WritePin(MODE4_GPIO_Port, MODE4_Pin, 0);				
      break;                  
      case 256:      //    0       0     1    1
			HAL_GPIO_WritePin(MODE1_GPIO_Port, MODE1_Pin, 1);
			HAL_GPIO_WritePin(MODE2_GPIO_Port, MODE2_Pin, 1);			
			HAL_GPIO_WritePin(MODE3_GPIO_Port, MODE3_Pin, 0);
			HAL_GPIO_WritePin(MODE4_GPIO_Port, MODE4_Pin, 0);				
      break;                  
                  
    }


}

//使能操作 1使能0失能
void STSPIN220_enable(uint8_t enable)
{
	if(enable)
		HAL_GPIO_WritePin(EN_GPIO_Port, EN_Pin, 1);
	else
		HAL_GPIO_WritePin(EN_GPIO_Port, EN_Pin, 0);

}

//方向设置 0反1正
void STSPIN220_setDirection(uint8_t direction)
{
	if(direction)
		HAL_GPIO_WritePin(MODE4_GPIO_Port, MODE4_Pin, 1);		
	else
		HAL_GPIO_WritePin(MODE4_GPIO_Port, MODE4_Pin, 0);		
}

//低功耗模式 1使能0失能
void STSPIN220_Stby(uint8_t stby)
{
	if(stby)
		HAL_GPIO_WritePin(STBY_GPIO_Port, STBY_Pin, 0);		
	else
		HAL_GPIO_WritePin(STBY_GPIO_Port, STBY_Pin, 1);	


}









