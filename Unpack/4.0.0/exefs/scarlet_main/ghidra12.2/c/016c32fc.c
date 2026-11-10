/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016c32fc; name: FUN_016c32fc
 */


void FUN_016c32fc(long param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x20) + 0x400);
  if (iVar1 <= *param_2) {
    iVar1 = *param_2;
  }
  *(int *)(*(long *)(param_1 + 0x20) + 0x400) = iVar1;
  return;
}


