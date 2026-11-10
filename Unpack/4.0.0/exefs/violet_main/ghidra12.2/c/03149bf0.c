/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03149bf0; name: _INIT_1026
 */


void _INIT_1026(void)

{
  if ((DAT_04878210 & 1) == 0) {
    DAT_04878200 = 0;
    DAT_04878208 = 0;
    DAT_048781f0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048781f0;
    DAT_048781f8 = &DAT_04672d98;
    DAT_04878210 = 1;
  }
  return;
}


