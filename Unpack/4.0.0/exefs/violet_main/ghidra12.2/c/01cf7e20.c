/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01cf7e20; name: FUN_01cf7e20
 */


undefined ** FUN_01cf7e20(void)

{
  int iVar1;
  
  if (((DAT_047ed380 & 1) != 0) || (iVar1 = __cxa_guard_acquire(&DAT_047ed380), iVar1 == 0)) {
    return DAT_047ed378;
  }
  if (((DAT_047ed368 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_047ed368), iVar1 != 0)) {
    __cxa_guard_release(&DAT_047ed368);
  }
  DAT_047ed378 = &PTR_PTR_0448abf0;
  __cxa_guard_release(&DAT_047ed380);
  return DAT_047ed378;
}


