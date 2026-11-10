/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03241fc0; name: _INIT_1686
 */


void _INIT_1686(void)

{
  if ((DAT_048858c8 & 1) == 0) {
    DAT_048858b8 = 0;
    DAT_048858c0 = 0;
    DAT_048858a8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048858a8;
    DAT_048858b0 = &DAT_046aba18;
    DAT_048858c8 = 1;
  }
  return;
}


