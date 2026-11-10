/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


