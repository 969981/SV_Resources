/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03031780; name: _INIT_552
 */


void _INIT_552(void)

{
  if ((DAT_048706b0 & 1) == 0) {
    DAT_048706a0 = 0;
    DAT_048706a8 = 0;
    DAT_04870690 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870690;
    DAT_04870698 = &DAT_0463b460;
    DAT_048706b0 = 1;
  }
  return;
}


