/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03036540; name: _INIT_801
 */


void _INIT_801(void)

{
  if ((DAT_04872d88 & 1) == 0) {
    DAT_04872d78 = 0;
    DAT_04872d80 = 0;
    DAT_04872d68 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872d68;
    DAT_04872d70 = &DAT_0464a568;
    DAT_04872d88 = 1;
  }
  return;
}


