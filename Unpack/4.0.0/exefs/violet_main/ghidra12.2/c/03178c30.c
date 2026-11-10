/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03178c30; name: _INIT_1388
 */


void _INIT_1388(void)

{
  if ((DAT_0487c768 & 1) == 0) {
    DAT_0487c758 = 0;
    DAT_0487c760 = 0;
    DAT_0487c748 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c748;
    DAT_0487c750 = &DAT_04690e58;
    DAT_0487c768 = 1;
  }
  return;
}


