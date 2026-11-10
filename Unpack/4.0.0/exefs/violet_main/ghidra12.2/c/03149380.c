/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03149380; name: _INIT_999
 */


void _INIT_999(void)

{
  if ((DAT_04877dd8 & 1) == 0) {
    DAT_04877dc8 = 0;
    DAT_04877dd0 = 0;
    DAT_04877db8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877db8;
    DAT_04877dc0 = &DAT_04670f60;
    DAT_04877dd8 = 1;
  }
  return;
}


