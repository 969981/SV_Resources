/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03035730; name: _INIT_756
 */


void _INIT_756(void)

{
  if ((DAT_04872680 & 1) == 0) {
    DAT_04872670 = 0;
    DAT_04872678 = 0;
    DAT_04872660 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872660;
    DAT_04872668 = &DAT_04647678;
    DAT_04872680 = 1;
  }
  return;
}


