/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d1e764; name: FUN_00d1e764
 */


void FUN_00d1e764(long *param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  char *pcVar5;
  long local_28;
  
  *param_1 = 0;
  if (((*param_2 == 0) || (pcVar5 = *(char **)(*param_2 + 0x38), pcVar5 == (char *)0x0)) ||
     (*pcVar5 == '\0')) {
    plVar2 = (long *)FUN_00d44228();
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
    plVar3 = (long *)*param_1;
    *param_1 = (long)plVar2;
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d1e7e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x20))();
      return;
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar1 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar4 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar4;
    FUN_00cf9884(&local_28,uVar4,pcVar5);
    plVar2 = (long *)*param_1;
    *param_1 = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))();
    }
    *param_1 = local_28;
  }
  return;
}


