/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01156cec; name: FUN_01156cec
 */


void FUN_01156cec(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  char *pcVar4;
  long *local_28;
  
  pcVar4 = *(char **)(param_2 + 8);
  if (*pcVar4 == '\0') {
    local_28 = (long *)FUN_00d44228();
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x18))(local_28);
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
    FUN_00cf9884(&local_28,uVar2,pcVar4);
  }
  plVar3 = *(long **)(param_1 + 0x178);
  *(undefined8 *)(param_1 + 0x178) = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  *(long **)(param_1 + 0x178) = local_28;
  return;
}


