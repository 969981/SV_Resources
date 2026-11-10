/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006c6558; name: FUN_006c6558
 */


bool FUN_006c6558(undefined8 *param_1,long *param_2)

{
  MutexType *pMVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  
  pMVar1 = (MutexType *)(param_1 + 0x14);
  *param_2 = 0;
  nn::os::LockMutex(pMVar1);
  plVar2 = param_1 + 3;
  if ((long *)param_1[4] != plVar2) {
    *param_2 = ((long *)param_1[4])[4];
    plVar5 = *(long **)(param_1[4] + 0x20);
    plVar4 = (long *)plVar5[1];
    lVar7 = *plVar4;
    *(long **)(*plVar5 + 8) = plVar4;
    *plVar4 = *plVar5;
    *(long **)(lVar7 + 8) = plVar5;
    *plVar5 = lVar7;
    plVar4 = (long *)param_1[4];
    if ((plVar4 != plVar2) && ((long *)plVar4[4] == plVar4 + 3)) {
      plVar5 = (long *)plVar4[1];
      lVar7 = *plVar5;
      *(long **)(*plVar4 + 8) = plVar5;
      *plVar5 = *plVar4;
      *(long **)(lVar7 + 8) = plVar4;
      *plVar4 = lVar7;
      (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,plVar4,0x28,8);
      plVar4 = (long *)param_1[4];
      if (plVar4 != plVar2) {
        plVar5 = (long *)plVar4[1];
        lVar7 = *plVar5;
        *(long **)(*plVar4 + 8) = plVar5;
        *plVar5 = *plVar4;
        *(long **)(lVar7 + 8) = plVar4;
        plVar5 = plVar4 + 3;
        *plVar4 = lVar7;
        if (plVar5 != (long *)plVar4[4]) {
          plVar3 = param_1 + 1;
          plVar8 = (long *)plVar4[4];
          do {
            if (plVar8 == plVar5) {
              plVar6 = plVar5;
            }
            else {
              plVar6 = (long *)plVar8[1];
              lVar7 = *plVar6;
              *(long **)(*plVar8 + 8) = plVar6;
              *plVar6 = *plVar8;
              *(long **)(lVar7 + 8) = plVar8;
              *plVar8 = lVar7;
            }
            lVar7 = *plVar8;
            *plVar8 = *plVar3;
            *(long **)(lVar7 + 8) = plVar3;
            *(long **)(*plVar3 + 8) = plVar8;
            *plVar3 = lVar7;
            plVar8 = plVar6;
          } while (plVar6 != plVar5);
        }
        nn::os::LockMutex(pMVar1);
        if ((((long *)param_1[4] == plVar2) && (*(char *)(param_1 + 0x22) == '\0')) &&
           ((undefined8 *)param_1[2] == param_1 + 1)) {
          nn::os::ClearEvent((EventType *)(param_1 + 5));
        }
        else {
          nn::os::SignalEvent((EventType *)(param_1 + 5));
        }
        nn::os::UnlockMutex(pMVar1);
        (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,plVar4,0x28,8);
      }
    }
  }
  nn::os::UnlockMutex(pMVar1);
  return *param_2 != 0;
}


