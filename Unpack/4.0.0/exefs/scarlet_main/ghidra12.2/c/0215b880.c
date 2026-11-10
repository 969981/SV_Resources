/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0215b880; name: FUN_0215b880
 */


int FUN_0215b880(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  iVar2 = *(int *)(param_1 + 0x24);
  iVar3 = *(int *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar2 = *(int *)(param_1 + 0x20);
    iVar3 = *(int *)(param_1 + 0x24);
  }
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = param_2 / iVar3;
  }
  iVar2 = iVar1 - iVar2;
  if (param_2 != iVar1 * iVar3) {
    iVar2 = iVar2 + 1;
  }
  fVar4 = (float)iVar2;
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  return (int)fVar4;
}


