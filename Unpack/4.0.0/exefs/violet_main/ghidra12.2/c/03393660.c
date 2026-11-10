/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03393660; name: _INIT_2064
 */


void _INIT_2064(void)

{
  if ((DAT_0488e040 & 1) == 0) {
    DAT_0488e030 = 0;
    DAT_0488e038 = 0;
    DAT_0488e020 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488e020;
    DAT_0488e028 = &DAT_047b2c48;
    DAT_0488e040 = 1;
  }
  return;
}


