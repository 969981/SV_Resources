/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03263fd0; name: _INIT_1814
 */


void _INIT_1814(void)

{
  if ((DAT_04889b38 & 1) == 0) {
    DAT_04889b28 = 0;
    DAT_04889b30 = 0;
    DAT_04889b18 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04889b18;
    DAT_04889b20 = &DAT_046c35b0;
    DAT_04889b38 = 1;
  }
  return;
}


