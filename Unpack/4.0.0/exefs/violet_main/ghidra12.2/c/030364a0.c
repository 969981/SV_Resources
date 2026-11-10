/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030364a0; name: _INIT_799
 */


void _INIT_799(void)

{
  if ((DAT_04872d38 & 1) == 0) {
    DAT_04872d28 = 0;
    DAT_04872d30 = 0;
    DAT_04872d18 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872d18;
    DAT_04872d20 = &DAT_0464a410;
    DAT_04872d38 = 1;
  }
  return;
}


