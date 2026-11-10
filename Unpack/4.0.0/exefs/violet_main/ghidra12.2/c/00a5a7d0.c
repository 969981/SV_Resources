/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a5a7d0; name: FUN_00a5a7d0
 */


int FUN_00a5a7d0(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4,undefined8 *param_5)

{
  ulong uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  int *piVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  ulong local_110;
  ulong uStack_108;
  ulong local_100;
  ulong local_f8;
  ulong local_f0;
  ulong uStack_e8;
  ulong local_e0;
  ulong uStack_d8;
  ulong local_d0;
  ulong local_c8;
  ulong local_c0;
  ulong uStack_b8;
  ulong local_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  ulong local_78;
  ulong uStack_70;
  
  iVar7 = FUN_00a59fe0();
  local_90 = param_4[1];
  uStack_88 = param_4[2];
  local_98 = *param_4;
  uStack_a8 = param_3[1];
  local_a0 = param_3[2];
  local_b0 = *param_3;
  uVar14 = local_98 & 0xffff;
  auVar15 = FUN_00a65480(&local_98,*(undefined4 *)*param_5);
  puVar4 = PTR_DAT_047d7430;
  uVar11 = auVar15._0_8_ >> 0x20;
  if (((*PTR_DAT_047d7430 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(PTR_DAT_047d7430,auVar15._8_8_,uVar11), iVar8 != 0)) {
    FUN_00100190(PTR_LAB_047d7448,PTR_DAT_047d7438,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7430);
  }
  puVar6 = PTR_DAT_047d7440;
  puVar5 = PTR_DAT_047d7438;
  uVar9 = *(undefined8 *)PTR_DAT_047d7438;
  *(undefined8 *)PTR_DAT_047d7440 = uVar9;
  piVar10 = (int *)FUN_00e9d320(uVar9,uVar14,uVar11);
  uVar2 = *(ushort *)((long)piVar10 + (ulong)*(ushort *)((long)piVar10 + (4 - (long)*piVar10)) + 10)
  ;
  uVar14 = local_b0 & 0xffff;
  uVar11 = FUN_00a65480(&local_b0,*(undefined4 *)*param_5);
  if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d7430), iVar8 != 0)) {
    FUN_00100190(PTR_LAB_047d7448,PTR_DAT_047d7438,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7430);
  }
  uVar9 = *(undefined8 *)puVar5;
  *(undefined8 *)puVar6 = uVar9;
  piVar10 = (int *)FUN_00e9d320(uVar9,uVar14,uVar11 >> 0x20);
  uVar3 = *(ushort *)((long)piVar10 + (ulong)*(ushort *)((long)piVar10 + (4 - (long)*piVar10)) + 10)
  ;
  if (uVar3 <= uVar2) {
    if (uVar2 != uVar3) {
      return iVar7;
    }
    if ((ushort)local_b0 <= (ushort)local_98) {
      return iVar7;
    }
  }
  local_80 = *param_3;
  local_78 = param_3[1];
  uStack_70 = param_3[2];
  uVar11 = param_4[2];
  uVar14 = *param_4;
  param_3[1] = param_4[1];
  param_3[2] = uVar11;
  *param_3 = uVar14;
  param_4[1] = local_78;
  param_4[2] = uStack_70;
  *param_4 = local_80;
  local_c8 = *param_3;
  local_c0 = param_3[1];
  uStack_b8 = param_3[2];
  local_e0 = *param_2;
  uStack_d8 = param_2[1];
  local_d0 = param_2[2];
  uVar14 = local_c8 & 0xffff;
  uVar11 = FUN_00a65480(&local_c8,*(undefined4 *)*param_5);
  if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d7430), iVar8 != 0)) {
    FUN_00100190(PTR_LAB_047d7448,PTR_DAT_047d7438,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7430);
  }
  uVar9 = *(undefined8 *)puVar5;
  *(undefined8 *)puVar6 = uVar9;
  piVar10 = (int *)FUN_00e9d320(uVar9,uVar14,uVar11 >> 0x20);
  uVar2 = *(ushort *)((long)piVar10 + (ulong)*(ushort *)((long)piVar10 + (4 - (long)*piVar10)) + 10)
  ;
  uVar14 = local_e0 & 0xffff;
  uVar11 = FUN_00a65480(&local_e0,*(undefined4 *)*param_5);
  if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d7430), iVar8 != 0)) {
    FUN_00100190(PTR_LAB_047d7448,PTR_DAT_047d7438,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7430);
  }
  uVar9 = *(undefined8 *)puVar5;
  *(undefined8 *)puVar6 = uVar9;
  piVar10 = (int *)FUN_00e9d320(uVar9,uVar14,uVar11 >> 0x20);
  uVar3 = *(ushort *)((long)piVar10 + (ulong)*(ushort *)((long)piVar10 + (4 - (long)*piVar10)) + 10)
  ;
  if (uVar3 <= uVar2) {
    if (uVar2 != uVar3) {
      return iVar7 + 1;
    }
    if ((ushort)local_e0 <= (ushort)local_c8) {
      return iVar7 + 1;
    }
  }
  local_80 = *param_2;
  local_78 = param_2[1];
  uStack_70 = param_2[2];
  uVar11 = param_3[2];
  uVar14 = *param_3;
  param_2[1] = param_3[1];
  param_2[2] = uVar11;
  *param_2 = uVar14;
  param_3[1] = local_78;
  param_3[2] = uStack_70;
  *param_3 = local_80;
  local_f8 = *param_2;
  local_f0 = param_2[1];
  uStack_e8 = param_2[2];
  local_110 = *param_1;
  uStack_108 = param_1[1];
  local_100 = param_1[2];
  uVar14 = local_f8 & 0xffff;
  uVar11 = FUN_00a65480(&local_f8,*(undefined4 *)*param_5);
  if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d7430), iVar8 != 0)) {
    FUN_00100190(PTR_LAB_047d7448,PTR_DAT_047d7438,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7430);
  }
  uVar9 = *(undefined8 *)puVar5;
  *(undefined8 *)puVar6 = uVar9;
  piVar10 = (int *)FUN_00e9d320(uVar9,uVar14,uVar11 >> 0x20);
  uVar2 = *(ushort *)((long)piVar10 + (ulong)*(ushort *)((long)piVar10 + (4 - (long)*piVar10)) + 10)
  ;
  uVar14 = local_110 & 0xffff;
  uVar11 = FUN_00a65480(&local_110,*(undefined4 *)*param_5);
  if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d7430), iVar8 != 0)) {
    FUN_00100190(PTR_LAB_047d7448,PTR_DAT_047d7438,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7430);
  }
  uVar9 = *(undefined8 *)puVar5;
  *(undefined8 *)puVar6 = uVar9;
  piVar10 = (int *)FUN_00e9d320(uVar9,uVar14,uVar11 >> 0x20);
  uVar3 = *(ushort *)((long)piVar10 + (ulong)*(ushort *)((long)piVar10 + (4 - (long)*piVar10)) + 10)
  ;
  if (uVar3 <= uVar2) {
    if (uVar2 != uVar3) {
      return iVar7 + 2;
    }
    if ((ushort)local_110 <= (ushort)local_f8) {
      return iVar7 + 2;
    }
  }
  uVar11 = *param_1;
  uVar14 = param_1[1];
  uVar13 = param_1[2];
  uVar1 = param_2[2];
  uVar12 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = uVar1;
  *param_1 = uVar12;
  param_2[1] = uVar14;
  param_2[2] = uVar13;
  *param_2 = uVar11;
  return iVar7 + 3;
}


