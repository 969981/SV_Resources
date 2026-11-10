/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a55e90; name: FUN_00a55e90
 */


void FUN_00a55e90(ulong *param_1,ulong *param_2,undefined8 *param_3)

{
  ushort uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  int *piVar10;
  uint uVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  long lVar18;
  ulong *puVar19;
  ulong *puVar20;
  ulong *local_2e0;
  ulong *local_2d0;
  ulong *local_2c8;
  ulong local_2c0;
  ulong local_2b8;
  ulong uStack_2b0;
  ulong local_2a8;
  ulong local_2a0;
  ulong uStack_298;
  ulong local_290;
  ulong local_288;
  ulong uStack_280;
  ulong local_278;
  ulong local_270;
  ulong uStack_268;
  ulong local_260;
  ulong local_258;
  ulong uStack_250;
  ulong local_248;
  ulong local_240;
  ulong uStack_238;
  ulong local_230;
  ulong local_228;
  ulong uStack_220;
  ulong local_218;
  ulong local_210;
  ulong uStack_208;
  ulong local_200;
  ulong local_1f8;
  ulong uStack_1f0;
  ulong local_1e8;
  ulong local_1e0;
  ulong uStack_1d8;
  ulong local_1d0;
  ulong local_1c8;
  ulong uStack_1c0;
  ulong local_1b8;
  ulong local_1b0;
  ulong uStack_1a8;
  ulong local_1a0;
  ulong local_198;
  ulong uStack_190;
  ulong local_188;
  ulong local_180;
  ulong uStack_178;
  ulong local_170;
  ulong local_168;
  ulong uStack_160;
  ulong local_158;
  ulong local_150;
  ulong uStack_148;
  ulong local_140;
  ulong local_138;
  ulong uStack_130;
  ulong local_128;
  ulong local_120;
  ulong uStack_118;
  ulong local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulong local_c8;
  ulong uStack_c0;
  ulong local_b8;
  ulong local_b0;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  ulong local_78;
  ulong uStack_70;
  
  puVar5 = PTR_DAT_047d7440;
  puVar4 = PTR_DAT_047d7438;
  puVar3 = PTR_DAT_047d7430;
  local_2e0 = param_2;
  local_2c8 = param_1;
LAB_00a55ed4:
  puVar14 = local_2e0 + -3;
  puVar19 = local_2c8;
LAB_00a55ee8:
  local_2c8 = puVar19;
  uVar12 = (long)local_2e0 - (long)local_2c8;
  if ((ulong)(((long)uVar12 >> 3) * -0x5555555555555555) < 6) {
                    /* WARNING: Could not recover jumptable at 0x00a56ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_00a56ca4 +
              (ulong)*(ushort *)(&DAT_03d2fe76 + ((long)uVar12 >> 3) * 0x5555555555555556) * 4))();
    return;
  }
  if ((long)uVar12 < 0x2e8) {
    FUN_00a57230(local_2c8,local_2c8 + 3,local_2c8 + 6,param_3);
    if (local_2c8 + 9 == local_2e0) {
      return;
    }
    lVar18 = 0;
    puVar19 = local_2c8 + 9;
    puVar14 = local_2c8 + 6;
    goto LAB_00a56dc4;
  }
  puVar19 = local_2c8 + (uVar12 / 0x30) * 3;
  if ((long)uVar12 < 0x5da9) {
    iVar7 = FUN_00a57230(local_2c8,puVar19,puVar14,param_3);
  }
  else {
    lVar18 = (uVar12 / 0x60) * 2 + uVar12 / 0x60;
    iVar7 = FUN_00a57f20(local_2c8,local_2c8 + lVar18,puVar19,puVar19 + lVar18,puVar14,param_3);
  }
  local_128 = *local_2c8;
  local_120 = local_2c8[1];
  uStack_118 = local_2c8[2];
  local_140 = *puVar19;
  local_138 = puVar19[1];
  uStack_130 = puVar19[2];
  uVar11 = (uint)local_128;
  uVar12 = FUN_00a65480(&local_128,*(undefined4 *)*param_3);
  if (((*puVar3 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar3), iVar8 != 0)) {
    FUN_00100190(PTR_LAB_047d7448,puVar4,&PTR_LOOP_04483000);
    __cxa_guard_release(puVar3);
  }
  uVar9 = *(undefined8 *)puVar4;
  *(undefined8 *)puVar5 = uVar9;
  piVar10 = (int *)FUN_00e9d320(uVar9,uVar11 & 0xffff,uVar12 >> 0x20);
  uVar1 = *(ushort *)((long)piVar10 + (ulong)*(ushort *)((long)piVar10 + (4 - (long)*piVar10)) + 10)
  ;
  uVar15 = local_140 & 0xffff;
  uVar12 = FUN_00a65480(&local_140,*(undefined4 *)*param_3);
  if (((*puVar3 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar3), iVar8 != 0)) {
    FUN_00100190(PTR_LAB_047d7448,puVar4,&PTR_LOOP_04483000);
    __cxa_guard_release(puVar3);
  }
  uVar9 = *(undefined8 *)puVar4;
  *(undefined8 *)puVar5 = uVar9;
  piVar10 = (int *)FUN_00e9d320(uVar9,uVar15,uVar12 >> 0x20);
  uVar2 = *(ushort *)((long)piVar10 + (ulong)*(ushort *)((long)piVar10 + (4 - (long)*piVar10)) + 10)
  ;
  puVar16 = puVar14;
  if (uVar1 <= uVar2) {
    if (uVar1 == uVar2) {
      if ((ushort)local_128 < (ushort)local_140) goto LAB_00a563f0;
    }
    for (puVar16 = local_2e0 + -6; local_2c8 != puVar16; puVar16 = puVar16 + -3) {
      local_218 = *puVar16;
      local_210 = puVar16[1];
      uVar11 = (uint)local_218;
      uStack_208 = puVar16[2];
      local_230 = *puVar19;
      local_228 = puVar19[1];
      uStack_220 = puVar19[2];
      uVar12 = FUN_00a65480(&local_218,*(undefined4 *)*param_3);
      if (((*puVar3 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar3), iVar8 != 0)) {
        FUN_00100190(PTR_LAB_047d7448,puVar4,&PTR_LOOP_04483000);
        __cxa_guard_release(puVar3);
      }
      uVar9 = *(undefined8 *)puVar4;
      *(undefined8 *)puVar5 = uVar9;
      piVar10 = (int *)FUN_00e9d320(uVar9,uVar11 & 0xffff,uVar12 >> 0x20);
      uVar1 = *(ushort *)
               ((long)piVar10 + (ulong)*(ushort *)((long)piVar10 + (4 - (long)*piVar10)) + 10);
      uVar15 = local_230 & 0xffff;
      uVar12 = FUN_00a65480(&local_230,*(undefined4 *)*param_3);
      if (((*puVar3 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar3), iVar8 != 0)) {
        FUN_00100190(PTR_LAB_047d7448,puVar4,&PTR_LOOP_04483000);
        __cxa_guard_release(puVar3);
      }
      uVar9 = *(undefined8 *)puVar4;
      *(undefined8 *)puVar5 = uVar9;
      piVar10 = (int *)FUN_00e9d320(uVar9,uVar15,uVar12 >> 0x20);
      uVar2 = *(ushort *)
               ((long)piVar10 + (ulong)*(ushort *)((long)piVar10 + (4 - (long)*piVar10)) + 10);
      if (uVar2 < uVar1) {
LAB_00a563b4:
        local_80 = *local_2c8;
        local_78 = local_2c8[1];
        uStack_70 = local_2c8[2];
        uVar12 = puVar16[2];
        uVar15 = *puVar16;
        local_2c8[1] = puVar16[1];
        local_2c8[2] = uVar12;
        *local_2c8 = uVar15;
        puVar16[1] = local_78;
        puVar16[2] = uStack_70;
        iVar7 = iVar7 + 1;
        *puVar16 = local_80;
        goto LAB_00a563f0;
      }
      if (uVar1 == uVar2) {
        if ((ushort)local_218 < (ushort)local_230) goto LAB_00a563b4;
      }
    }
    local_158 = *local_2c8;
    local_150 = local_2c8[1];
    uVar11 = (uint)local_158;
    uStack_148 = local_2c8[2];
    uStack_160 = local_2e0[-1];
    local_170 = *puVar14;
    local_168 = local_2e0[-2];
    uVar12 = FUN_00a65480(&local_158,*(undefined4 *)*param_3);
    if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar3), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d7448,puVar4,&PTR_LOOP_04483000);
      __cxa_guard_release(puVar3);
    }
    uVar9 = *(undefined8 *)puVar4;
    puVar16 = local_2c8 + 3;
    *(undefined8 *)puVar5 = uVar9;
    piVar10 = (int *)FUN_00e9d320(uVar9,uVar11 & 0xffff,uVar12 >> 0x20);
    uVar1 = *(ushort *)
             ((long)piVar10 + (ulong)*(ushort *)((long)piVar10 + (4 - (long)*piVar10)) + 10);
    uVar15 = local_170 & 0xffff;
    uVar12 = FUN_00a65480(&local_170,*(undefined4 *)*param_3);
    if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar3), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d7448,puVar4,&PTR_LOOP_04483000);
      __cxa_guard_release(puVar3);
    }
    uVar9 = *(undefined8 *)puVar4;
    *(undefined8 *)puVar5 = uVar9;
    piVar10 = (int *)FUN_00e9d320(uVar9,uVar15,uVar12 >> 0x20);
    uVar2 = *(ushort *)
             ((long)piVar10 + (ulong)*(ushort *)((long)piVar10 + (4 - (long)*piVar10)) + 10);
    if (uVar1 <= uVar2) {
      if (uVar1 == uVar2) {
        if ((ushort)local_158 < (ushort)local_170) goto LAB_00a56888;
      }
      if (puVar16 == puVar14) {
        return;
      }
      puVar16 = local_2c8 + 6;
      while( true ) {
        local_188 = *local_2c8;
        local_180 = local_2c8[1];
        uStack_178 = local_2c8[2];
        local_1a0 = puVar16[-3];
        local_198 = puVar16[-2];
        uStack_190 = puVar16[-1];
        uVar11 = (uint)local_188;
        uVar12 = FUN_00a65480(&local_188,*(undefined4 *)*param_3);
        if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar3), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d7448,puVar4,&PTR_LOOP_04483000);
          __cxa_guard_release(puVar3);
        }
        uVar9 = *(undefined8 *)puVar4;
        *(undefined8 *)puVar5 = uVar9;
        piVar10 = (int *)FUN_00e9d320(uVar9,uVar11 & 0xffff,uVar12 >> 0x20);
        uVar1 = *(ushort *)
                 ((long)piVar10 + (ulong)*(ushort *)((long)piVar10 + (4 - (long)*piVar10)) + 10);
        uVar15 = local_1a0 & 0xffff;
        uVar12 = FUN_00a65480(&local_1a0,*(undefined4 *)*param_3);
        if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar3), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d7448,puVar4,&PTR_LOOP_04483000);
          __cxa_guard_release(puVar3);
        }
        uVar9 = *(undefined8 *)puVar4;
        *(undefined8 *)puVar5 = uVar9;
        piVar10 = (int *)FUN_00e9d320(uVar9,uVar15,uVar12 >> 0x20);
        uVar2 = *(ushort *)
                 ((long)piVar10 + (ulong)*(ushort *)((long)piVar10 + (4 - (long)*piVar10)) + 10);
        if (uVar2 < uVar1) break;
        if (uVar1 == uVar2) {
          if ((ushort)local_188 < (ushort)local_1a0) break;
        }
        puVar16 = puVar16 + 3;
        if (local_2e0 == puVar16) {
          return;
        }
      }
      local_80 = puVar16[-3];
      local_78 = puVar16[-2];
      uStack_70 = puVar16[-1];
      uVar12 = local_2e0[-1];
      uVar15 = *puVar14;
      puVar16[-2] = local_2e0[-2];
      puVar16[-1] = uVar12;
      puVar16[-3] = uVar15;
      local_2e0[-2] = local_78;
      local_2e0[-1] = uStack_70;
      *puVar14 = local_80;
    }
LAB_00a56888:
    puVar13 = puVar14;
    if (puVar16 == puVar14) {
      return;
    }
    do {
      puVar19 = puVar16;
      while( true ) {
        local_1b8 = *local_2c8;
        local_1b0 = local_2c8[1];
        uVar11 = (uint)local_1b8;
        uStack_1a8 = local_2c8[2];
        local_1d0 = *puVar19;
        local_1c8 = puVar19[1];
        uStack_1c0 = puVar19[2];
        uVar12 = FUN_00a65480(&local_1b8,*(undefined4 *)*param_3);
        if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar3), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d7448,puVar4,&PTR_LOOP_04483000);
          __cxa_guard_release(puVar3);
        }
        uVar9 = *(undefined8 *)puVar4;
        *(undefined8 *)puVar5 = uVar9;
        piVar10 = (int *)FUN_00e9d320(uVar9,uVar11 & 0xffff,uVar12 >> 0x20);
        uVar1 = *(ushort *)
                 ((long)piVar10 + (ulong)*(ushort *)((long)piVar10 + (4 - (long)*piVar10)) + 10);
        uVar15 = local_1d0 & 0xffff;
        uVar12 = FUN_00a65480(&local_1d0,*(undefined4 *)*param_3);
        if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar3), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d7448,puVar4,&PTR_LOOP_04483000);
          __cxa_guard_release(puVar3);
        }
        uVar9 = *(undefined8 *)puVar4;
        *(undefined8 *)puVar5 = uVar9;
        piVar10 = (int *)FUN_00e9d320(uVar9,uVar15,uVar12 >> 0x20);
        uVar2 = *(ushort *)
                 ((long)piVar10 + (ulong)*(ushort *)((long)piVar10 + (4 - (long)*piVar10)) + 10);
        if (uVar2 < uVar1) break;
        if (uVar1 == uVar2) {
          if ((ushort)local_1b8 < (ushort)local_1d0) break;
        }
        puVar19 = puVar19 + 3;
      }
      puVar16 = puVar19 + 3;
      do {
        do {
          puVar20 = puVar13;
          local_1e8 = *local_2c8;
          local_1e0 = local_2c8[1];
          uStack_1d8 = local_2c8[2];
          puVar13 = puVar20 + -3;
          local_200 = *puVar13;
          local_1f8 = puVar20[-2];
          uStack_1f0 = puVar20[-1];
          uVar11 = (uint)local_1e8;
          uVar12 = FUN_00a65480(&local_1e8,*(undefined4 *)*param_3);
          if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar3), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d7448,puVar4,&PTR_LOOP_04483000);
            __cxa_guard_release(puVar3);
          }
          uVar9 = *(undefined8 *)puVar4;
          *(undefined8 *)puVar5 = uVar9;
          piVar10 = (int *)FUN_00e9d320(uVar9,uVar11 & 0xffff,uVar12 >> 0x20);
          uVar1 = *(ushort *)
                   ((long)piVar10 + (ulong)*(ushort *)((long)piVar10 + (4 - (long)*piVar10)) + 10);
          uVar15 = local_200 & 0xffff;
          uVar12 = FUN_00a65480(&local_200,*(undefined4 *)*param_3);
          if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar3), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d7448,puVar4,&PTR_LOOP_04483000);
            __cxa_guard_release(puVar3);
          }
          uVar9 = *(undefined8 *)puVar4;
          *(undefined8 *)puVar5 = uVar9;
          piVar10 = (int *)FUN_00e9d320(uVar9,uVar15,uVar12 >> 0x20);
          uVar2 = *(ushort *)
                   ((long)piVar10 + (ulong)*(ushort *)((long)piVar10 + (4 - (long)*piVar10)) + 10);
        } while (uVar2 < uVar1);
        if (uVar1 != uVar2) break;
      } while ((ushort)local_1e8 < (ushort)local_200);
      if (puVar13 <= puVar19) goto LAB_00a56b40;
      local_80 = *puVar19;
      local_78 = puVar19[1];
      uStack_70 = puVar19[2];
      uVar12 = puVar20[-1];
      uVar15 = *puVar13;
      puVar19[1] = puVar20[-2];
      puVar19[2] = uVar12;
      *puVar19 = uVar15;
      puVar20[-2] = local_78;
      puVar20[-1] = uStack_70;
      *puVar13 = local_80;
    } while( true );
  }
LAB_00a563f0:
  puVar13 = local_2c8 + 3;
  if (puVar13 < puVar16) {
    do {
      while( true ) {
        local_248 = *puVar13;
        local_240 = puVar13[1];
        uVar11 = (uint)local_248;
        uStack_238 = puVar13[2];
        local_260 = *puVar19;
        local_258 = puVar19[1];
        uStack_250 = puVar19[2];
        uVar12 = FUN_00a65480(&local_248,*(undefined4 *)*param_3);
        if (((*puVar3 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar3), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d7448,puVar4,&PTR_LOOP_04483000);
          __cxa_guard_release(puVar3);
        }
        uVar9 = *(undefined8 *)puVar4;
        *(undefined8 *)puVar5 = uVar9;
        piVar10 = (int *)FUN_00e9d320(uVar9,uVar11 & 0xffff,uVar12 >> 0x20);
        uVar1 = *(ushort *)
                 ((long)piVar10 + (ulong)*(ushort *)((long)piVar10 + (4 - (long)*piVar10)) + 10);
        uVar15 = local_260 & 0xffff;
        uVar12 = FUN_00a65480(&local_260,*(undefined4 *)*param_3);
        if (((*puVar3 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar3), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d7448,puVar4,&PTR_LOOP_04483000);
          __cxa_guard_release(puVar3);
        }
        uVar9 = *(undefined8 *)puVar4;
        *(undefined8 *)puVar5 = uVar9;
        piVar10 = (int *)FUN_00e9d320(uVar9,uVar15,uVar12 >> 0x20);
        uVar2 = *(ushort *)
                 ((long)piVar10 + (ulong)*(ushort *)((long)piVar10 + (4 - (long)*piVar10)) + 10);
        if (uVar1 <= uVar2) break;
LAB_00a564c8:
        puVar13 = puVar13 + 3;
      }
      if (uVar1 == uVar2) {
        if ((ushort)local_248 < (ushort)local_260) goto LAB_00a564c8;
      }
      do {
        do {
          puVar20 = puVar16;
          puVar16 = puVar20 + -3;
          local_278 = *puVar16;
          local_270 = puVar20[-2];
          uStack_268 = puVar20[-1];
          local_290 = *puVar19;
          local_288 = puVar19[1];
          uStack_280 = puVar19[2];
          uVar11 = (uint)local_278;
          uVar12 = FUN_00a65480(&local_278,*(undefined4 *)*param_3);
          if (((*puVar3 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar3), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d7448,puVar4,&PTR_LOOP_04483000);
            __cxa_guard_release(puVar3);
          }
          uVar9 = *(undefined8 *)puVar4;
          *(undefined8 *)puVar5 = uVar9;
          piVar10 = (int *)FUN_00e9d320(uVar9,uVar11 & 0xffff,uVar12 >> 0x20);
          uVar1 = *(ushort *)
                   ((long)piVar10 + (ulong)*(ushort *)((long)piVar10 + (4 - (long)*piVar10)) + 10);
          uVar15 = local_290 & 0xffff;
          uVar12 = FUN_00a65480(&local_290,*(undefined4 *)*param_3);
          if (((*puVar3 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar3), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d7448,puVar4,&PTR_LOOP_04483000);
            __cxa_guard_release(puVar3);
          }
          uVar9 = *(undefined8 *)puVar4;
          *(undefined8 *)puVar5 = uVar9;
          piVar10 = (int *)FUN_00e9d320(uVar9,uVar15,uVar12 >> 0x20);
          uVar2 = *(ushort *)
                   ((long)piVar10 + (ulong)*(ushort *)((long)piVar10 + (4 - (long)*piVar10)) + 10);
          if (uVar2 < uVar1) goto LAB_00a56608;
        } while (uVar1 != uVar2);
      } while ((ushort)local_290 <= (ushort)local_278);
LAB_00a56608:
      if (puVar16 < puVar13) break;
      local_80 = *puVar13;
      local_78 = puVar13[1];
      uStack_70 = puVar13[2];
      uVar12 = puVar20[-1];
      uVar15 = *puVar16;
      puVar13[1] = puVar20[-2];
      puVar13[2] = uVar12;
      *puVar13 = uVar15;
      puVar20[-2] = local_78;
      puVar20[-1] = uStack_70;
      iVar7 = iVar7 + 1;
      *puVar16 = local_80;
      puVar20 = puVar16;
      if (puVar19 != puVar13) {
        puVar20 = puVar19;
      }
      puVar13 = puVar13 + 3;
      puVar19 = puVar20;
    } while( true );
  }
  if (puVar13 == puVar19) {
LAB_00a567dc:
    if (iVar7 == 0) {
LAB_00a567e4:
      uVar12 = FUN_00a585d0(local_2c8,puVar13,param_3);
      uVar15 = FUN_00a585d0(puVar13 + 3,local_2e0,param_3);
      if ((uVar15 & 1) != 0) goto LAB_00a56c80;
      puVar19 = puVar13 + 3;
      if ((uVar12 & 1) != 0) goto LAB_00a55ee8;
    }
  }
  else {
    local_2a8 = *puVar19;
    local_2a0 = puVar19[1];
    uVar11 = (uint)local_2a8;
    uStack_298 = puVar19[2];
    local_2c0 = *puVar13;
    local_2b8 = puVar13[1];
    uStack_2b0 = puVar13[2];
    uVar12 = FUN_00a65480(&local_2a8,*(undefined4 *)*param_3);
    if (((*puVar3 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar3), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d7448,puVar4,&PTR_LOOP_04483000);
      __cxa_guard_release(puVar3);
    }
    uVar9 = *(undefined8 *)puVar4;
    *(undefined8 *)puVar5 = uVar9;
    piVar10 = (int *)FUN_00e9d320(uVar9,uVar11 & 0xffff,uVar12 >> 0x20);
    uVar1 = *(ushort *)
             ((long)piVar10 + (ulong)*(ushort *)((long)piVar10 + (4 - (long)*piVar10)) + 10);
    uVar15 = local_2c0 & 0xffff;
    uVar12 = FUN_00a65480(&local_2c0,*(undefined4 *)*param_3);
    if (((*puVar3 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar3), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d7448,puVar4,&PTR_LOOP_04483000);
      __cxa_guard_release(puVar3);
    }
    uVar9 = *(undefined8 *)puVar4;
    *(undefined8 *)puVar5 = uVar9;
    piVar10 = (int *)FUN_00e9d320(uVar9,uVar15,uVar12 >> 0x20);
    uVar2 = *(ushort *)
             ((long)piVar10 + (ulong)*(ushort *)((long)piVar10 + (4 - (long)*piVar10)) + 10);
    if (uVar1 <= uVar2) {
      if (uVar1 == uVar2) {
        if ((ushort)local_2a8 < (ushort)local_2c0) goto LAB_00a56788;
      }
      goto LAB_00a567dc;
    }
LAB_00a56788:
    local_80 = *puVar13;
    local_78 = puVar13[1];
    uStack_70 = puVar13[2];
    uVar12 = puVar19[2];
    uVar15 = *puVar19;
    puVar13[1] = puVar19[1];
    puVar13[2] = uVar12;
    *puVar13 = uVar15;
    puVar19[1] = local_78;
    puVar19[2] = uStack_70;
    *puVar19 = local_80;
    if (iVar7 == -1) goto LAB_00a567e4;
  }
  if (((long)local_2e0 - (long)puVar13 >> 3) * -0x5555555555555555 <=
      ((long)puVar13 - (long)local_2c8 >> 3) * -0x5555555555555555) {
    FUN_00a55e90(puVar13 + 3,local_2e0,param_3);
    local_2e0 = puVar13;
    goto LAB_00a55ed4;
  }
  FUN_00a55e90(local_2c8,puVar13,param_3);
  puVar19 = puVar13 + 3;
  goto LAB_00a55ee8;
LAB_00a56dc4:
  puVar16 = puVar19;
  local_80 = *puVar16;
  local_78 = puVar16[1];
  uStack_70 = puVar16[2];
  uVar11 = (uint)local_80;
  local_98 = *puVar14;
  local_90 = puVar14[1];
  uStack_88 = puVar14[2];
  uVar12 = FUN_00a65480(&local_80,*(undefined4 *)*param_3);
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar3), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d7448,puVar4,&PTR_LOOP_04483000);
    __cxa_guard_release(puVar3);
  }
  uVar9 = *(undefined8 *)puVar4;
  *(undefined8 *)puVar5 = uVar9;
  piVar10 = (int *)FUN_00e9d320(uVar9,uVar11 & 0xffff,uVar12 >> 0x20);
  uVar1 = *(ushort *)((long)piVar10 + (ulong)*(ushort *)((long)piVar10 + (4 - (long)*piVar10)) + 10)
  ;
  uVar15 = local_98 & 0xffff;
  uVar12 = FUN_00a65480(&local_98,*(undefined4 *)*param_3);
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar3), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d7448,puVar4,&PTR_LOOP_04483000);
    __cxa_guard_release(puVar3);
  }
  uVar9 = *(undefined8 *)puVar4;
  *(undefined8 *)puVar5 = uVar9;
  piVar10 = (int *)FUN_00e9d320(uVar9,uVar15,uVar12 >> 0x20);
  uVar2 = *(ushort *)((long)piVar10 + (ulong)*(ushort *)((long)piVar10 + (4 - (long)*piVar10)) + 10)
  ;
  if (uVar2 < uVar1) {
LAB_00a56e9c:
    local_b0 = *puVar16;
    local_a8 = puVar16[1];
    local_a0 = puVar16[2];
    uVar12 = puVar14[2];
    uVar15 = *puVar14;
    puVar16[1] = puVar14[1];
    puVar16[2] = uVar12;
    *puVar16 = uVar15;
    local_2d0 = local_2c8;
    if (puVar14 != local_2c8) {
      lVar17 = lVar18;
      local_2d0 = puVar14;
      do {
        uVar11 = (uint)local_b0;
        local_c8 = local_b0;
        uStack_c0 = local_a8;
        local_b8 = local_a0;
        puVar19 = (ulong *)((long)local_2c8 + lVar17 + 0x18);
        local_e0 = *puVar19;
        local_d8 = *(undefined8 *)((long)local_2c8 + lVar17 + 0x20);
        uStack_d0 = *(undefined8 *)((long)local_2c8 + lVar17 + 0x28);
        uVar12 = FUN_00a65480(&local_c8,*(undefined4 *)*param_3);
        if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar3), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d7448,puVar4,&PTR_LOOP_04483000);
          __cxa_guard_release(puVar3);
        }
        uVar9 = *(undefined8 *)puVar4;
        *(undefined8 *)puVar5 = uVar9;
        piVar10 = (int *)FUN_00e9d320(uVar9,uVar11 & 0xffff,uVar12 >> 0x20);
        uVar1 = *(ushort *)
                 ((long)piVar10 + (ulong)*(ushort *)((long)piVar10 + (4 - (long)*piVar10)) + 10);
        uVar15 = local_e0 & 0xffff;
        uVar12 = FUN_00a65480(&local_e0,*(undefined4 *)*param_3);
        if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar3), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d7448,puVar4,&PTR_LOOP_04483000);
          __cxa_guard_release(puVar3);
        }
        uVar9 = *(undefined8 *)puVar4;
        *(undefined8 *)puVar5 = uVar9;
        piVar10 = (int *)FUN_00e9d320(uVar9,uVar15,uVar12 >> 0x20);
        uVar2 = *(ushort *)
                 ((long)piVar10 + (ulong)*(ushort *)((long)piVar10 + (4 - (long)*piVar10)) + 10);
        if (uVar1 <= uVar2) {
          if (uVar1 != uVar2) {
            local_2d0 = (ulong *)((long)local_2c8 + lVar17 + 0x30);
            goto LAB_00a57060;
          }
          if ((ushort)local_e0 <= (ushort)local_c8) goto LAB_00a57060;
        }
        local_2d0 = local_2d0 + -3;
        bVar6 = lVar17 != -0x18;
        *(ulong *)((long)local_2c8 + lVar17 + 0x30) = *puVar19;
        *(undefined8 *)((long)local_2c8 + lVar17 + 0x38) =
             *(undefined8 *)((long)local_2c8 + lVar17 + 0x20);
        *(undefined8 *)((long)local_2c8 + lVar17 + 0x40) =
             *(undefined8 *)((long)local_2c8 + lVar17 + 0x28);
        lVar17 = lVar17 + -0x18;
      } while (bVar6);
      local_2d0 = local_2c8;
    }
LAB_00a57060:
    local_2d0[1] = local_a8;
    local_2d0[2] = local_a0;
    *local_2d0 = local_b0;
  }
  else if (uVar1 == uVar2) {
    if ((ushort)local_80 < (ushort)local_98) goto LAB_00a56e9c;
  }
  lVar18 = lVar18 + 0x18;
  puVar19 = puVar16 + 3;
  puVar14 = puVar16;
  if (puVar16 + 3 == local_2e0) {
    return;
  }
  goto LAB_00a56dc4;
LAB_00a56b40:
  goto LAB_00a55ee8;
LAB_00a56c80:
  local_2e0 = puVar13;
  if ((uVar12 & 1) != 0) {
    return;
  }
  goto LAB_00a55ed4;
}


