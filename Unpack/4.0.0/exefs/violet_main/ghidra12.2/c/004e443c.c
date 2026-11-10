/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004e443c; name: FUN_004e443c
 */


void FUN_004e443c(long *param_1,long param_2)

{
  undefined *puVar1;
  
  param_1[1] = param_2;
  puVar1 = PTR_DAT_047cd970;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)PTR_DAT_047cd978 != 0) {
                    /* try { // try from 004e4494 to 004e449f has its CatchHandler @ 004e44a4 */
    FUN_0052b230(PTR_DAT_047cd978);
  }
  return;
}


