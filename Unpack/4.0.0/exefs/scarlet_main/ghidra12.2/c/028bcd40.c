/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028bcd40; name: FUN_028bcd40
 */


undefined8 * FUN_028bcd40(void)

{
  int iVar1;
  
  if (((DAT_04863a10 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04863a10), iVar1 != 0)) {
    FUN_028bcd9c();
    DAT_04863a08 = &DAT_048639f8;
    __cxa_guard_release(&DAT_04863a10);
  }
  return &DAT_04863a08;
}


