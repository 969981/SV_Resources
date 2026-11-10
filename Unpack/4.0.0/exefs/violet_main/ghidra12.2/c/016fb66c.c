/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016fb66c; name: FUN_016fb66c
 */


void FUN_016fb66c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  char *pcVar3;
  int iVar4;
  long *plVar5;
  char *pcVar6;
  undefined8 uVar7;
  long *local_50;
  long lStack_48;
  long local_40;
  long *local_38;
  
  plVar5 = (long *)FUN_00f618d8(param_2);
  plVar2 = (long *)PTR_PTR_047d4508;
  puVar1 = (undefined8 *)PTR_PTR_047d4508;
  if (*plVar5 != 0) {
    puVar1 = (undefined8 *)(*plVar5 + 0x38);
  }
  pcVar6 = strrchr((char *)*puVar1,0x2f);
  pcVar3 = (char *)0x0;
  if (pcVar6 != (char *)0x0) {
    pcVar3 = pcVar6 + 1;
  }
  if (*pcVar3 == '\0') {
    plVar5 = (long *)FUN_00d44228();
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar7 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar7;
    FUN_00cf9884(&local_50,uVar7,pcVar3);
    plVar5 = local_50;
  }
  local_50 = (long *)PTR_DAT_047d8b70;
  if (plVar5 != (long *)0x0) {
    plVar2 = plVar5 + 7;
    local_50 = plVar5 + 6;
  }
  local_50 = (long *)*local_50;
  lStack_48 = *plVar2;
  if (plVar5 == (long *)0x0) {
    local_40 = 0;
  }
  else {
    local_40 = plVar5[8];
  }
  local_38 = (long *)0x0;
  if (plVar5 == (long *)0x0) {
    local_38 = (long *)0x0;
    FUN_00f606a0(param_1,param_2,&local_50,0,0);
  }
  else {
    (**(code **)(*plVar5 + 0x18))(plVar5);
    local_38 = plVar5;
    FUN_00f606a0(param_1,param_2,&local_50,0,0);
    (**(code **)(*plVar5 + 0x20))(plVar5);
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  return;
}


