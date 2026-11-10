/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029e1be4; name: FUN_029e1be4
 */


undefined8 * FUN_029e1be4(void)

{
  int iVar1;
  
  if (((DAT_0486b048 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0486b048), iVar1 != 0)) {
    DAT_0486b040 = FUN_027602cc();
    __cxa_guard_release(&DAT_0486b048);
  }
  return &DAT_0486b040;
}


