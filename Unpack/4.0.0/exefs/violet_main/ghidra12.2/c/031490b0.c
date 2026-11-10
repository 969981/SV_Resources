/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031490b0; name: _INIT_990
 */


void _INIT_990(void)

{
  if ((DAT_04877c70 & 1) == 0) {
    DAT_04877c60 = 0;
    DAT_04877c68 = 0;
    DAT_04877c50 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877c50;
    DAT_04877c58 = &DAT_04670790;
    DAT_04877c70 = 1;
  }
  return;
}


