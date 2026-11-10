/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022e456c; name: FUN_022e456c
 */


void FUN_022e456c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)PTR_DAT_047e3198;
  if ((*PTR_DAT_047d3e28 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d3e28);
    if (iVar1 != 0) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
  }
  FUN_00db8a60(param_1,param_2,uVar2,uVar2,PTR_DAT_047d3e30);
  return;
}


