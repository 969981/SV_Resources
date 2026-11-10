/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00249080; name: _INIT_3
 */


void _INIT_3(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047cc120;
  nn::os::InitializeSemaphore((SemaphoreType *)PTR_DAT_047cc120,1,1);
  FUN_00100190(PTR_LAB_047cc138,puVar1,&PTR_LOOP_04483000);
  return;
}


