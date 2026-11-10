/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0317c290; name: _INIT_1459
 */


void _INIT_1459(void)

{
  if ((DAT_0487d280 & 1) == 0) {
    DAT_0487d270 = 0;
    DAT_0487d278 = 0;
    DAT_0487d260 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487d260;
    DAT_0487d268 = &DAT_04695338;
    DAT_0487d280 = 1;
  }
  return;
}


