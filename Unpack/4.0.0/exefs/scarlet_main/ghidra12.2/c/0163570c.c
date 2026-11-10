/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0163570c; name: FUN_0163570c
 */


int FUN_0163570c(long param_1,ulong param_2,long *param_3)

{
  int iVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  int *piVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  int iVar16;
  uint uVar17;
  
  if ((*PTR_DAT_047d7940 & 1) == 0) {
    param_2 = param_2 & 0xffffffff;
    iVar4 = __cxa_guard_acquire(PTR_DAT_047d7940);
    if (iVar4 != 0) {
      FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7940);
    }
  }
  uVar5 = *(undefined8 *)PTR_DAT_047d7948;
  *(undefined8 *)PTR_DAT_047d7950 = uVar5;
  piVar6 = (int *)FUN_00cf60cc(uVar5,param_2);
  if ((*(ushort *)((long)piVar6 - (long)*piVar6) < 0x1f) ||
     (uVar7 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[0xf], uVar7 == 0)) {
    uVar17 = 0;
  }
  else {
    uVar17 = (uint)*(byte *)((long)piVar6 + uVar7);
  }
  lVar8 = *(long *)(param_1 + 0x10);
  lVar11 = *(long *)(lVar8 + 0x38);
  uVar9 = *(uint *)(lVar11 + 0xc08);
  if (uVar9 < 0x60) {
    do {
      lVar15 = *(long *)(lVar11 + (ulong)uVar9 * 0x20 + 8);
      if (*(short *)(lVar15 + 8) == 0) {
        if (uVar9 < 0x5f) {
          *(undefined2 *)(lVar15 + 8) = 1;
          *(int *)(lVar11 + 0xc08) = *(int *)(lVar11 + 0xc08) + 1;
        }
        break;
      }
      uVar9 = uVar9 + 1;
      *(uint *)(lVar11 + 0xc08) = uVar9;
    } while (uVar9 != 0x60);
  }
  lVar11 = *(long *)(lVar8 + 0x58);
  uVar9 = *(uint *)(lVar11 + 0x408);
  if (uVar9 < 0x1f) {
    *(uint *)(lVar11 + 0x408) = uVar9 + 1;
    lVar11 = *(long *)(lVar8 + 0x58);
    uVar9 = *(uint *)(lVar11 + 0x408);
  }
  *(undefined8 *)(lVar8 + 0x78) = *(undefined8 *)(lVar11 + (ulong)uVar9 * 0x20 + 8);
  lVar11 = *(long *)(param_1 + 0x10);
  uVar3 = (**(code **)(*param_3 + 0x98))(param_3);
  lVar8 = *(long *)(lVar11 + 0x38);
  uVar9 = *(uint *)(lVar8 + 0xc08);
  uVar7 = (ulong)uVar9;
  if (uVar9 < 0x61) {
    uVar9 = 0x60;
  }
  plVar14 = (long *)(lVar8 + uVar7 * 0x20 + 8);
  do {
    uVar12 = uVar7;
    if (uVar9 == uVar12) goto LAB_01635890;
    lVar15 = *plVar14;
    if (*(short *)(lVar15 + 8) == 0) goto LAB_01635860;
    plVar14 = plVar14 + 4;
    uVar7 = uVar12 + 1;
  } while (*(short *)(lVar15 + 8) != 3);
  if ((int)(uVar12 + 1) - 1U < 0x60) {
LAB_01635860:
    lVar8 = *(long *)(lVar8 + (uVar12 & 0xffffffff) * 0x20 + 8);
    if (lVar8 != 0) {
      *(undefined2 *)(lVar8 + 8) = 3;
      *(undefined4 *)(lVar8 + 0xc) = uVar3;
      *(undefined1 *)(lVar8 + 10) = 4;
      *(undefined8 *)(lVar8 + 0x10) = 0;
      *(undefined8 *)(lVar8 + 0x18) = 0;
      *(long *)(*(long *)(lVar11 + 0x78) + 0x20) = lVar8;
    }
  }
