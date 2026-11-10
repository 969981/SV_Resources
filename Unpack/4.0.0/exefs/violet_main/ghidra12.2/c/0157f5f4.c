/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0157f5f4; name: FUN_0157f5f4
 */


undefined8 FUN_0157f5f4(long param_1)

{
  MutexType *pMVar1;
  long *plVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  
  if (*(char *)(param_1 + 0x28) == '\0') {
LAB_0157f6c8:
    uVar5 = 1;
  }
  else {
    if (((*PTR_DAT_047d4c98 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4c98);
    }
    lVar7 = *(long *)PTR_DAT_047d4ca0;
    pMVar1 = (MutexType *)(lVar7 + 0x1a0);
    *(long *)PTR_DAT_047d4ca8 = lVar7;
    nn::os::LockMutex(pMVar1);
    plVar6 = *(long **)(lVar7 + 0x180);
    if (((plVar6 == (long *)0x0) || (plVar2 = (long *)(param_1 + 0x30), *plVar6 != *plVar2)) ||
       (plVar6[4] == 0)) {
      nn::os::UnlockMutex(pMVar1);
    }
    else {
      bVar3 = *(byte *)(plVar6[4] + 0x24a);
      nn::os::UnlockMutex(pMVar1);
      if ((bVar3 & 1) != 0) {
        *(undefined1 *)(param_1 + 0x28) = 0;
        iVar4 = FUN_0157f718(lVar7,plVar2);
        if (iVar4 == 2) {
          FUN_0157f7bc(lVar7,plVar2);
        }
        FUN_0157f828(lVar7,plVar2);
        goto LAB_0157f6c8;
      }
    }
    uVar5 = 0;
  }
  return uVar5;
}


