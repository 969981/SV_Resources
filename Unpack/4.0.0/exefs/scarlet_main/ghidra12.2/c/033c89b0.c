/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033c89b0; name: _INIT_2089
 */


void _INIT_2089(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d1da8;
  DAT_048ae920 = *(undefined8 *)PTR_DAT_047d1da8;
  DAT_048ae928 = 2;
  DAT_048ae930 = 0x65;
  DAT_048ae938 = &LAB_033c8320;
  DAT_048ae940 = &LAB_033c82e0;
  memset(&DAT_048ae948,0,0x48);
  *(undefined8 **)puVar1 = &DAT_048ae920;
  return;
}


