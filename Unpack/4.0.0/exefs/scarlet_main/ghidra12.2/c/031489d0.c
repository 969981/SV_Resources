/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031489d0; name: _INIT_968
 */


void _INIT_968(void)

{
  if ((DAT_04877900 & 1) == 0) {
    DAT_048778f0 = 0;
    DAT_048778f8 = 0;
    DAT_048778e0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048778e0;
    DAT_048778e8 = &DAT_0466ef90;
    DAT_04877900 = 1;
  }
  return;
}


