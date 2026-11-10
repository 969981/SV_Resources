/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03148980; name: _INIT_967
 */


void _INIT_967(void)

{
  if ((DAT_048778d8 & 1) == 0) {
    DAT_048778c8 = 0;
    DAT_048778d0 = 0;
    DAT_048778b8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048778b8;
    DAT_048778c0 = &DAT_0466ee70;
    DAT_048778d8 = 1;
  }
  return;
}


