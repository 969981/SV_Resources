/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0156ade4; name: FUN_0156ade4
 */


void FUN_0156ade4(void)

{
  int iVar1;
  
  if (((DAT_0485a160 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0485a160), iVar1 != 0)) {
    DAT_0485a158 = FUN_021a73d0();
    __cxa_guard_release(&DAT_0485a160);
    return;
  }
  return;
}


