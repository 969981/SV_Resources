/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030345b0; name: _INIT_700
 */


void _INIT_700(void)

{
  if ((DAT_04871dc0 & 1) == 0) {
    DAT_04871db0 = 0;
    DAT_04871db8 = 0;
    DAT_04871da0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871da0;
    DAT_04871da8 = &DAT_046441c8;
    DAT_04871dc0 = 1;
  }
  return;
}


