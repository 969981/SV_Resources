/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03030e70; name: _INIT_523
 */


void _INIT_523(void)

{
  if ((DAT_04870228 & 1) == 0) {
    DAT_04870218 = 0;
    DAT_04870220 = 0;
    DAT_04870208 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870208;
    DAT_04870210 = &DAT_04639b10;
    DAT_04870228 = 1;
  }
  return;
}


