/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03032d50; name: _INIT_622
 */


void _INIT_622(void)

{
  if ((DAT_04871190 & 1) == 0) {
    DAT_04871180 = 0;
    DAT_04871188 = 0;
    DAT_04871170 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871170;
    DAT_04871178 = &DAT_0463f828;
    DAT_04871190 = 1;
  }
  return;
}


