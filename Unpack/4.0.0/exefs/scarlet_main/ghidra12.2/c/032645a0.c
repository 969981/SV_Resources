/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 032645a0; name: _INIT_1833
 */


void _INIT_1833(void)

{
  if ((DAT_04889e10 & 1) == 0) {
    DAT_04889e00 = 0;
    DAT_04889e08 = 0;
    DAT_04889df0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04889df0;
    DAT_04889df8 = &DAT_046c4988;
    DAT_04889e10 = 1;
  }
  return;
}


