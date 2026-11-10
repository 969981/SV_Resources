/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03467aec; name: FUN_03467aec
 */


int FUN_03467aec(undefined8 param_1,undefined8 param_2,uint param_3)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  
  lVar6 = *(long *)PTR_DAT_047e6f28;
  pMVar1 = (MutexType *)(lVar6 + 0xa8);
  nn::os::LockMutex(pMVar1);
  uVar2 = *(uint *)(lVar6 + 0xd0);
  if (uVar2 != 0) {
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = param_3 / uVar2;
    }
    for (plVar7 = *(long **)(*(long *)(lVar6 + 200) + (ulong)(param_3 - uVar3 * uVar2) * 8);
        plVar7 != (long *)0x0; plVar7 = (long *)plVar7[1]) {
      if (*(uint *)(plVar7 + 2) == param_3) {
        *(int *)((long)plVar7 + 0x14) = *(int *)((long)plVar7 + 0x14) + 1;
        nn::os::UnlockMutex(pMVar1);
        iVar5 = (int)plVar7[4];
        if (iVar5 == 0) {
          iVar4 = FUN_03467cbc(param_1,param_2,plVar7);
          if (iVar4 != 1) goto LAB_03467bd0;
          (**(code **)(*plVar7 + 0x10))(plVar7);
          iVar5 = (int)plVar7[4];
        }
        iVar4 = 1;
        *(int *)(plVar7 + 4) = iVar5 + 1;
LAB_03467bd0:
        (**(code **)(*plVar7 + 0x18))(plVar7);
        return iVar4;
      }
    }
  }
  nn::os::UnlockMutex(pMVar1);
  return 0xf;
}


