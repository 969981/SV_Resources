/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0024f1c0; name: FUN_0024f1c0
 */


ulong FUN_0024f1c0(ulong param_1)

{
  if (param_1 == 0) {
    return 0xffffffff;
  }
  return (ulong)(byte)(&DAT_03cc723a)[(-param_1 & param_1) * 0x3f566ed27179461 >> 0x3a];
}


