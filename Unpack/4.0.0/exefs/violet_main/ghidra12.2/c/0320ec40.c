/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0320ec40; name: _INIT_1651
 */


void _INIT_1651(void)

{
  if ((DAT_04885060 & 1) == 0) {
    DAT_04885050 = 0;
    DAT_04885058 = 0;
    DAT_04885040 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04885040;
    DAT_04885048 = &DAT_046a94e8;
    DAT_04885060 = 1;
  }
  return;
}


