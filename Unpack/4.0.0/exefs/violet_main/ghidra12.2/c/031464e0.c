/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031464e0; name: _INIT_898
 */


void _INIT_898(void)

{
  if ((DAT_04876e10 & 1) == 0) {
    DAT_04876e00 = 0;
    DAT_04876e08 = 0;
    DAT_04876df0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04876df0;
    DAT_04876df8 = &DAT_0466af38;
    DAT_04876e10 = 1;
  }
  return;
}


