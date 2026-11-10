/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03175fb0; name: _INIT_1290
 */


void _INIT_1290(void)

{
  if ((DAT_0487b818 & 1) == 0) {
    DAT_0487b808 = 0;
    DAT_0487b810 = 0;
    DAT_0487b7f8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487b7f8;
    DAT_0487b800 = &DAT_0468a610;
    DAT_0487b818 = 1;
  }
  return;
}


