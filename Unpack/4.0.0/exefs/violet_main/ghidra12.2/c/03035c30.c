/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03035c30; name: _INIT_772
 */


void _INIT_772(void)

{
  if ((DAT_04872900 & 1) == 0) {
    DAT_048728f0 = 0;
    DAT_048728f8 = 0;
    DAT_048728e0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048728e0;
    DAT_048728e8 = &DAT_046489c8;
    DAT_04872900 = 1;
  }
  return;
}


