/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030ad700; name: _INIT_839
 */


void _INIT_839(void)

{
  if ((DAT_04873440 & 1) == 0) {
    DAT_04873430 = 0;
    DAT_04873438 = 0;
    DAT_04873420 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04873420;
    DAT_04873428 = &DAT_0464d618;
    DAT_04873440 = 1;
  }
  return;
}


