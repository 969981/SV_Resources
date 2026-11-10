/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0054825c; name: FUN_0054825c
 */


void FUN_0054825c(long param_1,undefined8 param_2,undefined8 param_3)

{
  MutexType *pMVar1;
  long lVar2;
  char cVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined4 local_58;
  undefined1 local_54;
  
  plVar4 = (long *)FUN_01cf7e20();
  pMVar1 = (MutexType *)(param_1 + 0x168);
  lVar6 = 0;
  lVar8 = 0;
  do {
    nn::os::LockMutex(pMVar1);
    cVar3 = *(char *)(param_1 + 0x188);
    while (cVar3 == '\0') {
      nn::os::UnlockMutex(pMVar1);
      FUN_006c4ee0((EventType *)(param_1 + 0x140));
      nn::os::LockMutex(pMVar1);
      nn::os::ClearEvent((EventType *)(param_1 + 0x140));
      cVar3 = *(char *)(param_1 + 0x188);
    }
    lVar2 = *(long *)(param_1 + 0x1d8);
    lVar7 = *(long *)(param_1 + 0x1e0);
    *(long *)(param_1 + 0x1d8) = lVar6;
    *(long *)(param_1 + 0x1e0) = lVar6;
    lVar9 = *(long *)(param_1 + 0x1e8);
    *(long *)(param_1 + 0x1e8) = lVar8;
    *(undefined1 *)(param_1 + 0x188) = 0;
    nn::os::UnlockMutex(pMVar1);
    if (lVar2 != lVar7) {
      lVar6 = lVar2;
      do {
        local_58 = 0;
        local_54 = 0;
        uVar5 = FUN_005483b0(param_2,lVar6,&local_58);
        if ((uVar5 & 1) == 0) goto LAB_00548358;
        lVar6 = lVar6 + 0x28;
      } while (lVar7 != lVar6);
      while (lVar2 != lVar7) {
        lVar7 = lVar7 + -0x28;
        FUN_00573390(lVar7);
      }
    }
    uVar5 = FUN_006c50c4(param_3);
    lVar6 = lVar2;
    lVar8 = lVar9;
  } while ((uVar5 & 1) == 0);
  lVar7 = lVar2;
LAB_00548358:
  if (lVar2 != 0) {
    while (lVar7 != lVar2) {
      lVar7 = lVar7 + -0x28;
      FUN_00573390(lVar7);
    }
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar2,lVar9 - lVar2,8);
  }
  return;
}


