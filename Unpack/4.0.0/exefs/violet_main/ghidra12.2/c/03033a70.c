/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03033a70; name: _INIT_664
 */


void _INIT_664(void)

{
  if ((DAT_04871820 & 1) == 0) {
    DAT_04871810 = 0;
    DAT_04871818 = 0;
    DAT_04871800 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871800;
    DAT_04871808 = &DAT_04641eb0;
    DAT_04871820 = 1;
  }
  return;
}


