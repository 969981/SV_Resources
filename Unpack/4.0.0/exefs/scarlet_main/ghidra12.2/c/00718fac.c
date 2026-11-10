/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00718fac; name: FUN_00718fac
 */


void FUN_00718fac(long *param_1,long param_2)

{
  undefined *puVar1;
  
  param_1[1] = param_2;
  puVar1 = PTR_DAT_047d02b8;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (*(int *)PTR_DAT_047d02c0 != 0) {
    FUN_0052b230(PTR_DAT_047d02c0);
  }
  puVar1 = PTR_DAT_047cba80;
  param_1[2] = (long)PTR_DAT_047cba80;
  param_1[3] = (long)puVar1;
  param_1[4] = (long)puVar1;
  param_1[5] = (long)puVar1;
  param_1[6] = (long)puVar1;
  param_1[7] = (long)puVar1;
  param_1[8] = (long)puVar1;
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar1;
  param_1[0xb] = (long)puVar1;
  param_1[0xc] = (long)puVar1;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return;
}


