/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03178460; name: _INIT_1363
 */


void _INIT_1363(void)

{
  if ((DAT_0487c380 & 1) == 0) {
    DAT_0487c370 = 0;
    DAT_0487c378 = 0;
    DAT_0487c360 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c360;
    DAT_0487c368 = &DAT_0468f430;
    DAT_0487c380 = 1;
  }
  return;
}


