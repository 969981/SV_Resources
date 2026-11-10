/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03264410; name: _INIT_1828
 */


void _INIT_1828(void)

{
  if ((DAT_04889d48 & 1) == 0) {
    DAT_04889d38 = 0;
    DAT_04889d40 = 0;
    DAT_04889d28 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04889d28;
    DAT_04889d30 = &DAT_046c4448;
    DAT_04889d48 = 1;
  }
  return;
}


