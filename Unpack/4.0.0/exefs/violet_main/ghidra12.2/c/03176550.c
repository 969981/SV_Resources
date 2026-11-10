/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03176550; name: _INIT_1308
 */


void _INIT_1308(void)

{
  if ((DAT_0487bae8 & 1) == 0) {
    DAT_0487bad8 = 0;
    DAT_0487bae0 = 0;
    DAT_0487bac8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487bac8;
    DAT_0487bad0 = &DAT_0468bb70;
    DAT_0487bae8 = 1;
  }
  return;
}


