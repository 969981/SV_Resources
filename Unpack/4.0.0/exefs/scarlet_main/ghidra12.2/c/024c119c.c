/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024c119c; name: FUN_024c119c
 */


undefined4 FUN_024c119c(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  char *pcVar5;
  long *local_38;
  long *local_18;
  
  pcVar5 = *(char **)(param_2 + 8);
  local_38 = (long *)0x0;
  if (*pcVar5 == '\0') {
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
    FUN_00cf9884(&local_18,uVar2,pcVar5);
    plVar4 = local_38;
    local_38 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))();
    }
    plVar4 = local_18;
  }
  local_38 = plVar4;
  lVar3 = FUN_00e8b690(param_1 + 0x110,&local_38);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
  }
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(lVar3 + 0x18);
  }
  return *(undefined4 *)(*(long *)(param_1 + 0x60) + lVar3 * 0x18 + 0x10);
}


