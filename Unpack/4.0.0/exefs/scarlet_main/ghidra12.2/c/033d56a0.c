/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033d56a0; name: _INIT_2094
 */


void _INIT_2094(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d1da8;
  DAT_048aeb50 = *(undefined8 *)PTR_DAT_047d1da8;
  DAT_048aeb58 = 3;
  DAT_048aeb60 = 0x76;
  DAT_048aeb68 = PTR_LAB_047e6ae8;
  DAT_048aeb70 = PTR_LAB_047e6af0;
  memset(&DAT_048aeb78,0,0x48);
  *(undefined8 **)puVar1 = &DAT_048aeb50;
  return;
}


