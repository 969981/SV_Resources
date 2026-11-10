/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314d270; name: _INIT_1141
 */


void _INIT_1141(void)

{
  if ((DAT_04879408 & 1) == 0) {
    DAT_048793f8 = 0;
    DAT_04879400 = 0;
    DAT_048793e8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048793e8;
    DAT_048793f0 = &DAT_04679678;
    DAT_04879408 = 1;
  }
  return;
}


