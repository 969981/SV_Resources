/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a59fe0; name: FUN_00a59fe0
 */


undefined8 FUN_00a59fe0(ulong *param_1,ulong *param_2,ulong *param_3,undefined8 *param_4)

{
  ulong uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  int *piVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  ulong local_168;
  ulong uStack_160;
  ulong local_158;
  ulong local_150;
  ulong local_148;
  ulong uStack_140;
  ulong local_138;
  ulong uStack_130;
  ulong local_128;
  ulong local_120;
  ulong local_118;
  ulong uStack_110;
  ulong local_108;
  ulong uStack_100;
  ulong local_f8;
  ulong local_f0;
  ulong local_e8;
  ulong uStack_e0;
  ulong local_d8;
  ulong uStack_d0;
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  ulong uStack_b0;
  ulong local_a8;
  ulong uStack_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  ulong uStack_80;
  ulong local_78;
  ulong local_70;
  ulong uStack_68;
  
  local_90 = *param_2;
  local_88 = param_2[1];
  uVar11 = (uint)local_90;
  uStack_80 = param_2[2];
  local_a8 = *param_1;
  uStack_a0 = param_1[1];
  local_98 = param_1[2];
  auVar15 = FUN_00a65480(&local_90,*(undefined4 *)*param_4);
  puVar4 = PTR_DAT_047d7430;
  uVar10 = auVar15._0_8_ >> 0x20;
  if (((*PTR_DAT_047d7430 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_047d7430,auVar15._8_8_,uVar10), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d7448,PTR_DAT_047d7438,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7430);
  }
  puVar6 = PTR_DAT_047d7440;
  puVar5 = PTR_DAT_047d7438;
  uVar8 = *(undefined8 *)PTR_DAT_047d7438;
  *(undefined8 *)PTR_DAT_047d7440 = uVar8;
  piVar9 = (int *)FUN_00e9d320(uVar8,uVar11 & 0xffff,uVar10);
  uVar2 = *(ushort *)((long)piVar9 + (ulong)*(ushort *)((long)piVar9 + (4 - (long)*piVar9)) + 10);
  uVar14 = local_a8 & 0xffff;
  uVar10 = FUN_00a65480(&local_a8,*(undefined4 *)*param_4);
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d7430), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d7448,PTR_DAT_047d7438,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7430);
  }
  uVar8 = *(undefined8 *)puVar5;
  *(undefined8 *)puVar6 = uVar8;
  piVar9 = (int *)FUN_00e9d320(uVar8,uVar14,uVar10 >> 0x20);
  uVar3 = *(ushort *)((long)piVar9 + (ulong)*(ushort *)((long)piVar9 + (4 - (long)*piVar9)) + 10);
  if (uVar3 <= uVar2) {
    if (uVar2 != uVar3) {
LAB_00a5a1e0:
      local_c0 = *param_3;
      local_b8 = param_3[1];
      uVar11 = (uint)local_c0;
      uStack_b0 = param_3[2];
      local_d8 = *param_2;
      uStack_d0 = param_2[1];
      local_c8 = param_2[2];
      auVar15 = FUN_00a65480(&local_c0,*(undefined4 *)*param_4);
      uVar10 = auVar15._0_8_ >> 0x20;
      if (((*puVar4 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_047d7430,auVar15._8_8_,uVar10), iVar7 != 0)) {
        FUN_00100190(PTR_LAB_047d7448,PTR_DAT_047d7438,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d7430);
      }
      uVar8 = *(undefined8 *)puVar5;
      *(undefined8 *)puVar6 = uVar8;
      piVar9 = (int *)FUN_00e9d320(uVar8,uVar11 & 0xffff,uVar10);
      uVar2 = *(ushort *)
               ((long)piVar9 + (ulong)*(ushort *)((long)piVar9 + (4 - (long)*piVar9)) + 10);
      uVar14 = local_d8 & 0xffff;
      uVar10 = FUN_00a65480(&local_d8,*(undefined4 *)*param_4);
      if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d7430), iVar7 != 0)) {
        FUN_00100190(PTR_LAB_047d7448,PTR_DAT_047d7438,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d7430);
      }
      uVar8 = *(undefined8 *)puVar5;
      *(undefined8 *)puVar6 = uVar8;
      piVar9 = (int *)FUN_00e9d320(uVar8,uVar14,uVar10 >> 0x20);
      uVar3 = *(ushort *)
               ((long)piVar9 + (ulong)*(ushort *)((long)piVar9 + (4 - (long)*piVar9)) + 10);
      if (uVar3 <= uVar2) {
        if (uVar2 != uVar3) {
          return 0;
        }
        if ((ushort)local_d8 <= (ushort)local_c0) {
          return 0;
        }
      }
      local_78 = *param_2;
      local_70 = param_2[1];
      uStack_68 = param_2[2];
      uVar10 = param_3[2];
      uVar14 = *param_3;
      param_2[1] = param_3[1];
      param_2[2] = uVar10;
      *param_2 = uVar14;
      param_3[1] = local_70;
      param_3[2] = uStack_68;
      *param_3 = local_78;
      local_f0 = *param_2;
      local_e8 = param_2[1];
      uStack_e0 = param_2[2];
      local_108 = *param_1;
      uStack_100 = param_1[1];
      local_f8 = param_1[2];
      uVar14 = local_f0 & 0xffff;
      uVar10 = FUN_00a65480(&local_f0,*(undefined4 *)*param_4);
      if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d7430), iVar7 != 0)) {
        FUN_00100190(PTR_LAB_047d7448,PTR_DAT_047d7438,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d7430);
      }
      uVar8 = *(undefined8 *)puVar5;
      *(undefined8 *)puVar6 = uVar8;
      piVar9 = (int *)FUN_00e9d320(uVar8,uVar14,uVar10 >> 0x20);
      uVar2 = *(ushort *)
               ((long)piVar9 + (ulong)*(ushort *)((long)piVar9 + (4 - (long)*piVar9)) + 10);
      uVar14 = local_108 & 0xffff;
      uVar10 = FUN_00a65480(&local_108,*(undefined4 *)*param_4);
      if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d7430), iVar7 != 0)) {
        FUN_00100190(PTR_LAB_047d7448,PTR_DAT_047d7438,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d7430);
      }
      uVar8 = *(undefined8 *)puVar5;
      *(undefined8 *)puVar6 = uVar8;
      piVar9 = (int *)FUN_00e9d320(uVar8,uVar14,uVar10 >> 0x20);
      uVar3 = *(ushort *)
               ((long)piVar9 + (ulong)*(ushort *)((long)piVar9 + (4 - (long)*piVar9)) + 10);
      if (uVar3 <= uVar2) {
        if (uVar2 != uVar3) {
          return 1;
        }
        if ((ushort)local_108 <= (ushort)local_f0) {
          return 1;
        }
      }
      uVar10 = *param_1;
      uVar14 = param_1[1];
      uVar13 = param_1[2];
      uVar1 = param_2[2];
      uVar12 = *param_2;
      param_1[1] = param_2[1];
      param_1[2] = uVar1;
      *param_1 = uVar12;
      param_2[1] = uVar14;
      param_2[2] = uVar13;
      *param_2 = uVar10;
      return 2;
    }
    if ((ushort)local_a8 <= (ushort)local_90) goto LAB_00a5a1e0;
  }
  local_120 = *param_3;
  local_118 = param_3[1];
  uVar11 = (uint)local_120;
  uStack_110 = param_3[2];
  local_138 = *param_2;
  uStack_130 = param_2[1];
  local_128 = param_2[2];
  auVar15 = FUN_00a65480(&local_120,*(undefined4 *)*param_4);
  uVar10 = auVar15._0_8_ >> 0x20;
  if (((*puVar4 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_047d7430,auVar15._8_8_,uVar10), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d7448,PTR_DAT_047d7438,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7430);
  }
  uVar8 = *(undefined8 *)puVar5;
  *(undefined8 *)puVar6 = uVar8;
  piVar9 = (int *)FUN_00e9d320(uVar8,uVar11 & 0xffff,uVar10);
  uVar2 = *(ushort *)((long)piVar9 + (ulong)*(ushort *)((long)piVar9 + (4 - (long)*piVar9)) + 10);
  uVar14 = local_138 & 0xffff;
  uVar10 = FUN_00a65480(&local_138,*(undefined4 *)*param_4);
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d7430), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d7448,PTR_DAT_047d7438,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7430);
  }
  uVar8 = *(undefined8 *)puVar5;
  *(undefined8 *)puVar6 = uVar8;
  piVar9 = (int *)FUN_00e9d320(uVar8,uVar14,uVar10 >> 0x20);
  uVar3 = *(ushort *)((long)piVar9 + (ulong)*(ushort *)((long)piVar9 + (4 - (long)*piVar9)) + 10);
  if (uVar2 < uVar3) {
LAB_00a5a194:
    uVar10 = *param_1;
    uVar14 = param_1[1];
    uVar13 = param_1[2];
    uVar1 = param_3[2];
    uVar12 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = uVar1;
    *param_1 = uVar12;
    param_3[1] = uVar14;
    param_3[2] = uVar13;
    *param_3 = uVar10;
    return 1;
  }
  if (uVar2 == uVar3) {
    if ((ushort)local_120 < (ushort)local_138) goto LAB_00a5a194;
  }
  local_78 = *param_1;
  local_70 = param_1[1];
  uStack_68 = param_1[2];
  uVar10 = param_2[2];
  uVar14 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = uVar10;
  *param_1 = uVar14;
  param_2[1] = local_70;
  param_2[2] = uStack_68;
  *param_2 = local_78;
  local_150 = *param_3;
  local_148 = param_3[1];
  uStack_140 = param_3[2];
  local_168 = *param_2;
  uStack_160 = param_2[1];
  local_158 = param_2[2];
  uVar14 = local_150 & 0xffff;
  uVar10 = FUN_00a65480(&local_150,*(undefined4 *)*param_4);
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d7430), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d7448,PTR_DAT_047d7438,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7430);
  }
  uVar8 = *(undefined8 *)puVar5;
  *(undefined8 *)puVar6 = uVar8;
  piVar9 = (int *)FUN_00e9d320(uVar8,uVar14,uVar10 >> 0x20);
  uVar2 = *(ushort *)((long)piVar9 + (ulong)*(ushort *)((long)piVar9 + (4 - (long)*piVar9)) + 10);
  uVar14 = local_168 & 0xffff;
  uVar10 = FUN_00a65480(&local_168,*(undefined4 *)*param_4);
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d7430), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d7448,PTR_DAT_047d7438,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7430);
  }
  uVar8 = *(undefined8 *)puVar5;
  *(undefined8 *)puVar6 = uVar8;
  piVar9 = (int *)FUN_00e9d320(uVar8,uVar14,uVar10 >> 0x20);
  uVar3 = *(ushort *)((long)piVar9 + (ulong)*(ushort *)((long)piVar9 + (4 - (long)*piVar9)) + 10);
  if (uVar3 <= uVar2) {
    if (uVar2 != uVar3) {
      return 1;
    }
    if ((ushort)local_168 <= (ushort)local_150) {
      return 1;
    }
  }
  uVar10 = *param_2;
  uVar14 = param_2[1];
  uVar13 = param_2[2];
  uVar1 = param_3[2];
  uVar12 = *param_3;
  param_2[1] = param_3[1];
  param_2[2] = uVar1;
  *param_2 = uVar12;
  param_3[1] = uVar14;
  param_3[2] = uVar13;
  *param_3 = uVar10;
  return 2;
}


