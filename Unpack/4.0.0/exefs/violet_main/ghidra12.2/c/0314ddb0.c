/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314ddb0; name: _INIT_1177
 */


void _INIT_1177(void)

{
  if ((DAT_048799a8 & 1) == 0) {
    DAT_04879998 = 0;
    DAT_048799a0 = 0;
    DAT_04879988 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879988;
    DAT_04879990 = &DAT_0467ba60;
    DAT_048799a8 = 1;
  }
  return;
}


