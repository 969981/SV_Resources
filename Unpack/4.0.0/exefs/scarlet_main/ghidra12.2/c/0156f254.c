/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0156f254; name: FUN_0156f254
 */


void FUN_0156f254(long param_1)

{
  char cVar1;
  undefined *puVar2;
  long *plVar3;
  void *pvVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  char *pcVar8;
  long lVar9;
  long *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long *local_60;
  long *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  void *local_38;
  undefined1 *local_30;
  undefined1 *puStack_28;
  
  local_30 = (undefined1 *)0x0;
  puStack_28 = (undefined1 *)0x0;
  local_40 = 0;
  local_38 = (void *)0x0;
  local_50 = 0;
  local_48 = 0;
  local_60 = (long *)0x0;
  local_58 = (long *)0x0;
  pcVar8 = *(char **)(param_1 + 8);
  if (*pcVar8 == '\0') {
    plVar7 = (long *)FUN_00d44228();
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar6 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar6;
    FUN_00cf9884(&local_80,uVar6,pcVar8);
    plVar3 = local_60;
    plVar7 = local_80;
    local_60 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x20))();
    }
  }
  local_60 = plVar7;
  FUN_0156fa68(&local_80,*(undefined8 *)(param_1 + 8));
  plVar7 = local_58;
  local_58 = local_80;
  local_80 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    FUN_028b4e64(&local_50);
  }
  pvVar4 = local_38;
  local_50 = local_78;
  local_48 = uStack_70;
  local_40 = local_68;
  local_38 = (void *)0x0;
  if (pvVar4 != (void *)0x0) {
    operator_delete__(pvVar4);
  }
  local_30 = &LAB_02c7e16c;
  puStack_28 = &LAB_02c7e034;
  if (((*PTR_DAT_047d8b30 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8b30), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047e2420,PTR_DAT_047d8b38,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8b30);
  }
  lVar9 = *(long *)PTR_DAT_047d8b38;
  *(long *)PTR_DAT_047d8b40 = lVar9;
  if (((*PTR_DAT_047d8b48 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8b48), puVar2 = PTR_DAT_047d8b50, iVar5 != 0)) {
    cVar1 = *PTR_DAT_047d8b58;
    *PTR_DAT_047d8b58 = cVar1 + '\x01';
    *puVar2 = cVar1;
    __cxa_guard_release(PTR_DAT_047d8b48);
  }
  local_80 = (long *)CONCAT71(local_80._1_7_,*PTR_DAT_047d8b50);
  FUN_0156f4f0(lVar9 + 0x28,&local_80,&local_60);
  pvVar4 = local_38;
  local_38 = (void *)0x0;
  if (pvVar4 != (void *)0x0) {
    operator_delete__(pvVar4);
  }
  plVar7 = local_58;
  local_58 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    FUN_028b4e64(&local_50);
  }
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  return;
}


