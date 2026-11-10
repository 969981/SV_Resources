/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01734444; name: FUN_01734444
 */


bool FUN_01734444(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    iVar2 = *(int *)(param_1 + 0x20);
    iVar3 = *param_2 + iVar2 * param_2[1];
  }
  else {
    iVar2 = *(int *)(param_1 + 0x24);
    iVar3 = param_2[1] + iVar2 * *param_2;
  }
  iVar1 = iVar3 + *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x10) * iVar2;
  iVar3 = *(int *)(param_1 + 8);
  iVar2 = iVar2 * (int)((float)iVar3 / (float)iVar2);
  if (iVar1 < 0) {
    return iVar3 <= iVar2 + iVar1;
  }
  return iVar3 <= iVar1 && iVar1 < iVar2;
}


