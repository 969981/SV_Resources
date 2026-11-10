/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0178c44c; name: FUN_0178c44c
 */


uint FUN_0178c44c(undefined8 param_1,undefined4 param_2)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *local_80;
  long lStack_78;
  long local_70;
  long *local_68;
  long *local_60 [4];
  long *local_40;
  
  FUN_0107255c(local_60);
  plVar7 = (long *)PTR_PTR_047d4508;
  plVar6 = (long *)PTR_PTR_047d4508;
  if (local_60[0] != (long *)0x0) {
    plVar6 = local_60[0] + 7;
  }
  pcVar4 = strrchr((char *)*plVar6,0x2f);
  pcVar1 = (char *)0x0;
  if (pcVar4 != (char *)0x0) {
    pcVar1 = pcVar4 + 1;
  }
  if (*pcVar1 == '\0') {
    plVar6 = (long *)FUN_00d44228();
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
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
    FUN_00cf9884(&local_80,uVar5,pcVar1);
    plVar6 = local_80;
  }
  if (((*PTR_DAT_047d8ac0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d8ac0), iVar3 != 0))
  {
    FUN_00100190(PTR_LAB_047d8ea0,PTR_DAT_047d8ac8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8ac0);
  }
  uVar5 = *(undefined8 *)PTR_DAT_047d8ac8;
  *(undefined8 *)PTR_DAT_047d8ad0 = uVar5;
  local_80 = (long *)PTR_DAT_047d8b70;
  if (plVar6 != (long *)0x0) {
    plVar7 = plVar6 + 7;
    local_80 = plVar6 + 6;
  }
  local_80 = (long *)*local_80;
  lStack_78 = *plVar7;
  if (plVar6 == (long *)0x0) {
    local_70 = 0;
  }
  else {
    local_70 = plVar6[8];
  }
  local_68 = (long *)0x0;
  plVar7 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
    plVar7 = plVar6;
  }
  local_68 = plVar7;
  uVar2 = FUN_0107276c(uVar5,&local_80,param_2);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))(plVar6);
  }
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  if (local_60[0] != (long *)0x0) {
    (**(code **)(*local_60[0] + 0x20))();
  }
  return uVar2 & 1;
}


