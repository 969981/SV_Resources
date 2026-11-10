/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01599178; name: FUN_01599178
 */


void FUN_01599178(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  int iVar3;
  long *plVar4;
  char *pcVar5;
  undefined8 uVar6;
  long *local_50 [3];
  long *local_38;
  long *local_18;
  
  plVar4 = (long *)FUN_00f618d8(param_2);
  puVar1 = (undefined8 *)PTR_PTR_047d4508;
  if (*plVar4 != 0) {
    puVar1 = (undefined8 *)(*plVar4 + 0x38);
  }
  pcVar5 = strrchr((char *)*puVar1,0x2f);
  pcVar2 = (char *)0x0;
  if (pcVar5 != (char *)0x0) {
    pcVar2 = pcVar5 + 1;
  }
  local_18 = (long *)0x0;
  if (*pcVar2 == '\0') {
    plVar4 = (long *)FUN_00d44228();
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    local_18 = plVar4;
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar6 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar6;
    FUN_00cf9884(local_50,uVar6,pcVar2);
    plVar4 = local_18;
    local_18 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))();
    }
    local_18 = local_50[0];
  }
  FUN_0125a1ac(local_50,&local_18,0);
  FUN_00da41b8(param_1,param_2,local_50,0);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  return;
}


