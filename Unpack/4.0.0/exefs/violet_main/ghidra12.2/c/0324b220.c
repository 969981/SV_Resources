/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0324b220; name: _INIT_1760
 */


void _INIT_1760(void)

{
  if ((DAT_048888f8 & 1) == 0) {
    DAT_048888e8 = 0;
    DAT_048888f0 = 0;
    DAT_048888d8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048888d8;
    DAT_048888e0 = &DAT_046bc0c8;
    DAT_048888f8 = 1;
  }
  return;
}


