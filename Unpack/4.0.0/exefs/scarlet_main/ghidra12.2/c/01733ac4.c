/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01733ac4; name: FUN_01733ac4
 */


int FUN_01733ac4(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    iVar1 = *(int *)(param_1 + 0x20);
    iVar2 = *param_2 + iVar1 * param_2[1];
  }
  else {
    iVar1 = *(int *)(param_1 + 0x24);
    iVar2 = param_2[1] + iVar1 * *param_2;
  }
  return iVar2 + *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x10) * iVar1;
}


