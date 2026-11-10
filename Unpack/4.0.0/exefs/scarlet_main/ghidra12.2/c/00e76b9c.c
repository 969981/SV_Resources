/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e76b9c; name: FUN_00e76b9c
 */


void FUN_00e76b9c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  long *local_28;
  
  *param_1 = &PTR_FUN_045a5110;
  pcVar10 = *(char **)(param_2 + 8);
  if (*pcVar10 == '\0') {
    plVar7 = (long *)FUN_00d44228();
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar5 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar5;
    FUN_00cf9884(&local_28,uVar5,pcVar10);
    plVar7 = local_28;
  }
  plVar6 = (long *)PTR_DAT_047d8b70;
  if (plVar7 != (long *)0x0) {
    plVar6 = plVar7 + 6;
  }
  plVar1 = (long *)PTR_PTR_047d4508;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 7;
  }
  lVar8 = *plVar1;
  if (plVar7 == (long *)0x0) {
    lVar9 = 0;
  }
  else {
    lVar9 = plVar7[8];
  }
  param_1[1] = *plVar6;
  param_1[2] = lVar8;
  param_1[3] = lVar9;
  param_1[4] = 0;
  if (plVar7 == (long *)0x0) {
    param_1[4] = 0;
  }
  else {
    (**(code **)(*plVar7 + 0x18))(plVar7);
    plVar6 = (long *)param_1[4];
    param_1[4] = plVar7;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))();
    }
    (**(code **)(*plVar7 + 0x20))(plVar7);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  puVar3 = PTR_DAT_047dd618;
  param_1[6] = PTR_DAT_047dd618;
  param_1[7] = puVar3;
  param_1[0xe] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  puVar2 = &LAB_02b6181c;
  if (puVar3[0x10] != '\0') {
    puVar2 = &LAB_02b61328;
  }
  if (puVar3[0x14] != '\0') {
    puVar2 = &LAB_02b610f4;
  }
  param_1[9] = puVar2;
  return;
}


