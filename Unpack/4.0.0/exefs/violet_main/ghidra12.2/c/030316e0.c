/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030316e0; name: _INIT_550
 */


void _INIT_550(void)

{
  if ((DAT_04870660 & 1) == 0) {
    DAT_04870650 = 0;
    DAT_04870658 = 0;
    DAT_04870640 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870640;
    DAT_04870648 = &DAT_0463b2a0;
    DAT_04870660 = 1;
  }
  return;
}


