/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01fb2594; name: FUN_01fb2594
 */


undefined1  [16] FUN_01fb2594(long param_1,ulong param_2)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  byte *pbVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined1 *local_28;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x128));
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar7 = 0;
  auVar5 = ZEXT816(0xbff0000000000000);
  lVar3 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar3;
  if (lVar3 != 0) {
    lVar3 = FUN_01fb2084();
    auVar5._8_8_ = uVar7;
    auVar5._0_8_ = 0xbff0000000000000;
    if (lVar3 != 0) {
      pbVar4 = (&PTR_s_timestamp_0456a308)[param_2 & 0xffff];
      local_28 = &DAT_cbf29ce484222645;
      bVar1 = *pbVar4;
      while (bVar1 != 0) {
        pbVar4 = pbVar4 + 1;
        local_28 = (undefined1 *)(((ulong)local_28 ^ (ulong)bVar1) * 0x100000001b3);
        bVar1 = *pbVar4;
      }
      auVar5 = FUN_01fb269c(lVar3,&local_28);
    }
  }
  uVar7 = auVar5._8_8_;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x128));
  auVar6._8_8_ = uVar7;
  auVar6._0_8_ = auVar5._0_8_;
  return auVar6;
}


