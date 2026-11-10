/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007c39e8; name: FUN_007c39e8
 */


undefined * FUN_007c39e8(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047d1038 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d1038), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_047d1040 = PTR_DAT_047d1050 + 0x10;
    __cxa_guard_release(PTR_DAT_047d1038);
    return PTR_DAT_047d1040;
  }
  return PTR_DAT_047d1040;
}


