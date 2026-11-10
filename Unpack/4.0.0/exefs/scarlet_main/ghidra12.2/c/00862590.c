/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00862590; name: _INIT_101
 */


void _INIT_101(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d1c10;
  if ((*PTR_DAT_047d1c10 & 1) == 0) {
    FUN_031fa07c(PTR_DAT_047d1c18,PTR_DAT_047d1c20);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


