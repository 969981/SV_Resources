/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00395b50; name: FUN_00395b50
 */


void FUN_00395b50(byte *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  byte *pbVar1;
  size_t __n;
  size_t sVar2;
  
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
                    /* try { // try from 00395b98 to 00395b9f has its CatchHandler @ 00395c38 */
  FUN_002a2528(param_1,param_3[1] + param_2[1] + param_4[1] + param_5[1]);
  pbVar1 = *(byte **)(param_1 + 0x10);
  sVar2 = param_2[1];
  if ((*param_1 & 1) == 0) {
    pbVar1 = param_1 + 1;
  }
  if (sVar2 != 0) {
    memcpy(pbVar1,(void *)*param_2,sVar2);
  }
  __n = param_3[1];
  pbVar1 = pbVar1 + sVar2;
  if (__n != 0) {
    memcpy(pbVar1,(void *)*param_3,__n);
  }
  sVar2 = param_4[1];
  if (sVar2 != 0) {
    memcpy(pbVar1 + __n,(void *)*param_4,sVar2);
  }
  if (param_5[1] == 0) {
    return;
  }
  memcpy(pbVar1 + __n + sVar2,(void *)*param_5,param_5[1]);
  return;
}


