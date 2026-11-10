/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018073a4; name: FUN_018073a4
 */


void FUN_018073a4(int *param_1)

{
  uint *puVar1;
  long *plVar2;
  long *plVar3;
  ushort uVar4;
  long *plVar5;
  undefined *puVar6;
  long *plVar7;
  int iVar8;
  ulong uVar9;
  ushort *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  long local_b0;
  long *local_a8;
  long local_a0;
  char *pcStack_98;
  long local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  long *local_58;
  
  if (*(ushort *)((long)param_1 - (long)*param_1) < 5) {
    local_a0 = 0;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[2];
    local_a0 = 0;
    if (uVar9 != 0) {
      puVar1 = (uint *)((long)param_1 + uVar9);
      local_a0 = (long)puVar1 + (ulong)*puVar1;
    }
  }
  FUN_00ea0a7c(&local_58,&local_a0);
  if (*(ushort *)((long)param_1 - (long)*param_1) < 5) {
    local_a0 = 0;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[2];
    local_a0 = 0;
    if (uVar9 != 0) {
      puVar1 = (uint *)((long)param_1 + uVar9);
      local_a0 = (long)puVar1 + (ulong)*puVar1;
    }
  }
  FUN_00ea0a7c(&local_68,&local_a0);
  puVar10 = (ushort *)((long)param_1 - (long)*param_1);
  uVar14 = 0;
  uVar15 = 0;
  uVar4 = *puVar10;
  if (uVar4 < 7) {
LAB_01807750:
    if (((*PTR_DAT_047d8c28 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar8 != 0)) {
      local_a0 = FUN_00d44228();
      puVar6 = PTR_DAT_047d8c30;
      FUN_00d1e764(PTR_DAT_047d8c30,&local_a0);
      FUN_00100190(PTR_LAB_047d9240,puVar6,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c28);
    }
    local_70 = *(long **)PTR_DAT_047d8c30;
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x18))();
    }
  }
  else {
    if ((ulong)puVar10[3] == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = *(undefined4 *)((long)param_1 + (ulong)puVar10[3]);
    }
    if (uVar4 < 9) goto LAB_01807750;
    if ((ulong)puVar10[4] == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = *(undefined4 *)((long)param_1 + (ulong)puVar10[4]);
    }
    if ((uVar4 < 0xd) || ((ulong)puVar10[6] == 0)) goto LAB_01807750;
    puVar1 = (uint *)((long)param_1 + (ulong)puVar10[6]);
    local_c0 = (undefined1 *)((long)puVar1 + (ulong)*puVar1);
    FUN_00ea0a7c(&local_70,&local_c0);
  }
  puVar10 = (ushort *)((long)param_1 - (long)*param_1);
  uVar4 = *puVar10;
  if (uVar4 < 0xf) {
    uVar18 = 0;
LAB_01807798:
    uVar13 = 0;
  }
  else {
    if ((ulong)puVar10[7] == 0) {
      uVar18 = 0;
    }
    else {
      uVar18 = *(undefined4 *)((long)param_1 + (ulong)puVar10[7]);
    }
    if (uVar4 < 0x11) goto LAB_01807798;
    if ((ulong)puVar10[8] == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = *(undefined4 *)((long)param_1 + (ulong)puVar10[8]);
    }
    if (0x12 < uVar4) {
      local_a0 = 0;
      if ((ulong)puVar10[9] != 0) {
        puVar1 = (uint *)((long)param_1 + (ulong)puVar10[9]);
        local_a0 = (long)puVar1 + (ulong)*puVar1;
      }
      goto LAB_018074f8;
    }
  }
  local_a0 = 0;
