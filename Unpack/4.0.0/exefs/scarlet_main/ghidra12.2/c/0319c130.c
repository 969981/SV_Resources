/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0319c130; name: _INIT_1521
 */


void _INIT_1521(void)

{
  if ((DAT_0487e560 & 1) == 0) {
    DAT_0487e550 = 0;
    DAT_0487e558 = 0;
    DAT_0487e540 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487e540;
    DAT_0487e548 = &DAT_0469f468;
    DAT_0487e560 = 1;
  }
  return;
}


