/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314bd70; name: _INIT_1098
 */


void _INIT_1098(void)

{
  if ((DAT_04878d50 & 1) == 0) {
    DAT_04878d40 = 0;
    DAT_04878d48 = 0;
    DAT_04878d30 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878d30;
    DAT_04878d38 = &DAT_04676e40;
    DAT_04878d50 = 1;
  }
  return;
}


