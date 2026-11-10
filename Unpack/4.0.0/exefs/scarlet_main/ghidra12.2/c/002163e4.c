/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002163e4; name: FUN_002163e4
 */


void FUN_002163e4(long *param_1,long param_2)

{
  undefined *puVar1;
  
  param_1[1] = param_2;
  puVar1 = PTR_DAT_047cbe10;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (*(int *)PTR_DAT_047cbe18 != 0) {
    FUN_0052b230(PTR_DAT_047cbe18);
  }
  puVar1 = PTR_DAT_047cba80;
  param_1[2] = (long)PTR_DAT_047cba80;
  param_1[3] = (long)puVar1;
  return;
}


