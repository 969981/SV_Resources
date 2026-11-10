/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005f3cdc; name: FUN_005f3cdc
 */


undefined4 FUN_005f3cdc(undefined4 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_28;
  undefined4 uStack_24;
  
  if (((*PTR_DAT_047ceb78 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_047ceb78), puVar1 = PTR_DAT_047ceb80, iVar3 != 0)) {
    nn::os::InitializeMutex((MutexType *)PTR_DAT_047ceb80,false,0);
    FUN_00100190(PTR__Mutex_047cc198,puVar1,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047ceb78);
  }
  nn::os::LockMutex((MutexType *)PTR_DAT_047ceb80);
  uVar4 = FUN_005f4300();
                    /* try { // try from 005f3d18 to 005f3d23 has its CatchHandler @ 005f3d98 */
  local_28 = param_1;
  uStack_24 = param_2;
  uVar2 = FUN_002532b0(&local_28,uVar4,&local_28);
  nn::os::UnlockMutex((MutexType *)PTR_DAT_047ceb80);
  return uVar2;
}


