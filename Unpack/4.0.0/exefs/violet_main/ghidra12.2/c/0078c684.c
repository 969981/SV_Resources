/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0078c684; name: FUN_0078c684
 */


ulong FUN_0078c684(void)

{
  ulong uVar1;
  
  if (DAT_044df4b8 == 0) {
    return 0;
  }
  uVar1 = 0;
  if ((ulong)DAT_044df4b8 != 0) {
    uVar1 = DAT_044df4c0 / DAT_044df4b8;
  }
  return uVar1;
}