LAB_01635890:
  lVar8 = *(long *)(param_1 + 0x10);
  lVar11 = *(long *)(lVar8 + 0x38);
  uVar10 = *(uint *)(lVar11 + 0xc08);
  uVar7 = (ulong)uVar10;
  uVar9 = uVar10;
  if (uVar10 < 0x61) {
    uVar9 = 0x60;
  }
  uVar12 = uVar7 << 5 | 8;
  lVar15 = -1;
  do {
    lVar13 = lVar15;
    if ((uVar7 - uVar9) + lVar13 == -1) goto LAB_01635930;
    sVar2 = *(short *)(*(long *)(lVar11 + uVar12) + 8);
    if (sVar2 == 0) goto LAB_016358f0;
    uVar12 = uVar12 + 0x20;
    lVar15 = lVar13 + 1;
  } while (sVar2 != 0x28);
  if (uVar10 + (int)(lVar13 + 1) < 0x60) {
LAB_016358f0:
    lVar15 = *(long *)(lVar11 + (ulong)(uVar10 + (int)lVar13 + 1) * 0x20 + 8);
    if (lVar15 != 0) {
      *(undefined2 *)(lVar15 + 8) = 0x28;
      *(uint *)(lVar15 + 0xc) = uVar17;
      *(undefined1 *)(lVar15 + 10) = 4;
      *(undefined8 *)(lVar15 + 0x10) = 0;
      *(undefined8 *)(lVar15 + 0x18) = 0;
      *(long *)(*(long *)(lVar8 + 0x78) + 0x148) = lVar15;
      lVar8 = *(long *)(param_1 + 0x10);
      lVar11 = *(long *)(lVar8 + 0x38);
      uVar7 = (ulong)*(uint *)(lVar11 + 0xc08);
    }
  }
LAB_01635930:
  uVar10 = (uint)uVar7;
  uVar9 = uVar10;
  if (uVar10 < 0x61) {
    uVar9 = 0x60;
  }
  uVar12 = uVar7 << 5 | 8;
  lVar15 = 0;
  do {
    lVar13 = lVar15;
    if ((uVar7 - uVar9) + lVar13 == 0) goto LAB_016359c4;
    sVar2 = *(short *)(*(long *)(lVar11 + uVar12) + 8);
    if (sVar2 == 0) goto LAB_01635984;
    uVar12 = uVar12 + 0x20;
    lVar15 = lVar13 + 1;
  } while (sVar2 != 0x4c);
  if ((uVar10 + (int)(lVar13 + 1)) - 1 < 0x60) {
LAB_01635984:
    lVar15 = *(long *)(lVar11 + (ulong)(uVar10 + (int)lVar13) * 0x20 + 8);
    if (lVar15 != 0) {
      *(undefined2 *)(lVar15 + 8) = 0x4c;
      *(undefined8 *)(lVar15 + 0xc) = 0;
      *(undefined8 *)(lVar15 + 0x14) = 0;
      *(undefined4 *)(lVar15 + 0x1c) = 0;
      *(undefined1 *)(lVar15 + 10) = 1;
      *(long *)(*(long *)(lVar8 + 0x78) + 0x268) = lVar15;
      lVar8 = *(long *)(param_1 + 0x10);
      lVar11 = *(long *)(lVar8 + 0x38);
      uVar7 = (ulong)*(uint *)(lVar11 + 0xc08);
    }
  }
LAB_016359c4:
  uVar10 = (uint)uVar7;
  uVar9 = uVar10;
  if (uVar10 < 0x61) {
    uVar9 = 0x60;
  }
  uVar12 = uVar7 << 5 | 8;
  lVar15 = 0;
  do {
    lVar13 = lVar15;
    if ((uVar7 - uVar9) + lVar13 == 0) goto LAB_01635a58;
    sVar2 = *(short *)(*(long *)(lVar11 + uVar12) + 8);
    if (sVar2 == 0) goto LAB_01635a18;
    uVar12 = uVar12 + 0x20;
    lVar15 = lVar13 + 1;
  } while (sVar2 != 0x48);
  if ((uVar10 + (int)(lVar13 + 1)) - 1 < 0x60) {
LAB_01635a18:
    lVar15 = *(long *)(lVar11 + (ulong)(uVar10 + (int)lVar13) * 0x20 + 8);
    if (lVar15 != 0) {
      *(undefined2 *)(lVar15 + 8) = 0x48;
      *(undefined8 *)(lVar15 + 0xc) = 0;
      *(undefined8 *)(lVar15 + 0x14) = 0;
      *(undefined4 *)(lVar15 + 0x1c) = 0;
      *(undefined1 *)(lVar15 + 10) = 1;
      *(long *)(*(long *)(lVar8 + 0x78) + 0x248) = lVar15;
      lVar8 = *(long *)(param_1 + 0x10);
      lVar11 = *(long *)(lVar8 + 0x38);
      uVar7 = (ulong)*(uint *)(lVar11 + 0xc08);
    }
  }
