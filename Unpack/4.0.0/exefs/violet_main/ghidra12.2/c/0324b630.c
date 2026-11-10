/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0324b630; name: _INIT_1773
 */


void _INIT_1773(void)

{
  if ((DAT_04888b00 & 1) == 0) {
    DAT_04888af0 = 0;
    DAT_04888af8 = 0;
    DAT_04888ae0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888ae0;
    DAT_04888ae8 = &DAT_046bcc88;
    DAT_04888b00 = 1;
  }
  return;
}


