/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014dce30; name: FUN_014dce30
 */


undefined8 FUN_014dce30(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_00c92df0(param_1,1,0);
  if ((DAT_04855fd0 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04855fd0);
    if (iVar1 != 0) {
      __cxa_guard_release(&DAT_04855fd0);
    }
  }
  if ((*PTR_DAT_047d8918 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d8918);
    if (iVar1 != 0) {
      FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8918);
    }
  }
  uVar3 = *(undefined8 *)PTR_DAT_047d8920;
  *(undefined8 *)PTR_DAT_047d8928 = uVar3;
  iVar1 = FUN_014dcf1c(uVar3,uVar2);
  FUN_00c5d960(param_1,(long)iVar1);
  return 1;
}


