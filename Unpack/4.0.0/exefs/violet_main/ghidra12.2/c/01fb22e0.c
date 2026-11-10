/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01fb22e0; name: FUN_01fb22e0
 */


void FUN_01fb22e0(undefined8 param_1,long param_2,ulong param_3)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  byte *pbVar4;
  undefined1 *local_28;
  
  nn::os::LockMutex((MutexType *)(param_2 + 0x128));
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar3 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar3;
  if ((lVar3 != 0) && (lVar3 = FUN_01fb2084(), lVar3 != 0)) {
    pbVar4 = (&PTR_s_timestamp_0456a308)[param_3 & 0xffff];
    local_28 = &DAT_cbf29ce484222645;
    bVar1 = *pbVar4;
    while (bVar1 != 0) {
      pbVar4 = pbVar4 + 1;
      local_28 = (undefined1 *)(((ulong)local_28 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar4;
    }
    FUN_01fb23e4(param_1,lVar3,&local_28);
  }
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x128));
  return;
}


