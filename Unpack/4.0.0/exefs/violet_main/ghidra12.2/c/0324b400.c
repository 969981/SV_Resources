/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0324b400; name: _INIT_1766
 */


void _INIT_1766(void)

{
  if ((DAT_048889e8 & 1) == 0) {
    DAT_048889d8 = 0;
    DAT_048889e0 = 0;
    DAT_048889c8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048889c8;
    DAT_048889d0 = &DAT_046bc5c0;
    DAT_048889e8 = 1;
  }
  return;
}


