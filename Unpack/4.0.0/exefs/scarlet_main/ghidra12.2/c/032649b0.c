/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 032649b0; name: _INIT_1846
 */


void _INIT_1846(void)

{
  if ((DAT_0488a018 & 1) == 0) {
    DAT_0488a008 = 0;
    DAT_0488a010 = 0;
    DAT_04889ff8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04889ff8;
    DAT_0488a000 = &DAT_046c5660;
    DAT_0488a018 = 1;
  }
  return;
}


