/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03263e40; name: _INIT_1809
 */


void _INIT_1809(void)

{
  if ((DAT_04889a70 & 1) == 0) {
    DAT_04889a60 = 0;
    DAT_04889a68 = 0;
    DAT_04889a50 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04889a50;
    DAT_04889a58 = &DAT_046c2fd0;
    DAT_04889a70 = 1;
  }
  return;
}


