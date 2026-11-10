/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03521464; name: FUN_03521464
 */


bool FUN_03521464(long param_1)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  MutexType *pMVar5;
  long lVar6;
  long lVar7;
  byte bVar8;
  uint *puVar9;
  uint *puVar10;
  ulong uVar11;
  MutexType *pMVar12;
  uint uVar13;
  uint local_38 [2];
  
  if (*(long **)(param_1 + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x40) + 0x30))();
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  lVar6 = *(long *)(param_1 + 0xc0);
  local_38[0] = 0;
  puVar9 = *(uint **)(lVar6 + 0xb0);
  if (puVar9 != (uint *)0x0) {
    bVar8 = (byte)*puVar9;
    uVar13 = (uint)bVar8;
    if (bVar8 < 2) {
      uVar13 = 1;
    }
    uVar11 = (ulong)uVar13;
    puVar4 = (uint *)((long)puVar9 + ((ulong)(bVar8 + 4) & 0x1fc));
    puVar10 = puVar9;
    do {
      puVar9 = puVar4;
      puVar10 = (uint *)((long)puVar10 + 1);
      if (*(byte *)puVar10 == 0x38) goto LAB_035214e8;
      uVar11 = uVar11 - 1;
      puVar4 = puVar9 + 1;
    } while (uVar11 != 0);
    puVar9 = (uint *)0x0;
  }
LAB_035214e8:
  puVar10 = local_38;
  if (puVar9 != (uint *)0x0) {
    puVar10 = puVar9;
  }
  uVar13 = *puVar10;
  bVar8 = *(byte *)(lVar6 + 0x148) >> 2;
  if (((*(byte *)(lVar6 + 0x148) & 1) == 0) && (lVar6 = *(long *)(lVar6 + 0x98), lVar6 != 0)) {
    do {
      pbVar1 = (byte *)(lVar6 + 0x124);
      local_38[1] = 0;
      puVar9 = *(uint **)(lVar6 + 0xb0);
      if (puVar9 != (uint *)0x0) {
        bVar8 = (byte)*puVar9;
        uVar13 = (uint)bVar8;
        if (bVar8 < 2) {
          uVar13 = 1;
        }
        uVar11 = (ulong)uVar13;
        puVar4 = (uint *)((long)puVar9 + ((ulong)(bVar8 + 4) & 0x1fc));
        puVar10 = puVar9;
        do {
          puVar9 = puVar4;
          puVar10 = (uint *)((long)puVar10 + 1);
          if (*(byte *)puVar10 == 0x38) goto LAB_03521558;
          uVar11 = uVar11 - 1;
          puVar4 = puVar9 + 1;
        } while (uVar11 != 0);
        puVar9 = (uint *)0x0;
      }
LAB_03521558:
      puVar10 = local_38 + 1;
      if (puVar9 != (uint *)0x0) {
        puVar10 = puVar9;
      }
      uVar13 = *puVar10;
    } while (((*pbVar1 >> 1 & 1) == 0) && (lVar6 = *(long *)(lVar6 + 0x98), lVar6 != 0));
    bVar8 = *pbVar1 >> 3;
  }
  *(byte *)(param_1 + 0x48) = bVar8 & 1;
  *(uint *)(param_1 + 0x3c) = uVar13;
  if (uVar13 == 0) {
    lVar6 = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  else {
    pMVar12 = *(MutexType **)PTR_DAT_047e6f28;
    if ((bVar8 & 1) == 0) {
      nn::os::LockMutex(pMVar12);
      uVar2 = *(uint *)(pMVar12 + 0x28);
      if (uVar2 != 0) {
        uVar3 = 0;
        if (uVar2 != 0) {
          uVar3 = uVar13 / uVar2;
        }
        for (lVar7 = *(long *)(*(long *)(pMVar12 + 0x20) + (ulong)(uVar13 - uVar3 * uVar2) * 8);
            lVar7 != 0; lVar7 = *(long *)(lVar7 + 8)) {
          if (*(uint *)(lVar7 + 0x10) == uVar13) {
            lVar6 = lVar7 + -8;
            *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
            goto LAB_03521638;
          }
        }
      }
      lVar6 = 0;
LAB_03521638:
      pMVar5 = pMVar12;
    }
    else {
      pMVar5 = pMVar12 + 0x38;
      nn::os::LockMutex(pMVar5);
      uVar2 = *(uint *)(pMVar12 + 0x60);
      if (uVar2 != 0) {
        uVar3 = 0;
        if (uVar2 != 0) {
          uVar3 = uVar13 / uVar2;
        }
        for (lVar7 = *(long *)(*(long *)(pMVar12 + 0x58) + (ulong)(uVar13 - uVar3 * uVar2) * 8);
            lVar7 != 0; lVar7 = *(long *)(lVar7 + 8)) {
          if (*(uint *)(lVar7 + 0x10) == uVar13) {
            lVar6 = lVar7 + -8;
            *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
            goto LAB_0352163c;
          }
        }
      }
      lVar6 = 0;
    }
LAB_0352163c:
    nn::os::UnlockMutex(pMVar5);
    *(long *)(param_1 + 0x40) = lVar6;
    if (lVar6 == 0) {
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
  }
  return lVar6 != 0;
}


