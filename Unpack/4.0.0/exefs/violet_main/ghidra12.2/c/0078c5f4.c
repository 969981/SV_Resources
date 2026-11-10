/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0078c5f4; name: FUN_0078c5f4
 */


ulong FUN_0078c5f4(void)

{
  ulong uVar1;
  
  if (DAT_044df418 == 0) {
    return 0;
  }
  uVar1 = 0;
  if ((ulong)DAT_044df418 != 0) {
    uVar1 = DAT_044df420 / DAT_044df418;
  }
  return uVar1;
}


