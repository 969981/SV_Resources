/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


