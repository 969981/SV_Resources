/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a4dbbc; name: FUN_00a4dbbc
 */


void FUN_00a4dbbc(uint *param_1,long param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  ulong *puVar3;
  ulong *puVar4;
  long *plVar5;
  long *plVar6;
  ushort uVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  int iVar11;
  long *plVar12;
  undefined8 uVar13;
  int *piVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  uint uVar21;
  uint uVar22;
  
  *(undefined2 *)(param_1 + 4) = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 3;
  param_1[10] = 0;
  param_1[0xb] = 3;
  param_1[0xc] = 3;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  puVar8 = PTR_DAT_047d4c98;
  param_1[9] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar11 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar16 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar16;
  puVar9 = PTR_DAT_047d4b10;
  puVar8 = PTR_DAT_047d4b08;
  plVar5 = *(long **)(lVar16 + 0x1c0);
  plVar6 = *(long **)(lVar16 + 0x1c8);
  do {
    if (plVar5 == plVar6) {
      return;
    }
    lVar16 = *plVar5;
    puVar20 = (undefined8 *)(lVar16 + 0x28);
    plVar12 = (long *)(**(code **)*puVar20)(puVar20);
    if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
      uVar13 = FUN_01b3fb0c();
      *(undefined8 *)puVar9 = uVar13;
      __cxa_guard_release(puVar8);
    }
    for (; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
      if (plVar12 == (long *)puVar9) {
        if (param_4 < 5) {
          lVar16 = lVar16 + (ulong)param_4 * 0x10;
          puVar3 = (ulong *)(lVar16 + 0x8080);
          if (param_3 == 1) {
            puVar3 = (ulong *)(lVar16 + 0x80d0);
          }
          puVar4 = (ulong *)(lVar16 + 0x8120);
          if (param_3 != 2) {
            puVar4 = puVar3;
          }
          uVar19 = *puVar4;
        }
        else {
          uVar19 = 0;
        }
        uVar1 = (uint)uVar19 & 0xffff;
        if (0x400 < uVar1 - 1) {
          return;
        }
        uVar18 = uVar19 >> 0x20 & 0xff;
        uVar2 = 0;
        if (((uint)uVar19 & 0xfffe) != 0x298 && uVar1 != 0x2e8) {
          uVar2 = (uint)(uVar19 >> 0x28) & 0xff;
        }
        uVar17 = (uint)uVar18;
        if (uVar17 == 0) {
          if (((*PTR_DAT_047d7430 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d7430), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d7448,PTR_DAT_047d7438,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d7430);
          }
          uVar13 = *(undefined8 *)PTR_DAT_047d7438;
          *(undefined8 *)PTR_DAT_047d7440 = uVar13;
          piVar14 = (int *)FUN_00e9d320(uVar13,uVar19 & 0xffffffff,uVar2);
          if (8 < *(ushort *)((long)piVar14 - (long)*piVar14)) {
            uVar7 = ((ushort *)((long)piVar14 - (long)*piVar14))[4];
joined_r0x00a4ddfc:
            if ((ulong)uVar7 != 0) {
              uVar22 = (uint)*(ushort *)((long)piVar14 + (ulong)uVar7);
              goto LAB_00a4de60;
            }
          }
        }
        else if (uVar17 == 1) {
          if (((*PTR_DAT_047d7430 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d7430), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d7448,PTR_DAT_047d7438,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d7430);
          }
          uVar13 = *(undefined8 *)PTR_DAT_047d7438;
          *(undefined8 *)PTR_DAT_047d7440 = uVar13;
          piVar14 = (int *)FUN_00e9d320(uVar13,uVar19 & 0xffffffff,uVar2);
          if (10 < *(ushort *)((long)piVar14 - (long)*piVar14)) {
            uVar7 = ((ushort *)((long)piVar14 - (long)*piVar14))[5];
            goto joined_r0x00a4ddfc;
          }
        }
        else if (uVar17 == 2) {
          if (((*PTR_DAT_047d7430 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d7430), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d7448,PTR_DAT_047d7438,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d7430);
          }
          uVar13 = *(undefined8 *)PTR_DAT_047d7438;
          *(undefined8 *)PTR_DAT_047d7440 = uVar13;
          piVar14 = (int *)FUN_00e9d320(uVar13,uVar19 & 0xffffffff,uVar2);
          if (0xc < *(ushort *)((long)piVar14 - (long)*piVar14)) {
            uVar7 = ((ushort *)((long)piVar14 - (long)*piVar14))[6];
            goto joined_r0x00a4ddfc;
          }
        }
        uVar22 = 0;
LAB_00a4de60:
        lVar16 = param_2 + (uVar19 & 0xffff) * 0x18 + 0x2c;
        uVar15 = FUN_00a65174(lVar16,uVar18,0);
        uVar21 = 0;
        if ((uVar15 & 1) == 0) {
          uVar21 = 1;
          uVar15 = FUN_00a65174(lVar16,uVar18,1);
          if ((uVar15 & 1) == 0) {
            uVar18 = FUN_00a65174(lVar16,uVar18,2);
            uVar21 = 2;
            if ((uVar18 & 1) == 0) {
              uVar21 = 3;
            }
          }
        }
        uVar10 = FUN_00a65ebc(uVar19 & 0xffffffff,uVar2,uVar19 >> 0x30,
                              (uVar19 & 0xff00000000000000) == 0x100000000000000);
        *param_1 = uVar1;
        param_1[1] = uVar22;
        param_1[2] = uVar2;
        param_1[3] = (ushort)(uVar19 >> 0x30) & 0xff;
        *(bool *)(param_1 + 4) = (uVar19 & 0xff00000000000000) == 0x100000000000000;
        *(undefined1 *)((long)param_1 + 0x11) = 0;
        param_1[5] = uVar21;
        param_1[6] = uVar1;
        param_1[7] = uVar22;
        param_1[8] = uVar2;
        param_1[0xb] = uVar21;
        param_1[0xc] = uVar17;
        param_1[0xd] = 0;
        param_1[0xe] = uVar17;
        param_1[0xf] = uVar1;
        param_1[9] = (uint)(uVar19 >> 0x10) & 0xffff;
        param_1[10] = uVar10;
        return;
      }
    }
    plVar5 = plVar5 + 1;
  } while( true );
}


