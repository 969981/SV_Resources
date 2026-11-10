/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0317a9b0; name: _INIT_1429
 */


void _INIT_1429(void)

{
  if ((DAT_0487cdd0 & 1) == 0) {
    DAT_0487cdc0 = 0;
    DAT_0487cdc8 = 0;
    DAT_0487cdb0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487cdb0;
    DAT_0487cdb8 = &DAT_04693788;
    DAT_0487cdd0 = 1;
  }
  return;
}


