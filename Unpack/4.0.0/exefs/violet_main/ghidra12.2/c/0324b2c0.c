/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0324b2c0; name: _INIT_1762
 */


void _INIT_1762(void)

{
  if ((DAT_04888948 & 1) == 0) {
    DAT_04888938 = 0;
    DAT_04888940 = 0;
    DAT_04888928 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888928;
    DAT_04888930 = &DAT_046bc268;
    DAT_04888948 = 1;
  }
  return;
}


