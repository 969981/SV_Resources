/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0186923c; name: FUN_0186923c
 */


undefined8
FUN_0186923c(long param_1,long *param_2,undefined4 param_3,uint param_4,undefined1 *param_5)

{
  undefined *puVar1;
  short sVar2;
  bool bVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  int *piVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  char cVar18;
  char cVar19;
  int iVar20;
  undefined *local_70;
  undefined2 local_68;
  
  uVar5 = (**(code **)(*param_2 + 0x98))(param_2);
  puVar1 = PTR_DAT_047ddad8 + 0x10;
  local_70 = puVar1;
  local_68 = (short)param_3;
  bVar4 = FUN_01519734(&local_70);
  *param_5 = 0;
  if (bVar4 == 0) {
    local_70 = puVar1;
    local_68 = (short)param_3;
    bVar4 = FUN_0151a340(&local_70);
    bVar3 = bVar4 != 0;
  }
  else {
    bVar3 = false;
  }
  if (((*PTR_DAT_047d7940 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d7940), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7940);
  }
  uVar7 = *(undefined8 *)PTR_DAT_047d7948;
  *(undefined8 *)PTR_DAT_047d7950 = uVar7;
  piVar8 = (int *)FUN_00cf60cc(uVar7,param_3);
  if (((10 < *(ushort *)((long)piVar8 - (long)*piVar8)) &&
      (uVar9 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[5], uVar9 != 0)) &&
     (*(char *)((long)piVar8 + uVar9) == '\b')) {
    return 0;
  }
  lVar10 = *(long *)(param_1 + 0x10);
  lVar13 = *(long *)(lVar10 + 0x38);
  uVar12 = *(uint *)(lVar13 + 0xc08);
  if (uVar12 < 0x60) {
    do {
      lVar17 = *(long *)(lVar13 + (ulong)uVar12 * 0x20 + 8);
      if (*(short *)(lVar17 + 8) == 0) {
        if (uVar12 < 0x5f) {
          *(undefined2 *)(lVar17 + 8) = 1;
          *(int *)(lVar13 + 0xc08) = *(int *)(lVar13 + 0xc08) + 1;
        }
        break;
      }
      uVar12 = uVar12 + 1;
      *(uint *)(lVar13 + 0xc08) = uVar12;
    } while (uVar12 != 0x60);
  }
  lVar13 = *(long *)(lVar10 + 0x58);
  uVar12 = *(uint *)(lVar13 + 0x408);
  if (uVar12 < 0x1f) {
    *(uint *)(lVar13 + 0x408) = uVar12 + 1;
    lVar13 = *(long *)(lVar10 + 0x58);
    uVar12 = *(uint *)(lVar13 + 0x408);
  }
  *(undefined8 *)(lVar10 + 0x78) = *(undefined8 *)(lVar13 + (ulong)uVar12 * 0x20 + 8);
  lVar10 = *(long *)(param_1 + 0x10);
  lVar13 = *(long *)(lVar10 + 0x38);
  uVar11 = *(uint *)(lVar13 + 0xc08);
  uVar9 = (ulong)uVar11;
  uVar12 = uVar11;
  if (uVar11 < 0x61) {
    uVar12 = 0x60;
  }
  uVar14 = uVar9 << 5 | 8;
  lVar17 = -1;
  do {
    lVar15 = lVar17;
    if ((uVar9 - uVar12) + lVar15 == -1) goto LAB_01869448;
    sVar2 = *(short *)(*(long *)(lVar13 + uVar14) + 8);
    if (sVar2 == 0) goto LAB_01869408;
    uVar14 = uVar14 + 0x20;
    lVar17 = lVar15 + 1;
  } while (sVar2 != 3);
  if (uVar11 + (int)(lVar15 + 1) < 0x60) {
LAB_01869408:
    lVar17 = *(long *)(lVar13 + (ulong)(uVar11 + (int)lVar15 + 1) * 0x20 + 8);
    if (lVar17 != 0) {
      *(undefined2 *)(lVar17 + 8) = 3;
      *(undefined4 *)(lVar17 + 0xc) = uVar5;
      *(undefined1 *)(lVar17 + 10) = 4;
      *(undefined8 *)(lVar17 + 0x10) = 0;
      *(undefined8 *)(lVar17 + 0x18) = 0;
      *(long *)(*(long *)(lVar10 + 0x78) + 0x20) = lVar17;
      lVar10 = *(long *)(param_1 + 0x10);
      lVar13 = *(long *)(lVar10 + 0x38);
      uVar9 = (ulong)*(uint *)(lVar13 + 0xc08);
    }
  }
LAB_01869448:
  uVar11 = (uint)uVar9;
  uVar12 = uVar11;
  if (uVar11 < 0x61) {
    uVar12 = 0x60;
  }
  uVar14 = uVar9 << 5 | 8;
  lVar17 = 0;
  do {
    lVar15 = lVar17;
    if ((uVar9 - uVar12) + lVar15 == 0) goto LAB_018694d8;
    sVar2 = *(short *)(*(long *)(lVar13 + uVar14) + 8);
    if (sVar2 == 0) goto LAB_018694a0;
    uVar14 = uVar14 + 0x20;
    lVar17 = lVar15 + 1;
  } while (sVar2 != 0x38);
  if ((uVar11 + (int)(lVar15 + 1)) - 1 < 0x60) {
LAB_018694a0:
    lVar17 = *(long *)(lVar13 + (ulong)(uVar11 + (int)lVar15) * 0x20 + 8);
    if (lVar17 != 0) {
      *(undefined2 *)(lVar17 + 8) = 0x38;
      *(uint *)(lVar17 + 0xc) = (uint)bVar4;
      *(undefined1 *)(lVar17 + 10) = 0;
      *(undefined8 *)(lVar17 + 0x10) = 0;
      *(undefined8 *)(lVar17 + 0x18) = 0;
      *(long *)(*(long *)(lVar10 + 0x78) + 0x1c8) = lVar17;
      lVar10 = *(long *)(param_1 + 0x10);
      lVar13 = *(long *)(lVar10 + 0x38);
      uVar9 = (ulong)*(uint *)(lVar13 + 0xc08);
    }
  }
LAB_018694d8:
  uVar11 = (uint)uVar9;
  uVar12 = uVar11;
  if (uVar11 < 0x61) {
    uVar12 = 0x60;
  }
  uVar14 = uVar9 << 5 | 8;
  lVar17 = 0;
  do {
    lVar15 = lVar17;
    if ((uVar9 - uVar12) + lVar15 == 0) goto LAB_01869568;
    sVar2 = *(short *)(*(long *)(lVar13 + uVar14) + 8);
    if (sVar2 == 0) goto LAB_0186952c;
    uVar14 = uVar14 + 0x20;
    lVar17 = lVar15 + 1;
  } while (sVar2 != 0x39);
  if ((uVar11 + (int)(lVar15 + 1)) - 1 < 0x60) {
LAB_0186952c:
    lVar17 = *(long *)(lVar13 + (ulong)(uVar11 + (int)lVar15) * 0x20 + 8);
    if (lVar17 != 0) {
      *(undefined2 *)(lVar17 + 8) = 0x39;
      *(undefined1 *)(lVar17 + 10) = 0;
      *(undefined8 *)(lVar17 + 0xc) = 0;
      *(undefined8 *)(lVar17 + 0x14) = 0;
      *(undefined4 *)(lVar17 + 0x1c) = 0;
      *(long *)(*(long *)(lVar10 + 0x78) + 0x1d0) = lVar17;
      lVar10 = *(long *)(param_1 + 0x10);
      lVar13 = *(long *)(lVar10 + 0x38);
      uVar9 = (ulong)*(uint *)(lVar13 + 0xc08);
    }
  }
LAB_01869568:
  uVar11 = (uint)uVar9;
  uVar12 = uVar11;
  if (uVar11 < 0x61) {
    uVar12 = 0x60;
  }
  uVar14 = uVar9 << 5 | 8;
  lVar17 = 0;
  do {
    lVar15 = lVar17;
    if ((uVar9 - uVar12) + lVar15 == 0) goto LAB_018695fc;
    sVar2 = *(short *)(*(long *)(lVar13 + uVar14) + 8);
    if (sVar2 == 0) goto LAB_018695bc;
    uVar14 = uVar14 + 0x20;
    lVar17 = lVar15 + 1;
  } while (sVar2 != 0x48);
  if ((uVar11 + (int)(lVar15 + 1)) - 1 < 0x60) {
LAB_018695bc:
    lVar17 = *(long *)(lVar13 + (ulong)(uVar11 + (int)lVar15) * 0x20 + 8);
    if (lVar17 != 0) {
      *(undefined2 *)(lVar17 + 8) = 0x48;
      *(undefined8 *)(lVar17 + 0xc) = 0;
      *(undefined8 *)(lVar17 + 0x14) = 0;
      *(undefined4 *)(lVar17 + 0x1c) = 0;
      *(undefined1 *)(lVar17 + 10) = 1;
      *(long *)(*(long *)(lVar10 + 0x78) + 0x248) = lVar17;
      lVar10 = *(long *)(param_1 + 0x10);
      lVar13 = *(long *)(lVar10 + 0x38);
      uVar9 = (ulong)*(uint *)(lVar13 + 0xc08);
    }
  }
LAB_018695fc:
  uVar12 = (uint)uVar9;
  if (uVar12 < 0x61) {
    uVar12 = 0x60;
  }
  plVar16 = (long *)(lVar13 + uVar9 * 0x20 + 8);
  do {
    uVar14 = uVar9;
    if (uVar12 == uVar14) goto LAB_0186967c;
    lVar17 = *plVar16;
    if (*(short *)(lVar17 + 8) == 0) goto LAB_01869644;
    plVar16 = plVar16 + 4;
    uVar9 = uVar14 + 1;
  } while (*(short *)(lVar17 + 8) != 0x59);
  if ((int)(uVar14 + 1) - 1U < 0x60) {
LAB_01869644:
    lVar13 = *(long *)(lVar13 + (uVar14 & 0xffffffff) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 0x59;
      *(undefined8 *)(lVar13 + 0xc) = 0;
      *(undefined8 *)(lVar13 + 0x14) = 0;
      *(undefined4 *)(lVar13 + 0x1c) = 0;
      *(undefined1 *)(lVar13 + 10) = 1;
      *(long *)(*(long *)(lVar10 + 0x78) + 0x2d0) = lVar13;
      lVar10 = *(long *)(param_1 + 0x10);
    }
  }
LAB_0186967c:
  FUN_0107b310(lVar10,0x6b,8,1);
  lVar13 = *(long *)(param_1 + 0x10);
  lVar10 = *(long *)(lVar13 + 0x78);
  if (*(long *)(lVar10 + 0x1c8) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(*(long *)(lVar10 + 0x1c8) + 0xc);
  }
  if (*(long *)(lVar10 + 0x248) == 0) {
    cVar19 = '\0';
  }
  else {
    cVar19 = *(char *)(*(long *)(lVar10 + 0x248) + 0xc);
  }
  if (*(long *)(lVar10 + 0x2d0) == 0) {
    cVar18 = '\0';
  }
  else {
    cVar18 = *(char *)(*(long *)(lVar10 + 0x2d0) + 0xc);
  }
  if (*(long *)(lVar10 + 0x1d0) == 0) {
    iVar20 = 0;
  }
  else {
    iVar20 = *(int *)(*(long *)(lVar10 + 0x1d0) + 0xc);
  }
  lVar10 = *(long *)(lVar13 + 0x58);
  if (*(uint *)(lVar10 + 0x408) == 0) {
    uVar9 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar10 + (ulong)*(uint *)(lVar10 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar10 + 0x408) = *(int *)(lVar10 + 0x408) + -1;
    lVar10 = *(long *)(lVar13 + 0x58);
    uVar9 = (ulong)*(uint *)(lVar10 + 0x408);
  }
  *(undefined8 *)(lVar13 + 0x78) = *(undefined8 *)(lVar10 + uVar9 * 0x20 + 8);
  lVar10 = *(long *)(lVar13 + 0x38);
  uVar12 = *(uint *)(lVar10 + 0xc08);
  if (uVar12 != 0) {
    if ((uVar12 & 0xffff) < 0x60) {
      uVar9 = (ulong)uVar12 & 0xffff;
      plVar16 = (long *)(lVar10 + uVar9 * 0x20 + 8);
      do {
        uVar9 = uVar9 + 1;
        if (*(short *)(*plVar16 + 8) == 0) break;
        *(undefined2 *)(*plVar16 + 8) = 0;
        plVar16 = plVar16 + 4;
      } while (((uint)uVar9 & 0xffff) != 0x60);
      uVar12 = *(uint *)(lVar10 + 0xc08);
    }
    *(uint *)(lVar10 + 0xc08) = uVar12 - 1;
    *(undefined2 *)(*(long *)(lVar10 + (ulong)(uVar12 - 1) * 0x20 + 8) + 8) = 0;
    uVar9 = (ulong)*(uint *)(lVar10 + 0xc08);
    do {
      if (uVar9 == 0) goto LAB_0186979c;
      uVar9 = uVar9 - 1;
      *(int *)(lVar10 + 0xc08) = (int)uVar9;
    } while (*(short *)(*(long *)(lVar10 + (uVar9 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar10 + 0xc08) = (int)uVar9 + 1;
  }
LAB_0186979c:
  if ((cVar19 != '\0') && (cVar18 == '\0')) {
    return 0;
  }
  if ((iVar20 + iVar6 & 0xffU) == 0) {
    return 0;
  }
  if (bVar3) {
    param_4 = (**(code **)(*param_2 + 0x140))(param_2);
    param_4 = param_4 & 0xffff;
  }
  else if (param_4 == 0) {
    uVar7 = 0;
    goto LAB_0186980c;
  }
  uVar7 = FUN_01633ca0(param_4,iVar20 + iVar6 & 0xff);
  uVar7 = FUN_01869890(uVar7,1);
LAB_0186980c:
  *param_5 = cVar18 != '\0';
  return uVar7;
}


