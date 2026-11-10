/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01411dc4; name: FUN_01411dc4
 */


void FUN_01411dc4(undefined8 *param_1,long *param_2)

{
  char *pcVar1;
  undefined2 uVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *local_70 [4];
  long *local_50;
  long *local_28;
  
  FUN_00d1a240(param_1,0x80018080);
  *param_1 = &PTR_FUN_045ac128;
  param_1[4] = &PTR_LAB_045ac278;
  param_1[5] = &DAT_045ac3a0;
  param_1[6] = &PTR_LAB_045ac3f8;
  puVar10 = param_1 + 7;
  *puVar10 = &PTR_LAB_045ac420;
  param_1[0x26] = &DAT_cbf29ce484222645;
  param_1[0x27] = &DAT_03c886bc;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  if ((*(char *)(param_1 + 0xb) != -0x7e) || (*(char *)((long)param_1 + 0x59) != -0x7e)) {
    uVar2 = *(undefined2 *)(param_1 + 0xb);
    *(undefined2 *)(param_1 + 0xb) = 0x8282;
    if (param_1[9] == 0) {
      ppuVar8 = &PTR_LAB_045ac420;
    }
    else {
      FUN_00c6a584(param_1[9],puVar10);
      ppuVar8 = (undefined **)*puVar10;
    }
    (*(code *)ppuVar8[4])(puVar10,uVar2);
  }
  plVar7 = (long *)PTR_PTR_047d4508;
  local_28 = (long *)PTR_PTR_047d4508;
  if (*param_2 != 0) {
    local_28 = (long *)(*param_2 + 0x38);
  }
  local_28 = (long *)*local_28;
  plVar11 = param_1 + 0x24;
  FUN_0110eb84(local_70,&local_28,&DAT_03c886bc,(int)param_2[5]);
  if (local_70[0] != (long *)0x0) {
    plVar7 = local_70[0] + 7;
  }
  pcVar4 = strrchr((char *)*plVar7,0x2f);
  pcVar1 = (char *)0x0;
  if (pcVar4 != (char *)0x0) {
    pcVar1 = pcVar4 + 1;
  }
  if (*pcVar1 == '\0') {
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
    FUN_00cf9884(&local_28,uVar5,pcVar1);
    plVar7 = local_28;
  }
  plVar6 = (long *)*plVar11;
  *plVar11 = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  *plVar11 = (long)plVar7;
  plVar11 = (long *)*param_2;
  plVar7 = param_1 + 0x25;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  plVar6 = (long *)*plVar7;
  *plVar7 = (long)plVar11;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  param_1[0x26] = param_2[1];
  param_1[0x27] = param_2[2];
  param_1[0x28] = param_2[3];
  plVar11 = (long *)param_2[4];
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  plVar6 = (long *)param_1[0x29];
  param_1[0x29] = plVar11;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  *(int *)(param_1 + 0x2a) = (int)param_2[5];
  if (((*PTR_DAT_047d8ac0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d8ac0), iVar3 != 0))
  {
    FUN_00100190(PTR_LAB_047d8ea0,PTR_DAT_047d8ac8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8ac0);
  }
  uVar5 = *(undefined8 *)PTR_DAT_047d8ac8;
  *(undefined8 *)PTR_DAT_047d8ad0 = uVar5;
  if (((*PTR_DAT_047d89f8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d89f8), iVar3 != 0))
  {
    FUN_00100190(PTR_LAB_047d8ed8,PTR_DAT_047d8a00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d89f8);
  }
  lVar9 = *(long *)PTR_DAT_047d8a00;
  *(long *)PTR_DAT_047d8a08 = lVar9;
  FUN_011fbdf0(uVar5,plVar7,*(undefined1 *)(lVar9 + 0x2c));
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_70[0] != (long *)0x0) {
    (**(code **)(*local_70[0] + 0x20))();
  }
  return;
}


