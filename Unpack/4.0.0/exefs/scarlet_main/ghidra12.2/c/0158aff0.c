/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0158aff0; name: FUN_0158aff0
 */


undefined8 FUN_0158aff0(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  
  if (((DAT_048302f8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_048302f8), iVar2 != 0)) {
    DAT_04831040 = 1;
    __cxa_guard_release(&DAT_048302f8);
  }
  FUN_0158b0b0(param_1,1);
  uVar1 = FUN_0158b068();
  FUN_00c419e0(param_1,uVar1 & 1);
  return 1;
}


