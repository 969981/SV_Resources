/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002cb8cc; name: FUN_002cb8cc
 */


void FUN_002cb8cc(long *param_1,long *param_2,long param_3,long param_4,long param_5,long param_6,
                 long param_7,long param_8)

{
  param_1[2] = 0;
  *param_1 = (long)(PTR_DAT_047cc880 + 0x10);
  param_1[1] = 1;
  param_1[2] = *param_2;
  *param_2 = 0;
  param_1[3] = param_3;
  param_1[4] = param_4;
  param_1[5] = param_5;
  param_1[6] = param_6;
  param_1[7] = param_7;
  param_1[8] = param_8;
                    /* try { // try from 002cb90c to 002cb90f has its CatchHandler @ 002cb928 */
  FUN_0038db00(param_1 + 9);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xd] = (long)(param_1 + 0xe);
  return;
}


