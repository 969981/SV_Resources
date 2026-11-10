/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03147f30; name: _INIT_945
 */


void _INIT_945(void)

{
  if ((DAT_04877568 & 1) == 0) {
    DAT_04877558 = 0;
    DAT_04877560 = 0;
    DAT_04877548 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877548;
    DAT_04877550 = &DAT_0466da30;
    DAT_04877568 = 1;
  }
  return;
}


