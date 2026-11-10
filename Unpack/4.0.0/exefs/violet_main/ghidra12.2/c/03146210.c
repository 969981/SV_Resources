/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03146210; name: _INIT_889
 */


void _INIT_889(void)

{
  if ((DAT_04876ca8 & 1) == 0) {
    DAT_04876c98 = 0;
    DAT_04876ca0 = 0;
    DAT_04876c88 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04876c88;
    DAT_04876c90 = &DAT_0466a670;
    DAT_04876ca8 = 1;
  }
  return;
}