LAB_01635a58:
  uVar9 = (uint)uVar7;
  if (uVar9 < 0x61) {
    uVar9 = 0x60;
  }
  plVar14 = (long *)(lVar11 + uVar7 * 0x20 + 8);
  do {
    uVar12 = uVar7;
    if (uVar9 == uVar12) goto LAB_01635ad4;
    lVar15 = *plVar14;
    if (*(short *)(lVar15 + 8) == 0) goto LAB_01635aa0;
    plVar14 = plVar14 + 4;
    uVar7 = uVar12 + 1;
  } while (*(short *)(lVar15 + 8) != 0x29);
  if ((int)(uVar12 + 1) - 1U < 0x60) {
LAB_01635aa0:
    lVar11 = *(long *)(lVar11 + (uVar12 & 0xffffffff) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 0x29;
      *(undefined1 *)(lVar11 + 10) = 0;
      *(undefined8 *)(lVar11 + 0xc) = 0;
      *(undefined8 *)(lVar11 + 0x14) = 0;
      *(undefined4 *)(lVar11 + 0x1c) = 0;
      *(long *)(*(long *)(lVar8 + 0x78) + 0x150) = lVar11;
      lVar8 = *(long *)(param_1 + 0x10);
    }
  }
LAB_01635ad4:
  FUN_0107b310(lVar8,0x8c,8,1);
  lVar11 = *(long *)(param_1 + 0x10);
  lVar8 = *(long *)(lVar11 + 0x78);
  if (*(long *)(lVar8 + 0x248) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(long *)(lVar8 + 0x248) + 0xc);
  }
  if (*(long *)(lVar8 + 0x268) == 0) {
    iVar16 = 0;
  }
  else {
    iVar16 = *(int *)(*(long *)(lVar8 + 0x268) + 0xc);
  }
  if (*(long *)(lVar8 + 0x150) == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(uint *)(*(long *)(lVar8 + 0x150) + 0xc);
  }
  lVar8 = *(long *)(lVar11 + 0x58);
  if (*(uint *)(lVar8 + 0x408) == 0) {
    uVar7 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar8 + (ulong)*(uint *)(lVar8 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar8 + 0x408) = *(int *)(lVar8 + 0x408) + -1;
    lVar8 = *(long *)(lVar11 + 0x58);
    uVar7 = (ulong)*(uint *)(lVar8 + 0x408);
  }
  *(undefined8 *)(lVar11 + 0x78) = *(undefined8 *)(lVar8 + uVar7 * 0x20 + 8);
  lVar8 = *(long *)(lVar11 + 0x38);
  uVar10 = *(uint *)(lVar8 + 0xc08);
  if (uVar10 != 0) {
    if ((uVar10 & 0xffff) < 0x60) {
      uVar7 = (ulong)uVar10 & 0xffff;
      plVar14 = (long *)(lVar8 + uVar7 * 0x20 + 8);
      do {
        uVar7 = uVar7 + 1;
        if (*(short *)(*plVar14 + 8) == 0) break;
        *(undefined2 *)(*plVar14 + 8) = 0;
        plVar14 = plVar14 + 4;
      } while (((uint)uVar7 & 0xffff) != 0x60);
      uVar10 = *(uint *)(lVar8 + 0xc08);
    }
    *(uint *)(lVar8 + 0xc08) = uVar10 - 1;
    *(undefined2 *)(*(long *)(lVar8 + (ulong)(uVar10 - 1) * 0x20 + 8) + 8) = 0;
    uVar7 = (ulong)*(uint *)(lVar8 + 0xc08);
    do {
      if (uVar7 == 0) goto LAB_01635be8;
      uVar7 = uVar7 - 1;
      *(int *)(lVar8 + 0xc08) = (int)uVar7;
    } while (*(short *)(*(long *)(lVar8 + (uVar7 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar8 + 0xc08) = (int)uVar7 + 1;
  }
LAB_01635be8:
  if (uVar17 != 0) {
    uVar9 = uVar17;
  }
  iVar1 = 0;
  if (iVar4 == 0 || uVar17 == 0) {
    iVar1 = uVar9 << (iVar16 != 0);
  }
  return iVar1;
}


