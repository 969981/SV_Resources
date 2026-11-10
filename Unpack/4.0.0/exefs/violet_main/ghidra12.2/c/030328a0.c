/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030328a0; name: _INIT_607
 */


void _INIT_607(void)

{
  if ((DAT_04870f38 & 1) == 0) {
    DAT_04870f28 = 0;
    DAT_04870f30 = 0;
    DAT_04870f18 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870f18;
    DAT_04870f20 = &DAT_0463ea08;
    DAT_04870f38 = 1;
  }
  return;
}


