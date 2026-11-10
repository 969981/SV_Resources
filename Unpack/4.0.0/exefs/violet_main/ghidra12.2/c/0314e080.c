/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314e080; name: _INIT_1186
 */


void _INIT_1186(void)

{
  if ((DAT_04879b10 & 1) == 0) {
    DAT_04879b00 = 0;
    DAT_04879b08 = 0;
    DAT_04879af0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879af0;
    DAT_04879af8 = &DAT_0467c320;
    DAT_04879b10 = 1;
  }
  return;
}


