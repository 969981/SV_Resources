/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03146ff0; name: _INIT_918
 */


void _INIT_918(void)

{
  if ((DAT_04877130 & 1) == 0) {
    DAT_04877120 = 0;
    DAT_04877128 = 0;
    DAT_04877110 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877110;
    DAT_04877118 = &DAT_0466c138;
    DAT_04877130 = 1;
  }
  return;
}


