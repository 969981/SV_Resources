/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03146df0; name: _INIT_912
 */


void _INIT_912(void)

{
  if ((DAT_04877040 & 1) == 0) {
    DAT_04877030 = 0;
    DAT_04877038 = 0;
    DAT_04877020 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877020;
    DAT_04877028 = &DAT_0466bba0;
    DAT_04877040 = 1;
  }
  return;
}


