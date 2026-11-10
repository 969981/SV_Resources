/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00249380; name: FUN_00249380
 */


undefined ** FUN_00249380(void)

{
  int iVar1;
  
  if (((DAT_047ed3a8 & 1) != 0) || (iVar1 = __cxa_guard_acquire(&DAT_047ed3a8), iVar1 == 0)) {
    return DAT_047ed3a0;
  }
  if (((DAT_047ed398 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_047ed398), iVar1 != 0)) {
    __cxa_guard_release(&DAT_047ed398);
  }
  DAT_047ed3a0 = &PTR_PTR_0448ac10;
  __cxa_guard_release(&DAT_047ed3a8);
  return DAT_047ed3a0;
}


