/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03034880; name: _INIT_709
 */


void _INIT_709(void)

{
  if ((DAT_04871f28 & 1) == 0) {
    DAT_04871f18 = 0;
    DAT_04871f20 = 0;
    DAT_04871f08 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871f08;
    DAT_04871f10 = &DAT_04644ad8;
    DAT_04871f28 = 1;
  }
  return;
}


