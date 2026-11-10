/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03264a00; name: _INIT_1847
 */


void _INIT_1847(void)

{
  if ((DAT_0488a040 & 1) == 0) {
    DAT_0488a030 = 0;
    DAT_0488a038 = 0;
    DAT_0488a020 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488a020;
    DAT_0488a028 = &DAT_046c5738;
    DAT_0488a040 = 1;
  }
  return;
}


