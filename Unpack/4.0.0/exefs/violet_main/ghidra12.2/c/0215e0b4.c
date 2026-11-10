/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0215e0b4; name: FUN_0215e0b4
 */


bool FUN_0215e0b4(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 0x24);
  iVar3 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x10);
  iVar1 = iVar3;
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar1 = iVar4;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    iVar5 = *param_2 + param_2[1] * iVar3;
    iVar4 = iVar3;
  }
  else {
    iVar5 = param_2[1] + *param_2 * iVar4;
  }
  iVar3 = 0;
  if (iVar4 != 0) {
    iVar3 = (iVar5 + *(int *)(param_1 + 0x14) + iVar4 * iVar2) / iVar4;
  }
  iVar5 = 0;
  if (iVar4 != 0) {
    iVar5 = (*(int *)(param_1 + 0x14) + iVar1 * iVar2) / iVar4;
  }
  if (iVar5 < iVar3) {
    if (*(int *)(param_1 + 0x1c) + iVar2 < iVar3) {
      return iVar2 != *(int *)(param_1 + 0xc);
    }
  }
  else if (iVar3 < iVar5) {
    return iVar2 != 0 && iVar3 < *(int *)(param_1 + 0x18) + iVar2;
  }
  return false;
}


