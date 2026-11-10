/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03076e30; name: FUN_03076e30
 */


void FUN_03076e30(long param_1,int *param_2,long *param_3)

{
  undefined1 *puVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  float *pfVar6;
  undefined1 *puVar7;
  long lVar8;
  int iVar9;
  
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
    lVar8 = param_3[1];
    iVar3 = *(int *)(param_1 + 0x40);
    lVar5 = (long)(int)lVar8 + (long)iVar3 + 1;
    iVar9 = (int)lVar5;
    if ((int)(*(uint *)(param_1 + 0x44) & 0x7fffffff) < iVar9) {
      FUN_00cb58c0(param_1 + 0x38,PTR_PTR_047d1a50,lVar5);
    }
    *(int *)(param_1 + 0x40) = iVar9;
    uVar4 = (ulong)*(uint *)(param_3 + 1);
    puVar1 = (undefined1 *)(*(long *)(param_1 + 0x38) + (long)iVar3);
    if (0 < (int)*(uint *)(param_3 + 1)) {
      pfVar6 = (float *)*param_3;
      puVar7 = puVar1;
      do {
        uVar4 = uVar4 - 1;
        *puVar7 = (char)(int)((*pfVar6 - *(float *)(param_1 + 0x1c)) * *(float *)(param_1 + 0x24));
        pfVar6 = pfVar6 + 1;
        puVar7 = puVar7 + 1;
      } while (uVar4 != 0);
    }
    puVar1[(int)lVar8] = 0xff;
  }
  if ((*(float *)(param_1 + 0x1c) + 0.001 < *(float *)(param_1 + 0x18)) &&
     (iVar3 = *param_2, iVar3 == *(int *)(param_1 + 0x70))) {
    iVar9 = *(int *)(param_1 + 0x30);
    lVar5 = (long)iVar9;
    lVar8 = (long)iVar3;
    if (iVar9 <= iVar3 + 1) {
      iVar9 = iVar3 + 1;
    }
    do {
      lVar8 = lVar8 + 1;
      if (lVar5 <= lVar8) {
        iVar3 = iVar9;
        break;
      }
      if (*(float *)(param_1 + 0x18) <= *(float *)(param_1 + 0x1c) + 0.001) {
        bVar2 = true;
      }
      else {
        bVar2 = *(int *)(*(long *)(param_1 + 0x28) + lVar8 * 4) != -1;
      }
      iVar3 = iVar3 + 1;
    } while (bVar2);
    *(int *)(param_1 + 0x70) = iVar3;
  }
  nn::os::UnlockMutex((MutexType *)&DAT_048731c0);
  return;
}


