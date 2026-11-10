/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314b5f0; name: _INIT_1086
 */


void _INIT_1086(void)

{
  if ((DAT_04878b70 & 1) == 0) {
    DAT_04878b60 = 0;
    DAT_04878b68 = 0;
    DAT_04878b50 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878b50;
    DAT_04878b58 = &DAT_046763d8;
    DAT_04878b70 = 1;
  }
  return;
}


