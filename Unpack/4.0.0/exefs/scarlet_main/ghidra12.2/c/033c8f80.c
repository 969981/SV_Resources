/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033c8f80; name: _INIT_2091
 */


void _INIT_2091(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d1da8;
  DAT_048aea00 = *(undefined8 *)PTR_DAT_047d1da8;
  DAT_048aea08 = 3;
  DAT_048aea10 = 0x83;
  DAT_048aea18 = PTR_LAB_047e6a08;
  DAT_048aea20 = PTR_LAB_047e6a10;
  memset(&DAT_048aea28,0,0x48);
  *(undefined8 **)puVar1 = &DAT_048aea00;
  return;
}


