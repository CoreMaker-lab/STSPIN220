#ifndef STSPIN220_h
#define STSPIN220_h

void STSPIN220_SetStepMode(uint16_t stepMode);//设置步进细分
void STSPIN220_enable(uint8_t enable);//使能操作 1使能0失能
void STSPIN220_setDirection(uint8_t direction);//方向设置 0反1正
void STSPIN220_Stby(uint8_t stby);//低功耗模式 1使能0失能



#endif //STSPIN220_h





