/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00700cc8; name: FUN_00700cc8
 */


void FUN_00700cc8(long *param_1,long param_2)

{
  undefined *puVar1;
  
  param_1[1] = param_2;
  puVar1 = PTR_DAT_047d01b8;
  param_1[2] = 0;
  param_1[3] = param_2;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined4 *)(param_1 + 10) = 0;
  if (*(int *)PTR_DAT_047d01c0 != 0) {
    FUN_0052b230(PTR_DAT_047d01c0);
  }
  puVar1 = PTR_DAT_047cba80;
  param_1[7] = (long)PTR_DAT_047cba80;
  param_1[5] = (long)puVar1;
  param_1[6] = (long)puVar1;
  param_1[8] = 0;
  param_1[9] = 0;
  return;
}


