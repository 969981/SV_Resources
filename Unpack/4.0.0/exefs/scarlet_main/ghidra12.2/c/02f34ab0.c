/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f34ab0; name: FUN_02f34ab0
 */


void FUN_02f34ab0(long param_1,undefined4 param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  MutexType *pMVar5;
  long lVar6;
  undefined8 local_60;
  ulong uStack_58;
  
  if (*(long *)(param_1 + 0x698) != 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x698) + 0x388) + ((long)((ulong)param_3 << 0x20) >> 0x1b)
    ;
    pcVar3 = (char *)(lVar4 + 0xb);
    *(byte *)(lVar4 + 10) = (byte)param_2 & 3;
    if (*pcVar3 != -1) {
      *pcVar3 = '\0';
    }
  }
  lVar4 = *(long *)(param_1 + 0x150) + (ulong)param_3 * 0x80;
  if (*(int *)(lVar4 + 0x4c) == 0x7fffffff) {
    local_60 = CONCAT44((float)*(double *)(lVar4 + 0x18),(float)*(double *)(lVar4 + 0x10));
    uStack_58 = (ulong)(uint)(float)*(double *)(lVar4 + 0x20);
    bVar1 = (**(code **)(**(long **)(param_1 + 0x4b0) + 0x20))
                      (*(long **)(param_1 + 0x4b0),&local_60);
    *(byte *)(lVar4 + 0x5e) = bVar1;
    lVar6 = param_1 + (ulong)bVar1 * 0x18;
    pMVar5 = *(MutexType **)(param_1 + 0x480);
    nn::os::LockMutex(pMVar5);
    *(int *)(lVar4 + 0x4c) = *(int *)(lVar6 + 0x188);
    iVar2 = *(int *)(lVar6 + 0x188);
    lVar4 = (long)iVar2;
    if ((int)(*(uint *)(lVar6 + 0x18c) & 0x7fffffff) <= iVar2) {
      FUN_02f1dbfc((long *)(lVar6 + 0x180),PTR_PTR_047d1a50,lVar4 + 1);
      iVar2 = *(int *)(lVar6 + 0x188);
    }
    *(uint *)(*(long *)(lVar6 + 0x180) + (long)iVar2 * 4) = param_3;
    *(int *)(lVar6 + 0x188) = (int)(lVar4 + 1);
    nn::os::UnlockMutex(pMVar5);
  }
  FUN_02f097d8(param_1 + 0x28,param_2);
  FUN_02f34c08(param_1,param_2);
  return;
}


