/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03146e40; name: _INIT_913
 */


void _INIT_913(void)

{
  if ((DAT_04877068 & 1) == 0) {
    DAT_04877058 = 0;
    DAT_04877060 = 0;
    DAT_04877048 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877048;
    DAT_04877050 = &DAT_0466bcc0;
    DAT_04877068 = 1;
  }
  return;
}


