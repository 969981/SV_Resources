/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005e6370; name: _INIT_58
 */


void _INIT_58(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  FUN_00100190(PTR_FUN_047cea88,PTR_DAT_047cea30,&PTR_LOOP_04483000);
  puVar1 = PTR_DAT_047cea20;
  nn::os::InitializeMutex((MutexType *)PTR_DAT_047cea20,false,0);
  FUN_00100190(PTR__Mutex_047cc198,puVar1,&PTR_LOOP_04483000);
  puVar3 = PTR_DAT_047ceaa0;
  puVar2 = PTR_DAT_047cea98;
  puVar1 = PTR_DAT_047cea48;
  *(undefined8 *)PTR_DAT_047cea40 = *(undefined8 *)PTR_DAT_047cea90;
  *(undefined8 *)puVar1 = *(undefined8 *)puVar3;
  *(undefined8 *)PTR_DAT_047cea38 = *(undefined8 *)puVar2;
  return;
}


