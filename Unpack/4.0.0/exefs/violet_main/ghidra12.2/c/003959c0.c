/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003959c0; name: FUN_003959c0
 */


void FUN_003959c0(byte *param_1,undefined8 *param_2,undefined8 *param_3)

{
  byte *__dest;
  size_t __n;
  
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
                    /* try { // try from 003959ec to 003959f3 has its CatchHandler @ 00395a4c */
  FUN_002a2528(param_1,param_3[1] + param_2[1]);
  __dest = *(byte **)(param_1 + 0x10);
  __n = param_2[1];
  if ((*param_1 & 1) == 0) {
    __dest = param_1 + 1;
  }
  if (__n != 0) {
    memcpy(__dest,(void *)*param_2,__n);
  }
  if (param_3[1] == 0) {
    return;
  }
  memcpy(__dest + __n,(void *)*param_3,param_3[1]);
  return;
}


