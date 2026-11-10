/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031d2c3c; name: FUN_031d2c3c
 */


void FUN_031d2c3c(long param_1)

{
  MutexType *pMVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  size_t sVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  char *__s;
  long lVar9;
  long *plVar10;
  
  puVar4 = PTR_DAT_047e4880;
  lVar9 = 0;
  do {
    pMVar1 = (MutexType *)(param_1 + lVar9 * 0x20 + 0x140);
    nn::os::LockMutex(pMVar1);
    lVar6 = param_1 + lVar9 * 0x10;
    plVar10 = (long *)(lVar6 + 0xe0);
    if ((long *)*plVar10 != (long *)0x0) {
      plVar2 = (long *)(lVar6 + 0xe8);
      plVar7 = (long *)*plVar10;
      do {
        plVar3 = (long *)plVar7[1];
        if ((ulong)plVar7[2] < 4) {
          lVar6 = *plVar7;
          if (lVar6 != 0) {
            *(long **)(lVar6 + 8) = plVar3;
          }
          if (plVar3 != (long *)0x0) {
            *plVar3 = lVar6;
          }
          if ((long *)*plVar10 == plVar7) {
            *plVar10 = (long)plVar3;
          }
          if ((long *)*plVar2 == plVar7) {
            *plVar2 = lVar6;
          }
          plVar8 = *(long **)(puVar4 + 0x30);
          __s = (char *)plVar7[4];
          if (__s != (char *)0x0) {
            sVar5 = strlen(__s);
            (**(code **)(*plVar8 + 0x18))(plVar8,__s,(long)((int)sVar5 + 1));
          }
          (**(code **)(*plVar8 + 0x18))(plVar8,plVar7,0x38);
        }
        plVar7 = plVar3;
      } while (plVar3 != (long *)0x0);
    }
    nn::os::UnlockMutex(pMVar1);
    lVar9 = lVar9 + 1;
  } while (lVar9 != 6);
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x1e0));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x1c0));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x1a0));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x180));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x160));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x140));
  return;
}


