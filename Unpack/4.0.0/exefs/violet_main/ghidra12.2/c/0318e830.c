/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0318e830; name: _INIT_1468
 */


void _INIT_1468(void)

{
  if ((DAT_0487d620 & 1) == 0) {
    DAT_0487d610 = 0;
    DAT_0487d618 = 0;
    DAT_0487d600 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487d600;
    DAT_0487d608 = &DAT_04697c88;
    DAT_0487d620 = 1;
  }
  return;
}


