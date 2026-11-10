/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 032653b0; name: _INIT_1878
 */


void _INIT_1878(void)

{
  if ((DAT_0488a518 & 1) == 0) {
    DAT_0488a508 = 0;
    DAT_0488a510 = 0;
    DAT_0488a4f8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488a4f8;
    DAT_0488a500 = &DAT_046c7a38;
    DAT_0488a518 = 1;
  }
  return;
}


