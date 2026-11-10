/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002cbb8c; name: FUN_002cbb8c
 */


void FUN_002cbb8c(long *param_1,long *param_2,long param_3,long param_4,long param_5,long param_6,
                 long param_7,long param_8,long *param_9)

{
  param_1[2] = 0;
  *param_1 = (long)(PTR_DAT_047cc888 + 0x10);
  param_1[1] = 1;
  param_1[2] = *param_2;
  *param_2 = 0;
  param_1[3] = param_3;
  param_1[4] = param_4;
  param_1[9] = 0;
  param_1[5] = param_5;
  param_1[6] = param_6;
  param_1[7] = param_7;
  param_1[8] = param_8;
  param_1[9] = *param_9;
  *param_9 = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
                    /* try { // try from 002cbbe8 to 002cbbeb has its CatchHandler @ 002cbc04 */
  FUN_0038db00(param_1 + 0xe);
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x12] = (long)(param_1 + 0x13);
  return;
}


