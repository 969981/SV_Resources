/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314f550; name: _INIT_1248
 */


void _INIT_1248(void)

{
  if ((DAT_0487a4c0 & 1) == 0) {
    DAT_0487a4b0 = 0;
    DAT_0487a4b8 = 0;
    DAT_0487a4a0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487a4a0;
    DAT_0487a4a8 = &DAT_04680100;
    DAT_0487a4c0 = 1;
  }
  return;
}


