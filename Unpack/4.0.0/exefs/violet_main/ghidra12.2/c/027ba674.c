/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


