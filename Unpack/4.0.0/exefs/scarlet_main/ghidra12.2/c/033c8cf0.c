/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033c8cf0; name: _INIT_2090
 */


void _INIT_2090(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d1da8;
  DAT_048ae990 = *(undefined8 *)PTR_DAT_047d1da8;
  DAT_048ae998 = 2;
  DAT_048ae9a0 = 200;
  DAT_048ae9a8 = &LAB_033c8a20;
  DAT_048ae9b0 = &LAB_033c8a70;
  memset(&DAT_048ae9b8,0,0x48);
  *(undefined8 **)puVar1 = &DAT_048ae990;
  return;
}


