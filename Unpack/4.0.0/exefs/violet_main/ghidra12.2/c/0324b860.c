/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0324b860; name: _INIT_1780
 */


void _INIT_1780(void)

{
  if ((DAT_04888c18 & 1) == 0) {
    DAT_04888c08 = 0;
    DAT_04888c10 = 0;
    DAT_04888bf8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888bf8;
    DAT_04888c00 = &DAT_046bd2d0;
    DAT_04888c18 = 1;
  }
  return;
}


