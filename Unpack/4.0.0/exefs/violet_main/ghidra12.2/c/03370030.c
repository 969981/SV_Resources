/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03370030; name: _INIT_2053
 */


void _INIT_2053(void)

{
  if ((DAT_0488dad0 & 1) == 0) {
    DAT_0488dac0 = 0;
    DAT_0488dac8 = 0;
    DAT_0488dab0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488dab0;
    DAT_0488dab8 = &DAT_047ade98;
    DAT_0488dad0 = 1;
  }
  return;
}


