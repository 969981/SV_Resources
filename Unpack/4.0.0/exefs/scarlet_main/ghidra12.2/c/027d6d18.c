/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027d6d18; name: FUN_027d6d18
 */


void FUN_027d6d18(void)

{
  int iVar1;
  
  if (((DAT_0485f078 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0485f078), iVar1 != 0)) {
    DAT_0485f070 = FUN_01e7da74();
    __cxa_guard_release(&DAT_0485f078);
    return;
  }
  return;
}


