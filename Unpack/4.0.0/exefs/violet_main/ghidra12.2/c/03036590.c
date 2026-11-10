/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03036590; name: _INIT_802
 */


void _INIT_802(void)

{
  if ((DAT_04872db0 & 1) == 0) {
    DAT_04872da0 = 0;
    DAT_04872da8 = 0;
    DAT_04872d90 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872d90;
    DAT_04872d98 = &DAT_0464a660;
    DAT_04872db0 = 1;
  }
  return;
}


