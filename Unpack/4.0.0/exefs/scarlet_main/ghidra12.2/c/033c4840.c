/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033c4840; name: _INIT_2087
 */


void _INIT_2087(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d1da8;
  DAT_048ae840 = *(undefined8 *)PTR_DAT_047d1da8;
  DAT_048ae848 = 2;
  DAT_048ae850 = 0x94;
  DAT_048ae858 = PTR_LAB_047e69e8;
  DAT_048ae860 = PTR_LAB_047e69f0;
  memset(&DAT_048ae868,0,0x48);
  *(undefined8 **)puVar1 = &DAT_048ae840;
  return;
}


