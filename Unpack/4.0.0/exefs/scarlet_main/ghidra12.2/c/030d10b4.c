/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030d10b4; name: FUN_030d10b4
 */


void FUN_030d10b4(long param_1,long param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  MutexType *pMVar7;
  long *plVar8;
  long lVar9;
  
  if (param_2 == param_3) {
    return;
  }
  iVar5 = (int)((ulong)(param_3 - param_2) >> 4);
  if (1 < iVar5) {
    FUN_030d2a80(param_2,0,iVar5 + -1,&LAB_030d11f8);
  }
  pMVar7 = *(MutexType **)(param_1 + 0x28);
  nn::os::LockMutex(pMVar7);
  puVar4 = PTR_PTR_047d1a50;
  do {
    plVar8 = *(long **)(param_2 + 8);
    if (plVar8 != (long *)0x0) {
      if (plVar8[1] != 0) {
        plVar1 = plVar8 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lVar9 = *(long *)(*(long *)(param_1 + 0x18) + (ulong)*(byte *)(plVar8 + 3) * 8);
      if (plVar8[1] != 0) {
        plVar1 = plVar8 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      iVar5 = *(int *)(lVar9 + 0x58);
      lVar6 = (long)iVar5;
      if ((int)(*(uint *)(lVar9 + 0x5c) & 0x7fffffff) <= iVar5) {
        FUN_030d1ea8(lVar9 + 0x50,puVar4,lVar6 + 1);
        iVar5 = *(int *)(lVar9 + 0x58);
      }
      *(long **)(*(long *)(lVar9 + 0x50) + (long)iVar5 * 8) = plVar8;
      *(int *)(lVar9 + 0x58) = (int)(lVar6 + 1);
      if (plVar8[1] != 0) {
        plVar1 = plVar8 + 2;
        do {
          lVar9 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (**(code **)(*plVar8 + 0x18))(plVar8);
        }
      }
    }
    param_2 = param_2 + 0x10;
  } while (param_2 != param_3);
  nn::os::UnlockMutex(pMVar7);
  return;
}


