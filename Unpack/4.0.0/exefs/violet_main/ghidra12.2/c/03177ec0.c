/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03177ec0; name: _INIT_1345
 */


void _INIT_1345(void)

{
  if ((DAT_0487c0b0 & 1) == 0) {
    DAT_0487c0a0 = 0;
    DAT_0487c0a8 = 0;
    DAT_0487c090 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c090;
    DAT_0487c098 = &DAT_0468e060;
    DAT_0487c0b0 = 1;
  }
  return;
}


