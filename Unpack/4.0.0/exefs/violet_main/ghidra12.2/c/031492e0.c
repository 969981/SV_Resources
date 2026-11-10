/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031492e0; name: _INIT_997
 */


void _INIT_997(void)

{
  if ((DAT_04877d88 & 1) == 0) {
    DAT_04877d78 = 0;
    DAT_04877d80 = 0;
    DAT_04877d68 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877d68;
    DAT_04877d70 = &DAT_04670da8;
    DAT_04877d88 = 1;
  }
  return;
}


