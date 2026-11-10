/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0343fbcc; name: FUN_0343fbcc
 */


void FUN_0343fbcc(long param_1,undefined8 *param_2,uint param_3)

{
  MutexType *pMVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  if ((((param_3 & 1) != 0) && (*(char *)(param_1 + 0x68) == '\0')) &&
     (*(char *)(param_1 + 0xc3) == '\0')) {
    *(byte *)((long)param_2 + 0x14) = *(byte *)((long)param_2 + 0x14) & 0xf8 | 3;
    *param_2 = 0;
    plVar7 = (long *)(param_1 + 0xb8);
    if (*plVar7 != 0) {
      plVar7 = *(long **)(param_1 + 0xb0);
    }
    *plVar7 = (long)param_2;
    *(undefined8 **)(param_1 + 0xb0) = param_2;
    *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
    return;
  }
  pMVar1 = (MutexType *)(*(long *)(param_1 + 0x50) + 0x1e8);
  nn::os::LockMutex(pMVar1);
  lVar8 = *(long *)param_2[1];
  uVar4 = *(uint *)((long *)param_2[1] + 3);
  uVar5 = *(uint *)(param_1 + 0x90);
  uVar2 = lVar8 + (ulong)*(uint *)(param_2 + 2);
  iVar3 = *(uint *)(param_2 + 2) - uVar4;
  if (uVar2 < uVar5 && (ulong)uVar5 < lVar8 + (ulong)uVar4) {
    iVar3 = (int)uVar2 - uVar5;
  }
  *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + iVar3;
  lVar6 = *(long *)(param_1 + 0x50);
  lVar8 = param_2[1];
  param_2[1] = 0;
  if (lVar8 != 0) {
    FUN_03440670(lVar6 + 0x2a8);
  }
  (**(code **)(PTR_DAT_047e2fd0 + 0x30))(7,param_2);
  nn::os::UnlockMutex(pMVar1);
  return;
}


