/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03149880; name: _INIT_1015
 */


void _INIT_1015(void)

{
  if ((DAT_04878058 & 1) == 0) {
    DAT_04878048 = 0;
    DAT_04878050 = 0;
    DAT_04878038 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878038;
    DAT_04878040 = &DAT_04672148;
    DAT_04878058 = 1;
  }
  return;
}


