/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031458b0; name: _INIT_859
 */


void _INIT_859(void)

{
  if ((DAT_048767f8 & 1) == 0) {
    DAT_048767e8 = 0;
    DAT_048767f0 = 0;
    DAT_048767d8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048767d8;
    DAT_048767e0 = &DAT_04668b18;
    DAT_048767f8 = 1;
  }
  return;
}


