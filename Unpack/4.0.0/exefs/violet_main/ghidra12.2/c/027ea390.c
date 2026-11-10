/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


