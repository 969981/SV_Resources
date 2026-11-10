/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bdee90; name: FUN_00bdee90
 */


int FUN_00bdee90(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  
  iVar5 = *(int *)(param_1 + 0x20);
  if (0 < iVar5) {
    lVar6 = 0;
    do {
      uVar4 = FUN_00bde1e0(*(undefined8 *)(*(long *)(param_1 + 0x28) + lVar6 * 8 + 8));
      iVar3 = 4;
      if ((uVar4 >> 0x1c & 0xf) != 0) {
        iVar3 = 5;
      }
      uVar2 = (uint)uVar4;
      iVar1 = 3;
      if (0x1fffff < uVar2) {
        iVar1 = iVar3;
      }
      iVar3 = 2;
      if (0x3fff < uVar2) {
        iVar3 = iVar1;
      }
      iVar1 = 1;
      if (0x7f < uVar2) {
        iVar1 = iVar3;
      }
      iVar5 = uVar2 + iVar5 + iVar1;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_1 + 0x20));
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    iVar3 = FUN_00c0358c(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    iVar5 = iVar3 + iVar5;
  }
  *(int *)(param_1 + 0x14) = iVar5;
  return iVar5;
}


