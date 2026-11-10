/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03145d10; name: _INIT_873
 */


void _INIT_873(void)

{
  if ((DAT_04876a28 & 1) == 0) {
    DAT_04876a18 = 0;
    DAT_04876a20 = 0;
    DAT_04876a08 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04876a08;
    DAT_04876a10 = &DAT_04669750;
    DAT_04876a28 = 1;
  }
  return;
}


