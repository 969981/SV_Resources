/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


