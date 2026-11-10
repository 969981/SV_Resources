/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


