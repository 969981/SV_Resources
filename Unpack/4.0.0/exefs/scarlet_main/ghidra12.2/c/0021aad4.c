/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0021aad4; name: FUN_0021aad4
 */


void FUN_0021aad4(long *param_1,long param_2)

{
  undefined *puVar1;
  
  param_1[1] = param_2;
  puVar1 = PTR_DAT_047cbdf8;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (*(int *)PTR_DAT_047cbe00 == 0) {
    param_1[2] = 0;
    return;
  }
  FUN_0052b230(PTR_DAT_047cbe00);
  param_1[2] = 0;
  return;
}


