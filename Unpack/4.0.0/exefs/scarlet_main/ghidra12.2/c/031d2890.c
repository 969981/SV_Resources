/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031d2890; name: _INIT_1592
 */


void _INIT_1592(void)

{
  if ((DAT_04883f30 & 1) == 0) {
    DAT_04883f20 = 0;
    DAT_04883f28 = 0;
    DAT_04883f10 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04883f10;
    DAT_04883f18 = &DAT_046a5470;
    DAT_04883f30 = 1;
  }
  return;
}


