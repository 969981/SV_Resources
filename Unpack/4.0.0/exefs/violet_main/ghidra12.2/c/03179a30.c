/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03179a30; name: _INIT_1413
 */


void _INIT_1413(void)

{
  if ((DAT_0487cb50 & 1) == 0) {
    DAT_0487cb40 = 0;
    DAT_0487cb48 = 0;
    DAT_0487cb30 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487cb30;
    DAT_0487cb38 = &DAT_04692900;
    DAT_0487cb50 = 1;
  }
  return;
}


