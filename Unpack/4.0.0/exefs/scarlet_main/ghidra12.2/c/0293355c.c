/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0293355c; name: FUN_0293355c
 */


/* WARNING: Type propagation algorithm not settling */

uint FUN_0293355c(long param_1,long *param_2,long *param_3,uint param_4,ushort *param_5)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  
  uVar2 = (**(code **)(*param_3 + 0x108))(param_3);
  if (*param_5 < uVar2) {
    return 0;
  }
  lVar10 = *(long *)(param_1 + 0x10);
  lVar12 = *(long *)(lVar10 + 0x38);
  uVar9 = *(uint *)(lVar12 + 0xc08);
  if (uVar9 < 0x60) {
    do {
      lVar16 = *(long *)(lVar12 + (ulong)uVar9 * 0x20 + 8);
      if (*(short *)(lVar16 + 8) == 0) {
        if (uVar9 < 0x5f) {
          *(undefined2 *)(lVar16 + 8) = 1;
          *(int *)(lVar12 + 0xc08) = *(int *)(lVar12 + 0xc08) + 1;
        }
        break;
      }
      uVar9 = uVar9 + 1;
      *(uint *)(lVar12 + 0xc08) = uVar9;
    } while (uVar9 != 0x60);
  }
  lVar12 = *(long *)(lVar10 + 0x58);
  uVar9 = *(uint *)(lVar12 + 0x408);
  if (uVar9 < 0x1f) {
    *(uint *)(lVar12 + 0x408) = uVar9 + 1;
    lVar12 = *(long *)(lVar10 + 0x58);
    uVar9 = *(uint *)(lVar12 + 0x408);
  }
  *(undefined8 *)(lVar10 + 0x78) = *(undefined8 *)(lVar12 + (ulong)uVar9 * 0x20 + 8);
  lVar12 = *(long *)(param_1 + 0x10);
  uVar4 = (**(code **)(*param_2 + 0x98))(param_2);
  lVar10 = *(long *)(lVar12 + 0x38);
  uVar9 = *(uint *)(lVar10 + 0xc08);
  uVar18 = (ulong)uVar9;
  if (uVar9 < 0x61) {
    uVar9 = 0x60;
  }
  plVar13 = (long *)(lVar10 + uVar18 * 0x20 + 8);
  do {
    uVar14 = uVar18;
    if (uVar9 == uVar14) goto LAB_029336d8;
    lVar16 = *plVar13;
    if (*(short *)(lVar16 + 8) == 0) goto LAB_029336a8;
    plVar13 = plVar13 + 4;
    uVar18 = uVar14 + 1;
  } while (*(short *)(lVar16 + 8) != 3);
  if ((int)(uVar14 + 1) - 1U < 0x60) {
LAB_029336a8:
    lVar10 = *(long *)(lVar10 + (uVar14 & 0xffffffff) * 0x20 + 8);
    if (lVar10 != 0) {
      *(undefined2 *)(lVar10 + 8) = 3;
      *(undefined4 *)(lVar10 + 0xc) = uVar4;
      *(undefined1 *)(lVar10 + 10) = 4;
      *(undefined8 *)(lVar10 + 0x10) = 0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(long *)(*(long *)(lVar12 + 0x78) + 0x20) = lVar10;
    }
  }
LAB_029336d8:
  lVar12 = *(long *)(param_1 + 0x10);
  uVar4 = (**(code **)(*param_3 + 0x98))(param_3);
  lVar10 = *(long *)(lVar12 + 0x38);
  uVar9 = *(uint *)(lVar10 + 0xc08);
  uVar18 = (ulong)uVar9;
  if (uVar9 < 0x61) {
    uVar9 = 0x60;
  }
  plVar13 = (long *)(lVar10 + uVar18 * 0x20 + 8);
  do {
    uVar14 = uVar18;
    if (uVar9 == uVar14) goto LAB_02933768;
    lVar16 = *plVar13;
    if (*(short *)(lVar16 + 8) == 0) goto LAB_0293373c;
    plVar13 = plVar13 + 4;
    uVar18 = uVar14 + 1;
  } while (*(short *)(lVar16 + 8) != 4);
  if ((int)(uVar14 + 1) - 1U < 0x60) {
LAB_0293373c:
    lVar10 = *(long *)(lVar10 + (uVar14 & 0xffffffff) * 0x20 + 8);
    if (lVar10 != 0) {
      *(undefined2 *)(lVar10 + 8) = 4;
      *(undefined4 *)(lVar10 + 0xc) = uVar4;
      *(undefined1 *)(lVar10 + 10) = 4;
      *(undefined8 *)(lVar10 + 0x10) = 0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(long *)(*(long *)(lVar12 + 0x78) + 0x28) = lVar10;
    }
  }
