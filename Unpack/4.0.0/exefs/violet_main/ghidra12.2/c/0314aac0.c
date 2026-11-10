/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314aac0; name: _INIT_1061
 */


void _INIT_1061(void)

{
  if ((DAT_04878788 & 1) == 0) {
    DAT_04878778 = 0;
    DAT_04878780 = 0;
    DAT_04878768 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878768;
    DAT_04878770 = &DAT_04674e00;
    DAT_04878788 = 1;
  }
  return;
}


