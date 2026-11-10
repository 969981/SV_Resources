/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033f9ea0; name: _INIT_2103
 */


void _INIT_2103(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d1da8;
  DAT_048aef50 = *(undefined8 *)PTR_DAT_047d1da8;
  DAT_048aef58 = 3;
  DAT_048aef60 = 0x8b;
  DAT_048aef68 = PTR_LAB_047e6b98;
  DAT_048aef70 = PTR_LAB_047e6ba0;
  memset(&DAT_048aef78,0,0x48);
  *(undefined8 **)puVar1 = &DAT_048aef50;
  return;
}


