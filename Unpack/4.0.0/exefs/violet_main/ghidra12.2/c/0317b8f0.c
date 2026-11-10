/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0317b8f0; name: _INIT_1443
 */


void _INIT_1443(void)

{
  if ((DAT_0487d000 & 1) == 0) {
    DAT_0487cff0 = 0;
    DAT_0487cff8 = 0;
    DAT_0487cfe0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487cfe0;
    DAT_0487cfe8 = &DAT_046943d0;
    DAT_0487d000 = 1;
  }
  return;
}


