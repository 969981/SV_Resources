/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026adc40; name: FUN_026adc40
 */


undefined8 FUN_026adc40(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  
  uVar2 = FUN_026ad730(param_1,1);
  uVar3 = FUN_00c646d0(param_1,2,0);
  if (((DAT_048572b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048572b8), iVar1 != 0)) {
    DAT_048572a8 = PTR_FUN_047e0690;
    DAT_048572b0 = 0;
    __cxa_guard_release(&DAT_048572b8,extraout_x1,uVar3);
  }
  FUN_026ada70(&DAT_048572a8,uVar2,uVar3);
  return 0;
}


