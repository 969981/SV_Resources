/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008a8dfc; name: FUN_008a8dfc
 */


undefined * FUN_008a8dfc(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047d2098 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d2098), iVar1 != 0))
  {
    *(undefined8 *)PTR_DAT_047d20a0 = 0;
    __cxa_guard_release(PTR_DAT_047d2098);
    return PTR_DAT_047d20a0;
  }
  return PTR_DAT_047d20a0;
}


