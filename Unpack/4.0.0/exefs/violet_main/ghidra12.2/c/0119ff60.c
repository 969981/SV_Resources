/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0119ff60; name: FUN_0119ff60
 */


void FUN_0119ff60(long param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  if (param_2 == 0) {
    return;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x160));
  puVar2 = *(undefined8 **)(param_1 + 0x128);
  puVar9 = *(undefined8 **)(param_1 + 0x130);
  puVar10 = puVar2;
  if ((puVar2 != puVar9) && (puVar11 = puVar2, *(int *)(puVar2 + 4) != param_2)) {
    do {
      puVar10 = puVar11 + 5;
      if (puVar9 == puVar10) {
        puVar10 = puVar9;
        goto LAB_0119ffb0;
      }
      piVar1 = (int *)(puVar11 + 9);
      puVar11 = puVar10;
    } while (*piVar1 != param_2);
  }
LAB_0119ffb0:
  if (puVar9 == puVar10) goto LAB_011a00bc;
  if (puVar10 + 5 == puVar9) {
    puVar11 = puVar10;
LAB_0119ffc8:
    if ((long *)puVar9[-2] != (long *)0x0) {
      (**(code **)(*(long *)puVar9[-2] + 0x20))();
    }
    if (puVar9 + -5 != puVar11) {
      if ((long *)puVar9[-7] != (long *)0x0) {
        (**(code **)(*(long *)puVar9[-7] + 0x20))();
      }
      if (puVar9 + -10 != puVar11) {
        do {
          if ((long *)puVar9[-0xc] != (long *)0x0) {
            (**(code **)(*(long *)puVar9[-0xc] + 0x20))();
          }
          puVar9 = puVar9 + -5;
        } while (puVar11 + 10 != puVar9);
      }
    }
  }
  else {
    lVar8 = (long)puVar10 - (long)puVar2 >> 3;
    uVar6 = puVar10[7];
    *puVar10 = puVar10[5];
    puVar2[lVar8 + 1] = puVar10[6];
    puVar2[lVar8 + 2] = uVar6;
    plVar7 = (long *)puVar10[8];
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
    plVar5 = (long *)puVar2[lVar8 + 3];
    puVar2[lVar8 + 3] = plVar7;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))();
    }
    uVar3 = *(undefined4 *)((long)puVar10 + 0x4c);
    puVar11 = puVar10 + 5;
    *(undefined4 *)(puVar2 + lVar8 + 4) = *(undefined4 *)(puVar10 + 9);
    *(undefined4 *)((long)puVar2 + lVar8 * 8 + 0x24) = uVar3;
    if (puVar10 + 10 != puVar9) {
      *puVar11 = puVar10[10];
      puVar10[6] = puVar10[0xb];
      plVar7 = (long *)puVar10[0xd];
      puVar10[7] = puVar10[0xc];
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
      plVar5 = (long *)puVar10[8];
      puVar10[8] = plVar7;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x20))();
      }
      *(undefined4 *)(puVar10 + 9) = *(undefined4 *)(puVar10 + 0xe);
      *(undefined4 *)((long)puVar10 + 0x4c) = *(undefined4 *)((long)puVar10 + 0x74);
      if (puVar10 + 0xf == puVar9) {
        puVar11 = puVar10 + 10;
      }
      else {
        do {
          puVar11 = puVar10;
          puVar11[10] = puVar11[0xf];
          puVar11[0xb] = puVar11[0x10];
          plVar7 = (long *)puVar11[0x12];
          puVar11[0xc] = puVar11[0x11];
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x18))(plVar7);
          }
          plVar5 = (long *)puVar11[0xd];
          puVar11[0xd] = plVar7;
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x20))();
          }
          *(undefined4 *)(puVar11 + 0xe) = *(undefined4 *)(puVar11 + 0x13);
          *(undefined4 *)((long)puVar11 + 0x74) = *(undefined4 *)((long)puVar11 + 0x9c);
          puVar10 = puVar11 + 5;
        } while (puVar9 + -0xf != puVar11 + 5);
        puVar11 = puVar11 + 0xf;
      }
    }
    puVar9 = *(undefined8 **)(param_1 + 0x130);
    if (puVar9 != puVar11) goto LAB_0119ffc8;
  }
  lVar8 = *(long *)(param_1 + 0x1a0);
  *(undefined8 **)(param_1 + 0x130) = puVar11;
  for (; lVar8 != 0; lVar8 = *(long *)(lVar8 + 0x68)) {
    nn::os::LockMutex((MutexType *)(lVar8 + 0x100));
    iVar4 = *(int *)(lVar8 + 0x120) + -1;
    if (*(int *)(lVar8 + 0x120) < 1) {
      iVar4 = 0;
    }
    *(int *)(lVar8 + 0x120) = iVar4;
    nn::os::UnlockMutex((MutexType *)(lVar8 + 0x100));
  }
LAB_011a00bc:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x160));
  return;
}


