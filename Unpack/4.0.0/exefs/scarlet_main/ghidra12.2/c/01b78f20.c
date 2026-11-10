/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b78f20; name: FUN_01b78f20
 */


undefined8 FUN_01b78f20(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((DAT_04809620 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04809620), iVar1 != 0)) {
    __cxa_guard_release(&DAT_04809620);
  }
  uVar2 = FUN_01b78f80();
  FUN_00c5d960(param_1,uVar2);
  return 1;
}


