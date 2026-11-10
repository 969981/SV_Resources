/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314d680; name: _INIT_1154
 */


void _INIT_1154(void)

{
  if ((DAT_04879610 & 1) == 0) {
    DAT_04879600 = 0;
    DAT_04879608 = 0;
    DAT_048795f0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048795f0;
    DAT_048795f8 = &DAT_0467a418;
    DAT_04879610 = 1;
  }
  return;
}


