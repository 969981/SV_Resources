/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03176aa0; name: _INIT_1325
 */


void _INIT_1325(void)

{
  if ((DAT_0487bd90 & 1) == 0) {
    DAT_0487bd80 = 0;
    DAT_0487bd88 = 0;
    DAT_0487bd70 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487bd70;
    DAT_0487bd78 = &DAT_0468ce80;
    DAT_0487bd90 = 1;
  }
  return;
}


