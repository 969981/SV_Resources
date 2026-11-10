/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01527838; name: FUN_01527838
 */


void FUN_01527838(long *param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  char *pcVar9;
  long *local_18;
  
  param_1[2] = 0;
  puVar2 = PTR_DAT_047d66f8;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  puVar2 = PTR_DAT_047d8c78;
  if (lVar4 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    if (*(long *)(lVar4 + 0x80) != 0) {
      lVar8 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar8;
  param_1[4] = (long)(puVar2 + 0x88);
  plVar7 = param_1 + 5;
  *plVar7 = (long)(puVar2 + 0xd8);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar7);
  puVar2 = PTR_DAT_047dd6b0;
  *param_1 = (long)(PTR_DAT_047dd6b0 + 0x10);
  param_1[4] = (long)(puVar2 + 0xa0);
  *plVar7 = (long)(puVar2 + 0xf0);
  pcVar9 = *(char **)(param_2 + 8);
  if (*pcVar9 == '\0') {
    plVar7 = (long *)FUN_00d44228();
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar5 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar5;
    FUN_00cf9884(&local_18,uVar5,pcVar9);
    plVar7 = local_18;
  }
  plVar6 = (long *)PTR_DAT_047d8b70;
  if (plVar7 != (long *)0x0) {
    plVar6 = plVar7 + 6;
  }
  plVar1 = (long *)PTR_PTR_047d4508;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 7;
  }
  lVar4 = *plVar1;
  if (plVar7 == (long *)0x0) {
    lVar8 = 0;
  }
  else {
    lVar8 = plVar7[8];
  }
  param_1[8] = *plVar6;
  param_1[9] = lVar4;
  param_1[10] = lVar8;
  param_1[0xb] = 0;
  if (plVar7 == (long *)0x0) {
    param_1[0xb] = 0;
  }
  else {
    (**(code **)(*plVar7 + 0x18))(plVar7);
    plVar6 = (long *)param_1[0xb];
    param_1[0xb] = (long)plVar7;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))();
    }
    (**(code **)(*plVar7 + 0x20))(plVar7);
  }
  param_1[0xc] = 0;
  *(undefined4 *)((long)param_1 + 0x74) = 1;
  nn::os::InitializeLightEvent(param_1 + 0xd,0,1);
  return;
}


