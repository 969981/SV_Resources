/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03031280; name: _INIT_536
 */


void _INIT_536(void)

{
  if ((DAT_04870430 & 1) == 0) {
    DAT_04870420 = 0;
    DAT_04870428 = 0;
    DAT_04870410 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870410;
    DAT_04870418 = &DAT_0463a588;
    DAT_04870430 = 1;
  }
  return;
}


