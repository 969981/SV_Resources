/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03148a70; name: _INIT_970
 */


void _INIT_970(void)

{
  if ((DAT_04877950 & 1) == 0) {
    DAT_04877940 = 0;
    DAT_04877948 = 0;
    DAT_04877930 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877930;
    DAT_04877938 = &DAT_0466f110;
    DAT_04877950 = 1;
  }
  return;
}


