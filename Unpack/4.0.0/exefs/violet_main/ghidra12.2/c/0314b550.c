/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314b550; name: _INIT_1084
 */


void _INIT_1084(void)

{
  if ((DAT_04878b20 & 1) == 0) {
    DAT_04878b10 = 0;
    DAT_04878b18 = 0;
    DAT_04878b00 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878b00;
    DAT_04878b08 = &DAT_046761d8;
    DAT_04878b20 = 1;
  }
  return;
}


