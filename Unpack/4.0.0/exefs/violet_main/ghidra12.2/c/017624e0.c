/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017624e0; name: FUN_017624e0
 */


undefined8 FUN_017624e0(long param_1,long *param_2)

{
  MutexType *pMVar1;
  undefined4 *puVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined4 local_34;
  
  pMVar1 = (MutexType *)(param_1 + 0x80);
  nn::os::LockMutex(pMVar1);
  nn::os::LockMutex(pMVar1);
  lVar6 = *(long *)(param_1 + 8);
  if (lVar6 == *(long *)(param_1 + 0x10)) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    do {
      plVar3 = (long *)(lVar6 + 0x18);
      lVar6 = lVar6 + 0x30;
      lVar8 = lVar8 + *plVar3 + 4;
    } while (*(long *)(param_1 + 0x10) != lVar6);
  }
  nn::os::UnlockMutex(pMVar1);
  plVar3 = (long *)(**(code **)(*param_2 + 0x18))(param_2);
  plVar4 = (long *)(**(code **)(*plVar3 + 0x28))();
  uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,lVar8,plVar3[1]);
  if ((uVar5 & 1) == 0) {
    uVar7 = 0;
  }
  else {
    FUN_02b6a318(param_1);
    puVar2 = *(undefined4 **)(param_1 + 0x10);
    for (puVar9 = *(undefined4 **)(param_1 + 8); puVar9 != puVar2; puVar9 = puVar9 + 0xc) {
      local_34 = *puVar9;
      plVar3 = (long *)(**(code **)(*param_2 + 0x10))(param_2);
      plVar4 = (long *)(**(code **)(*plVar3 + 0x28))();
      uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,4,plVar3[1]);
      if ((uVar5 & 1) != 0) {
        (**(code **)(*plVar3 + 0x18))(plVar3,&local_34,4,0);
      }
      lVar6 = (**(code **)(*param_2 + 0x10))(param_2);
      *(long *)(lVar6 + 8) = *(long *)(lVar6 + 8) + 4;
      lVar8 = *(long *)(puVar9 + 2);
      lVar6 = *(long *)(puVar9 + 6);
      plVar3 = (long *)(**(code **)(*param_2 + 0x10))(param_2);
      if (lVar8 != 0) {
        plVar4 = (long *)(**(code **)(*plVar3 + 0x28))();
        uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,lVar6,plVar3[1]);
        if ((uVar5 & 1) != 0) {
          (**(code **)(*plVar3 + 0x18))(plVar3,lVar8,lVar6,0);
        }
      }
      lVar8 = (**(code **)(*param_2 + 0x10))(param_2);
      *(long *)(lVar8 + 8) = *(long *)(lVar8 + 8) + lVar6;
    }
    uVar7 = 1;
  }
  nn::os::UnlockMutex(pMVar1);
  return uVar7;
}


