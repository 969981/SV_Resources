/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00862560; name: _INIT_100
 */


void _INIT_100(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_047d1c08;
  puVar1 = PTR_DAT_047d1c00;
  if ((*PTR_DAT_047d1c00 & 1) == 0) {
    *(undefined8 *)PTR_DAT_047d1c08 = 0;
    *(undefined4 *)(puVar2 + 8) = 0;
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


