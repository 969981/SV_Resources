/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0340308c; name: FUN_0340308c
 */


void FUN_0340308c(long *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  
  nn::os::LockMutex((MutexType *)(param_1 + 3));
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 == 0) goto LAB_034032ac;
  uVar2 = *(uint *)(param_2 + 0x90);
  uVar3 = 0;
  if (uVar1 != 0) {
    uVar3 = uVar2 / uVar1;
  }
  uVar6 = (ulong)(uVar2 - uVar3 * uVar1);
  puVar9 = *(uint **)(*param_1 + uVar6 * 8);
  if (puVar9 == (uint *)0x0) goto LAB_034032ac;
  if (*puVar9 == uVar2) {
    puVar8 = (uint *)0x0;
  }
  else {
    do {
      puVar8 = puVar9;
      puVar9 = *(uint **)(puVar8 + 2);
      if (puVar9 == (uint *)0x0) goto LAB_034032ac;
    } while (*puVar9 != uVar2);
  }
  uVar1 = puVar9[0x1c];
  uVar2 = uVar1 - 1;
  puVar9[0x1c] = uVar2;
  if (uVar2 == 0 || (int)uVar1 < 1) {
    if (puVar8 == (uint *)0x0) {
      puVar8 = (uint *)(*param_1 + uVar6 * 8);
    }
    else {
      puVar8 = puVar8 + 2;
    }
    *(undefined8 *)puVar8 = *(undefined8 *)(puVar9 + 2);
    *(int *)(param_1 + 2) = (int)param_1[2] + -1;
    puVar4 = PTR_DAT_047e2fd0;
    lVar5 = *(long *)(puVar9 + 0x2e);
    if (lVar5 != 0) {
      if (0 < (int)puVar9[0x24]) {
        lVar10 = 0;
        lVar11 = 0;
        do {
          if (*(long *)(lVar5 + lVar10) != 0) {
            (**(code **)(puVar4 + 0x30))(5,*(long *)(lVar5 + lVar10));
            lVar5 = *(long *)(puVar9 + 0x2e);
          }
          lVar7 = *(long *)(lVar5 + lVar10 + 0x10);
          if (lVar7 != 0) {
            (**(code **)(puVar4 + 0x30))(5,lVar7);
            lVar5 = *(long *)(puVar9 + 0x2e);
          }
          lVar11 = lVar11 + 1;
          lVar10 = lVar10 + 0x20;
        } while (lVar11 < (int)puVar9[0x24]);
        if (lVar5 == 0) goto LAB_034031cc;
      }
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
    }
LAB_034031cc:
    puVar8 = puVar9 + 0x14;
    if (*(long *)puVar8 != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      puVar9[0x16] = 0;
      puVar9[0x17] = 0;
      puVar9[0x18] = 0;
      puVar9[0x19] = 0;
      puVar8[0] = 0;
      puVar8[1] = 0;
    }
    if (*(long *)(puVar9 + 0x10) != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
    }
    if (*(long *)(puVar9 + 0xc) != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
    }
    if (*(long *)(puVar9 + 8) != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
    }
    if (*(long *)(puVar9 + 4) != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
    }
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,puVar9);
  }
  if (((int)param_1[2] == 0) && (*param_1 != 0)) {
    *(undefined4 *)(param_1 + 1) = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
LAB_034032ac:
  nn::os::UnlockMutex((MutexType *)(param_1 + 3));
  return;
}


