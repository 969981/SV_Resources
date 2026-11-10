/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0324b680; name: _INIT_1774
 */


void _INIT_1774(void)

{
  if ((DAT_04888b28 & 1) == 0) {
    DAT_04888b18 = 0;
    DAT_04888b20 = 0;
    DAT_04888b08 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888b08;
    DAT_04888b10 = &DAT_046bcd80;
    DAT_04888b28 = 1;
  }
  return;
}


