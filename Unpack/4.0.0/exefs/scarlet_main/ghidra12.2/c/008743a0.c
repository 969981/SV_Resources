/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008743a0; name: _INIT_109
 */


void _INIT_109(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d1d30;
  if ((*PTR_DAT_047d1d30 & 1) == 0) {
    FUN_031fa07c(PTR_DAT_047d1d38,PTR_DAT_047d1d40);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


