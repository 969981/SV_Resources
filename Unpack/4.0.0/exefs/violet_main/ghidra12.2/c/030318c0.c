/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030318c0; name: _INIT_556
 */


void _INIT_556(void)

{
  if ((DAT_04870750 & 1) == 0) {
    DAT_04870740 = 0;
    DAT_04870748 = 0;
    DAT_04870730 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870730;
    DAT_04870738 = &DAT_0463b830;
    DAT_04870750 = 1;
  }
  return;
}


