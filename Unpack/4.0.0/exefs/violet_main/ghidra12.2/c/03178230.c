/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03178230; name: _INIT_1356
 */


void _INIT_1356(void)

{
  if ((DAT_0487c268 & 1) == 0) {
    DAT_0487c258 = 0;
    DAT_0487c260 = 0;
    DAT_0487c248 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c248;
    DAT_0487c250 = &DAT_0468ed10;
    DAT_0487c268 = 1;
  }
  return;
}


