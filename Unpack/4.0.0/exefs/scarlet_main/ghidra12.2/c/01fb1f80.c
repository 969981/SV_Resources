/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01fb1f80; name: FUN_01fb1f80
 */


void FUN_01fb1f80(long param_1,ulong param_2,undefined8 param_3)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  byte *pbVar4;
  undefined1 *local_18;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x128));
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar3 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar3;
  if ((lVar3 != 0) && (lVar3 = FUN_01fb2084(), lVar3 != 0)) {
    pbVar4 = (&PTR_s_timestamp_0456a308)[param_2 & 0xffff];
    local_18 = &DAT_cbf29ce484222645;
    bVar1 = *pbVar4;
    while (bVar1 != 0) {
      pbVar4 = pbVar4 + 1;
      local_18 = (undefined1 *)(((ulong)local_18 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar4;
    }
    FUN_01fb20f4(lVar3,&local_18,param_3);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x128));
  return;
}


