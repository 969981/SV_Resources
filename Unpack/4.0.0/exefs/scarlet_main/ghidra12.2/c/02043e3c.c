/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02043e3c; name: FUN_02043e3c
 */


void FUN_02043e3c(undefined8 param_1,ulong param_2,undefined4 param_3)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = param_2;
  if ((*PTR_DAT_047d3e28 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d3e28);
    uVar2 = param_2 & 0xffffffff;
    if (iVar1 != 0) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
      uVar2 = param_2 & 0xffffffff;
    }
  }
  FUN_01970464(param_1,uVar2,PTR_DAT_047d3e30,0,param_3);
  return;
}


