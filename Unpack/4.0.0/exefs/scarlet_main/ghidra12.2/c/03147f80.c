/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03147f80; name: _INIT_946
 */


void _INIT_946(void)

{
  if ((DAT_04877590 & 1) == 0) {
    DAT_04877580 = 0;
    DAT_04877588 = 0;
    DAT_04877570 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877570;
    DAT_04877578 = &DAT_0466daf0;
    DAT_04877590 = 1;
  }
  return;
}


