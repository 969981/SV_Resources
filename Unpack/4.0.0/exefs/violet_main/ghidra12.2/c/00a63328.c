/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a63328; name: FUN_00a63328
 */


void FUN_00a63328(ushort *param_1)

{
  ushort *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  int *piVar8;
  ushort uVar9;
  ushort uVar10;
  uint uVar11;
  ushort *puVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  
  puVar2 = PTR_DAT_047d7430;
  uVar9 = *param_1;
  if (((*PTR_DAT_047d7430 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d7430), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d7448,PTR_DAT_047d7438,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7430);
  }
  puVar4 = PTR_DAT_047d7440;
  puVar3 = PTR_DAT_047d7438;
  uVar13 = 0xb6;
  *(undefined8 *)PTR_DAT_047d7440 = *(undefined8 *)PTR_DAT_047d7438;
  puVar12 = &DAT_03d62a08;
  do {
    uVar14 = uVar13 >> 1;
    puVar1 = puVar12 + uVar14 + 1;
    uVar13 = uVar13 + (uVar13 >> 1 ^ 0xffffffffffffffff);
    if (uVar9 <= puVar12[uVar14]) {
      puVar1 = puVar12;
      uVar13 = uVar14;
    }
    puVar12 = puVar1;
  } while (uVar13 != 0);
  if (*puVar1 == uVar9) {
    uVar15 = (uint)(byte)(&DAT_03d62b74)[(long)(puVar1 + -0x1eb1504) >> 1];
  }
  else {
    uVar15 = 1;
  }
  *(char *)(param_1 + 1) = (char)uVar15;
  puVar5 = PTR_LAB_047d7448;
  uVar16 = 0;
  do {
    uVar9 = *param_1;
    if (((*puVar2 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(puVar2,uVar9,uVar16 & 0xff), iVar6 != 0)) {
      FUN_00100190(puVar5,puVar3,&PTR_LOOP_04483000);
      __cxa_guard_release(puVar2);
    }
    uVar7 = *(undefined8 *)puVar3;
    *(undefined8 *)puVar4 = uVar7;
    piVar8 = (int *)FUN_00e9d320(uVar7,uVar9,uVar16 & 0xff);
    if (((8 < *(ushort *)((long)piVar8 - (long)*piVar8)) &&
        (uVar13 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[4], uVar13 != 0)) &&
       (uVar9 = *(ushort *)((long)piVar8 + uVar13), uVar9 != 0)) goto LAB_00a6346c;
    uVar16 = uVar16 + 1;
  } while (uVar15 != uVar16);
  uVar9 = 0;
LAB_00a6346c:
  uVar10 = param_1[1];
  param_1[2] = uVar9;
  puVar5 = PTR_LAB_047d7448;
  if ((byte)uVar10 == 0) {
    param_1[6] = 0;
    param_1[7] = 0;
LAB_00a635e8:
    param_1[3] = 0;
LAB_00a635ec:
    param_1[8] = 0;
    param_1[9] = 0;
  }
  else {
    uVar15 = 0;
    uVar16 = 0;
    do {
      uVar9 = *param_1;
      if (((*puVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar2), iVar6 != 0)) {
        FUN_00100190(puVar5,puVar3,&PTR_LOOP_04483000);
        __cxa_guard_release(puVar2);
      }
      uVar7 = *(undefined8 *)puVar3;
      *(undefined8 *)puVar4 = uVar7;
      piVar8 = (int *)FUN_00e9d320(uVar7,uVar9,uVar15 & 0xff);
      if (((*(ushort *)((long)piVar8 - (long)*piVar8) < 9) ||
          (uVar13 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[4], uVar13 == 0)) ||
         (*(short *)((long)piVar8 + uVar13) == 0)) {
        uVar11 = 0;
      }
      else {
        uVar11 = 1 << (ulong)(uVar15 & 0x1f);
      }
      uVar15 = uVar15 + 1;
      uVar16 = uVar11 | uVar16;
    } while ((byte)uVar10 != uVar15);
    uVar9 = param_1[1];
    *(uint *)(param_1 + 6) = uVar16;
    puVar5 = PTR_LAB_047d7448;
    if ((byte)uVar9 == 0) goto LAB_00a635e8;
    uVar15 = 0;
    do {
      uVar10 = *param_1;
      if (((*puVar2 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(puVar2,uVar10,uVar15 & 0xff), iVar6 != 0)) {
        FUN_00100190(puVar5,puVar3,&PTR_LOOP_04483000);
        __cxa_guard_release(puVar2);
      }
      uVar7 = *(undefined8 *)puVar3;
      *(undefined8 *)puVar4 = uVar7;
      piVar8 = (int *)FUN_00e9d320(uVar7,uVar10,uVar15 & 0xff);
      if (((10 < *(ushort *)((long)piVar8 - (long)*piVar8)) &&
          (uVar13 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[5], uVar13 != 0)) &&
         (uVar10 = *(ushort *)((long)piVar8 + uVar13), uVar10 != 0)) goto LAB_00a63620;
      uVar15 = uVar15 + 1;
    } while ((byte)uVar9 != uVar15);
    uVar10 = 0;
LAB_00a63620:
    uVar9 = param_1[1];
    param_1[3] = uVar10;
    puVar5 = PTR_LAB_047d7448;
    if ((byte)uVar9 == 0) goto LAB_00a635ec;
    uVar15 = 0;
    uVar16 = 0;
    do {
      uVar10 = *param_1;
      if (((*puVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar2), iVar6 != 0)) {
        FUN_00100190(puVar5,puVar3,&PTR_LOOP_04483000);
        __cxa_guard_release(puVar2);
      }
      uVar7 = *(undefined8 *)puVar3;
      *(undefined8 *)puVar4 = uVar7;
      piVar8 = (int *)FUN_00e9d320(uVar7,uVar10,uVar15 & 0xff);
      if (((*(ushort *)((long)piVar8 - (long)*piVar8) < 0xb) ||
          (uVar13 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[5], uVar13 == 0)) ||
         (*(short *)((long)piVar8 + uVar13) == 0)) {
        uVar11 = 0;
      }
      else {
        uVar11 = 1 << (ulong)(uVar15 & 0x1f);
      }
      uVar15 = uVar15 + 1;
      uVar16 = uVar11 | uVar16;
    } while ((byte)uVar9 != uVar15);
    uVar9 = param_1[1];
    *(uint *)(param_1 + 8) = uVar16;
    puVar5 = PTR_LAB_047d7448;
    if ((byte)uVar9 != 0) {
      uVar15 = 0;
      do {
        uVar10 = *param_1;
        if (((*puVar2 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(puVar2,uVar10,uVar15 & 0xff), iVar6 != 0)) {
          FUN_00100190(puVar5,puVar3,&PTR_LOOP_04483000);
          __cxa_guard_release(puVar2);
        }
        uVar7 = *(undefined8 *)puVar3;
        *(undefined8 *)puVar4 = uVar7;
        piVar8 = (int *)FUN_00e9d320(uVar7,uVar10,uVar15 & 0xff);
        if (((0xc < *(ushort *)((long)piVar8 - (long)*piVar8)) &&
            (uVar13 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[6], uVar13 != 0)) &&
           (uVar10 = *(ushort *)((long)piVar8 + uVar13), uVar10 != 0)) goto LAB_00a637b4;
        uVar15 = uVar15 + 1;
      } while ((byte)uVar9 != uVar15);
      uVar10 = 0;
LAB_00a637b4:
      uVar9 = param_1[1];
      param_1[4] = uVar10;
      puVar5 = PTR_LAB_047d7448;
      if ((byte)uVar9 == 0) {
        uVar15 = 0;
      }
      else {
        uVar16 = 0;
        uVar15 = 0;
        do {
          uVar10 = *param_1;
          if (((*puVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar2), iVar6 != 0)) {
            FUN_00100190(puVar5,puVar3,&PTR_LOOP_04483000);
            __cxa_guard_release(puVar2);
          }
          uVar7 = *(undefined8 *)puVar3;
          *(undefined8 *)puVar4 = uVar7;
          piVar8 = (int *)FUN_00e9d320(uVar7,uVar10,uVar16 & 0xff);
          if (((*(ushort *)((long)piVar8 - (long)*piVar8) < 0xd) ||
              (uVar13 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[6], uVar13 == 0)) ||
             (*(short *)((long)piVar8 + uVar13) == 0)) {
            uVar11 = 0;
          }
          else {
            uVar11 = 1 << (ulong)(uVar16 & 0x1f);
          }
          uVar16 = uVar16 + 1;
          uVar15 = uVar11 | uVar15;
        } while ((byte)uVar9 != uVar16);
      }
      goto LAB_00a635f8;
    }
  }
  uVar15 = 0;
  param_1[4] = 0;
LAB_00a635f8:
  *(uint *)(param_1 + 10) = uVar15;
  return;
}


