/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ea0a7c; name: FUN_00ea0a7c
 */


void FUN_00ea0a7c(long *param_1,long *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long local_28;
  
  *param_1 = 0;
  pcVar1 = (char *)(*param_2 + 4);
  if ((*param_2 == 0) || (*pcVar1 == '\0')) {
    plVar4 = (long *)FUN_00d44228();
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    plVar5 = (long *)*param_1;
    *param_1 = (long)plVar4;
    if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ea0b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x20))();
      return;
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
    FUN_00cf9884(&local_28,uVar3,pcVar1);
    plVar4 = (long *)*param_1;
    *param_1 = 0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))();
    }
    *param_1 = local_28;
  }
  return;
}


