/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01247ad8; name: FUN_01247ad8
 */


void FUN_01247ad8(long param_1,long param_2)

{
  byte bVar1;
  ushort uVar2;
  undefined4 uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  
  lVar4 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(lVar4 + 0x38);
  uVar5 = *(uint *)(lVar6 + 0xc08);
  if (uVar5 < 0x60) {
    do {
      lVar8 = *(long *)(lVar6 + (ulong)uVar5 * 0x20 + 8);
      if (*(short *)(lVar8 + 8) == 0) {
        if (uVar5 < 0x5f) {
          *(undefined2 *)(lVar8 + 8) = 1;
          *(int *)(lVar6 + 0xc08) = *(int *)(lVar6 + 0xc08) + 1;
        }
        break;
      }
      uVar5 = uVar5 + 1;
      *(uint *)(lVar6 + 0xc08) = uVar5;
    } while (uVar5 != 0x60);
  }
  lVar6 = *(long *)(lVar4 + 0x58);
  uVar5 = *(uint *)(lVar6 + 0x408);
  if (uVar5 < 0x1f) {
    *(uint *)(lVar6 + 0x408) = uVar5 + 1;
    lVar6 = *(long *)(lVar4 + 0x58);
    uVar5 = *(uint *)(lVar6 + 0x408);
  }
  *(undefined8 *)(lVar4 + 0x78) = *(undefined8 *)(lVar6 + (ulong)uVar5 * 0x20 + 8);
  bVar1 = *(byte *)(param_2 + 0xa6);
  if (bVar1 != 0) {
    uVar11 = 0;
    do {
      uVar5 = (int)uVar11 + 6;
      lVar6 = *(long *)(param_1 + 0x10);
      uVar3 = (**(code **)(**(long **)(param_2 + uVar11 * 8) + 0x98))();
      lVar4 = *(long *)(lVar6 + 0x38);
      uVar12 = *(uint *)(lVar4 + 0xc08);
      uVar9 = (ulong)uVar12;
      if (uVar12 < 0x61) {
        uVar12 = 0x60;
      }
      plVar7 = (long *)(lVar4 + uVar9 * 0x20 + 8);
      do {
        uVar10 = uVar9;
        if (uVar12 == uVar10) goto LAB_01247c2c;
        lVar8 = *plVar7;
        if (*(ushort *)(lVar8 + 8) == 0) goto LAB_01247bf8;
        plVar7 = plVar7 + 4;
        uVar9 = uVar10 + 1;
      } while ((uint)*(ushort *)(lVar8 + 8) != (uVar5 & 0xffff));
      if ((int)(uVar10 + 1) - 1U < 0x60) {
LAB_01247bf8:
        lVar4 = *(long *)(lVar4 + (uVar10 & 0xffffffff) * 0x20 + 8);
        if (lVar4 != 0) {
          uVar2 = (ushort)uVar5;
          *(ushort *)(lVar4 + 8) = uVar2;
          *(undefined4 *)(lVar4 + 0xc) = uVar3;
          *(undefined1 *)(lVar4 + 10) = 4;
          *(undefined8 *)(lVar4 + 0x10) = 0;
          *(undefined8 *)(lVar4 + 0x18) = 0;
          if (-1 < (char)uVar11) {
            *(long *)(*(long *)(lVar6 + 0x78) + (ulong)uVar2 * 8 + 8) = lVar4;
          }
        }
      }
LAB_01247c2c:
      uVar11 = uVar11 + 1;
    } while (uVar11 != bVar1);
  }
  lVar4 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(lVar4 + 0x38);
  uVar5 = *(uint *)(lVar6 + 0xc08);
  uVar11 = (ulong)uVar5;
  if (uVar5 < 0x61) {
    uVar5 = 0x60;
  }
  plVar7 = (long *)(lVar6 + uVar11 * 0x20 + 8);
  do {
    uVar9 = uVar11;
    if (uVar5 == uVar9) goto LAB_01247cc0;
    lVar8 = *plVar7;
    if (*(short *)(lVar8 + 8) == 0) goto LAB_01247c8c;
    plVar7 = plVar7 + 4;
    uVar11 = uVar9 + 1;
  } while (*(short *)(lVar8 + 8) != 5);
  if ((int)(uVar9 + 1) - 1U < 0x60) {
LAB_01247c8c:
    lVar6 = *(long *)(lVar6 + (uVar9 & 0xffffffff) * 0x20 + 8);
    if (lVar6 != 0) {
      *(undefined2 *)(lVar6 + 8) = 5;
      *(uint *)(lVar6 + 0xc) = (uint)bVar1;
      *(undefined1 *)(lVar6 + 10) = 4;
      *(undefined8 *)(lVar6 + 0x10) = 0;
      *(undefined8 *)(lVar6 + 0x18) = 0;
      *(long *)(*(long *)(lVar4 + 0x78) + 0x30) = lVar6;
      lVar4 = *(long *)(param_1 + 0x10);
    }
  }
LAB_01247cc0:
  FUN_0107b310(lVar4,0x75,8,1);
  lVar4 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(lVar4 + 0x58);
  if (*(uint *)(lVar6 + 0x408) == 0) {
    uVar11 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar6 + (ulong)*(uint *)(lVar6 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar6 + 0x408) = *(int *)(lVar6 + 0x408) + -1;
    lVar6 = *(long *)(lVar4 + 0x58);
    uVar11 = (ulong)*(uint *)(lVar6 + 0x408);
  }
  *(undefined8 *)(lVar4 + 0x78) = *(undefined8 *)(lVar6 + uVar11 * 0x20 + 8);
  lVar4 = *(long *)(lVar4 + 0x38);
  uVar5 = *(uint *)(lVar4 + 0xc08);
  if (uVar5 != 0) {
    if ((uVar5 & 0xffff) < 0x60) {
      uVar11 = (ulong)uVar5 & 0xffff;
      plVar7 = (long *)(lVar4 + uVar11 * 0x20 + 8);
      do {
        uVar11 = uVar11 + 1;
        if (*(short *)(*plVar7 + 8) == 0) break;
        *(undefined2 *)(*plVar7 + 8) = 0;
        plVar7 = plVar7 + 4;
      } while (((uint)uVar11 & 0xffff) != 0x60);
      uVar5 = *(uint *)(lVar4 + 0xc08);
    }
    *(uint *)(lVar4 + 0xc08) = uVar5 - 1;
    *(undefined2 *)(*(long *)(lVar4 + (ulong)(uVar5 - 1) * 0x20 + 8) + 8) = 0;
    uVar11 = (ulong)*(uint *)(lVar4 + 0xc08);
    do {
      if (uVar11 == 0) {
        return;
      }
      uVar11 = uVar11 - 1;
      *(int *)(lVar4 + 0xc08) = (int)uVar11;
    } while (*(short *)(*(long *)(lVar4 + (uVar11 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar4 + 0xc08) = (int)uVar11 + 1;
  }
  return;
}


