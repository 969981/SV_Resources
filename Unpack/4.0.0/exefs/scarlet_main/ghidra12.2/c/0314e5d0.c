/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314e5d0; name: _INIT_1203
 */


void _INIT_1203(void)

{
  if ((DAT_04879db8 & 1) == 0) {
    DAT_04879da8 = 0;
    DAT_04879db0 = 0;
    DAT_04879d98 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879d98;
    DAT_04879da0 = &DAT_0467d390;
    DAT_04879db8 = 1;
  }
  return;
}


