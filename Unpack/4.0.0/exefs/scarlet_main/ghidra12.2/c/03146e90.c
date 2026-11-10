/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03146e90; name: _INIT_914
 */


void _INIT_914(void)

{
  if ((DAT_04877090 & 1) == 0) {
    DAT_04877080 = 0;
    DAT_04877088 = 0;
    DAT_04877070 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877070;
    DAT_04877078 = &DAT_0466bde0;
    DAT_04877090 = 1;
  }
  return;
}


