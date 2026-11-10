/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03031960; name: _INIT_558
 */


void _INIT_558(void)

{
  if ((DAT_048707a0 & 1) == 0) {
    DAT_04870790 = 0;
    DAT_04870798 = 0;
    DAT_04870780 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870780;
    DAT_04870788 = &DAT_0463ba40;
    DAT_048707a0 = 1;
  }
  return;
}


