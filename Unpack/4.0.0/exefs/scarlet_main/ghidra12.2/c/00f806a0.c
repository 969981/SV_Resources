/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f806a0; name: FUN_00f806a0
 */


void FUN_00f806a0(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  
  if (**(char **)(param_1 + 0x1a0) != '\0') {
    if (((*PTR_DAT_047d4df8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar1 != 0)) {
      FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4df8);
    }
    uVar2 = *(undefined8 *)PTR_DAT_047d4e00;
    *(undefined8 *)PTR_DAT_047d4e08 = uVar2;
    FUN_0143e9a0(uVar2,*(undefined8 *)(param_1 + 0x198),param_1);
  }
  if (*(char *)param_2[1] != '\0') {
    if (((*PTR_DAT_047d4df8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar1 != 0)) {
      FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4df8);
    }
    uVar2 = *(undefined8 *)PTR_DAT_047d4e00;
    *(undefined8 *)PTR_DAT_047d4e08 = uVar2;
    FUN_00f80810(uVar2,*param_2,param_1);
  }
  *(undefined8 *)(param_1 + 0x198) = *param_2;
  *(undefined8 *)(param_1 + 0x1a0) = param_2[1];
  *(undefined8 *)(param_1 + 0x1a8) = param_2[2];
  plVar4 = (long *)param_2[3];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  plVar3 = *(long **)(param_1 + 0x1b0);
  *(long **)(param_1 + 0x1b0) = plVar4;
  if (plVar3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00f8075c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x20))();
  return;
}


