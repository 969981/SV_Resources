/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030344c0; name: _INIT_697
 */


void _INIT_697(void)

{
  if ((DAT_04871d48 & 1) == 0) {
    DAT_04871d38 = 0;
    DAT_04871d40 = 0;
    DAT_04871d28 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871d28;
    DAT_04871d30 = &DAT_04643ee0;
    DAT_04871d48 = 1;
  }
  return;
}


