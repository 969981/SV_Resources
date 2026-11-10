/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018eb978; name: FUN_018eb978
 */


/* WARNING: Removing unreachable block (ram,0x018ebbd4) */
/* WARNING: Removing unreachable block (ram,0x018ebbec) */

void FUN_018eb978(uint param_1,uint param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
  char *pcVar21;
  char *local_c0;
  undefined8 *local_b8;
  long lStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 *local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar12 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar12;
  puVar7 = PTR_DAT_047d4910;
  puVar6 = PTR_DAT_047d4908;
  plVar3 = *(long **)(lVar12 + 0x1c0);
  plVar4 = *(long **)(lVar12 + 0x1c8);
  for (; plVar3 != plVar4; plVar3 = plVar3 + 1) {
    lVar12 = *plVar3;
    plVar9 = (long *)(*(code *)**(undefined8 **)(lVar12 + 0x28))((undefined8 *)(lVar12 + 0x28));
    if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
      uVar18 = FUN_01b3fb0c();
      *(undefined8 *)puVar7 = uVar18;
      __cxa_guard_release(puVar6);
    }
    for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      if (plVar9 == (long *)puVar7) goto LAB_018eba24;
    }
  }
  lVar12 = 0;
LAB_018eba24:
  *(undefined8 *)(lVar12 + 0x40) = *(undefined8 *)(lVar12 + 0x48);
  FUN_018ebec0((long)register0x00000008 + -0x48);
  *(undefined8 *)(lVar12 + 0x48) = 0x91edc91a9c8ef3bb;
  uStack_a0 = *(undefined8 *)(lVar12 + 8);
  pcVar21 = (char *)(lVar12 + 0x50);
  lVar12 = 500;
  local_80 = (undefined8 *)0x0;
  lStack_78 = 0;
  local_70 = 0;
  local_88 = 0;
  local_60 = 0x1fffffffffffffff;
  uStack_58 = 0;
  local_b8 = (undefined8 *)0x0;
  lStack_b0 = 0;
  local_a8 = 0;
  local_98 = 0x1fffffffffffffff;
  uStack_90 = 0;
  uStack_68 = uStack_a0;
  uVar16 = 0x8e400c35d858a82c;
  uVar15 = 0x6d9c6771bd34da0b;
  do {
    uVar13 = uVar15 ^ uVar16;
    uVar14 = uVar13 ^ (uVar16 >> 0x28 | uVar16 << 0x18) ^ uVar13 << 0x10;
    uVar13 = uVar13 >> 0x1b | uVar13 << 0x25;
    if ((*pcVar21 == '\0') &&
       (*(ulong *)(pcVar21 + 0x10) = uVar15 + uVar16, *(long *)(pcVar21 + 8) != 0)) {
      iVar8 = *(int *)(pcVar21 + 0x18);
      if (iVar8 == 0) {
        local_c0 = pcVar21;
        FUN_018ebedc(&local_80,&local_c0);
        iVar8 = *(int *)(pcVar21 + 0x18);
      }
      if (iVar8 == 1) {
        local_c0 = pcVar21;
        FUN_018ebedc(&local_b8,&local_c0);
      }
    }
    lVar12 = lVar12 + -1;
    pcVar21 = pcVar21 + 0x20;
    uVar16 = uVar14;
    uVar15 = uVar13;
  } while (lVar12 != 0);
  uVar16 = lStack_78 - (long)local_80;
  uVar10 = (uint)(uVar16 >> 3);
  if ((int)param_1 <= (int)uVar10) {
    uVar10 = param_1;
  }
  uVar15 = lStack_b0 - (long)local_b8;
  uVar11 = (uint)(uVar15 >> 3);
  if ((int)param_2 <= (int)uVar11) {
    uVar11 = param_2;
  }
  if (uVar16 != 0) {
    uVar15 = 0;
    uVar16 = (long)uVar16 >> 3;
    do {
      uVar17 = (uint)uVar16;
      if (uVar17 == 1) {
        uVar16 = 0;
      }
      else if (uVar17 == 0) {
        uVar16 = uVar13 + uVar14;
        uVar13 = uVar13 ^ uVar14;
        uVar14 = uVar13 ^ (uVar14 >> 0x28 | uVar14 << 0x18) ^ uVar13 << 0x10;
        uVar13 = uVar13 >> 0x1b | uVar13 << 0x25;
      }
      else {
        lVar12 = 0x1f;
        if ((uVar17 << (ulong)((uint)LZCOUNT(uVar17) & 0x1f) & 0x7fffffff) != 0) {
          lVar12 = 0x20;
        }
        uVar19 = lVar12 - LZCOUNT(uVar17);
        uVar20 = uVar19 >> 6;
        if ((uVar19 & 0x3f) != 0) {
          uVar20 = uVar20 + 1;
        }
        uVar5 = 0;
        if (uVar20 != 0) {
          uVar5 = uVar19 / uVar20;
        }
        uVar16 = uVar14 + uVar13;
        uVar13 = uVar14 ^ uVar13;
        uVar14 = uVar13 ^ (uVar14 >> 0x28 | uVar14 << 0x18) ^ uVar13 << 0x10;
        uVar13 = uVar13 >> 0x1b | uVar13 << 0x25;
        uVar2 = 0;
        if (uVar20 <= uVar19) {
          uVar2 = 0xffffffffffffffff >> (-uVar5 & 0x3f);
        }
        while (uVar16 = uVar16 & uVar2, uVar17 <= (uint)uVar16) {
          uVar20 = uVar14 ^ uVar13;
          uVar16 = uVar14 + uVar13;
          uVar13 = uVar20 >> 0x1b | uVar20 << 0x25;
          uVar14 = uVar20 ^ (uVar14 >> 0x28 | uVar14 << 0x18) ^ uVar20 << 0x10;
        }
      }
      uVar16 = -(uVar16 >> 0x1f & 1) & 0xfffffff800000000 | (uVar16 & 0xffffffff) << 3;
      uVar18 = local_80[uVar15];
      local_80[uVar15] = *(undefined8 *)((long)local_80 + uVar16);
      *(undefined8 *)((long)local_80 + uVar16) = uVar18;
      uVar15 = uVar15 + 1;
      uVar16 = lStack_78 - (long)local_80 >> 3;
    } while (uVar15 < uVar16);
    uVar15 = lStack_b0 - (long)local_b8;
  }
  if (uVar15 != 0) {
    uVar16 = 0;
    uVar15 = (long)uVar15 >> 3;
    do {
      uVar17 = (uint)uVar15;
      if (uVar17 == 1) {
        uVar15 = 0;
      }
      else if (uVar17 == 0) {
        uVar15 = uVar13 + uVar14;
        uVar13 = uVar13 ^ uVar14;
        uVar14 = uVar13 ^ (uVar14 >> 0x28 | uVar14 << 0x18) ^ uVar13 << 0x10;
        uVar13 = uVar13 >> 0x1b | uVar13 << 0x25;
      }
      else {
        lVar12 = 0x1f;
        if ((uVar17 << (ulong)((uint)LZCOUNT(uVar17) & 0x1f) & 0x7fffffff) != 0) {
          lVar12 = 0x20;
        }
        uVar19 = lVar12 - LZCOUNT(uVar17);
        uVar20 = uVar19 >> 6;
        if ((uVar19 & 0x3f) != 0) {
          uVar20 = uVar20 + 1;
        }
        uVar5 = 0;
        if (uVar20 != 0) {
          uVar5 = uVar19 / uVar20;
        }
        uVar15 = uVar14 + uVar13;
        uVar13 = uVar14 ^ uVar13;
        uVar14 = uVar13 ^ (uVar14 >> 0x28 | uVar14 << 0x18) ^ uVar13 << 0x10;
        uVar13 = uVar13 >> 0x1b | uVar13 << 0x25;
        uVar2 = 0;
        if (uVar20 <= uVar19) {
          uVar2 = 0xffffffffffffffff >> (-uVar5 & 0x3f);
        }
        while (uVar15 = uVar15 & uVar2, uVar17 <= (uint)uVar15) {
          uVar20 = uVar14 ^ uVar13;
          uVar15 = uVar14 + uVar13;
          uVar13 = uVar20 >> 0x1b | uVar20 << 0x25;
          uVar14 = uVar20 ^ (uVar14 >> 0x28 | uVar14 << 0x18) ^ uVar20 << 0x10;
        }
      }
      uVar15 = -(uVar15 >> 0x1f & 1) & 0xfffffff800000000 | (uVar15 & 0xffffffff) << 3;
      uVar18 = local_b8[uVar16];
      local_b8[uVar16] = *(undefined8 *)((long)local_b8 + uVar15);
      *(undefined8 *)((long)local_b8 + uVar15) = uVar18;
      uVar16 = uVar16 + 1;
      uVar15 = lStack_b0 - (long)local_b8 >> 3;
    } while (uVar16 < uVar15);
  }
  if ((0 < (int)uVar10) && (*(undefined1 *)*local_80 = 1, uVar10 != 1)) {
    uVar16 = 1;
    do {
      puVar1 = local_80 + uVar16;
      uVar16 = uVar16 + 1;
      *(undefined1 *)*puVar1 = 1;
    } while (uVar10 != uVar16);
  }
  if ((0 < (int)uVar11) && (*(undefined1 *)*local_b8 = 1, uVar11 != 1)) {
    uVar16 = 1;
    do {
      puVar1 = local_b8 + uVar16;
      uVar16 = uVar16 + 1;
      *(undefined1 *)*puVar1 = 1;
    } while (uVar11 != uVar16);
  }
  FUN_018ebf30(&local_b8);
  FUN_018ebf30(&local_80);
  return;
}


