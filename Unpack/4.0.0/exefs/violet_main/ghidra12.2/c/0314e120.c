/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314e120; name: _INIT_1188
 */


void _INIT_1188(void)

{
  if ((DAT_04879b60 & 1) == 0) {
    DAT_04879b50 = 0;
    DAT_04879b58 = 0;
    DAT_04879b40 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879b40;
    DAT_04879b48 = &DAT_0467c570;
    DAT_04879b60 = 1;
  }
  return;
}


