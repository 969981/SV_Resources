/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007021f0; name: FUN_007021f0
 */


void FUN_007021f0(long *param_1,long param_2)

{
  undefined *puVar1;
  
  param_1[1] = param_2;
  puVar1 = PTR_DAT_047d01d0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 6) = 0;
  if (*(int *)PTR_DAT_047d01d8 != 0) {
    FUN_0052b230(PTR_DAT_047d01d8);
  }
  param_1[5] = (long)PTR_DAT_047cba80;
  return;
}


