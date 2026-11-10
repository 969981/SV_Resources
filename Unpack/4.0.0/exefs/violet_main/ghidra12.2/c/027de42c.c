/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027de42c; name: FUN_027de42c
 */


void FUN_027de42c(void)

{
  int iVar1;
  
  if (((DAT_0485f0a8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0485f0a8), iVar1 != 0)) {
    DAT_0485f0a0 = FUN_01d03f68();
    __cxa_guard_release(&DAT_0485f0a8);
    return;
  }
  return;
}


