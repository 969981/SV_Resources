/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314f870; name: _INIT_1258
 */


void _INIT_1258(void)

{
  if ((DAT_0487a650 & 1) == 0) {
    DAT_0487a640 = 0;
    DAT_0487a648 = 0;
    DAT_0487a630 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487a630;
    DAT_0487a638 = &DAT_046808b0;
    DAT_0487a650 = 1;
  }
  return;
}


