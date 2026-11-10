/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026adba0; name: FUN_026adba0
 */


undefined8 FUN_026adba0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  
  uVar2 = FUN_026ad730(param_1,1);
  uVar3 = FUN_00c646d0(param_1,2,0);
  if (((DAT_048572a0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048572a0), iVar1 != 0)) {
    DAT_04857290 = PTR_FUN_047e0688;
    DAT_04857298 = 0;
    __cxa_guard_release(&DAT_048572a0,extraout_x1,uVar3);
  }
  FUN_026ada70(&DAT_04857290,uVar2,uVar3);
  return 0;
}


