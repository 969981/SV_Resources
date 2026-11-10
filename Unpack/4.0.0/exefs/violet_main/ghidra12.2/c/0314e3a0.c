/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314e3a0; name: _INIT_1196
 */


void _INIT_1196(void)

{
  if ((DAT_04879ca0 & 1) == 0) {
    DAT_04879c90 = 0;
    DAT_04879c98 = 0;
    DAT_04879c80 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879c80;
    DAT_04879c88 = &DAT_0467cc60;
    DAT_04879ca0 = 1;
  }
  return;
}


