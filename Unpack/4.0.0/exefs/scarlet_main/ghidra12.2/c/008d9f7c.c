/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008d9f7c; name: FUN_008d9f7c
 */


void FUN_008d9f7c(undefined2 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d25b0;
  if (*PTR_DAT_047d25a8 == '\0') {
    *param_1 = (short)param_2;
    *(int *)(param_1 + 2) = (int)param_2;
    param_1[1] = (short)((ulong)param_2 >> 0x10);
    return;
  }
  *param_1 = (short)*(undefined4 *)PTR_DAT_047d25b0;
  param_1[1] = *(undefined2 *)(puVar1 + 2);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)puVar1;
  return;
}


