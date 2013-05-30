/* Melfas MMS-136 seies firmware list */

#if defined(CONFIG_MACH_PREVAIL2)
#define FW_VERSION 0x16
#include "prevail2_fw.h"
#else

#define FW_VERSION 0x0
const size_t MELFAS_binary_nLength = 0x00;
const  u8 MELFAS_binary[] = {

};
#endif
