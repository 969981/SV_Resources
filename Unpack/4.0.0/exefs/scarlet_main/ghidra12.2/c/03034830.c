/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03034830; name: _INIT_708
 */


void _INIT_708(void)

{
  if ((DAT_04871f00 & 1) == 0) {
    DAT_04871ef0 = 0;
    DAT_04871ef8 = 0;
    DAT_04871ee0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871ee0;
    DAT_04871ee8 = &DAT_046448c0;
    DAT_04871f00 = 1;
  }
  return;
}


