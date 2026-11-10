/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0123efd0; name: FUN_0123efd0
 */


undefined4 FUN_0123efd0(long param_1,uint param_2,long *param_3)

{
  short sVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  int *piVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  ulong uVar19;
  
  puVar2 = PTR_DAT_047d7940;
  if (((*PTR_DAT_047d7940 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d7940), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7940);
  }
  puVar4 = PTR_DAT_047d7950;
  puVar3 = PTR_DAT_047d7948;
  uVar8 = *(undefined8 *)PTR_DAT_047d7948;
  *(undefined8 *)PTR_DAT_047d7950 = uVar8;
  piVar9 = (int *)FUN_00cf60cc(uVar8,param_2);
  if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 0x15) ||
     (uVar10 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[10], uVar10 == 0)) {
    iVar6 = 0;
  }
  else {
    iVar6 = (int)*(char *)((long)piVar9 + uVar10);
  }
  if (((*puVar2 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d7940), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7940);
  }
  uVar8 = *(undefined8 *)puVar3;
  *(undefined8 *)puVar4 = uVar8;
  piVar9 = (int *)FUN_00cf60cc(uVar8,param_2);
  if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 9) ||
     (uVar10 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[4], uVar10 == 0)) {
    uVar14 = 0;
  }
  else {
    uVar14 = (uint)*(byte *)((long)piVar9 + uVar10);
  }
  lVar11 = *(long *)(param_1 + 0x10);
  lVar15 = *(long *)(lVar11 + 0x38);
  uVar12 = *(uint *)(lVar15 + 0xc08);
  if (uVar12 < 0x60) {
    do {
      lVar18 = *(long *)(lVar15 + (ulong)uVar12 * 0x20 + 8);
      if (*(short *)(lVar18 + 8) == 0) {
        if (uVar12 < 0x5f) {
          *(undefined2 *)(lVar18 + 8) = 1;
          *(int *)(lVar15 + 0xc08) = *(int *)(lVar15 + 0xc08) + 1;
        }
        break;
      }
      uVar12 = uVar12 + 1;
      *(uint *)(lVar15 + 0xc08) = uVar12;
    } while (uVar12 != 0x60);
  }
  lVar15 = *(long *)(lVar11 + 0x58);
  uVar12 = *(uint *)(lVar15 + 0x408);
  if (uVar12 < 0x1f) {
    *(uint *)(lVar15 + 0x408) = uVar12 + 1;
    lVar15 = *(long *)(lVar11 + 0x58);
    uVar12 = *(uint *)(lVar15 + 0x408);
  }
  *(undefined8 *)(lVar11 + 0x78) = *(undefined8 *)(lVar15 + (ulong)uVar12 * 0x20 + 8);
  lVar15 = *(long *)(param_1 + 0x10);
  uVar5 = (**(code **)(*param_3 + 0x98))(param_3);
  lVar11 = *(long *)(lVar15 + 0x38);
  uVar12 = *(uint *)(lVar11 + 0xc08);
  uVar10 = (ulong)uVar12;
  if (uVar12 < 0x61) {
    uVar12 = 0x60;
  }
  plVar17 = (long *)(lVar11 + uVar10 * 0x20 + 8);
  do {
    uVar19 = uVar10;
    if (uVar12 == uVar19) goto LAB_0123f19c;
    lVar18 = *plVar17;
    if (*(short *)(lVar18 + 8) == 0) goto LAB_0123f16c;
    plVar17 = plVar17 + 4;
    uVar10 = uVar19 + 1;
  } while (*(short *)(lVar18 + 8) != 3);
  if ((int)(uVar19 + 1) - 1U < 0x60) {
LAB_0123f16c:
    lVar11 = *(long *)(lVar11 + (uVar19 & 0xffffffff) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 3;
      *(undefined4 *)(lVar11 + 0xc) = uVar5;
      *(undefined1 *)(lVar11 + 10) = 4;
      *(undefined8 *)(lVar11 + 0x10) = 0;
      *(undefined8 *)(lVar11 + 0x18) = 0;
      *(long *)(*(long *)(lVar15 + 0x78) + 0x20) = lVar11;
    }
  }
LAB_0123f19c:
  lVar11 = *(long *)(param_1 + 0x10);
  lVar15 = *(long *)(lVar11 + 0x38);
  uVar13 = *(uint *)(lVar15 + 0xc08);
  uVar10 = (ulong)uVar13;
  uVar12 = uVar13;
  if (uVar13 < 0x61) {
    uVar12 = 0x60;
  }
  uVar19 = uVar10 << 5 | 8;
  lVar18 = -1;
  do {
    lVar16 = lVar18;
    if ((uVar10 - uVar12) + lVar16 == -1) goto LAB_0123f240;
    sVar1 = *(short *)(*(long *)(lVar15 + uVar19) + 8);
    if (sVar1 == 0) goto LAB_0123f200;
    uVar19 = uVar19 + 0x20;
    lVar18 = lVar16 + 1;
  } while (sVar1 != 0x12);
  if (uVar13 + (int)(lVar16 + 1) < 0x60) {
LAB_0123f200:
    lVar18 = *(long *)(lVar15 + (ulong)(uVar13 + (int)lVar16 + 1) * 0x20 + 8);
    if (lVar18 != 0) {
      *(undefined2 *)(lVar18 + 8) = 0x12;
      *(uint *)(lVar18 + 0xc) = param_2 & 0xffff;
      *(undefined1 *)(lVar18 + 10) = 4;
      *(undefined8 *)(lVar18 + 0x10) = 0;
      *(undefined8 *)(lVar18 + 0x18) = 0;
      *(long *)(*(long *)(lVar11 + 0x78) + 0x98) = lVar18;
      lVar11 = *(long *)(param_1 + 0x10);
      lVar15 = *(long *)(lVar11 + 0x38);
      uVar10 = (ulong)*(uint *)(lVar15 + 0xc08);
    }
  }
