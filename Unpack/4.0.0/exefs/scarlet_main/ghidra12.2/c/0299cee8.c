/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0299cee8; name: FUN_0299cee8
 */


void FUN_0299cee8(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  char *pcVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined4 *puVar12;
  undefined8 local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [96];
  long local_70;
  char *pcStack_68;
  long local_60;
  long *local_58;
  
  puVar5 = PTR_DAT_047d8b70;
  puVar4 = PTR_PTR_047d4508;
  puVar2 = *(undefined8 **)(param_1 + 0x68);
  pcVar7 = pcStack_68;
  for (puVar1 = *(undefined8 **)(param_1 + 0x60); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    plVar10 = (long *)*puVar1;
    plVar11 = (long *)puVar4;
    plVar9 = (long *)puVar5;
    if (plVar10 != (long *)0x0) {
      plVar11 = plVar10 + 7;
      plVar9 = plVar10 + 6;
    }
    local_70 = *plVar9;
    pcStack_68 = (char *)*plVar11;
    if (plVar10 == (long *)0x0) {
      local_60 = 0;
    }
    else {
      local_60 = plVar10[8];
      local_58 = (long *)0x0;
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
    local_58 = plVar10;
    memset(&local_f0,0,0x80);
    FUN_022335a0(param_1,&local_70,0,&local_f0,0);
    pcVar6 = local_e8;
    if (local_e8 != (code *)0x0) {
      local_e0 = 0;
      uStack_d8 = 0;
      local_f0 = 0;
      local_e8 = (code *)0x0;
      (*pcVar6)(auStack_d0);
    }
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    pcVar7 = pcStack_68;
  }
  plVar11 = *(long **)(param_1 + 0x108);
  if ((plVar11 != (long *)0x0) && (pcStack_68 = (char *)plVar11[7], *pcStack_68 != '\0')) {
    local_70 = plVar11[6];
    local_60 = plVar11[8];
    (**(code **)(*plVar11 + 0x18))(plVar11);
    local_58 = plVar11;
    memset(&local_f0,0,0x80);
    FUN_022335a0(param_1,&local_70,0,&local_f0,0);
    pcVar6 = local_e8;
    if (local_e8 != (code *)0x0) {
      local_e0 = 0;
      uStack_d8 = 0;
      local_f0 = 0;
      local_e8 = (code *)0x0;
      (*pcVar6)(auStack_d0);
    }
    pcVar7 = pcStack_68;
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
      pcVar7 = pcStack_68;
    }
  }
  pcStack_68 = pcVar7;
  puVar3 = *(undefined4 **)(param_1 + 0xd8);
  for (puVar12 = *(undefined4 **)(param_1 + 0xd0); puVar12 != puVar3; puVar12 = puVar12 + 1) {
    FUN_0299d634(*(undefined8 *)(param_1 + 0x200),*puVar12);
  }
  plVar11 = *(long **)(param_1 + 0x60);
  plVar9 = *(long **)(param_1 + 0x68);
  while (plVar9 != plVar11) {
    plVar9 = plVar9 + -1;
    if ((long *)*plVar9 != (long *)0x0) {
      (**(code **)(*(long *)*plVar9 + 0x20))();
    }
  }
  *(long **)(param_1 + 0x68) = plVar11;
  plVar11 = *(long **)(param_1 + 0x98);
  plVar9 = *(long **)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0xd0);
  while (plVar9 != plVar11) {
    plVar9 = plVar9 + -1;
    if ((long *)*plVar9 != (long *)0x0) {
      (**(code **)(*(long *)*plVar9 + 0x20))();
    }
  }
  *(long **)(param_1 + 0xa0) = plVar11;
  puVar4 = PTR_DAT_047d8c28;
  if (((*PTR_DAT_047d8c28 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar8 != 0))
  {
    local_f0 = FUN_00d44228();
    puVar5 = PTR_DAT_047d8c30;
    FUN_00d1e764(PTR_DAT_047d8c30,&local_f0);
    FUN_00100190(PTR_LAB_047d9240,puVar5,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c28);
  }
  puVar5 = PTR_DAT_047d8c30;
  plVar11 = *(long **)PTR_DAT_047d8c30;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  plVar9 = *(long **)(param_1 + 0x108);
  *(long **)(param_1 + 0x108) = plVar11;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))();
  }
  if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar8 != 0)) {
    local_f0 = FUN_00d44228();
    puVar4 = PTR_DAT_047d8c30;
    FUN_00d1e764(PTR_DAT_047d8c30,&local_f0);
    FUN_00100190(PTR_LAB_047d9240,puVar4,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c28);
  }
  plVar11 = *(long **)puVar5;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  plVar9 = *(long **)(param_1 + 0x110);
  *(long **)(param_1 + 0x110) = plVar11;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))();
  }
  return;
}


