/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314d4a0; name: _INIT_1148
 */


void _INIT_1148(void)

{
  if ((DAT_04879520 & 1) == 0) {
    DAT_04879510 = 0;
    DAT_04879518 = 0;
    DAT_04879500 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879500;
    DAT_04879508 = &DAT_04679df8;
    DAT_04879520 = 1;
  }
  return;
}


