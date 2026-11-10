/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03264780; name: _INIT_1839
 */


void _INIT_1839(void)

{
  if ((DAT_04889f00 & 1) == 0) {
    DAT_04889ef0 = 0;
    DAT_04889ef8 = 0;
    DAT_04889ee0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04889ee0;
    DAT_04889ee8 = &DAT_046c5008;
    DAT_04889f00 = 1;
  }
  return;
}


