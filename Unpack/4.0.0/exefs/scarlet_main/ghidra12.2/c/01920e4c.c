/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01920e4c; name: FUN_01920e4c
 */


void FUN_01920e4c(long param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    iVar1 = 1;
    *(undefined4 *)(param_1 + 8) = 1;
  }
  *param_2 = iVar1;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}


