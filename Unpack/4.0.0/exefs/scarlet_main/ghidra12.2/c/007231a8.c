/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007231a8; name: FUN_007231a8
 */


void FUN_007231a8(long *param_1,long param_2)

{
  undefined *puVar1;
  
  param_1[1] = param_2;
  puVar1 = PTR_DAT_047d0350;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (*(int *)PTR_DAT_047d0358 != 0) {
    FUN_0052b230(PTR_DAT_047d0358);
  }
  param_1[2] = (long)PTR_DAT_047cba80;
  return;
}


