/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03149060; name: _INIT_989
 */


void _INIT_989(void)

{
  if ((DAT_04877c48 & 1) == 0) {
    DAT_04877c38 = 0;
    DAT_04877c40 = 0;
    DAT_04877c28 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877c28;
    DAT_04877c30 = &DAT_04670618;
    DAT_04877c48 = 1;
  }
  return;
}


