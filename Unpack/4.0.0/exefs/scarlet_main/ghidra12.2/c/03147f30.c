/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


