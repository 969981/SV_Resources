/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0079365c; name: FUN_0079365c
 */


undefined8 * FUN_0079365c(void)

{
  int iVar1;
  long lVar2;
  
  if (((DAT_047f9968 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_047f9968), iVar1 != 0)) {
    lVar2 = nn::os::GetSystemTickFrequency();
    DAT_047f9960 = lVar2 / 1000;
    __cxa_guard_release(&DAT_047f9968);
    return &DAT_047f9960;
  }
  return &DAT_047f9960;
}


