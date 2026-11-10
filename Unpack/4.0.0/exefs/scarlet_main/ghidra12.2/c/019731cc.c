/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019731cc; name: FUN_019731cc
 */


void FUN_019731cc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  int *piVar7;
  uint *puVar8;
  byte bVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long *local_90;
  char local_88 [8];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_48;
  
  puVar1 = PTR_DAT_047d3e28;
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  puVar2 = PTR_DAT_047d3e30;
  local_60 = *(undefined8 *)PTR_DAT_047d3e30;
  uStack_58 = *(undefined8 *)(PTR_DAT_047d3e30 + 8);
  local_50 = *(undefined8 *)(PTR_DAT_047d3e30 + 0x10);
  plVar11 = *(long **)(PTR_DAT_047d3e30 + 0x18);
  local_48 = plVar11;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  FUN_01340a44(local_88,param_1,1);
  plVar3 = local_68;
  if (local_88[0] != '\0') {
    local_60 = local_80;
    uStack_58 = uStack_78;
    local_50 = local_70;
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x18))(local_68);
      plVar11 = local_48;
    }
    local_48 = plVar3;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x20))(plVar11);
    }
    if (local_88[0] != '\0') {
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      local_88[0] = '\0';
    }
  }
  if (((*puVar1 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar5 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_a8 = *(undefined8 *)puVar2;
  uStack_a0 = *(undefined8 *)(puVar2 + 8);
  local_98 = *(undefined8 *)(puVar2 + 0x10);
  local_90 = *(long **)(puVar2 + 0x18);
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x18))();
  }
  FUN_01340a44(local_88,param_1,0x100000001);
  plVar11 = local_68;
  if (local_88[0] != '\0') {
    local_a8 = local_80;
    uStack_a0 = uStack_78;
    local_98 = local_70;
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x18))(local_68);
    }
    plVar3 = local_90;
    local_90 = plVar11;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x20))();
    }
    if (local_88[0] != '\0') {
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      local_88[0] = '\0';
    }
  }
  piVar7 = (int *)*param_1;
  if (((*(ushort *)((long)piVar7 - (long)*piVar7) < 0x17) ||
      (uVar10 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[0xb], uVar10 == 0)) ||
     (puVar8 = (uint *)((long)piVar7 + uVar10), puVar8 = (uint *)((long)puVar8 + (ulong)*puVar8),
     *puVar8 < 3)) {
    bVar9 = 0;
    bVar4 = false;
  }
  else {
    puVar8 = puVar8 + 3;
    piVar7 = (int *)((long)puVar8 + (ulong)*puVar8);
    puVar8 = (uint *)((long)piVar7 + (ulong)*(ushort *)((long)piVar7 + (8 - (long)*piVar7)));
    piVar7 = (int *)((long)puVar8 + (ulong)*puVar8);
    if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 5) ||
       (uVar10 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[2], uVar10 == 0)) {
      bVar4 = false;
    }
    else {
      bVar4 = *(char *)((long)piVar7 + uVar10) != '\0';
    }
    bVar9 = 1;
  }
  if (((*PTR_DAT_047d3be0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3be0), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d89f0,PTR_DAT_047d3be8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3be0);
  }
  uVar6 = *(undefined8 *)PTR_DAT_047d3be8;
  *(undefined8 *)PTR_DAT_047dcd80 = uVar6;
  FUN_01973524(uVar6,param_1,&local_60,&local_a8,bVar9 & bVar4);
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return;
}


