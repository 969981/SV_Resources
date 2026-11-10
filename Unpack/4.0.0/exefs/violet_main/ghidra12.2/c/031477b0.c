/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031477b0; name: _INIT_933
 */


void _INIT_933(void)

{
  if ((DAT_04877388 & 1) == 0) {
    DAT_04877378 = 0;
    DAT_04877380 = 0;
    DAT_04877368 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877368;
    DAT_04877370 = &DAT_0466ce68;
    DAT_04877388 = 1;
  }
  return;
}


