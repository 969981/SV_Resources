/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0032d278; name: FUN_0032d278
 */


void FUN_0032d278(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  
  *param_1 = (long)(PTR_DAT_047ccc28 + 0x10);
  param_1[1] = param_3;
  lVar1 = *param_2;
  param_1[3] = param_2[1];
  param_1[2] = lVar1;
  *param_2 = 0;
  param_2[1] = 0;
                    /* try { // try from 0032d2a4 to 0032d2a7 has its CatchHandler @ 0032d2c4 */
  lVar1 = FUN_003581e0();
  param_1[4] = lVar1;
  lVar1 = param_2[2];
  param_2[2] = 0;
  param_1[5] = lVar1;
  return;
}


