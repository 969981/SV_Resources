/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03148d90; name: _INIT_980
 */


void _INIT_980(void)

{
  if ((DAT_04877ae0 & 1) == 0) {
    DAT_04877ad0 = 0;
    DAT_04877ad8 = 0;
    DAT_04877ac0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877ac0;
    DAT_04877ac8 = &DAT_0466fca8;
    DAT_04877ae0 = 1;
  }
  return;
}


