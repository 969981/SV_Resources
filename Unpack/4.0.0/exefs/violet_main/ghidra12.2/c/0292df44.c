/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0292df44; name: FUN_0292df44
 */


byte FUN_0292df44(long param_1,long *param_2,long *param_3,undefined4 param_4,undefined8 param_5)

{
  ulong uVar1;
  short sVar2;
  ulong uVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 uVar11;
  int *piVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  uint uVar24;
  
  if (((*PTR_DAT_047d7940 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d7940), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7940);
  }
  uVar11 = *(undefined8 *)PTR_DAT_047d7948;
  *(undefined8 *)PTR_DAT_047d7950 = uVar11;
  piVar12 = (int *)FUN_00cf60cc(uVar11,param_4);
  if ((*(ushort *)((long)piVar12 - (long)*piVar12) < 0x1d) ||
     (uVar13 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[0xe], uVar13 == 0)) {
    uVar24 = 0;
LAB_0292dfc8:
    uVar8 = (**(code **)(*param_2 + 0x290))(param_2);
    bVar5 = false;
    iVar10 = uVar24 + (uVar8 & 0xff);
  }
  else {
    bVar7 = *(byte *)((long)piVar12 + uVar13);
    uVar24 = (uint)bVar7;
    if (bVar7 != 6) goto LAB_0292dfc8;
    bVar5 = true;
    iVar10 = 6;
  }
  lVar14 = *(long *)(param_1 + 0x10);
  lVar15 = *(long *)(lVar14 + 0x38);
  uVar24 = *(uint *)(lVar15 + 0xc08);
  if (uVar24 < 0x60) {
    do {
      lVar17 = *(long *)(lVar15 + (ulong)uVar24 * 0x20 + 8);
      if (*(short *)(lVar17 + 8) == 0) {
        if (uVar24 < 0x5f) {
          *(undefined2 *)(lVar17 + 8) = 1;
          *(int *)(lVar15 + 0xc08) = *(int *)(lVar15 + 0xc08) + 1;
        }
        break;
      }
      uVar24 = uVar24 + 1;
      *(uint *)(lVar15 + 0xc08) = uVar24;
    } while (uVar24 != 0x60);
  }
  lVar15 = *(long *)(lVar14 + 0x58);
  uVar24 = *(uint *)(lVar15 + 0x408);
  if (uVar24 < 0x1f) {
    *(uint *)(lVar15 + 0x408) = uVar24 + 1;
    lVar15 = *(long *)(lVar14 + 0x58);
    uVar24 = *(uint *)(lVar15 + 0x408);
  }
  *(undefined8 *)(lVar14 + 0x78) = *(undefined8 *)(lVar15 + (ulong)uVar24 * 0x20 + 8);
  lVar15 = *(long *)(param_1 + 0x10);
  uVar9 = (**(code **)(*param_3 + 0x98))(param_3);
  lVar14 = *(long *)(lVar15 + 0x38);
  uVar24 = *(uint *)(lVar14 + 0xc08);
  uVar13 = (ulong)uVar24;
  if (uVar24 < 0x61) {
    uVar24 = 0x60;
  }
  plVar16 = (long *)(lVar14 + uVar13 * 0x20 + 8);
  do {
    uVar20 = uVar13;
    if (uVar24 == uVar20) goto LAB_0292e0f8;
    lVar17 = *plVar16;
    if (*(short *)(lVar17 + 8) == 0) goto LAB_0292e0cc;
    plVar16 = plVar16 + 4;
    uVar13 = uVar20 + 1;
  } while (*(short *)(lVar17 + 8) != 4);
  if ((int)(uVar20 + 1) - 1U < 0x60) {
LAB_0292e0cc:
    lVar14 = *(long *)(lVar14 + (uVar20 & 0xffffffff) * 0x20 + 8);
    if (lVar14 != 0) {
      *(undefined2 *)(lVar14 + 8) = 4;
      *(undefined4 *)(lVar14 + 0xc) = uVar9;
      *(undefined1 *)(lVar14 + 10) = 4;
      *(undefined8 *)(lVar14 + 0x10) = 0;
      *(undefined8 *)(lVar14 + 0x18) = 0;
      *(long *)(*(long *)(lVar15 + 0x78) + 0x28) = lVar14;
    }
  }
LAB_0292e0f8:
  lVar15 = *(long *)(param_1 + 0x10);
  uVar9 = (**(code **)(*param_2 + 0x98))(param_2);
  lVar14 = *(long *)(lVar15 + 0x38);
  uVar24 = *(uint *)(lVar14 + 0xc08);
  uVar13 = (ulong)uVar24;
  if (uVar24 < 0x61) {
    uVar24 = 0x60;
  }
  plVar16 = (long *)(lVar14 + uVar13 * 0x20 + 8);
  do {
    uVar20 = uVar13;
    if (uVar24 == uVar20) goto LAB_0292e18c;
    lVar17 = *plVar16;
    if (*(short *)(lVar17 + 8) == 0) goto LAB_0292e15c;
    plVar16 = plVar16 + 4;
    uVar13 = uVar20 + 1;
  } while (*(short *)(lVar17 + 8) != 3);
  if ((int)(uVar20 + 1) - 1U < 0x60) {
LAB_0292e15c:
    lVar14 = *(long *)(lVar14 + (uVar20 & 0xffffffff) * 0x20 + 8);
    if (lVar14 != 0) {
      *(undefined2 *)(lVar14 + 8) = 3;
      *(undefined4 *)(lVar14 + 0xc) = uVar9;
      *(undefined1 *)(lVar14 + 10) = 4;
      *(undefined8 *)(lVar14 + 0x10) = 0;
      *(undefined8 *)(lVar14 + 0x18) = 0;
      *(long *)(*(long *)(lVar15 + 0x78) + 0x20) = lVar14;
    }
  }
LAB_0292e18c:
  lVar14 = *(long *)(param_1 + 0x10);
  lVar15 = *(long *)(lVar14 + 0x38);
  uVar8 = *(uint *)(lVar15 + 0xc08);
  uVar13 = (ulong)uVar8;
  uVar24 = uVar8;
  if (uVar8 < 0x61) {
    uVar24 = 0x60;
  }
  uVar20 = uVar13 << 5 | 8;
  lVar17 = -1;
  do {
    lVar22 = lVar17;
    if ((uVar13 - uVar24) + lVar22 == -1) goto LAB_0292e22c;
    sVar2 = *(short *)(*(long *)(lVar15 + uVar20) + 8);
    if (sVar2 == 0) goto LAB_0292e1f0;
    uVar20 = uVar20 + 0x20;
    lVar17 = lVar22 + 1;
  } while (sVar2 != 0x2f);
  if (uVar8 + (int)(lVar22 + 1) < 0x60) {
LAB_0292e1f0:
    lVar17 = *(long *)(lVar15 + (ulong)(uVar8 + (int)lVar22 + 1) * 0x20 + 8);
    if (lVar17 != 0) {
      *(undefined2 *)(lVar17 + 8) = 0x2f;
      *(int *)(lVar17 + 0xc) = iVar10;
      *(undefined1 *)(lVar17 + 10) = 0;
      *(undefined8 *)(lVar17 + 0x10) = 0;
      *(undefined8 *)(lVar17 + 0x18) = 0;
      *(long *)(*(long *)(lVar14 + 0x78) + 0x180) = lVar17;
      lVar14 = *(long *)(param_1 + 0x10);
      lVar15 = *(long *)(lVar14 + 0x38);
      uVar13 = (ulong)*(uint *)(lVar15 + 0xc08);
    }
  }
LAB_0292e22c:
  uVar24 = (uint)uVar13;
  if (uVar24 < 0x61) {
    uVar24 = 0x60;
  }
  plVar16 = (long *)(lVar15 + uVar13 * 0x20 + 8);
  do {
    uVar20 = uVar13;
    if (uVar24 == uVar20) goto LAB_0292e2ac;
    lVar17 = *plVar16;
    if (*(short *)(lVar17 + 8) == 0) goto LAB_0292e274;
    plVar16 = plVar16 + 4;
    uVar13 = uVar20 + 1;
  } while (*(short *)(lVar17 + 8) != 0x48);
  if ((int)(uVar20 + 1) - 1U < 0x60) {
LAB_0292e274:
    lVar15 = *(long *)(lVar15 + (uVar20 & 0xffffffff) * 0x20 + 8);
    if (lVar15 != 0) {
      *(undefined2 *)(lVar15 + 8) = 0x48;
      *(undefined8 *)(lVar15 + 0xc) = 0;
      *(undefined8 *)(lVar15 + 0x14) = 0;
      *(undefined4 *)(lVar15 + 0x1c) = 0;
      *(undefined1 *)(lVar15 + 10) = 1;
      *(long *)(*(long *)(lVar14 + 0x78) + 0x248) = lVar15;
      lVar14 = *(long *)(param_1 + 0x10);
    }
  }
LAB_0292e2ac:
  FUN_0107b310(lVar14,0x45,8,1);
  lVar15 = *(long *)(param_1 + 0x10);
  lVar14 = *(long *)(*(long *)(lVar15 + 0x78) + 0x248);
  if (lVar14 == 0) {
    bVar4 = false;
  }
  else {
    bVar4 = *(int *)(lVar14 + 0xc) != 0;
  }
  lVar14 = *(long *)(*(long *)(lVar15 + 0x78) + 0x180);
  if (lVar14 == 0) {
    uVar24 = 0;
  }
  else {
    uVar24 = *(uint *)(lVar14 + 0xc);
  }
  lVar14 = *(long *)(lVar15 + 0x58);
  if (*(uint *)(lVar14 + 0x408) == 0) {
    uVar13 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar14 + (ulong)*(uint *)(lVar14 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar14 + 0x408) = *(int *)(lVar14 + 0x408) + -1;
    lVar14 = *(long *)(lVar15 + 0x58);
    uVar13 = (ulong)*(uint *)(lVar14 + 0x408);
  }
  *(undefined8 *)(lVar15 + 0x78) = *(undefined8 *)(lVar14 + uVar13 * 0x20 + 8);
  lVar14 = *(long *)(lVar15 + 0x38);
  uVar8 = *(uint *)(lVar14 + 0xc08);
  if (uVar8 != 0) {
    if ((uVar8 & 0xffff) < 0x60) {
      uVar13 = (ulong)uVar8 & 0xffff;
      plVar16 = (long *)(lVar14 + uVar13 * 0x20 + 8);
      do {
        uVar13 = uVar13 + 1;
        if (*(short *)(*plVar16 + 8) == 0) break;
        *(undefined2 *)(*plVar16 + 8) = 0;
        plVar16 = plVar16 + 4;
      } while (((uint)uVar13 & 0xffff) != 0x60);
      uVar8 = *(uint *)(lVar14 + 0xc08);
    }
    *(uint *)(lVar14 + 0xc08) = uVar8 - 1;
    *(undefined2 *)(*(long *)(lVar14 + (ulong)(uVar8 - 1) * 0x20 + 8) + 8) = 0;
    uVar13 = (ulong)*(uint *)(lVar14 + 0xc08);
    do {
      if (uVar13 == 0) goto LAB_0292e3bc;
      uVar13 = uVar13 - 1;
      *(int *)(lVar14 + 0xc08) = (int)uVar13;
    } while (*(short *)(*(long *)(lVar14 + (uVar13 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar14 + 0xc08) = (int)uVar13 + 1;
  }
LAB_0292e3bc:
  if (bVar5 || bVar4 != false) {
    return bVar4 ^ 1;
  }
  if (2 < (int)uVar24) {
    uVar24 = 3;
  }
  lVar14 = *(long *)(*(long *)(param_1 + 8) + 0x38);
  if (((*(byte *)(lVar14 + 0x499) >> 2 & 1) == 0) && (*(uint *)(lVar14 + 0x30) < 2)) {
    lVar14 = *(long *)(*(long *)(param_1 + 0x18) + 0x290);
    uVar9 = (**(code **)(*param_2 + 0x98))(param_2);
    piVar12 = (int *)FUN_011e2dd4(*(undefined8 *)(*(long *)(lVar14 + 8) + 0x50),uVar9);
    if ((piVar12 == (int *)0x0) || (4 < *piVar12 || *piVar12 == 0)) {
      cVar6 = (**(code **)(*param_2 + 0x460))(param_2);
      bVar5 = cVar6 == -1;
      goto LAB_0292e44c;
    }
  }
  bVar5 = false;
LAB_0292e44c:
  if ((uVar24 & 0xff) < 4) {
    uVar24 = (uint)((byte)(&UNK_03cb273c)[(ulong)uVar24 & 0xff] >> bVar5);
    if (uVar24 == 0) {
      uVar24 = 1;
    }
    uVar13 = (ulong)uVar24;
    if (uVar24 < 2) {
      bVar4 = true;
    }
    else {
      lVar15 = *(long *)(*(long *)(param_1 + 0x18) + 0x10);
      *(long *)(lVar15 + 0x20) = *(long *)(lVar15 + 0x20) + 1;
      lVar14 = 0x3f;
      if ((uVar13 << (LZCOUNT(uVar13) & 0x3fU) & 0x7fffffffffffffff) != 0) {
        lVar14 = 0x40;
      }
      uVar18 = lVar14 - LZCOUNT(uVar13);
      uVar20 = uVar18 >> 6;
      if ((uVar18 & 0x3f) != 0) {
        uVar20 = uVar20 + 1;
      }
      uVar3 = 0;
      if (uVar20 != 0) {
        uVar3 = uVar18 / uVar20;
      }
      uVar1 = *(ulong *)(lVar15 + 8);
      uVar23 = uVar1 + *(ulong *)(lVar15 + 0x10);
      uVar21 = uVar1 ^ *(ulong *)(lVar15 + 0x10);
      uVar19 = uVar21 ^ (uVar1 >> 0x28 | uVar1 << 0x18) ^ uVar21 << 0x10;
      uVar21 = uVar21 >> 0x1b | uVar21 << 0x25;
      uVar1 = 0;
      if (uVar20 <= uVar18) {
        uVar1 = 0xffffffffffffffff >> (-uVar3 & 0x3f);
      }
      while (uVar13 <= (uVar23 & uVar1)) {
        uVar20 = uVar19 ^ uVar21;
        uVar23 = uVar19 + uVar21;
        uVar19 = uVar20 ^ (uVar19 >> 0x28 | uVar19 << 0x18) ^ uVar20 << 0x10;
        uVar21 = uVar20 >> 0x1b | uVar20 << 0x25;
      }
      bVar4 = (uVar23 & uVar1 & 0xff) == 0;
      *(ulong *)(lVar15 + 8) = uVar19;
      *(ulong *)(lVar15 + 0x10) = uVar21;
    }
  }
  else {
    bVar4 = false;
  }
  bVar7 = 0;
  if ((bVar4) &&
     (((uint)*(undefined8 *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x498) >> 0xe & 1) == 0)) {
    bVar7 = 1;
    *(bool *)param_5 = bVar5;
  }
  return bVar7;
}


