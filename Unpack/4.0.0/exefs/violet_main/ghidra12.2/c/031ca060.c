/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031ca060; name: _INIT_1574
 */


void _INIT_1574(void)

{
  if ((DAT_04883430 & 1) == 0) {
    DAT_04883420 = 0;
    DAT_04883428 = 0;
    DAT_04883410 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04883410;
    DAT_04883418 = &DAT_046a4400;
    DAT_04883430 = 1;
  }
  return;
}


