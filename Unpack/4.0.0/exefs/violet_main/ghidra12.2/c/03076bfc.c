/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03076bfc; name: FUN_03076bfc
 */


void FUN_03076bfc(long param_1,int *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  long *plVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  undefined1 *puVar12;
  ulong uVar13;
  
  nn::os::LockMutex((MutexType *)&DAT_048731c0);
  nn::os::LockMutex((MutexType *)&DAT_048731e0);
  if (DAT_04873228 == DAT_0487322c) {
    nn::os::UnlockMutex((MutexType *)&DAT_048731e0);
  }
  else {
    DAT_04873230 = 1;
    nn::os::UnlockMutex((MutexType *)&DAT_048731e0);
    nn::os::AcquireSemaphore((SemaphoreType *)&DAT_04873200);
    DAT_04873230 = 0;
  }
  if (*(int *)(*(long *)(param_1 + 0x28) + (long)*param_2 * 4) == -1) {
    *(undefined4 *)(*(long *)(param_1 + 0x28) + (long)*param_2 * 4) =
         *(undefined4 *)(param_1 + 0x40);
    iVar5 = *(int *)(param_3 + 1);
    uVar13 = (ulong)iVar5;
    iVar4 = *(int *)(param_1 + 0x40);
    puVar12 = (undefined1 *)*param_3;
    iVar11 = iVar4 + iVar5;
    plVar2 = (long *)(param_1 + 0x38);
    if ((int)(*(uint *)(param_1 + 0x44) & 0x7fffffff) < iVar11) {
      FUN_00cb58c0(plVar2,PTR_PTR_047d1a50,(long)iVar11);
    }
    if (iVar5 != 0) {
      puVar8 = puVar12;
      puVar7 = (undefined1 *)(*plVar2 + (long)iVar4);
      for (uVar3 = uVar13 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar7 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar7 = puVar7 + 1;
      }
      if (2 < uVar13 - 1) {
        do {
          *puVar7 = *puVar8;
          puVar7[1] = puVar8[1];
          puVar7[2] = puVar8[2];
          puVar1 = puVar8 + 3;
          puVar8 = puVar8 + 4;
          puVar7[3] = *puVar1;
          puVar7 = puVar7 + 4;
        } while (puVar8 != puVar12 + uVar13);
      }
    }
    iVar4 = iVar11 + 1;
    *(int *)(param_1 + 0x40) = iVar11;
    if ((int)(*(uint *)(param_1 + 0x44) & 0x7fffffff) <= iVar11) {
      FUN_02eea048(plVar2,PTR_PTR_047d1a50,(long)iVar4);
      iVar11 = *(int *)(param_1 + 0x40);
    }
    *(undefined1 *)(*(long *)(param_1 + 0x38) + (long)iVar11) = 0xff;
    *(int *)(param_1 + 0x40) = iVar4;
  }
  if ((*(float *)(param_1 + 0x1c) + 0.001 < *(float *)(param_1 + 0x18)) &&
     (iVar11 = *param_2, iVar11 == *(int *)(param_1 + 0x70))) {
    iVar4 = *(int *)(param_1 + 0x30);
    lVar9 = (long)iVar4;
    lVar10 = (long)iVar11;
    if (iVar4 <= iVar11 + 1) {
      iVar4 = iVar11 + 1;
    }
    do {
      lVar10 = lVar10 + 1;
      if (lVar9 <= lVar10) {
        iVar11 = iVar4;
        break;
      }
      if (*(float *)(param_1 + 0x18) <= *(float *)(param_1 + 0x1c) + 0.001) {
        bVar6 = true;
      }
      else {
        bVar6 = *(int *)(*(long *)(param_1 + 0x28) + lVar10 * 4) != -1;
      }
      iVar11 = iVar11 + 1;
    } while (bVar6);
    *(int *)(param_1 + 0x70) = iVar11;
  }
  nn::os::UnlockMutex((MutexType *)&DAT_048731c0);
  return;
}


