/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03264820; name: _INIT_1841
 */


void _INIT_1841(void)

{
  if ((DAT_04889f50 & 1) == 0) {
    DAT_04889f40 = 0;
    DAT_04889f48 = 0;
    DAT_04889f30 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04889f30;
    DAT_04889f38 = &DAT_046c5200;
    DAT_04889f50 = 1;
  }
  return;
}


