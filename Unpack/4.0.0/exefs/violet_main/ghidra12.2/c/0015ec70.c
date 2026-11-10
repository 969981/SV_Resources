/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0015ec70; name: FUN_0015ec70
 */


int FUN_0015ec70(long param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  
  if ((int)param_2 < 1) {
    return 0;
  }
  uVar4 = 0;
  iVar2 = 0;
  do {
    iVar1 = *(int *)(param_1 + uVar4 * 4);
    uVar3 = (uint)uVar4;
    uVar4 = uVar4 + 1;
    if (0 < iVar1) {
      iVar2 = iVar2 + iVar1 * (param_3 + 1 + (uVar3 >> (ulong)(param_3 & 0x1f)));
    }
  } while (param_2 != uVar4);
  return iVar2;
}


