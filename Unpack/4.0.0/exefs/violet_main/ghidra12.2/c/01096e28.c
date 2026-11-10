/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01096e28; name: FUN_01096e28
 */


void FUN_01096e28(long *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  char *pcVar4;
  long *plVar5;
  long local_8;
  
  *param_1 = 0;
  pcVar4 = *(char **)(param_2 + 8);
  if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) {
    plVar3 = (long *)FUN_00d44228();
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x18))();
    }
    plVar5 = (long *)*param_1;
    *param_1 = (long)plVar3;
    if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01096ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x20))(plVar5);
      return;
    }
  }
  else {
    if ((*PTR_DAT_047d4240 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d4240);
      if (iVar1 != 0) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
    }
    uVar2 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar2;
    FUN_00cf9884(&local_8,uVar2,pcVar4);
    plVar3 = (long *)*param_1;
    *param_1 = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x20))();
    }
    *param_1 = local_8;
  }
  return;
}


