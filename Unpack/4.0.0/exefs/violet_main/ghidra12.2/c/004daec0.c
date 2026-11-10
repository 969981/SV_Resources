/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004daec0; name: FUN_004daec0
 */


undefined8 FUN_004daec0(long param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if ((*(byte *)(param_1 + 0x10) >> 3 & 1) == 0) {
    return 1;
  }
  lVar7 = *(long *)(param_1 + 0x30);
  uVar3 = FUN_00524cc0(lVar7 + 0x10);
  if ((uVar3 & 1) == 0) {
LAB_004daf44:
    uVar4 = 0;
  }
  else {
    if ((int)*(uint *)(lVar7 + 0x38) < 1) {
      return 1;
    }
    uVar4 = 1;
    uVar3 = (ulong)*(uint *)(lVar7 + 0x38);
    do {
      lVar5 = *(long *)(*(long *)(lVar7 + 0x40) + (uVar3 - 1) * 8 + 8);
      lVar6 = (long)*(int *)(lVar5 + 0x20);
      while (0 < lVar6) {
        lVar2 = lVar6 * 8;
        lVar6 = lVar6 + -1;
        if ((~*(uint *)(*(long *)(*(long *)(lVar5 + 0x28) + lVar2) + 0x10) & 3) != 0)
        goto LAB_004daf44;
      }
      bVar1 = 1 < (long)uVar3;
      uVar3 = uVar3 - 1;
    } while (bVar1);
  }
  return uVar4;
}