LAB_02933768:
  lVar10 = *(long *)(param_1 + 0x10);
  lVar12 = *(long *)(lVar10 + 0x38);
  uVar11 = *(uint *)(lVar12 + 0xc08);
  uVar18 = (ulong)uVar11;
  uVar9 = uVar11;
  if (uVar11 < 0x61) {
    uVar9 = 0x60;
  }
  uVar14 = uVar18 << 5 | 8;
  lVar16 = -1;
  do {
    lVar19 = lVar16;
    if ((uVar18 - uVar9) + lVar19 == -1) goto LAB_0293380c;
    sVar3 = *(short *)(*(long *)(lVar12 + uVar14) + 8);
    if (sVar3 == 0) goto LAB_029337cc;
    uVar14 = uVar14 + 0x20;
    lVar16 = lVar19 + 1;
  } while (sVar3 != 0x59);
  if (uVar11 + (int)(lVar19 + 1) < 0x60) {
LAB_029337cc:
    lVar16 = *(long *)(lVar12 + (ulong)(uVar11 + (int)lVar19 + 1) * 0x20 + 8);
    if (lVar16 != 0) {
      *(undefined2 *)(lVar16 + 8) = 0x59;
      *(uint *)(lVar16 + 0xc) = param_4 & 1;
      *(undefined1 *)(lVar16 + 10) = 4;
      *(undefined8 *)(lVar16 + 0x10) = 0;
      *(undefined8 *)(lVar16 + 0x18) = 0;
      *(long *)(*(long *)(lVar10 + 0x78) + 0x2d0) = lVar16;
      lVar10 = *(long *)(param_1 + 0x10);
      lVar12 = *(long *)(lVar10 + 0x38);
      uVar18 = (ulong)*(uint *)(lVar12 + 0xc08);
    }
  }
LAB_0293380c:
  uVar9 = (uint)uVar18;
  if (uVar9 < 0x61) {
    uVar9 = 0x60;
  }
  plVar13 = (long *)(lVar12 + uVar18 * 0x20 + 8);
  do {
    uVar14 = uVar18;
    if (uVar9 == uVar14) goto LAB_0293388c;
    lVar16 = *plVar13;
    if (*(short *)(lVar16 + 8) == 0) goto LAB_02933854;
    plVar13 = plVar13 + 4;
    uVar18 = uVar14 + 1;
  } while (*(short *)(lVar16 + 8) != 0x3f);
  if ((int)(uVar14 + 1) - 1U < 0x60) {
LAB_02933854:
    lVar12 = *(long *)(lVar12 + (uVar14 & 0xffffffff) * 0x20 + 8);
    if (lVar12 != 0) {
      *(undefined2 *)(lVar12 + 8) = 0x3f;
      *(undefined8 *)(lVar12 + 0xc) = 0;
      *(undefined8 *)(lVar12 + 0x14) = 0;
      *(undefined4 *)(lVar12 + 0x1c) = 0;
      *(undefined1 *)(lVar12 + 10) = 1;
      *(long *)(*(long *)(lVar10 + 0x78) + 0x200) = lVar12;
      lVar10 = *(long *)(param_1 + 0x10);
    }
  }
