/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0320ebf0; name: _INIT_1650
 */


void _INIT_1650(void)

{
  if ((DAT_04885038 & 1) == 0) {
    DAT_04885028 = 0;
    DAT_04885030 = 0;
    DAT_04885018 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04885018;
    DAT_04885020 = &DAT_046a95b8;
    DAT_04885038 = 1;
  }
  return;
}


