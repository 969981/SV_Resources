/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0318ed30; name: _INIT_1484
 */


void _INIT_1484(void)

{
  if ((DAT_0487d8a0 & 1) == 0) {
    DAT_0487d890 = 0;
    DAT_0487d898 = 0;
    DAT_0487d880 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487d880;
    DAT_0487d888 = &DAT_04698dc0;
    DAT_0487d8a0 = 1;
  }
  return;
}


