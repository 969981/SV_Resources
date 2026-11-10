/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0084cc50; name: _INIT_93
 */


void _INIT_93(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d1b58;
  if ((*PTR_DAT_047d1b58 & 1) == 0) {
    FUN_031fa07c(PTR_DAT_047d1b60,PTR_DAT_047d1b68);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


