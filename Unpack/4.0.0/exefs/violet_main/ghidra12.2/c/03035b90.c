/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03035b90; name: _INIT_770
 */


void _INIT_770(void)

{
  if ((DAT_048728b0 & 1) == 0) {
    DAT_048728a0 = 0;
    DAT_048728a8 = 0;
    DAT_04872890 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872890;
    DAT_04872898 = &DAT_04648798;
    DAT_048728b0 = 1;
  }
  return;
}


