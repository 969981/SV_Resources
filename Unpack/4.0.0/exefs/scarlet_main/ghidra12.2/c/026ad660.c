/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026ad660; name: FUN_026ad660
 */


undefined8 FUN_026ad660(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_026ad730(param_1,1);
  uVar4 = FUN_00c646d0(param_1,2,0);
  iVar1 = FUN_00cc4dc0(param_1,3);
  if (((DAT_04857238 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04857238), iVar2 != 0)) {
    DAT_04857228 = PTR_FUN_047e0678;
    DAT_04857230 = 0;
    __cxa_guard_release(&DAT_04857238);
  }
  FUN_026ad7bc(&DAT_04857228,uVar3,uVar4,iVar1 != 0);
  return 0;
}


