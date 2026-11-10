/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01316dd4; name: FUN_01316dd4
 */


void FUN_01316dd4(long param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  code *pcVar5;
  long *plVar6;
  char *pcVar7;
  long *local_50;
  long lStack_48;
  long local_40;
  long *local_38;
  
  pcVar7 = *(char **)(param_2 + 8);
  if (*pcVar7 == '\0') {
    plVar4 = (long *)FUN_00d44228();
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar1 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar2 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar2;
    FUN_00cf9884(&local_50,uVar2,pcVar7);
    plVar4 = local_50;
  }
  local_50 = (long *)PTR_DAT_047d8b70;
  if (plVar4 != (long *)0x0) {
    local_50 = plVar4 + 6;
  }
  local_50 = (long *)*local_50;
  plVar6 = (long *)PTR_PTR_047d4508;
  if (plVar4 != (long *)0x0) {
    plVar6 = plVar4 + 7;
  }
  lStack_48 = *plVar6;
  if (plVar4 == (long *)0x0) {
    local_40 = 0;
  }
  else {
    local_40 = plVar4[8];
  }
  local_38 = (long *)0x0;
  plVar6 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
    plVar6 = plVar4;
  }
  local_38 = plVar6;
  puVar3 = (undefined8 *)FUN_01316f9c(param_1 + 0x128,&local_50);
  pcVar5 = (code *)puVar3[1];
  if (pcVar5 != (code *)0x0) {
    puVar3[2] = 0;
    puVar3[3] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    (*pcVar5)(puVar3 + 4);
  }
  if ((code *)param_3[2] != (code *)0x0) {
    (*(code *)param_3[2])(param_3 + 4,puVar3 + 4);
    uVar2 = param_3[3];
    puVar3[1] = param_3[1];
    puVar3[3] = uVar2;
    uVar2 = *param_3;
    puVar3[2] = param_3[2];
    *puVar3 = uVar2;
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
  }
  return;
}


