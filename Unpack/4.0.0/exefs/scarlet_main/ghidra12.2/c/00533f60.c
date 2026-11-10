/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00533f60; name: FUN_00533f60
 */


void FUN_00533f60(byte *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  size_t __n;
  byte *__dest;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  __n = param_2[1];
  lVar1 = param_3[1] + __n + param_4[1];
  if (lVar1 == 0) {
    param_1[1] = 0;
    *param_1 = 0;
    __dest = param_1 + 1;
  }
  else {
                    /* try { // try from 00533f9c to 00533fa7 has its CatchHandler @ 00534050 */
    FUN_002ce498(param_1,lVar1,0);
    __n = param_2[1];
    __dest = *(byte **)(param_1 + 0x10);
    if ((*param_1 & 1) == 0) {
      __dest = param_1 + 1;
    }
  }
  if (__n != 0) {
    memcpy(__dest,(void *)*param_2,__n);
    __dest = __dest + param_2[1];
  }
  if (param_3[1] != 0) {
    memcpy(__dest,(void *)*param_3,param_3[1]);
    __dest = __dest + param_3[1];
  }
  if (param_4[1] == 0) {
    return;
  }
  memcpy(__dest,(void *)*param_4,param_4[1]);
  return;
}


