/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03033f20; name: _INIT_679
 */


void _INIT_679(void)

{
  if ((DAT_04871a78 & 1) == 0) {
    DAT_04871a68 = 0;
    DAT_04871a70 = 0;
    DAT_04871a58 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871a58;
    DAT_04871a60 = &DAT_04642c80;
    DAT_04871a78 = 1;
  }
  return;
}


