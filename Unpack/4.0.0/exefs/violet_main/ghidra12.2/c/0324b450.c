/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0324b450; name: _INIT_1767
 */


void _INIT_1767(void)

{
  if ((DAT_04888a10 & 1) == 0) {
    DAT_04888a00 = 0;
    DAT_04888a08 = 0;
    DAT_048889f0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048889f0;
    DAT_048889f8 = &DAT_046bc6b8;
    DAT_04888a10 = 1;
  }
  return;
}


