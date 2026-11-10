/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03148f70; name: _INIT_986
 */


void _INIT_986(void)

{
  if ((DAT_04877bd0 & 1) == 0) {
    DAT_04877bc0 = 0;
    DAT_04877bc8 = 0;
    DAT_04877bb0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877bb0;
    DAT_04877bb8 = &DAT_04670348;
    DAT_04877bd0 = 1;
  }
  return;
}


