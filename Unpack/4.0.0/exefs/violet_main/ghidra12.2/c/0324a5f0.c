/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0324a5f0; name: _INIT_1721
 */


void _INIT_1721(void)

{
  if ((DAT_048882e0 & 1) == 0) {
    DAT_048882d0 = 0;
    DAT_048882d8 = 0;
    DAT_048882c0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048882c0;
    DAT_048882c8 = &DAT_046b9d18;
    DAT_048882e0 = 1;
  }
  return;
}


