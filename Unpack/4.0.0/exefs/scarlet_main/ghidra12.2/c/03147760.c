/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03147760; name: _INIT_932
 */


void _INIT_932(void)

{
  if ((DAT_04877360 & 1) == 0) {
    DAT_04877350 = 0;
    DAT_04877358 = 0;
    DAT_04877340 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877340;
    DAT_04877348 = &DAT_0466cd88;
    DAT_04877360 = 1;
  }
  return;
}