LAB_0123f240:
  uVar13 = (uint)uVar10;
  uVar12 = uVar13;
  if (uVar13 < 0x61) {
    uVar12 = 0x60;
  }
  uVar19 = uVar10 << 5 | 8;
  lVar18 = 0;
  do {
    lVar16 = lVar18;
    if ((uVar10 - uVar12) + lVar16 == 0) goto LAB_0123f2d0;
    sVar1 = *(short *)(*(long *)(lVar15 + uVar19) + 8);
    if (sVar1 == 0) goto LAB_0123f294;
    uVar19 = uVar19 + 0x20;
    lVar18 = lVar16 + 1;
  } while (sVar1 != 0x16);
  if ((uVar13 + (int)(lVar16 + 1)) - 1 < 0x60) {
LAB_0123f294:
    lVar18 = *(long *)(lVar15 + (ulong)(uVar13 + (int)lVar16) * 0x20 + 8);
    if (lVar18 != 0) {
      *(undefined2 *)(lVar18 + 8) = 0x16;
      *(uint *)(lVar18 + 0xc) = uVar14;
      *(undefined1 *)(lVar18 + 10) = 4;
      *(undefined8 *)(lVar18 + 0x10) = 0;
      *(undefined8 *)(lVar18 + 0x18) = 0;
      *(long *)(*(long *)(lVar11 + 0x78) + 0xb8) = lVar18;
      lVar11 = *(long *)(param_1 + 0x10);
      lVar15 = *(long *)(lVar11 + 0x38);
      uVar10 = (ulong)*(uint *)(lVar15 + 0xc08);
    }
  }
LAB_0123f2d0:
  uVar14 = (uint)uVar10;
  if (uVar14 < 0x61) {
    uVar14 = 0x60;
  }
  plVar17 = (long *)(lVar15 + uVar10 * 0x20 + 8);
  do {
    uVar19 = uVar10;
    if (uVar14 == uVar19) goto LAB_0123f348;
    lVar18 = *plVar17;
    if (*(short *)(lVar18 + 8) == 0) goto LAB_0123f318;
    plVar17 = plVar17 + 4;
    uVar10 = uVar19 + 1;
  } while (*(short *)(lVar18 + 8) != 0x19);
  if ((int)(uVar19 + 1) - 1U < 0x60) {
LAB_0123f318:
    lVar15 = *(long *)(lVar15 + (uVar19 & 0xffffffff) * 0x20 + 8);
    if (lVar15 != 0) {
      *(undefined2 *)(lVar15 + 8) = 0x19;
      *(int *)(lVar15 + 0xc) = iVar6 + 7;
      *(undefined1 *)(lVar15 + 10) = 0;
      *(undefined8 *)(lVar15 + 0x10) = 0;
      *(undefined8 *)(lVar15 + 0x18) = 0;
      *(long *)(*(long *)(lVar11 + 0x78) + 0xd0) = lVar15;
      lVar11 = *(long *)(param_1 + 0x10);
    }
  }
LAB_0123f348:
  FUN_0107b310(lVar11,0x11,8,1);
  lVar15 = *(long *)(param_1 + 0x10);
  lVar11 = *(long *)(*(long *)(lVar15 + 0x78) + 0xd0);
  if (lVar11 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(lVar11 + 0xc);
  }
  lVar11 = *(long *)(lVar15 + 0x58);
  if (*(uint *)(lVar11 + 0x408) == 0) {
    uVar10 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar11 + (ulong)*(uint *)(lVar11 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar11 + 0x408) = *(int *)(lVar11 + 0x408) + -1;
    lVar11 = *(long *)(lVar15 + 0x58);
    uVar10 = (ulong)*(uint *)(lVar11 + 0x408);
  }
  *(undefined8 *)(lVar15 + 0x78) = *(undefined8 *)(lVar11 + uVar10 * 0x20 + 8);
  lVar11 = *(long *)(lVar15 + 0x38);
  uVar14 = *(uint *)(lVar11 + 0xc08);
  if (uVar14 != 0) {
    if ((uVar14 & 0xffff) < 0x60) {
      uVar10 = (ulong)uVar14 & 0xffff;
      plVar17 = (long *)(lVar11 + uVar10 * 0x20 + 8);
      do {
        uVar10 = uVar10 + 1;
        if (*(short *)(*plVar17 + 8) == 0) break;
        *(undefined2 *)(*plVar17 + 8) = 0;
        plVar17 = plVar17 + 4;
      } while (((uint)uVar10 & 0xffff) != 0x60);
      uVar14 = *(uint *)(lVar11 + 0xc08);
    }
    *(uint *)(lVar11 + 0xc08) = uVar14 - 1;
    *(undefined2 *)(*(long *)(lVar11 + (ulong)(uVar14 - 1) * 0x20 + 8) + 8) = 0;
    uVar10 = (ulong)*(uint *)(lVar11 + 0xc08);
    do {
      if (uVar10 == 0) {
        return uVar5;
      }
      uVar10 = uVar10 - 1;
      *(int *)(lVar11 + 0xc08) = (int)uVar10;
    } while (*(short *)(*(long *)(lVar11 + (uVar10 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar11 + 0xc08) = (int)uVar10 + 1;
  }
  return uVar5;
}


