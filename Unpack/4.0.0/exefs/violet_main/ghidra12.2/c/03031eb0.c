/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03031eb0; name: _INIT_575
 */


void _INIT_575(void)

{
  if ((DAT_04870a48 & 1) == 0) {
    DAT_04870a38 = 0;
    DAT_04870a40 = 0;
    DAT_04870a28 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870a28;
    DAT_04870a30 = &DAT_0463cb20;
    DAT_04870a48 = 1;
  }
  return;
}


