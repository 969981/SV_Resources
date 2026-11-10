/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0319c2c0; name: _INIT_1526
 */


void _INIT_1526(void)

{
  if ((DAT_0487e628 & 1) == 0) {
    DAT_0487e618 = 0;
    DAT_0487e620 = 0;
    DAT_0487e608 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487e608;
    DAT_0487e610 = &DAT_0469f9e8;
    DAT_0487e628 = 1;
  }
  return;
}


