/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03035d70; name: _INIT_776
 */


void _INIT_776(void)

{
  if ((DAT_048729a0 & 1) == 0) {
    DAT_04872990 = 0;
    DAT_04872998 = 0;
    DAT_04872980 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872980;
    DAT_04872988 = &DAT_04648d68;
    DAT_048729a0 = 1;
  }
  return;
}


