/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030321d0; name: _INIT_585
 */


void _INIT_585(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_047e4c30;
  puVar1 = PTR_DAT_047e4c28;
  if ((*PTR_DAT_047e4c28 & 1) == 0) {
    *(undefined4 *)(PTR_DAT_047e4c30 + 8) = 1;
    *(undefined ***)puVar2 = &PTR_LAB_0463d4e8;
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


