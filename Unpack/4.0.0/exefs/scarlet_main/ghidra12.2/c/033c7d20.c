/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033c7d20; name: _INIT_2088
 */


void _INIT_2088(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d1da8;
  DAT_048ae8b0 = *(undefined8 *)PTR_DAT_047d1da8;
  DAT_048ae8b8 = 2;
  DAT_048ae8c0 = 100;
  DAT_048ae8c8 = &LAB_033c7840;
  DAT_048ae8d0 = &LAB_033c7880;
  memset(&DAT_048ae8d8,0,0x48);
  *(undefined8 **)puVar1 = &DAT_048ae8b0;
  return;
}


