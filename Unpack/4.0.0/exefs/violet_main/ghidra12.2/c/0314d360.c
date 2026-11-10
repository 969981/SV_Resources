/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314d360; name: _INIT_1144
 */


void _INIT_1144(void)

{
  if ((DAT_04879480 & 1) == 0) {
    DAT_04879470 = 0;
    DAT_04879478 = 0;
    DAT_04879460 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879460;
    DAT_04879468 = &DAT_04679918;
    DAT_04879480 = 1;
  }
  return;
}


