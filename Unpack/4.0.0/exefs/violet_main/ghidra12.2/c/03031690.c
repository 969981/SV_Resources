/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03031690; name: _INIT_549
 */


void _INIT_549(void)

{
  if ((DAT_04870638 & 1) == 0) {
    DAT_04870628 = 0;
    DAT_04870630 = 0;
    DAT_04870618 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870618;
    DAT_04870620 = &DAT_0463b1c0;
    DAT_04870638 = 1;
  }
  return;
}


