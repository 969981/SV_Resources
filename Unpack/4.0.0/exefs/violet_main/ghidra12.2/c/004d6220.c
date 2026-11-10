/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004d6220; name: FUN_004d6220
 */


void FUN_004d6220(long *param_1,long param_2)

{
  undefined *puVar1;
  
  param_1[2] = 0;
  *param_1 = (long)(PTR_DAT_047cda00 + 0x10);
  param_1[1] = param_2;
  param_1[3] = param_2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = param_2;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = param_2;
  puVar1 = PTR_DAT_047cda08;
  param_1[10] = 0;
  param_1[0xb] = 0;
  if (*(int *)puVar1 != 0) {
                    /* try { // try from 004d62a0 to 004d62ab has its CatchHandler @ 004d62b0 */
    FUN_0052b230(PTR_DAT_047cda08);
  }
  param_1[0xc] = (long)PTR_DAT_047cba80;
  param_1[0xd] = 0;
  return;
}


