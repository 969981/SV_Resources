/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014ee070; name: FUN_014ee070
 */


undefined8 FUN_014ee070(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  
  if (((DAT_04805aa8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04805aa8), iVar2 != 0)) {
    __cxa_guard_release(&DAT_04805aa8);
  }
  uVar1 = FUN_014ee0d0();
  FUN_00c419e0(param_1,uVar1 & 1);
  return 1;
}