LAB_0293388c:
  FUN_0107b310(lVar10,0x97,8,1);
  lVar12 = *(long *)(param_1 + 0x10);
  lVar10 = *(long *)(*(long *)(lVar12 + 0x78) + 0x200);
  if (lVar10 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(uint *)(lVar10 + 0xc);
  }
  lVar10 = *(long *)(lVar12 + 0x58);
  if (*(uint *)(lVar10 + 0x408) == 0) {
    uVar18 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar10 + (ulong)*(uint *)(lVar10 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar10 + 0x408) = *(int *)(lVar10 + 0x408) + -1;
    lVar10 = *(long *)(lVar12 + 0x58);
    uVar18 = (ulong)*(uint *)(lVar10 + 0x408);
  }
  *(undefined8 *)(lVar12 + 0x78) = *(undefined8 *)(lVar10 + uVar18 * 0x20 + 8);
  lVar10 = *(long *)(lVar12 + 0x38);
  uVar11 = *(uint *)(lVar10 + 0xc08);
  if (uVar11 != 0) {
    if ((uVar11 & 0xffff) < 0x60) {
      uVar18 = (ulong)uVar11 & 0xffff;
      plVar13 = (long *)(lVar10 + uVar18 * 0x20 + 8);
      do {
        uVar18 = uVar18 + 1;
        if (*(short *)(*plVar13 + 8) == 0) break;
        *(undefined2 *)(*plVar13 + 8) = 0;
        plVar13 = plVar13 + 4;
      } while (((uint)uVar18 & 0xffff) != 0x60);
      uVar11 = *(uint *)(lVar10 + 0xc08);
    }
    *(uint *)(lVar10 + 0xc08) = uVar11 - 1;
    *(undefined2 *)(*(long *)(lVar10 + (ulong)(uVar11 - 1) * 0x20 + 8) + 8) = 0;
    uVar18 = (ulong)*(uint *)(lVar10 + 0xc08);
    do {
      if (uVar18 == 0) goto LAB_02933988;
      uVar18 = uVar18 - 1;
      *(int *)(lVar10 + 0xc08) = (int)uVar18;
    } while (*(short *)(*(long *)(lVar10 + (uVar18 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar10 + 0xc08) = (int)uVar18 + 1;
  }
LAB_02933988:
  if ((uVar9 & 0xff) != 0) goto LAB_02933a6c;
  lVar10 = *(long *)(*(long *)(param_1 + 8) + 0x38);
  if (((*(byte *)(lVar10 + 0x499) >> 2 & 1) == 0) && (*(uint *)(lVar10 + 0x30) < 2)) {
    lVar10 = *(long *)(*(long *)(param_1 + 0x18) + 0x290);
    uVar4 = (**(code **)(*param_3 + 0x98))(param_3);
    piVar6 = (int *)FUN_011e2dd4(*(undefined8 *)(*(long *)(lVar10 + 8) + 0x50),uVar4);
    if ((piVar6 != (int *)0x0) && (*piVar6 < 5 && *piVar6 != 0)) goto LAB_02933a20;
    bVar1 = (**(code **)(*param_3 + 0x460))(param_3);
    if (bVar1 == 0xff) {
      uVar9 = 0x14;
    }
    else if (bVar1 < 0xdc) {
      uVar9 = 10;
      if (bVar1 < 0xb4) {
        uVar9 = 0;
      }
    }
    else {
      uVar9 = 0xf;
    }
  }
  else {
LAB_02933a20:
    uVar9 = 0;
  }
  lVar10 = *(long *)(*(long *)(param_1 + 0x18) + 0x10);
  *(long *)(lVar10 + 0x20) = *(long *)(lVar10 + 0x20) + 1;
  uVar18 = *(ulong *)(lVar10 + 8);
  uVar17 = uVar18 ^ *(ulong *)(lVar10 + 0x10);
  uVar14 = uVar17 >> 0x1b | uVar17 << 0x25;
  uVar17 = uVar17 ^ (uVar18 >> 0x28 | uVar18 << 0x18) ^ uVar17 << 0x10;
  uVar11 = (int)uVar18 + (int)*(ulong *)(lVar10 + 0x10);
  while (99 < (uVar11 & 0x7f)) {
    uVar18 = uVar17 ^ uVar14;
    iVar5 = (int)uVar14;
    iVar15 = (int)uVar17;
    uVar14 = uVar18 >> 0x1b | uVar18 << 0x25;
    uVar17 = uVar18 ^ (uVar17 >> 0x28 | uVar17 << 0x18) ^ uVar18 << 0x10;
    uVar11 = iVar15 + iVar5;
  }
  *(ulong *)(lVar10 + 8) = uVar17;
  *(ulong *)(lVar10 + 0x10) = uVar14;
  if ((uVar11 & 0x7f) < uVar9) {
    uVar9 = 5;
  }
  else {
    if (((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x49a) >> 5 & 1) == 0) ||
       (uVar18 = FUN_01242e68(*(long *)(param_1 + 8),*(undefined8 *)(param_1 + 0x18),param_3),
       (uVar18 & 1) == 0)) {
      puVar7 = (undefined8 *)(**(code **)param_3[5])(param_3 + 5);
      if (((*PTR_DAT_047d3f00 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar5 != 0)) {
        uVar8 = FUN_01b07aa4();
        *(undefined8 *)PTR_DAT_047d3f08 = uVar8;
        __cxa_guard_release(PTR_DAT_047d3f00);
      }
      if (puVar7 != (undefined8 *)0x0) {
        while (puVar7 != (undefined8 *)PTR_DAT_047d3f08) {
          puVar7 = (undefined8 *)*puVar7;
          if (puVar7 == (undefined8 *)0x0) {
            return 0;
          }
        }
        if ((((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x49a) >> 1 & 1) != 0) &&
            (uVar18 = FUN_01242e68(*(long *)(param_1 + 8),*(undefined8 *)(param_1 + 0x18),param_3),
            (uVar18 & 1) == 0)) && (*(char *)((long)param_3 + 0x714) != '\0')) {
          uVar9 = 7;
          goto LAB_02933a6c;
        }
      }
      return 0;
    }
    uVar9 = 6;
  }
LAB_02933a6c:
  sVar3 = (**(code **)(*param_3 + 0x108))(param_3);
  *param_5 = sVar3 - 1;
  return uVar9;
}


