/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03480ed4; name: FUN_03480ed4
 */


void FUN_03480ed4(long param_1)

{
  MutexType *pMVar1;
  long *plVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar3 = PTR_DAT_047e6fd8;
  lVar6 = *(long *)(param_1 + 0x10);
  if ((lVar6 != 0) && (*(int *)(lVar6 + 0x58) != 0)) {
    lVar7 = *(long *)(lVar6 + 0x50);
    do {
      FUN_034b6c14(*(undefined8 *)puVar3,param_1,*(undefined2 *)(lVar7 + 6));
      lVar7 = lVar7 + 0x28;
    } while (lVar7 != *(long *)(lVar6 + 0x50) + (ulong)*(uint *)(lVar6 + 0x58) * 0x28);
  }
  plVar4 = *(long **)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0xff;
  *(undefined1 *)(param_1 + 0x38) = 0xff;
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4,PTR_PTR_047e71e0);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar4 == (long *)0x0) goto LAB_03480ffc;
  pMVar1 = (MutexType *)(plVar4 + 0xe);
  nn::os::LockMutex(pMVar1);
  lVar6 = plVar4[0x12];
  lVar7 = 0;
  if ((lVar6 == 0) || (lVar6 == param_1)) {
    lVar5 = lVar6;
    if (lVar6 == 0) goto LAB_03480ff0;
LAB_03480fb8:
    plVar2 = plVar4 + 0x12;
    if (lVar5 != lVar6) {
      plVar2 = (long *)(lVar7 + 0x58);
    }
    *plVar2 = *(long *)(lVar5 + 0x58);
    nn::os::UnlockMutex(pMVar1);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  else {
    lVar5 = lVar6;
    do {
      lVar7 = lVar5;
      lVar5 = *(long *)(lVar7 + 0x58);
    } while (lVar5 != 0 && lVar5 != param_1);
    if (lVar5 != 0) goto LAB_03480fb8;
LAB_03480ff0:
    nn::os::UnlockMutex(pMVar1);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
LAB_03480ffc:
  if (*(long *)(param_1 + 0x48) != 0) {
    *(undefined4 *)(param_1 + 0x50) = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  return;
}


