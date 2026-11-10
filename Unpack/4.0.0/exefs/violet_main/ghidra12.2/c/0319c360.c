/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0319c360; name: _INIT_1528
 */


void _INIT_1528(void)

{
  if ((DAT_0487e678 & 1) == 0) {
    DAT_0487e668 = 0;
    DAT_0487e670 = 0;
    DAT_0487e658 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487e658;
    DAT_0487e660 = &DAT_0469fc40;
    DAT_0487e678 = 1;
  }
  return;
}


