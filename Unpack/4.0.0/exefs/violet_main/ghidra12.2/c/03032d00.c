/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03032d00; name: _INIT_621
 */


void _INIT_621(void)

{
  if ((DAT_04871168 & 1) == 0) {
    DAT_04871158 = 0;
    DAT_04871160 = 0;
    DAT_04871148 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871148;
    DAT_04871150 = &DAT_0463f798;
    DAT_04871168 = 1;
  }
  return;
}


