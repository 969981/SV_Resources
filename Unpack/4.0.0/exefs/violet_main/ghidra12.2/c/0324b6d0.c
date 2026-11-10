/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0324b6d0; name: _INIT_1775
 */


void _INIT_1775(void)

{
  if ((DAT_04888b50 & 1) == 0) {
    DAT_04888b40 = 0;
    DAT_04888b48 = 0;
    DAT_04888b30 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888b30;
    DAT_04888b38 = &DAT_046bce78;
    DAT_04888b50 = 1;
  }
  return;
}


