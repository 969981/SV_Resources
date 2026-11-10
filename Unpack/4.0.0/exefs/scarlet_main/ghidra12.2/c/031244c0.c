/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031244c0; name: _INIT_846
 */


void _INIT_846(void)

{
  if ((DAT_04873560 & 1) == 0) {
    DAT_04873550 = 0;
    DAT_04873558 = 0;
    DAT_04873540 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04873540;
    DAT_04873548 = &DAT_0464fc58;
    DAT_04873560 = 1;
  }
  return;
}


