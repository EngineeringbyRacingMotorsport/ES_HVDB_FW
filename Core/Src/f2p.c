#include <f2p.h>

void DMA2DICCF(DICCF_t *DICCF, uint32_t *buffer){
	DICCF->BpSHU = buffer[0];
	DICCF->DpSHU = buffer[1];
}

void DIG2DICCF(DICCF_t *DICCF){
	DICCF->DfSDCintlck1   = HAL_GPIO_ReadPin(GPIOC, DfSDCintlck1_Pin  );
	DICCF->DfSDCintlck2   = HAL_GPIO_ReadPin(GPIOA, DfSDCintlck2_Pin  );
	DICCF->DfLCHdischarge = HAL_GPIO_ReadPin(GPIOA, DfLCHdischarge_Pin);
	DICCF->DfTHRhv        = HAL_GPIO_ReadPin(GPIOA, DfTHRhv_Pin       );
	DICCF->DfSDC          = HAL_GPIO_ReadPin(GPIOC, DfSDC_Pin         );
	DICCF->BfSDC          = HAL_GPIO_ReadPin(GPIOB, BfSDC_Pin         );
	DICCF->DfINTtsalred   = HAL_GPIO_ReadPin(GPIOA, DfINTtsalred_Pin  );
	DICCF->BfERRplaus     = HAL_GPIO_ReadPin(GPIOA, BfERRplaus_Pin    );
	DICCF->BfTHRcurrent   = HAL_GPIO_ReadPin(GPIOA, BfTHRcurrent_Pin  );
	DICCF->BfTHRbrake     = HAL_GPIO_ReadPin(GPIOB, BfTHRbrake_Pin    );
};

void DICCF2DICCP(DICCF_t *DICCF, DICCP_t *DICCP) {
	DICCP->DpSDCintlck1   = DICCF->DfSDCintlck1  ;
	DICCP->DpSDCintlck2   = DICCF->DfSDCintlck2  ;
	DICCP->DpLCHdischarge = !DICCF->DfLCHdischarge;
	DICCP->DpTHRhv        = DICCF->DfTHRhv       ;
	DICCP->DpSDC          = DICCF->DfSDC         ;
	DICCP->BpSDC          = !DICCF->BfSDC         ;
	DICCP->DpINTtsalred   = !DICCF->DfINTtsalred  ;
	DICCP->BpERRplaus     = !DICCF->BfERRplaus    ;
	DICCP->BpTHRcurrent   = DICCF->BfTHRcurrent  ;
	DICCP->BpTHRbrake     = DICCF->BfTHRbrake    ;
	DICCP->BpSHU		  = ((DICCF->BfSHU*3.3)/4095)/(0.130*100)		;
	DICCP->DpSHU		  = ((DICCF->DfSHU*3.3)/4095)/(0.130*100)		;
};



