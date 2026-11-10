/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0324b5e0; name: _INIT_1772
 */


void _INIT_1772(void)

{
  if ((DAT_04888ad8 & 1) == 0) {
    DAT_04888ac8 = 0;
    DAT_04888ad0 = 0;
    DAT_04888ab8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888ab8;
    DAT_04888ac0 = &DAT_046bcb90;
    DAT_04888ad8 = 1;
  }
  return;
}


