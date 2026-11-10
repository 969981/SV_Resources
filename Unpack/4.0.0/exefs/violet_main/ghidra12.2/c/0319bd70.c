/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0319bd70; name: _INIT_1509
 */


void _INIT_1509(void)

{
  if ((DAT_0487e380 & 1) == 0) {
    DAT_0487e370 = 0;
    DAT_0487e378 = 0;
    DAT_0487e360 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487e360;
    DAT_0487e368 = &DAT_0469e878;
    DAT_0487e380 = 1;
  }
  return;
}


