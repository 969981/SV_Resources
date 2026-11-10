/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01fb216c; name: FUN_01fb216c
 */


undefined8 FUN_01fb216c(long param_1,ulong param_2)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  byte *pbVar5;
  undefined1 *local_28;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x128));
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar3 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar3;
  if ((lVar3 == 0) || (lVar3 = FUN_01fb2084(), lVar3 == 0)) {
    uVar4 = 0xffffffffffffffff;
  }
  else {
    pbVar5 = (&PTR_s_timestamp_0456a308)[param_2 & 0xffff];
    local_28 = &DAT_cbf29ce484222645;
    bVar1 = *pbVar5;
    while (bVar1 != 0) {
      pbVar5 = pbVar5 + 1;
      local_28 = (undefined1 *)(((ulong)local_28 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar5;
    }
    uVar4 = FUN_01fb2278(lVar3,&local_28);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x128));
  return uVar4;
}


