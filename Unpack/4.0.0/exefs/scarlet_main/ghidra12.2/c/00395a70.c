/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00395a70; name: FUN_00395a70
 */


void FUN_00395a70(byte *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  byte *__dest;
  size_t __n;
  size_t __n_00;
  
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
                    /* try { // try from 00395aa8 to 00395aaf has its CatchHandler @ 00395b24 */
  FUN_002a2528(param_1,param_3[1] + param_2[1] + param_4[1]);
  __dest = *(byte **)(param_1 + 0x10);
  __n_00 = param_2[1];
  if ((*param_1 & 1) == 0) {
    __dest = param_1 + 1;
  }
  if (__n_00 != 0) {
    memcpy(__dest,(void *)*param_2,__n_00);
  }
  __n = param_3[1];
  if (__n != 0) {
    memcpy(__dest + __n_00,(void *)*param_3,__n);
  }
  if (param_4[1] == 0) {
    return;
  }
  memcpy(__dest + __n_00 + __n,(void *)*param_4,param_4[1]);
  return;
}


