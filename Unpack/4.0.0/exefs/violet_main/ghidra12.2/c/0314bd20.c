/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314bd20; name: _INIT_1097
 */


void _INIT_1097(void)

{
  if ((DAT_04878d28 & 1) == 0) {
    DAT_04878d18 = 0;
    DAT_04878d20 = 0;
    DAT_04878d08 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878d08;
    DAT_04878d10 = &DAT_04676d20;
    DAT_04878d28 = 1;
  }
  return;
}


