/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03176960; name: _INIT_1321
 */


void _INIT_1321(void)

{
  if ((DAT_0487bcf0 & 1) == 0) {
    DAT_0487bce0 = 0;
    DAT_0487bce8 = 0;
    DAT_0487bcd0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487bcd0;
    DAT_0487bcd8 = &DAT_0468c9b0;
    DAT_0487bcf0 = 1;
  }
  return;
}


