/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03146350; name: _INIT_893
 */


void _INIT_893(void)

{
  if ((DAT_04876d48 & 1) == 0) {
    DAT_04876d38 = 0;
    DAT_04876d40 = 0;
    DAT_04876d28 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04876d28;
    DAT_04876d30 = &DAT_0466a9e0;
    DAT_04876d48 = 1;
  }
  return;
}


