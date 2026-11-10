/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03145b30; name: _INIT_867
 */


void _INIT_867(void)

{
  if ((DAT_04876938 & 1) == 0) {
    DAT_04876928 = 0;
    DAT_04876930 = 0;
    DAT_04876918 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04876918;
    DAT_04876920 = &DAT_04669208;
    DAT_04876938 = 1;
  }
  return;
}


