/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01489fa4; name: FUN_01489fa4
 */


undefined8 FUN_01489fa4(long param_1)

{
  MutexType *pMVar1;
  long *plVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar7 = *(long *)PTR_DAT_047d4ca0;
  pMVar1 = (MutexType *)(lVar7 + 0x160);
  *(long *)PTR_DAT_047d4ca8 = lVar7;
  nn::os::LockMutex(pMVar1);
  plVar6 = *(long **)(lVar7 + 0x140);
  if (((plVar6 == (long *)0x0) || (plVar2 = (long *)(param_1 + 0x50), *plVar6 != *plVar2)) ||
     (plVar6[4] == 0)) {
    nn::os::UnlockMutex(pMVar1);
  }
  else {
    bVar3 = *(byte *)(plVar6[4] + 0x24a);
    nn::os::UnlockMutex(pMVar1);
    if ((bVar3 & 1) != 0) {
      iVar4 = FUN_0148a0c0(lVar7,plVar2);
      uVar5 = 2;
      if (iVar4 != 4) {
        uVar5 = 3;
      }
      if (iVar4 == 2) {
        uVar5 = 1;
      }
      *(undefined4 *)(param_1 + 0x70) = uVar5;
      FUN_0148a164(lVar7,plVar2);
      return 1;
    }
  }
  return 0;
}


