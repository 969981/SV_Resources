/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03034470; name: _INIT_696
 */


void _INIT_696(void)

{
  if ((DAT_04871d20 & 1) == 0) {
    DAT_04871d10 = 0;
    DAT_04871d18 = 0;
    DAT_04871d00 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871d00;
    DAT_04871d08 = &DAT_04643de8;
    DAT_04871d20 = 1;
  }
  return;
}


