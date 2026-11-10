/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03147940; name: _INIT_938
 */


void _INIT_938(void)

{
  if ((DAT_04877450 & 1) == 0) {
    DAT_04877440 = 0;
    DAT_04877448 = 0;
    DAT_04877430 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877430;
    DAT_04877438 = &DAT_0466d3e0;
    DAT_04877450 = 1;
  }
  return;
}


