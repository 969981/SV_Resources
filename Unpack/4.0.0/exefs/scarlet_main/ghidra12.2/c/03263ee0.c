/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03263ee0; name: _INIT_1811
 */


void _INIT_1811(void)

{
  if ((DAT_04889ac0 & 1) == 0) {
    DAT_04889ab0 = 0;
    DAT_04889ab8 = 0;
    DAT_04889aa0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04889aa0;
    DAT_04889aa8 = &DAT_046c3258;
    DAT_04889ac0 = 1;
  }
  return;
}


