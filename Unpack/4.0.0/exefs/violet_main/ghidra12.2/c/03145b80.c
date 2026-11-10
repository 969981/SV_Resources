/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03145b80; name: _INIT_868
 */


void _INIT_868(void)

{
  if ((DAT_04876960 & 1) == 0) {
    DAT_04876950 = 0;
    DAT_04876958 = 0;
    DAT_04876940 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04876940;
    DAT_04876948 = &DAT_04669380;
    DAT_04876960 = 1;
  }
  return;
}


