/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027ba674; name: FUN_027ba674
 */


void FUN_027ba674(void)

{
  int iVar1;
  
  if (((DAT_0485f040 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0485f040), iVar1 != 0)) {
    DAT_0485f038 = FUN_01d03f68();
    __cxa_guard_release(&DAT_0485f040);
    return;
  }
  return;
}


