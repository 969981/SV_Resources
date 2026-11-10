/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021a37dc; name: FUN_021a37dc
 */


undefined8 * FUN_021a37dc(void)

{
  int iVar1;
  
  if (((DAT_04841990 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04841990), iVar1 != 0)) {
    DAT_04841988 = FUN_021a3830();
    __cxa_guard_release(&DAT_04841990);
  }
  return &DAT_04841988;
}


