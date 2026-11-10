/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007936d4; name: FUN_007936d4
 */


undefined8 * FUN_007936d4(void)

{
  int iVar1;
  long lVar2;
  
  if (((DAT_047f9978 & 1) != 0) || (iVar1 = __cxa_guard_acquire(&DAT_047f9978), iVar1 == 0)) {
    return &DAT_047f9970;
  }
  if (((DAT_047f9968 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_047f9968), iVar1 != 0)) {
    lVar2 = nn::os::GetSystemTickFrequency();
    DAT_047f9960 = lVar2 / 1000;
    __cxa_guard_release(&DAT_047f9968);
  }
  DAT_047f9970 = DAT_047f9960 * 1000;
  __cxa_guard_release(&DAT_047f9978);
  return &DAT_047f9970;
}


