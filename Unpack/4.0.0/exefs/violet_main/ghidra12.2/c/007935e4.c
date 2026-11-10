/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007935e4; name: FUN_007935e4
 */


undefined8 * FUN_007935e4(void)

{
  int iVar1;
  long lVar2;
  
  if (((DAT_047f9958 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_047f9958), iVar1 != 0)) {
    lVar2 = nn::os::GetSystemTickFrequency();
    DAT_047f9950 = lVar2 / 1000000;
    __cxa_guard_release(&DAT_047f9958);
    return &DAT_047f9950;
  }
  return &DAT_047f9950;
}


