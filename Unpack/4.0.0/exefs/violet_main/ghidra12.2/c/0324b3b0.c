/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0324b3b0; name: _INIT_1765
 */


void _INIT_1765(void)

{
  if ((DAT_048889c0 & 1) == 0) {
    DAT_048889b0 = 0;
    DAT_048889b8 = 0;
    DAT_048889a0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048889a0;
    DAT_048889a8 = &DAT_046bc4c8;
    DAT_048889c0 = 1;
  }
  return;
}


