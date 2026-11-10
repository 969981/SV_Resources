/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014c0124; name: FUN_014c0124
 */


void FUN_014c0124(void)

{
  int iVar1;
  
  if (((DAT_04841a68 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04841a68), iVar1 != 0)) {
    DAT_04841a60 = FUN_021a73d0();
    __cxa_guard_release(&DAT_04841a68);
    return;
  }
  return;
}


