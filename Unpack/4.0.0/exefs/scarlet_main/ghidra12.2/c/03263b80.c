/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03263b80; name: _INIT_1800
 */


void _INIT_1800(void)

{
  if ((DAT_04889918 & 1) == 0) {
    DAT_04889908 = 0;
    DAT_04889910 = 0;
    DAT_048898f8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048898f8;
    DAT_04889900 = &DAT_046c27e8;
    DAT_04889918 = 1;
  }
  return;
}


