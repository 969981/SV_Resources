/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314ba50; name: _INIT_1093
 */


void _INIT_1093(void)

{
  if ((DAT_04878c88 & 1) == 0) {
    DAT_04878c78 = 0;
    DAT_04878c80 = 0;
    DAT_04878c68 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878c68;
    DAT_04878c70 = &DAT_04676a28;
    DAT_04878c88 = 1;
  }
  return;
}


