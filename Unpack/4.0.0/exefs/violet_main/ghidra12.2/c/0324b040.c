/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0324b040; name: _INIT_1754
 */


void _INIT_1754(void)

{
  if ((DAT_04888808 & 1) == 0) {
    DAT_048887f8 = 0;
    DAT_04888800 = 0;
    DAT_048887e8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048887e8;
    DAT_048887f0 = &DAT_046bbc10;
    DAT_04888808 = 1;
  }
  return;
}


