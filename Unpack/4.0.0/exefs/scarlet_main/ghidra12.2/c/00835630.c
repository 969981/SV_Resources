/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00835630; name: _INIT_92
 */


void _INIT_92(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d1b10;
  if ((*PTR_DAT_047d1b10 & 1) == 0) {
    FUN_031fa07c(PTR_DAT_047d1b18,PTR_DAT_047d1b20);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


