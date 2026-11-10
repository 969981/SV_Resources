/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03032800; name: _INIT_605
 */


void _INIT_605(void)

{
  if ((DAT_04870ee8 & 1) == 0) {
    DAT_04870ed8 = 0;
    DAT_04870ee0 = 0;
    DAT_04870ec8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870ec8;
    DAT_04870ed0 = &DAT_0463e778;
    DAT_04870ee8 = 1;
  }
  return;
}


