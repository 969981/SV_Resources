/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03032b70; name: _INIT_616
 */


void _INIT_616(void)

{
  if ((DAT_048710a0 & 1) == 0) {
    DAT_04871090 = 0;
    DAT_04871098 = 0;
    DAT_04871080 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871080;
    DAT_04871088 = &DAT_0463f290;
    DAT_048710a0 = 1;
  }
  return;
}


