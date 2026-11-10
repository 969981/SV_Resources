/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dd0fec; name: FUN_01dd0fec
 */


void FUN_01dd0fec(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 0x171c);
  if (iVar1 == 6) {
    uVar2 = 7;
LAB_01dd1020:
    *(undefined4 *)(param_1 + 0x171c) = uVar2;
  }
  else {
    if (iVar1 == 3) {
      uVar2 = 4;
      goto LAB_01dd1020;
    }
    if (iVar1 == 0) {
      lVar3 = *(long *)(param_1 + 0x1b8);
      if (lVar3 == 0) {
        return;
      }
      uVar2 = 0x1b;
      goto LAB_01dd1030;
    }
  }
  lVar3 = *(long *)(param_1 + 0x1b8);
  if (lVar3 == 0) {
    return;
  }
  uVar2 = 0x1c;
LAB_01dd1030:
  *(undefined4 *)(param_1 + 0x170) = uVar2;
  *(undefined4 *)(lVar3 + 0x30) = uVar2;
  return;
}


