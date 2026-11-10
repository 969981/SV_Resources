/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0011f640; name: FUN_0011f640
 */


ulong FUN_0011f640(void)

{
  ulong uVar1;
  long lVar2;
  
  if (DAT_047ec988 == 0) {
    DAT_047ec988 = nn::os::GetSystemTickFrequency();
  }
  lVar2 = nn::os::GetSystemTick();
  uVar1 = 0;
  if (DAT_047ec988 != 0) {
    uVar1 = (ulong)(lVar2 * 1000) / DAT_047ec988;
  }
  return uVar1;
}


