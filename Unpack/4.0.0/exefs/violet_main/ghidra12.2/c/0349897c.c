/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0349897c; name: FUN_0349897c
 */


undefined8
FUN_0349897c(undefined8 param_1,long param_2,int param_3,uint param_4,undefined8 param_5,
            long param_6)

{
  MutexType *pMVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  
  uVar7 = *(uint *)(*(long *)PTR_DAT_047e6fd8 + 0x20);
  if (uVar7 != 0) {
    uVar3 = (int)param_2 + param_3;
    uVar4 = 0;
    if (uVar7 != 0) {
      uVar4 = uVar3 / uVar7;
    }
    for (plVar11 = *(long **)(*(long *)(*(long *)PTR_DAT_047e6fd8 + 0x18) +
                             (ulong)(uVar3 - uVar4 * uVar7) * 8); plVar11 != (long *)0x0;
        plVar11 = (long *)plVar11[2]) {
      if ((*plVar11 == param_2) && ((int)plVar11[1] == param_3)) {
        if ((int)plVar11[9] == 1) {
          return 0;
        }
        if ((param_3 != 7) && (param_3 != 0)) {
          return 0;
        }
        lVar9 = *(long *)PTR_DAT_047e6f28;
        pMVar1 = (MutexType *)(lVar9 + 0x188);
        nn::os::LockMutex(pMVar1);
        uVar7 = *(uint *)(lVar9 + 0x1b0);
        if (uVar7 != 0) {
          uVar3 = 0;
          if (uVar7 != 0) {
            uVar3 = param_4 / uVar7;
          }
          for (plVar10 = *(long **)(*(long *)(lVar9 + 0x1a8) + (ulong)(param_4 - uVar3 * uVar7) * 8)
              ; plVar10 != (long *)0x0; plVar10 = (long *)plVar10[1]) {
            if (*(uint *)(plVar10 + 2) == param_4) {
              *(int *)((long)plVar10 + 0x14) = *(int *)((long)plVar10 + 0x14) + 1;
              nn::os::UnlockMutex(pMVar1);
              uVar5 = (**(code **)(*plVar10 + 0x38))(plVar10);
              (**(code **)(*plVar10 + 0x18))(plVar10);
              if ((uVar5 & 1) == 0) {
                return 0;
              }
              uVar7 = *(uint *)(plVar11 + 0xb);
              if (uVar7 == 0) {
                uVar6 = 0;
              }
              else {
                lVar8 = plVar11[10];
                uVar6 = 0;
                lVar9 = lVar8 + 8;
                do {
                  if (*(uint *)(lVar9 + -4) == param_4) {
                    *(int *)(param_6 + 8) = param_3;
                    FUN_03498b14(lVar9,param_6 + 4,param_6);
                    lVar8 = plVar11[10];
                    uVar6 = 1;
                    uVar7 = *(uint *)(plVar11 + 0xb);
                  }
                  lVar2 = lVar9 + 0x18;
                  lVar9 = lVar9 + 0x20;
                } while (lVar2 != lVar8 + (ulong)uVar7 * 0x20);
              }
              return uVar6;
            }
          }
        }
        nn::os::UnlockMutex(pMVar1);
        return 0;
      }
    }
  }
  return 0;
}


