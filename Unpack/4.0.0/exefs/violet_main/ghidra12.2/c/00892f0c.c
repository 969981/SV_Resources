/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00892f0c; name: FUN_00892f0c
 */


undefined * FUN_00892f0c(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047d2120 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d2120), iVar1 != 0))
  {
    *(undefined8 *)PTR_DAT_047d2128 = 0;
    __cxa_guard_release(PTR_DAT_047d2120);
    return PTR_DAT_047d2128;
  }
  return PTR_DAT_047d2128;
}


