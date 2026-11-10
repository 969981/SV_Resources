/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008d49b0; name: _INIT_119
 */


void _INIT_119(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d2548;
  nn::os::InitializeMutex((MutexType *)PTR_DAT_047d2548,false,0);
  FUN_00100190(PTR_LAB_047d2570,puVar1,&PTR_LOOP_04483000);
  return;
}


