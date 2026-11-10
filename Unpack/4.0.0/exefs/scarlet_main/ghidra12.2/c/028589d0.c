/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028589d0; name: FUN_028589d0
 */


void FUN_028589d0(void)

{
  int iVar1;
  
  if (((DAT_0485f1f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0485f1f8), iVar1 != 0)) {
    DAT_0485f1f0 = FUN_01f44620();
    __cxa_guard_release(&DAT_0485f1f8);
    return;
  }
  return;
}


