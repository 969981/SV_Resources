/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031f86f0; name: _INIT_1639
 */


void _INIT_1639(void)

{
  if ((DAT_04884dc8 & 1) == 0) {
    DAT_04884db8 = 0;
    DAT_04884dc0 = 0;
    DAT_04884da8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04884da8;
    DAT_04884db0 = &DAT_046a7ce8;
    DAT_04884dc8 = 1;
  }
  return;
}


