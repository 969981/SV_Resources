/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025847b0; name: FUN_025847b0
 */


undefined8 FUN_025847b0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_02583530(param_1,1);
  if ((DAT_04850e70 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04850e70);
    if (iVar1 != 0) {
      DAT_04851f48 = 1;
      __cxa_guard_release(&DAT_04850e70);
    }
  }
  uVar2 = FUN_02584838(uVar2);
  FUN_00c85bd0(param_1,uVar2);
  return 1;
}


