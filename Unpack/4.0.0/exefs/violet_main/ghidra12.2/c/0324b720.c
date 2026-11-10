/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0324b720; name: _INIT_1776
 */


void _INIT_1776(void)

{
  if ((DAT_04888b78 & 1) == 0) {
    DAT_04888b68 = 0;
    DAT_04888b70 = 0;
    DAT_04888b58 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888b58;
    DAT_04888b60 = &DAT_046bcf30;
    DAT_04888b78 = 1;
  }
  return;
}


