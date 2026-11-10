/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03034470; name: _INIT_696
 */


void _INIT_696(void)

{
  if ((DAT_04871d20 & 1) == 0) {
    DAT_04871d10 = 0;
    DAT_04871d18 = 0;
    DAT_04871d00 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871d00;
    DAT_04871d08 = &DAT_04643de8;
    DAT_04871d20 = 1;
  }
  return;
}


