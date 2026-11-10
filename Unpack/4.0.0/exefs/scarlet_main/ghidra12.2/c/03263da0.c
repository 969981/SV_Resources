/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03263da0; name: _INIT_1807
 */


void _INIT_1807(void)

{
  if ((DAT_04889a20 & 1) == 0) {
    DAT_04889a10 = 0;
    DAT_04889a18 = 0;
    DAT_04889a00 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04889a00;
    DAT_04889a08 = &DAT_046c2db8;
    DAT_04889a20 = 1;
  }
  return;
}


