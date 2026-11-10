/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00884070; name: _INIT_114
 */


void _INIT_114(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d1ec0;
  nn::os::InitializeMutex((MutexType *)PTR_DAT_047d1ec0,true,0);
  FUN_00100190(PTR_LAB_047d1ee8,puVar1,&PTR_LOOP_04483000);
  puVar1 = PTR_DAT_047d1ec8;
  *(undefined8 *)PTR_DAT_047d1ec8 = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  return;
}


