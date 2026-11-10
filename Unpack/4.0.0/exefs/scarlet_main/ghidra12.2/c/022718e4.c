/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022718e4; name: FUN_022718e4
 */


long FUN_022718e4(long param_1,int *param_2)

{
  uint *puVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long **local_88;
  long *local_80;
  long *local_78;
  long local_70;
  undefined8 ***pppuStack_68;
  long ***local_48;
  
  if (*(ushort *)((long)param_2 - (long)*param_2) < 5) {
    local_70 = 0;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2];
    local_70 = 0;
    if (uVar9 != 0) {
      puVar1 = (uint *)((long)param_2 + uVar9);
      local_70 = (long)puVar1 + (ulong)*puVar1;
    }
  }
  FUN_00ea0a7c(&local_78,&local_70);
  if (*(ushort *)((long)param_2 - (long)*param_2) < 7) {
    local_70 = 0;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[3];
    local_70 = 0;
    if (uVar9 != 0) {
      puVar1 = (uint *)((long)param_2 + uVar9);
      local_70 = (long)puVar1 + (ulong)*puVar1;
    }
  }
  FUN_00ea0a7c(&local_80,&local_70);
  plVar6 = local_78;
  if ((local_80 == (long *)0x0) || (*(char *)local_80[7] == '\0')) {
    plVar8 = local_80;
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x18))(local_78);
      plVar8 = local_80;
    }
    local_80 = plVar6;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x20))();
    }
  }
  local_88 = &local_78;
  lVar7 = param_1 + 0x108;
  local_48 = &local_88;
  pppuStack_68 = &local_48;
  local_70 = lVar7;
  FUN_02271c80(lVar7,&local_70);
  lVar5 = FUN_02271d7c(param_1,*(undefined8 *)(param_1 + 8));
  plVar3 = local_78;
  plVar8 = (long *)PTR_DAT_047d8b70;
  plVar2 = (long *)PTR_PTR_047d4508;
  plVar6 = (long *)PTR_DAT_047d8b70;
  if (local_78 != (long *)0x0) {
    plVar6 = local_78 + 6;
  }
  lVar11 = *plVar6;
  plVar6 = (long *)PTR_PTR_047d4508;
  if (local_78 != (long *)0x0) {
    plVar6 = local_78 + 7;
  }
  lVar12 = *plVar6;
  if (local_78 == (long *)0x0) {
    lVar13 = 0;
  }
  else {
    lVar13 = local_78[8];
    (**(code **)(*local_78 + 0x18))(local_78);
  }
  *(long *)(lVar5 + 0xf0) = lVar11;
  *(long *)(lVar5 + 0xf8) = lVar12;
  *(long *)(lVar5 + 0x100) = lVar13;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  plVar6 = *(long **)(lVar5 + 0x108);
  *(long **)(lVar5 + 0x108) = plVar3;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  local_88 = &local_78;
  local_48 = &local_88;
  pppuStack_68 = &local_48;
  local_70 = lVar7;
  FUN_02271f5c(lVar7,&local_70);
  FUN_02272058(&local_70,lVar5);
  local_48 = (long ***)CONCAT44(local_48._4_4_,8);
  lVar7 = FUN_02272114(param_1,*(undefined8 *)(param_1 + 8),&local_70,&local_80,&local_48);
  FUN_0227232c(&local_70);
  plVar6 = local_78;
  if (local_78 != (long *)0x0) {
    plVar8 = local_78 + 6;
  }
  lVar11 = *plVar8;
  if (local_78 != (long *)0x0) {
    plVar2 = local_78 + 7;
  }
  lVar12 = *plVar2;
  if (local_78 == (long *)0x0) {
    lVar13 = 0;
  }
  else {
    lVar13 = local_78[8];
    (**(code **)(*local_78 + 0x18))(local_78);
  }
  *(long *)(lVar7 + 0xf0) = lVar11;
  *(long *)(lVar7 + 0xf8) = lVar12;
  *(long *)(lVar7 + 0x100) = lVar13;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar8 = *(long **)(lVar7 + 0x108);
  *(long **)(lVar7 + 0x108) = plVar6;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))(plVar6);
  }
  if (((*PTR_DAT_047d88a0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d88a0), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047dbdd0,PTR_DAT_047d88a8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d88a0);
  }
  lVar7 = *(long *)PTR_DAT_047d88a8;
  *(long *)PTR_DAT_047d88b0 = lVar7;
  uVar10 = *(undefined8 *)(lVar7 + 0x50);
  FUN_022723a4(&local_70,lVar5);
  FUN_02272504(uVar10,&local_70);
  FUN_0227175c(&local_70);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  return param_1;
}


