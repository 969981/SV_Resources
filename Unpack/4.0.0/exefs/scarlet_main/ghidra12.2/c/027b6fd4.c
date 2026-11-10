/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027b6fd4; name: FUN_027b6fd4
 */


void FUN_027b6fd4(void)

{
  int iVar1;
  
  if (((DAT_0485f030 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0485f030), iVar1 != 0)) {
    FUN_01e71b20(&DAT_0485ee30,0x10,0x8005,1);
    __cxa_guard_release(&DAT_0485f030);
  }
  return;
}


