/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03175c40; name: _INIT_1279
 */


void _INIT_1279(void)

{
  if ((DAT_0487b660 & 1) == 0) {
    DAT_0487b650 = 0;
    DAT_0487b658 = 0;
    DAT_0487b640 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487b640;
    DAT_0487b648 = &DAT_04689980;
    DAT_0487b660 = 1;
  }
  return;
}


