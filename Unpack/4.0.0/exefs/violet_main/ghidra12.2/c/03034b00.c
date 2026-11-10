/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03034b00; name: _INIT_717
 */


void _INIT_717(void)

{
  if ((DAT_04872068 & 1) == 0) {
    DAT_04872058 = 0;
    DAT_04872060 = 0;
    DAT_04872048 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872048;
    DAT_04872050 = &DAT_04645290;
    DAT_04872068 = 1;
  }
  return;
}


