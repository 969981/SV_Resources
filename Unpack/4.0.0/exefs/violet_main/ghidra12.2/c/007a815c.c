/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a815c; name: FUN_007a815c
 */


void FUN_007a815c(long param_1)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  byte bVar7;
  
  lVar4 = *(long *)(param_1 + 8);
  if (*(short *)(lVar4 + 0x114e) != 0) {
    uVar6 = 0;
    lVar5 = 0;
    bVar7 = 0xff;
    do {
      uVar2 = FUN_00796784(*(long *)(*(long *)(lVar4 + 0x88) + uVar6 * 8) + 0x10);
      if ((uVar2 & 1) != 0) {
        lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 0x88) + uVar6 * 8);
        bVar1 = *(byte *)(lVar4 + 9);
        if (bVar1 < bVar7) {
          lVar5 = FUN_00796988(lVar4 + 0x10);
          bVar7 = bVar1;
        }
      }
      lVar4 = *(long *)(param_1 + 8);
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(ushort *)(lVar4 + 0x114e));
    if (lVar5 != 0) goto LAB_007a81f0;
  }
  lVar5 = FUN_00796988(lVar4 + 0x98);
  if (lVar5 == 0) {
    return;
  }
LAB_007a81f0:
  if (*(short *)(param_1 + 0x38) != 0) {
    lVar4 = 0;
    uVar6 = 0;
    do {
      lVar3 = FUN_00796988(*(long *)(param_1 + 0x30) + lVar4);
      if (lVar3 == lVar5) {
        if ((uint)*(ushort *)(param_1 + 0x18) == ((uint)uVar6 & 0xffff)) {
          return;
        }
        *(short *)(param_1 + 0x18) = (short)uVar6;
        return;
      }
      uVar6 = uVar6 + 1;
      lVar4 = lVar4 + 0x20;
    } while (uVar6 < *(ushort *)(param_1 + 0x38));
  }
  return;
}


