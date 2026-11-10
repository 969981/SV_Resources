/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0318eb00; name: _INIT_1477
 */


void _INIT_1477(void)

{
  if ((DAT_0487d788 & 1) == 0) {
    DAT_0487d778 = 0;
    DAT_0487d780 = 0;
    DAT_0487d768 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487d768;
    DAT_0487d770 = &DAT_046986a0;
    DAT_0487d788 = 1;
  }
  return;
}


