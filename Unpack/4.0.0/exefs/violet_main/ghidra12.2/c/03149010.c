/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03149010; name: _INIT_988
 */


void _INIT_988(void)

{
  if ((DAT_04877c20 & 1) == 0) {
    DAT_04877c10 = 0;
    DAT_04877c18 = 0;
    DAT_04877c00 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877c00;
    DAT_04877c08 = &DAT_04670538;
    DAT_04877c20 = 1;
  }
  return;
}


