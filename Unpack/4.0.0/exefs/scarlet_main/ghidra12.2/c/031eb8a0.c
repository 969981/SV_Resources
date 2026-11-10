/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031eb8a0; name: _INIT_1623
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_1623(void)

{
  if ((DAT_04884a20 & 1) == 0) {
    DAT_04884a10 = &PTR_LAB_046a6c38;
    _DAT_04884a18 = 1;
    DAT_04884a20 = 1;
  }
  return;
}


