/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00717254; name: FUN_00717254
 */


void FUN_00717254(long *param_1,long param_2)

{
  undefined *puVar1;
  
  param_1[1] = param_2;
  puVar1 = PTR_DAT_047d0260;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (*(int *)PTR_DAT_047d0268 != 0) {
    FUN_0052b230(PTR_DAT_047d0268);
  }
  puVar1 = PTR_DAT_047cba80;
  param_1[4] = 0;
  param_1[2] = (long)puVar1;
  param_1[3] = (long)puVar1;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  return;
}


