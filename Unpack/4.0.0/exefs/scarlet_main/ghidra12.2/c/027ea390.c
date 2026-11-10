/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027ea390; name: FUN_027ea390
 */


void FUN_027ea390(void)

{
  int iVar1;
  
  if (((DAT_0485f108 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0485f108), iVar1 != 0)) {
    DAT_0485f100 = FUN_01e7da74();
    __cxa_guard_release(&DAT_0485f108);
    return;
  }
  return;
}


