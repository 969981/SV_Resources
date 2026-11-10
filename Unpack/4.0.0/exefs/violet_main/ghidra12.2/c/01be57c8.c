/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01be57c8; name: FUN_01be57c8
 */


void FUN_01be57c8(undefined8 param_1,char *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long *local_38;
  long *local_18;
  
  local_38 = (long *)0x0;
  uVar1 = 0x28;
  if (DAT_0480ef18 == '\0') {
    uVar1 = 0xffffffffffffffff;
  }
  if (*param_2 == '\0') {
    plVar4 = (long *)FUN_00d44228();
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar2 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar3 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar3;
    FUN_00cf9884(&local_18,uVar3,param_2);
    plVar4 = local_38;
    local_38 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))();
    }
    plVar4 = local_18;
  }
  local_38 = plVar4;
  FUN_01be5c84(param_1,uVar1,&local_38);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
  }
  return;
}


