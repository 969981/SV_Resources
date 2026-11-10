/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f52974; name: FUN_01f52974
 */


void FUN_01f52974(undefined8 param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 local_440 [128];
  long *local_28;
  
  if (*param_3 == 0) {
    if (((*PTR_DAT_047d8c28 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar3 != 0)) {
      local_440[0] = FUN_00d44228();
      puVar1 = PTR_DAT_047d8c30;
      FUN_00d1e764(PTR_DAT_047d8c30,local_440);
      FUN_00100190(PTR_LAB_047d9240,puVar1,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c28);
    }
    plVar5 = (long *)PTR_DAT_047d8c30;
  }
  else {
    uVar4 = FUN_0196c644();
    uVar2 = FUN_0196c63c(*param_3);
    FUN_01e74ef0(local_440,0x400,uVar4,uVar2);
    if ((char)local_440[0] == '\0') {
      local_28 = (long *)FUN_00d44228();
      if (local_28 != (long *)0x0) {
        (**(code **)(*local_28 + 0x18))(local_28);
      }
    }
    else {
      if (((*PTR_DAT_047d4240 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar3 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar4 = *(undefined8 *)PTR_DAT_047d4248;
      *(undefined8 *)PTR_DAT_047d4250 = uVar4;
      FUN_00cf9884(&local_28,uVar4,local_440);
    }
    plVar5 = *(long **)(param_2 + 0x1b8);
    *(undefined8 *)(param_2 + 0x1b8) = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))();
    }
    *(long *)(param_2 + 0x1b8) = (long)local_28;
    plVar5 = (long *)(param_2 + 0x1b8);
  }
  FUN_0135d26c(param_1,plVar5);
  return;
}


