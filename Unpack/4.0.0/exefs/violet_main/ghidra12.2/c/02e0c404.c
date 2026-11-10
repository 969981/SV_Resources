/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e0c404; name: FUN_02e0c404
 */


int FUN_02e0c404(long param_1,long *param_2,uint param_3)

{
  int iVar1;
  short sVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  uint uVar20;
  
  uVar4 = (**(code **)(*param_2 + 0x300))(param_2,param_3);
  plVar10 = (long *)(**(code **)param_2[5])(param_2 + 5);
  if (((*PTR_DAT_047d3f00 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar9 != 0))
  {
    uVar11 = FUN_01b07aa4();
    *(undefined8 *)PTR_DAT_047d3f08 = uVar11;
    __cxa_guard_release(PTR_DAT_047d3f00);
  }
  for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
    if (plVar10 == (long *)PTR_DAT_047d3f08) {
      plVar10 = param_2;
      if (*(char *)((long)param_2 + 0x714) == '\0') {
        bVar3 = false;
        goto LAB_02e0c4c0;
      }
      if (*(char *)((long)param_2 + 0x715) != 'c') {
        uVar5 = FUN_02e1f884(param_2);
        uVar6 = (**(code **)(*param_2 + 0x300))(param_2,param_3);
        uVar7 = FUN_02e1f784(param_2,param_3);
        uVar20 = uVar6 ^ 1;
        bVar3 = false;
        uVar5 = uVar5 ^ 1;
        iVar9 = 0x1800;
        if (((uVar6 | uVar7) & 1) == 0) {
          iVar9 = 0x1000;
        }
        goto LAB_02e0c518;
      }
      bVar3 = false;
      goto LAB_02e0c4c0;
    }
  }
  bVar3 = true;
  plVar10 = (long *)0x0;
LAB_02e0c4c0:
  iVar9 = 0x1000;
  uVar5 = 1;
  uVar20 = 1;
LAB_02e0c518:
  lVar13 = *(long *)(param_1 + 0x10);
  lVar14 = *(long *)(lVar13 + 0x38);
  uVar6 = *(uint *)(lVar14 + 0xc08);
  if (uVar6 < 0x60) {
    do {
      lVar15 = *(long *)(lVar14 + (ulong)uVar6 * 0x20 + 8);
      if (*(short *)(lVar15 + 8) == 0) {
        if (uVar6 < 0x5f) {
          *(undefined2 *)(lVar15 + 8) = 1;
          *(int *)(lVar14 + 0xc08) = *(int *)(lVar14 + 0xc08) + 1;
        }
        break;
      }
      uVar6 = uVar6 + 1;
      *(uint *)(lVar14 + 0xc08) = uVar6;
    } while (uVar6 != 0x60);
  }
  lVar14 = *(long *)(lVar13 + 0x58);
  uVar6 = *(uint *)(lVar14 + 0x408);
  if (uVar6 < 0x1f) {
    *(uint *)(lVar14 + 0x408) = uVar6 + 1;
    lVar14 = *(long *)(lVar13 + 0x58);
    uVar6 = *(uint *)(lVar14 + 0x408);
  }
  *(undefined8 *)(lVar13 + 0x78) = *(undefined8 *)(lVar14 + (ulong)uVar6 * 0x20 + 8);
  lVar14 = *(long *)(param_1 + 0x10);
  uVar8 = (**(code **)(*param_2 + 0x98))(param_2);
  lVar13 = *(long *)(lVar14 + 0x38);
  uVar6 = *(uint *)(lVar13 + 0xc08);
  uVar18 = (ulong)uVar6;
  if (uVar6 < 0x61) {
    uVar6 = 0x60;
  }
  plVar16 = (long *)(lVar13 + uVar18 * 0x20 + 8);
  do {
    uVar17 = uVar18;
    if (uVar6 == uVar17) goto LAB_02e0c634;
    lVar15 = *plVar16;
    if (*(short *)(lVar15 + 8) == 0) goto LAB_02e0c604;
    plVar16 = plVar16 + 4;
    uVar18 = uVar17 + 1;
  } while (*(short *)(lVar15 + 8) != 2);
  if ((int)(uVar17 + 1) - 1U < 0x60) {
LAB_02e0c604:
    lVar13 = *(long *)(lVar13 + (uVar17 & 0xffffffff) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 2;
      *(undefined4 *)(lVar13 + 0xc) = uVar8;
      *(undefined1 *)(lVar13 + 10) = 4;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(long *)(*(long *)(lVar14 + 0x78) + 0x18) = lVar13;
    }
  }
LAB_02e0c634:
  lVar13 = *(long *)(param_1 + 0x10);
  lVar14 = *(long *)(lVar13 + 0x38);
  uVar6 = *(uint *)(lVar14 + 0xc08);
  uVar18 = (ulong)uVar6;
  if (uVar6 < 0x61) {
    uVar6 = 0x60;
  }
  plVar16 = (long *)(lVar14 + uVar18 * 0x20 + 8);
  do {
    uVar17 = uVar18;
    if (uVar6 == uVar17) goto LAB_02e0c6c0;
    lVar15 = *plVar16;
    if (*(short *)(lVar15 + 8) == 0) goto LAB_02e0c68c;
    plVar16 = plVar16 + 4;
    uVar18 = uVar17 + 1;
  } while (*(short *)(lVar15 + 8) != 0x59);
  if ((int)(uVar17 + 1) - 1U < 0x60) {
LAB_02e0c68c:
    lVar14 = *(long *)(lVar14 + (uVar17 & 0xffffffff) * 0x20 + 8);
    if (lVar14 != 0) {
      *(uint *)(lVar14 + 0xc) = uVar4 & 1;
      *(undefined2 *)(lVar14 + 8) = 0x59;
      *(undefined1 *)(lVar14 + 10) = 1;
      *(undefined8 *)(lVar14 + 0x10) = 0;
      *(undefined8 *)(lVar14 + 0x18) = 0;
      *(long *)(*(long *)(lVar13 + 0x78) + 0x2d0) = lVar14;
      lVar13 = *(long *)(param_1 + 0x10);
    }
  }
LAB_02e0c6c0:
  FUN_0107b310(lVar13,0x57,8,1);
  lVar13 = *(long *)(param_1 + 0x10);
  lVar14 = *(long *)(*(long *)(lVar13 + 0x78) + 0x2d0);
  iVar12 = 0;
  if (lVar14 != 0) {
    iVar12 = *(int *)(lVar14 + 0xc);
  }
  iVar1 = 0x1800;
  if (iVar12 == 0) {
    iVar1 = iVar9;
  }
  lVar14 = *(long *)(lVar13 + 0x38);
  uVar6 = *(uint *)(lVar14 + 0xc08);
  uVar18 = (ulong)uVar6;
  uVar4 = uVar6;
  if (uVar6 < 0x61) {
    uVar4 = 0x60;
  }
  uVar17 = uVar18 << 5 | 8;
  lVar15 = -1;
  do {
    lVar19 = lVar15;
    if ((uVar18 - uVar4) + lVar19 == -1) goto LAB_02e0c790;
    sVar2 = *(short *)(*(long *)(lVar14 + uVar17) + 8);
    if (sVar2 == 0) goto LAB_02e0c750;
    uVar17 = uVar17 + 0x20;
    lVar15 = lVar19 + 1;
  } while (sVar2 != 0x4b);
  if (uVar6 + (int)(lVar19 + 1) < 0x60) {
LAB_02e0c750:
    lVar15 = *(long *)(lVar14 + (ulong)(uVar6 + (int)lVar19 + 1) * 0x20 + 8);
    if (lVar15 != 0) {
      *(undefined2 *)(lVar15 + 8) = 0x4b;
      *(uint *)(lVar15 + 0xc) = (uint)(iVar12 != 0);
      *(undefined1 *)(lVar15 + 10) = 4;
      *(undefined8 *)(lVar15 + 0x10) = 0;
      *(undefined8 *)(lVar15 + 0x18) = 0;
      *(long *)(*(long *)(lVar13 + 0x78) + 0x260) = lVar15;
      lVar13 = *(long *)(param_1 + 0x10);
      lVar14 = *(long *)(lVar13 + 0x38);
      uVar18 = (ulong)*(uint *)(lVar14 + 0xc08);
    }
  }
LAB_02e0c790:
  uVar4 = (uint)uVar18;
  if (uVar4 < 0x61) {
    uVar4 = 0x60;
  }
  plVar16 = (long *)(lVar14 + uVar18 * 0x20 + 8);
  do {
    uVar17 = uVar18;
    if (uVar4 == uVar17) goto LAB_02e0c808;
    lVar15 = *plVar16;
    if (*(short *)(lVar15 + 8) == 0) goto LAB_02e0c7d8;
    plVar16 = plVar16 + 4;
    uVar18 = uVar17 + 1;
  } while (*(short *)(lVar15 + 8) != 0x38);
  if ((int)(uVar17 + 1) - 1U < 0x60) {
LAB_02e0c7d8:
    lVar14 = *(long *)(lVar14 + (uVar17 & 0xffffffff) * 0x20 + 8);
    if (lVar14 != 0) {
      *(undefined2 *)(lVar14 + 8) = 0x38;
      *(int *)(lVar14 + 0xc) = iVar1;
      *(undefined1 *)(lVar14 + 10) = 0;
      *(undefined8 *)(lVar14 + 0x10) = 0;
      *(undefined8 *)(lVar14 + 0x18) = 0;
      *(long *)(*(long *)(lVar13 + 0x78) + 0x1c8) = lVar14;
      lVar13 = *(long *)(param_1 + 0x10);
    }
  }
LAB_02e0c808:
  FUN_0107b310(lVar13,0x58,8,1);
  lVar14 = *(long *)(param_1 + 0x10);
  lVar13 = *(long *)(*(long *)(lVar14 + 0x78) + 0x1c8);
  if (lVar13 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(lVar13 + 0xc);
  }
  if (((uVar5 | uVar20) & 1) == 0) {
    bVar3 = iVar9 == 0x2000;
    iVar12 = 0x2000;
    iVar9 = 0x2400;
  }
  else {
    if (((bVar3) || (*(char *)((long)plVar10 + 0x714) == '\0')) ||
       (*(char *)((long)plVar10 + 0x715) != 'c')) goto LAB_02e0c898;
    iVar9 = iVar1;
    if ((param_3 & 0xff) == 0x12) goto LAB_02e0c898;
    if ((param_3 & 0xff) == 99) {
      param_3 = 0x1f;
    }
    if ((*(uint *)((long)plVar10 + 0x71c) >> (ulong)(param_3 & 0x1f) & 1) != 0) goto LAB_02e0c898;
    bVar3 = iVar1 == 0x1800;
    iVar12 = 0x1333;
    iVar9 = 0x2000;
  }
  if (!bVar3) {
    iVar9 = iVar12;
  }
LAB_02e0c898:
  lVar13 = *(long *)(lVar14 + 0x58);
  if (*(uint *)(lVar13 + 0x408) == 0) {
    uVar18 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar13 + (ulong)*(uint *)(lVar13 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar13 + 0x408) = *(int *)(lVar13 + 0x408) + -1;
    lVar13 = *(long *)(lVar14 + 0x58);
    uVar18 = (ulong)*(uint *)(lVar13 + 0x408);
  }
  *(undefined8 *)(lVar14 + 0x78) = *(undefined8 *)(lVar13 + uVar18 * 0x20 + 8);
  lVar13 = *(long *)(lVar14 + 0x38);
  uVar4 = *(uint *)(lVar13 + 0xc08);
  if (uVar4 != 0) {
    if ((uVar4 & 0xffff) < 0x60) {
      uVar18 = (ulong)uVar4 & 0xffff;
      plVar10 = (long *)(lVar13 + uVar18 * 0x20 + 8);
      do {
        uVar18 = uVar18 + 1;
        if (*(short *)(*plVar10 + 8) == 0) break;
        *(undefined2 *)(*plVar10 + 8) = 0;
        plVar10 = plVar10 + 4;
      } while (((uint)uVar18 & 0xffff) != 0x60);
      uVar4 = *(uint *)(lVar13 + 0xc08);
    }
    *(uint *)(lVar13 + 0xc08) = uVar4 - 1;
    *(undefined2 *)(*(long *)(lVar13 + (ulong)(uVar4 - 1) * 0x20 + 8) + 8) = 0;
    uVar18 = (ulong)*(uint *)(lVar13 + 0xc08);
    do {
      if (uVar18 == 0) {
        return iVar9;
      }
      uVar18 = uVar18 - 1;
      *(int *)(lVar13 + 0xc08) = (int)uVar18;
    } while (*(short *)(*(long *)(lVar13 + (uVar18 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar13 + 0xc08) = (int)uVar18 + 1;
  }
  return iVar9;
}


