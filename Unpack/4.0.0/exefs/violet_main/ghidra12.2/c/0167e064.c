/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0167e064; name: FUN_0167e064
 */


bool FUN_0167e064(long param_1,long *param_2,long *param_3,undefined8 param_4,byte *param_5)

{
  byte bVar1;
  short sVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  
  *param_5 = 1;
  iVar5 = (**(code **)(*param_3 + 0x4e8))(param_3);
  if (iVar5 == 0x20) {
    bVar3 = false;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x10);
    lVar10 = *(long *)(lVar7 + 0x38);
    uVar8 = *(uint *)(lVar10 + 0xc08);
    if (uVar8 < 0x60) {
      do {
        lVar14 = *(long *)(lVar10 + (ulong)uVar8 * 0x20 + 8);
        if (*(short *)(lVar14 + 8) == 0) {
          if (uVar8 < 0x5f) {
            *(undefined2 *)(lVar14 + 8) = 1;
            *(int *)(lVar10 + 0xc08) = *(int *)(lVar10 + 0xc08) + 1;
          }
          break;
        }
        uVar8 = uVar8 + 1;
        *(uint *)(lVar10 + 0xc08) = uVar8;
      } while (uVar8 != 0x60);
    }
    lVar10 = *(long *)(lVar7 + 0x58);
    uVar8 = *(uint *)(lVar10 + 0x408);
    if (uVar8 < 0x1f) {
      *(uint *)(lVar10 + 0x408) = uVar8 + 1;
      lVar10 = *(long *)(lVar7 + 0x58);
      uVar8 = *(uint *)(lVar10 + 0x408);
    }
    *(undefined8 *)(lVar7 + 0x78) = *(undefined8 *)(lVar10 + (ulong)uVar8 * 0x20 + 8);
    lVar10 = *(long *)(param_1 + 0x10);
    uVar6 = (**(code **)(*param_2 + 0x98))(param_2);
    lVar7 = *(long *)(lVar10 + 0x38);
    uVar8 = *(uint *)(lVar7 + 0xc08);
    uVar15 = (ulong)uVar8;
    if (uVar8 < 0x61) {
      uVar8 = 0x60;
    }
    plVar13 = (long *)(lVar7 + uVar15 * 0x20 + 8);
    do {
      uVar11 = uVar15;
      if (uVar8 == uVar11) goto LAB_0167e1e4;
      lVar14 = *plVar13;
      if (*(short *)(lVar14 + 8) == 0) goto LAB_0167e1b4;
      plVar13 = plVar13 + 4;
      uVar15 = uVar11 + 1;
    } while (*(short *)(lVar14 + 8) != 3);
    if ((int)(uVar11 + 1) - 1U < 0x60) {
LAB_0167e1b4:
      lVar7 = *(long *)(lVar7 + (uVar11 & 0xffffffff) * 0x20 + 8);
      if (lVar7 != 0) {
        *(undefined2 *)(lVar7 + 8) = 3;
        *(undefined4 *)(lVar7 + 0xc) = uVar6;
        *(undefined1 *)(lVar7 + 10) = 4;
        *(undefined8 *)(lVar7 + 0x10) = 0;
        *(undefined8 *)(lVar7 + 0x18) = 0;
        *(long *)(*(long *)(lVar10 + 0x78) + 0x20) = lVar7;
      }
    }
LAB_0167e1e4:
    lVar10 = *(long *)(param_1 + 0x10);
    uVar6 = (**(code **)(*param_3 + 0x98))(param_3);
    lVar7 = *(long *)(lVar10 + 0x38);
    uVar8 = *(uint *)(lVar7 + 0xc08);
    uVar15 = (ulong)uVar8;
    if (uVar8 < 0x61) {
      uVar8 = 0x60;
    }
    plVar13 = (long *)(lVar7 + uVar15 * 0x20 + 8);
    do {
      uVar11 = uVar15;
      if (uVar8 == uVar11) goto LAB_0167e274;
      lVar14 = *plVar13;
      if (*(short *)(lVar14 + 8) == 0) goto LAB_0167e248;
      plVar13 = plVar13 + 4;
      uVar15 = uVar11 + 1;
    } while (*(short *)(lVar14 + 8) != 4);
    if ((int)(uVar11 + 1) - 1U < 0x60) {
LAB_0167e248:
      lVar7 = *(long *)(lVar7 + (uVar11 & 0xffffffff) * 0x20 + 8);
      if (lVar7 != 0) {
        *(undefined2 *)(lVar7 + 8) = 4;
        *(undefined4 *)(lVar7 + 0xc) = uVar6;
        *(undefined1 *)(lVar7 + 10) = 4;
        *(undefined8 *)(lVar7 + 0x10) = 0;
        *(undefined8 *)(lVar7 + 0x18) = 0;
        *(long *)(*(long *)(lVar10 + 0x78) + 0x28) = lVar7;
      }
    }
LAB_0167e274:
    lVar7 = *(long *)(param_1 + 0x10);
    lVar10 = *(long *)(lVar7 + 0x38);
    uVar9 = *(uint *)(lVar10 + 0xc08);
    uVar15 = (ulong)uVar9;
    uVar8 = uVar9;
    if (uVar9 < 0x61) {
      uVar8 = 0x60;
    }
    uVar11 = uVar15 << 5 | 8;
    lVar14 = -1;
    do {
      lVar12 = lVar14;
      if ((uVar15 - uVar8) + lVar12 == -1) goto LAB_0167e314;
      sVar2 = *(short *)(*(long *)(lVar10 + uVar11) + 8);
      if (sVar2 == 0) goto LAB_0167e2d4;
      uVar11 = uVar11 + 0x20;
      lVar14 = lVar12 + 1;
    } while (sVar2 != 0x24);
    if (uVar9 + (int)(lVar12 + 1) < 0x60) {
LAB_0167e2d4:
      lVar14 = *(long *)(lVar10 + (ulong)(uVar9 + (int)lVar12 + 1) * 0x20 + 8);
      if (lVar14 != 0) {
        *(undefined2 *)(lVar14 + 8) = 0x24;
        *(int *)(lVar14 + 0xc) = iVar5;
        *(undefined1 *)(lVar14 + 10) = 4;
        *(undefined8 *)(lVar14 + 0x10) = 0;
        *(undefined8 *)(lVar14 + 0x18) = 0;
        *(long *)(*(long *)(lVar7 + 0x78) + 0x128) = lVar14;
        lVar7 = *(long *)(param_1 + 0x10);
        lVar10 = *(long *)(lVar7 + 0x38);
        uVar15 = (ulong)*(uint *)(lVar10 + 0xc08);
      }
    }
LAB_0167e314:
    uVar9 = (uint)uVar15;
    uVar8 = uVar9;
    if (uVar9 < 0x61) {
      uVar8 = 0x60;
    }
    uVar11 = uVar15 << 5 | 8;
    lVar14 = 0;
    do {
      lVar12 = lVar14;
      if ((uVar15 - uVar8) + lVar12 == 0) goto LAB_0167e3a4;
      sVar2 = *(short *)(*(long *)(lVar10 + uVar11) + 8);
      if (sVar2 == 0) goto LAB_0167e368;
      uVar11 = uVar11 + 0x20;
      lVar14 = lVar12 + 1;
    } while (sVar2 != 0x49);
    if ((uVar9 + (int)(lVar12 + 1)) - 1 < 0x60) {
LAB_0167e368:
      lVar14 = *(long *)(lVar10 + (ulong)(uVar9 + (int)lVar12) * 0x20 + 8);
      if (lVar14 != 0) {
        *(undefined2 *)(lVar14 + 8) = 0x49;
        *(undefined8 *)(lVar14 + 0x10) = 0;
        *(undefined8 *)(lVar14 + 0x18) = 0;
        *(undefined4 *)(lVar14 + 0xc) = 1;
        *(undefined1 *)(lVar14 + 10) = 1;
        *(long *)(*(long *)(lVar7 + 0x78) + 0x250) = lVar14;
        lVar7 = *(long *)(param_1 + 0x10);
        lVar10 = *(long *)(lVar7 + 0x38);
        uVar15 = (ulong)*(uint *)(lVar10 + 0xc08);
      }
    }
LAB_0167e3a4:
    bVar1 = *param_5;
    uVar8 = (uint)uVar15;
    if (uVar8 < 0x61) {
      uVar8 = 0x60;
    }
    plVar13 = (long *)(lVar10 + uVar15 * 0x20 + 8);
    do {
      uVar11 = uVar15;
      if (uVar8 == uVar11) goto LAB_0167e424;
      lVar14 = *plVar13;
      if (*(short *)(lVar14 + 8) == 0) goto LAB_0167e3f0;
      plVar13 = plVar13 + 4;
      uVar15 = uVar11 + 1;
    } while (*(short *)(lVar14 + 8) != 0x56);
    if ((int)(uVar11 + 1) - 1U < 0x60) {
LAB_0167e3f0:
      lVar10 = *(long *)(lVar10 + (uVar11 & 0xffffffff) * 0x20 + 8);
      if (lVar10 != 0) {
        *(undefined2 *)(lVar10 + 8) = 0x56;
        *(uint *)(lVar10 + 0xc) = (uint)bVar1;
        *(undefined1 *)(lVar10 + 10) = 1;
        *(undefined8 *)(lVar10 + 0x10) = 0;
        *(undefined8 *)(lVar10 + 0x18) = 0;
        *(long *)(*(long *)(lVar7 + 0x78) + 0x2b8) = lVar10;
        lVar7 = *(long *)(param_1 + 0x10);
      }
    }
LAB_0167e424:
    FUN_0107b310(lVar7,0xc5,8,1);
    lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x78);
    lVar10 = *(long *)(lVar7 + 0x250);
    if (lVar10 == 0) {
      bVar3 = false;
    }
    else {
      bVar3 = *(int *)(lVar10 + 0xc) != 0;
    }
    lVar7 = *(long *)(lVar7 + 0x2b8);
    bVar4 = false;
    if (lVar7 != 0) {
      bVar4 = *(int *)(lVar7 + 0xc) != 0;
    }
    *param_5 = bVar4;
    lVar7 = *(long *)(param_1 + 0x10);
    lVar10 = *(long *)(lVar7 + 0x58);
    if (*(uint *)(lVar10 + 0x408) == 0) {
      uVar15 = 0;
    }
    else {
      memset((void *)(*(long *)(lVar10 + (ulong)*(uint *)(lVar10 + 0x408) * 0x20 + 8) + 8),0,0x430);
      *(int *)(lVar10 + 0x408) = *(int *)(lVar10 + 0x408) + -1;
      lVar10 = *(long *)(lVar7 + 0x58);
      uVar15 = (ulong)*(uint *)(lVar10 + 0x408);
    }
    *(undefined8 *)(lVar7 + 0x78) = *(undefined8 *)(lVar10 + uVar15 * 0x20 + 8);
    lVar7 = *(long *)(lVar7 + 0x38);
    uVar8 = *(uint *)(lVar7 + 0xc08);
    if (uVar8 != 0) {
      if ((uVar8 & 0xffff) < 0x60) {
        uVar15 = (ulong)uVar8 & 0xffff;
        plVar13 = (long *)(lVar7 + uVar15 * 0x20 + 8);
        do {
          uVar15 = uVar15 + 1;
          if (*(short *)(*plVar13 + 8) == 0) break;
          *(undefined2 *)(*plVar13 + 8) = 0;
          plVar13 = plVar13 + 4;
        } while (((uint)uVar15 & 0xffff) != 0x60);
        uVar8 = *(uint *)(lVar7 + 0xc08);
      }
      *(uint *)(lVar7 + 0xc08) = uVar8 - 1;
      *(undefined2 *)(*(long *)(lVar7 + (ulong)(uVar8 - 1) * 0x20 + 8) + 8) = 0;
      uVar15 = (ulong)*(uint *)(lVar7 + 0xc08);
      do {
        if (uVar15 == 0) {
          return bVar3;
        }
        uVar15 = uVar15 - 1;
        *(int *)(lVar7 + 0xc08) = (int)uVar15;
      } while (*(short *)(*(long *)(lVar7 + (uVar15 & 0xffffffff) * 0x20 + 8) + 8) != 1);
      *(int *)(lVar7 + 0xc08) = (int)uVar15 + 1;
    }
  }
  return bVar3;
}


