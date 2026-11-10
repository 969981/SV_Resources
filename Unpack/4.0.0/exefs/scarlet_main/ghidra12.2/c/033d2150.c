/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033d2150; name: _INIT_2093
 */


void _INIT_2093(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d1da8;
  DAT_048aeae0 = *(undefined8 *)PTR_DAT_047d1da8;
  DAT_048aeae8 = 3;
  DAT_048aeaf0 = 0x87;
  DAT_048aeaf8 = PTR_LAB_047e6ad8;
  DAT_048aeb00 = PTR_LAB_047e6ae0;
  memset(&DAT_048aeb08,0,0x48);
  *(undefined8 **)puVar1 = &DAT_048aeae0;
  return;
}


