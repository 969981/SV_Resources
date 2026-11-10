/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03178c80; name: _INIT_1389
 */


void _INIT_1389(void)

{
  if ((DAT_0487c790 & 1) == 0) {
    DAT_0487c780 = 0;
    DAT_0487c788 = 0;
    DAT_0487c770 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c770;
    DAT_0487c778 = &DAT_04690fd0;
    DAT_0487c790 = 1;
  }
  return;
}


