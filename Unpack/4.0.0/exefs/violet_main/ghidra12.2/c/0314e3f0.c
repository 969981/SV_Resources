/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314e3f0; name: _INIT_1197
 */


void _INIT_1197(void)

{
  if ((DAT_04879cc8 & 1) == 0) {
    DAT_04879cb8 = 0;
    DAT_04879cc0 = 0;
    DAT_04879ca8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879ca8;
    DAT_04879cb0 = &DAT_0467cdd8;
    DAT_04879cc8 = 1;
  }
  return;
}