LAB_018074f8:
  FUN_00ea0a7c(&local_78,&local_a0);
  puVar10 = (ushort *)((long)param_1 - (long)*param_1);
  if (*puVar10 < 0x15) {
    local_a0 = 0;
    uVar17 = 0;
  }
  else {
    if ((ulong)puVar10[10] == 0) {
      uVar17 = 0;
    }
    else {
      uVar17 = *(undefined4 *)((long)param_1 + (ulong)puVar10[10]);
    }
    if (*puVar10 < 0x17) {
      local_a0 = 0;
    }
    else {
      local_a0 = 0;
      if ((ulong)puVar10[0xb] != 0) {
        puVar1 = (uint *)((long)param_1 + (ulong)puVar10[0xb]);
        local_a0 = (long)puVar1 + (ulong)*puVar1;
      }
    }
  }
  FUN_00ea0a7c(&local_80,&local_a0);
  uVar16 = 0;
  if ((0x18 < *(ushort *)((long)param_1 - (long)*param_1)) &&
     (uVar9 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0xc], uVar9 != 0)) {
    uVar16 = *(undefined4 *)((long)param_1 + uVar9);
  }
  if (((*PTR_DAT_047d88a0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d88a0), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047dbdd0,PTR_DAT_047d88a8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d88a0);
  }
  lVar11 = *(long *)PTR_DAT_047d88a8;
  *(long *)PTR_DAT_047d88b0 = lVar11;
  uVar12 = *(undefined8 *)(lVar11 + 0x50);
  FUN_01807a0c(uVar15,uVar12);
  FUN_018079d8(uVar14,uVar12);
  FUN_018079e0(uVar18,uVar12);
  FUN_018079e8(uVar12,uVar13);
  plVar7 = local_58;
  plVar5 = (long *)PTR_DAT_047d8b70;
  plVar3 = (long *)PTR_PTR_047d4508;
  plVar2 = (long *)PTR_DAT_047d8b70;
  if (local_58 != (long *)0x0) {
    plVar2 = local_58 + 6;
  }
  local_a0 = *plVar2;
  plVar2 = (long *)PTR_PTR_047d4508;
  if (local_58 != (long *)0x0) {
    plVar2 = local_58 + 7;
  }
  pcStack_98 = (char *)*plVar2;
  if (local_58 == (long *)0x0) {
    local_90 = 0;
  }
  else {
    local_90 = local_58[8];
  }
  local_88 = (long *)0x0;
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x18))(local_58);
  }
  plVar2 = local_70;
  local_88 = plVar7;
  if (local_70 != (long *)0x0) {
    plVar3 = local_70 + 7;
    plVar5 = local_70 + 6;
  }
  local_c0 = (undefined1 *)*plVar5;
  puStack_b8 = (undefined1 *)*plVar3;
  if (local_70 == (long *)0x0) {
    local_b0 = 0;
  }
  else {
    local_b0 = local_70[8];
  }
  local_a8 = (long *)0x0;
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x18))(local_70);
  }
  local_a8 = plVar2;
  FUN_01807a20(uVar12,&local_a0,0,&local_c0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  plVar2 = local_78;
  if ((local_78 != (long *)0x0) && (*(char *)local_78[7] != '\0')) {
    local_a0 = local_78[6];
    local_90 = local_78[8];
    pcStack_98 = (char *)local_78[7];
    (**(code **)(*local_78 + 0x18))(local_78);
    local_88 = plVar2;
    local_c0 = &DAT_cbf29ce484222645;
    puStack_b8 = &DAT_03c886bc;
    local_b0 = 0;
    local_a8 = (long *)0x0;
    FUN_01807a20(uVar12,&local_a0,1,&local_c0);
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
  }
  FUN_018079f0(uVar17,uVar12,1);
  plVar2 = local_80;
  if ((local_80 != (long *)0x0) && (*(char *)local_80[7] != '\0')) {
    local_a0 = local_80[6];
    local_90 = local_80[8];
    pcStack_98 = (char *)local_80[7];
    (**(code **)(*local_80 + 0x18))(local_80);
    local_88 = plVar2;
    local_c0 = &DAT_cbf29ce484222645;
    puStack_b8 = &DAT_03c886bc;
    local_b0 = 0;
    local_a8 = (long *)0x0;
    FUN_01807a20(uVar12,&local_a0,2,&local_c0);
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
  }
  FUN_018079f0(uVar16,uVar12,2);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  return;
}


