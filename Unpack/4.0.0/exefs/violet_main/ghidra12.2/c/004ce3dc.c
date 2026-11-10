/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004ce3dc; name: FUN_004ce3dc
 */


undefined8 FUN_004ce3dc(long param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = (long)*(int *)(param_1 + 0x38);
  while (0 < lVar7) {
    uVar3 = FUN_004d2630(*(undefined8 *)(*(long *)(param_1 + 0x40) + lVar7 * 8));
    lVar7 = lVar7 + -1;
    if ((uVar3 & 1) == 0) {
      return 0;
    }
  }
  lVar7 = (long)*(int *)(param_1 + 0x50);
  while (0 < lVar7) {
    uVar3 = FUN_004d7acc(*(undefined8 *)(*(long *)(param_1 + 0x58) + lVar7 * 8));
    lVar7 = lVar7 + -1;
    if ((uVar3 & 1) == 0) {
      return 0;
    }
  }
  lVar7 = (long)*(int *)(param_1 + 0x68);
  while (0 < lVar7) {
    uVar3 = FUN_004d9b58(*(undefined8 *)(*(long *)(param_1 + 0x70) + lVar7 * 8));
    lVar7 = lVar7 + -1;
    if ((uVar3 & 1) == 0) {
      return 0;
    }
  }
  uVar3 = (ulong)*(uint *)(param_1 + 0x80);
  if (0 < (int)*(uint *)(param_1 + 0x80)) {
    do {
      lVar7 = *(long *)(*(long *)(param_1 + 0x88) + (uVar3 - 1) * 8 + 8);
      if ((*(byte *)(lVar7 + 0x10) >> 5 & 1) != 0) {
        lVar7 = *(long *)(lVar7 + 0x40);
        uVar4 = FUN_00524cc0(lVar7 + 0x10);
        if ((uVar4 & 1) == 0) {
          return 0;
        }
        if (0 < (int)*(uint *)(lVar7 + 0x38)) {
          uVar4 = (ulong)*(uint *)(lVar7 + 0x38);
          do {
            lVar5 = *(long *)(*(long *)(lVar7 + 0x40) + (uVar4 - 1) * 8 + 8);
            lVar6 = (long)*(int *)(lVar5 + 0x20);
            while (0 < lVar6) {
              lVar2 = lVar6 * 8;
              lVar6 = lVar6 + -1;
              if ((~*(uint *)(*(long *)(*(long *)(lVar5 + 0x28) + lVar2) + 0x10) & 3) != 0) {
                return 0;
              }
            }
            bVar1 = 1 < (long)uVar4;
            uVar4 = uVar4 - 1;
          } while (bVar1);
        }
      }
      bVar1 = 1 < (long)uVar3;
      uVar3 = uVar3 - 1;
    } while (bVar1);
  }
  if ((*(byte *)(param_1 + 0x10) >> 3 & 1) != 0) {
    lVar7 = *(long *)(param_1 + 200);
    uVar3 = FUN_00524cc0(lVar7 + 0x10);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    if (0 < (int)*(uint *)(lVar7 + 0x38)) {
      uVar3 = (ulong)*(uint *)(lVar7 + 0x38);
      do {
        lVar5 = *(long *)(*(long *)(lVar7 + 0x40) + (uVar3 - 1) * 8 + 8);
        lVar6 = (long)*(int *)(lVar5 + 0x20);
        while (0 < lVar6) {
          lVar2 = lVar6 * 8;
          lVar6 = lVar6 + -1;
          if ((~*(uint *)(*(long *)(*(long *)(lVar5 + 0x28) + lVar2) + 0x10) & 3) != 0) {
            return 0;
          }
        }
        bVar1 = 1 < (long)uVar3;
        uVar3 = uVar3 - 1;
      } while (bVar1);
      return 1;
    }
  }
  return 1;
}


