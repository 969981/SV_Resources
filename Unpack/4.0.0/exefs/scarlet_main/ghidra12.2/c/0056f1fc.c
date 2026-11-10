/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0056f1fc; name: FUN_0056f1fc
 */


void FUN_0056f1fc(long *param_1,long param_2)

{
  undefined *puVar1;
  
  param_1[1] = param_2;
  puVar1 = PTR_DAT_047ce128;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (*(int *)PTR_DAT_047ce130 == 0) {
    param_1[2] = 0;
    return;
  }
  FUN_0052b230(PTR_DAT_047ce130);
  param_1[2] = 0;
  return;
}


