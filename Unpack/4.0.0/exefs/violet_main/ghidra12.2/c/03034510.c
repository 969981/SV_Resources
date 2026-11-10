/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03034510; name: _INIT_698
 */


void _INIT_698(void)

{
  if ((DAT_04871d70 & 1) == 0) {
    DAT_04871d60 = 0;
    DAT_04871d68 = 0;
    DAT_04871d50 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871d50;
    DAT_04871d58 = &DAT_04643fd8;
    DAT_04871d70 = 1;
  }
  return;
}


