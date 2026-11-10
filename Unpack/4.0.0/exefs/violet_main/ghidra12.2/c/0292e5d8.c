/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0292e5d8; name: FUN_0292e5d8
 */


uint FUN_0292e5d8(long param_1,undefined1 *param_2,long *param_3,long *param_4,undefined8 param_5)

{
  uint uVar1;
  short sVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  long *plVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  
  *param_2 = 0;
  uVar5 = (**(code **)(*param_3 + 0x118))(param_3);
  uVar6 = (**(code **)(*param_4 + 0x118))(param_4);
  uVar10 = 0;
  if ((uVar6 & 0xff) <= (uVar5 & 0xff)) {
    lVar9 = *(long *)(param_1 + 0x10);
    lVar11 = *(long *)(lVar9 + 0x38);
    uVar10 = *(uint *)(lVar11 + 0xc08);
    if (uVar10 < 0x60) {
      do {
        lVar16 = *(long *)(lVar11 + (ulong)uVar10 * 0x20 + 8);
        if (*(short *)(lVar16 + 8) == 0) {
          if (uVar10 < 0x5f) {
            *(undefined2 *)(lVar16 + 8) = 1;
            *(int *)(lVar11 + 0xc08) = *(int *)(lVar11 + 0xc08) + 1;
          }
          break;
        }
        uVar10 = uVar10 + 1;
        *(uint *)(lVar11 + 0xc08) = uVar10;
      } while (uVar10 != 0x60);
    }
    lVar11 = *(long *)(lVar9 + 0x58);
    uVar10 = *(uint *)(lVar11 + 0x408);
    if (uVar10 < 0x1f) {
      *(uint *)(lVar11 + 0x408) = uVar10 + 1;
      lVar11 = *(long *)(lVar9 + 0x58);
      uVar10 = *(uint *)(lVar11 + 0x408);
    }
    *(undefined8 *)(lVar9 + 0x78) = *(undefined8 *)(lVar11 + (ulong)uVar10 * 0x20 + 8);
    lVar11 = *(long *)(param_1 + 0x10);
    uVar7 = (**(code **)(*param_3 + 0x98))(param_3);
    lVar9 = *(long *)(lVar11 + 0x38);
    uVar10 = *(uint *)(lVar9 + 0xc08);
    uVar18 = (ulong)uVar10;
    if (uVar10 < 0x61) {
      uVar10 = 0x60;
    }
    plVar13 = (long *)(lVar9 + uVar18 * 0x20 + 8);
    do {
      uVar14 = uVar18;
      if (uVar10 == uVar14) goto LAB_0292e780;
      lVar16 = *plVar13;
      if (*(short *)(lVar16 + 8) == 0) goto LAB_0292e750;
      plVar13 = plVar13 + 4;
      uVar18 = uVar14 + 1;
    } while (*(short *)(lVar16 + 8) != 3);
    if ((int)(uVar14 + 1) - 1U < 0x60) {
LAB_0292e750:
      lVar9 = *(long *)(lVar9 + (uVar14 & 0xffffffff) * 0x20 + 8);
      if (lVar9 != 0) {
        *(undefined2 *)(lVar9 + 8) = 3;
        *(undefined4 *)(lVar9 + 0xc) = uVar7;
        *(undefined1 *)(lVar9 + 10) = 4;
        *(undefined8 *)(lVar9 + 0x10) = 0;
        *(undefined8 *)(lVar9 + 0x18) = 0;
        *(long *)(*(long *)(lVar11 + 0x78) + 0x20) = lVar9;
      }
    }
LAB_0292e780:
    lVar11 = *(long *)(param_1 + 0x10);
    uVar7 = (**(code **)(*param_4 + 0x98))(param_4);
    lVar9 = *(long *)(lVar11 + 0x38);
    uVar10 = *(uint *)(lVar9 + 0xc08);
    uVar18 = (ulong)uVar10;
    if (uVar10 < 0x61) {
      uVar10 = 0x60;
    }
    plVar13 = (long *)(lVar9 + uVar18 * 0x20 + 8);
    do {
      uVar14 = uVar18;
      if (uVar10 == uVar14) goto LAB_0292e810;
      lVar16 = *plVar13;
      if (*(short *)(lVar16 + 8) == 0) goto LAB_0292e7e4;
      plVar13 = plVar13 + 4;
      uVar18 = uVar14 + 1;
    } while (*(short *)(lVar16 + 8) != 4);
    if ((int)(uVar14 + 1) - 1U < 0x60) {
LAB_0292e7e4:
      lVar9 = *(long *)(lVar9 + (uVar14 & 0xffffffff) * 0x20 + 8);
      if (lVar9 != 0) {
        *(undefined2 *)(lVar9 + 8) = 4;
        *(undefined4 *)(lVar9 + 0xc) = uVar7;
        *(undefined1 *)(lVar9 + 10) = 4;
        *(undefined8 *)(lVar9 + 0x10) = 0;
        *(undefined8 *)(lVar9 + 0x18) = 0;
        *(long *)(*(long *)(lVar11 + 0x78) + 0x28) = lVar9;
      }
    }
LAB_0292e810:
    lVar9 = *(long *)(param_1 + 0x10);
    lVar11 = *(long *)(lVar9 + 0x38);
    uVar1 = *(uint *)(lVar11 + 0xc08);
    uVar18 = (ulong)uVar1;
    uVar10 = uVar1;
    if (uVar1 < 0x61) {
      uVar10 = 0x60;
    }
    uVar14 = uVar18 << 5 | 8;
    lVar16 = -1;
    do {
      lVar19 = lVar16;
      if ((uVar18 - uVar10) + lVar19 == -1) goto LAB_0292e8b4;
      sVar2 = *(short *)(*(long *)(lVar11 + uVar14) + 8);
      if (sVar2 == 0) goto LAB_0292e870;
      uVar14 = uVar14 + 0x20;
      lVar16 = lVar19 + 1;
    } while (sVar2 != 0x48);
    if (uVar1 + (int)(lVar19 + 1) < 0x60) {
LAB_0292e870:
      lVar16 = *(long *)(lVar11 + (ulong)(uVar1 + (int)lVar19 + 1) * 0x20 + 8);
      if (lVar16 != 0) {
        *(undefined2 *)(lVar16 + 8) = 0x48;
        *(undefined8 *)(lVar16 + 0xc) = 0;
        *(undefined8 *)(lVar16 + 0x14) = 0;
        *(undefined4 *)(lVar16 + 0x1c) = 0;
        *(undefined1 *)(lVar16 + 10) = 1;
        *(long *)(*(long *)(lVar9 + 0x78) + 0x248) = lVar16;
        lVar9 = *(long *)(param_1 + 0x10);
        lVar11 = *(long *)(lVar9 + 0x38);
        uVar18 = (ulong)*(uint *)(lVar11 + 0xc08);
      }
    }
LAB_0292e8b4:
    uVar10 = (uint)uVar18;
    if (uVar10 < 0x61) {
      uVar10 = 0x60;
    }
    plVar13 = (long *)(lVar11 + uVar18 * 0x20 + 8);
    do {
      uVar14 = uVar18;
      if (uVar10 == uVar14) goto LAB_0292e930;
      lVar16 = *plVar13;
      if (*(short *)(lVar16 + 8) == 0) goto LAB_0292e8fc;
      plVar13 = plVar13 + 4;
      uVar18 = uVar14 + 1;
    } while (*(short *)(lVar16 + 8) != 0x75);
    if ((int)(uVar14 + 1) - 1U < 0x60) {
LAB_0292e8fc:
      lVar11 = *(long *)(lVar11 + (uVar14 & 0xffffffff) * 0x20 + 8);
      if (lVar11 != 0) {
        *(undefined2 *)(lVar11 + 8) = 0x75;
        *(undefined1 *)(lVar11 + 10) = 0;
        *(undefined8 *)(lVar11 + 0xc) = 0;
        *(undefined8 *)(lVar11 + 0x14) = 0;
        *(undefined4 *)(lVar11 + 0x1c) = 0;
        *(long *)(*(long *)(lVar9 + 0x78) + 0x3b0) = lVar11;
        lVar9 = *(long *)(param_1 + 0x10);
      }
    }
LAB_0292e930:
    bVar3 = true;
    FUN_0107b310(lVar9,0x90,8,1);
    lVar9 = *(long *)(*(long *)(param_1 + 0x10) + 0x78);
    lVar11 = *(long *)(lVar9 + 0x248);
    if (lVar11 != 0) {
      bVar3 = *(int *)(lVar11 + 0xc) == 0;
    }
    lVar9 = *(long *)(lVar9 + 0x3b0);
    bVar4 = false;
    if (lVar9 != 0) {
      bVar4 = *(int *)(lVar9 + 0xc) != 0;
    }
    *param_2 = bVar4;
    lVar9 = *(long *)(param_1 + 0x10);
    lVar11 = *(long *)(lVar9 + 0x58);
    if (*(uint *)(lVar11 + 0x408) == 0) {
      uVar18 = 0;
    }
    else {
      memset((void *)(*(long *)(lVar11 + (ulong)*(uint *)(lVar11 + 0x408) * 0x20 + 8) + 8),0,0x430);
      *(int *)(lVar11 + 0x408) = *(int *)(lVar11 + 0x408) + -1;
      lVar11 = *(long *)(lVar9 + 0x58);
      uVar18 = (ulong)*(uint *)(lVar11 + 0x408);
    }
    *(undefined8 *)(lVar9 + 0x78) = *(undefined8 *)(lVar11 + uVar18 * 0x20 + 8);
    lVar9 = *(long *)(lVar9 + 0x38);
    uVar10 = *(uint *)(lVar9 + 0xc08);
    if (uVar10 != 0) {
      if ((uVar10 & 0xffff) < 0x60) {
        uVar18 = (ulong)uVar10 & 0xffff;
        plVar13 = (long *)(lVar9 + uVar18 * 0x20 + 8);
        do {
          uVar18 = uVar18 + 1;
          if (*(short *)(*plVar13 + 8) == 0) break;
          *(undefined2 *)(*plVar13 + 8) = 0;
          plVar13 = plVar13 + 4;
        } while (((uint)uVar18 & 0xffff) != 0x60);
        uVar10 = *(uint *)(lVar9 + 0xc08);
      }
      *(uint *)(lVar9 + 0xc08) = uVar10 - 1;
      *(undefined2 *)(*(long *)(lVar9 + (ulong)(uVar10 - 1) * 0x20 + 8) + 8) = 0;
      uVar18 = (ulong)*(uint *)(lVar9 + 0xc08);
      do {
        if (uVar18 == 0) goto LAB_0292ea54;
        uVar18 = uVar18 - 1;
        *(int *)(lVar9 + 0xc08) = (int)uVar18;
      } while (*(short *)(*(long *)(lVar9 + (uVar18 & 0xffffffff) * 0x20 + 8) + 8) != 1);
      *(int *)(lVar9 + 0xc08) = (int)uVar18 + 1;
    }
LAB_0292ea54:
    if (bVar3) {
      uVar18 = FUN_0167c614(*(undefined8 *)(param_1 + 0x18),param_3,param_4);
      if ((uVar18 & 1) == 0) {
        iVar8 = FUN_0292eb24(param_1,0x43,param_3,param_4,param_5);
        lVar9 = *(long *)(*(long *)(param_1 + 0x18) + 0x10);
        *(long *)(lVar9 + 0x20) = *(long *)(lVar9 + 0x20) + 1;
        uVar18 = *(ulong *)(lVar9 + 8);
        uVar17 = uVar18 ^ *(ulong *)(lVar9 + 0x10);
        uVar14 = uVar17 >> 0x1b | uVar17 << 0x25;
        uVar17 = uVar17 ^ (uVar18 >> 0x28 | uVar18 << 0x18) ^ uVar17 << 0x10;
        uVar10 = (int)uVar18 + (int)*(ulong *)(lVar9 + 0x10);
        while (99 < (uVar10 & 0x7f)) {
          uVar18 = uVar17 ^ uVar14;
          iVar12 = (int)uVar14;
          iVar15 = (int)uVar17;
          uVar14 = uVar18 >> 0x1b | uVar18 << 0x25;
          uVar17 = uVar18 ^ (uVar17 >> 0x28 | uVar17 << 0x18) ^ uVar18 << 0x10;
          uVar10 = iVar15 + iVar12;
        }
        *(ulong *)(lVar9 + 8) = uVar17;
        *(ulong *)(lVar9 + 0x10) = uVar14;
        uVar10 = (uint)((uVar10 & 0x7f) < ((uVar5 & 0xff) - (uVar6 & 0xff)) + iVar8);
      }
      else {
        uVar10 = 1;
      }
      uVar10 = uVar10 | (*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x49a) & 0x20) >> 5;
    }
    else {
      uVar10 = 0;
    }
  }
  return uVar10;
}


