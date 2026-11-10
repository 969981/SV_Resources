/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01406d90; name: FUN_01406d90
 */


int FUN_01406d90(long *param_1,undefined8 param_2,int param_3,int *param_4,char *param_5,
                ulong *param_6)

{
  MutexType *pMVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  pMVar1 = (MutexType *)(param_1 + 7);
  nn::os::LockMutex(pMVar1);
  if ((param_3 == 0) && (param_4 != (int *)0x0)) {
    if (*param_4 == 0) {
      if (param_4[1] == 0) {
        for (uVar6 = param_1[6]; uVar6 != 0; uVar6 = *(ulong *)(uVar6 + 8)) {
          uVar2 = FUN_01406f70(uVar6 + 0x10,param_2);
          nn::os::LockMutex(pMVar1);
          lVar4 = FUN_0109f43c(uVar6 + 0x10,uVar2,param_4);
          if (lVar4 != 0) {
            *param_6 = (ulong)*(uint *)(lVar4 + 8);
            param_6[1] = (ulong)*(uint *)(lVar4 + 0xc);
            *(undefined4 *)(param_6 + 2) = *(undefined4 *)(lVar4 + 4);
            param_6[4] = *(ulong *)(uVar6 + 0x68);
            param_6[3] = *(ulong *)(uVar6 + 0x70);
            *(int *)(param_6 + 5) = (int)param_1[3];
            (**(code **)(*param_1 + 0x68))(param_1,uVar6,param_6);
            nn::os::UnlockMutex(pMVar1);
LAB_01406ec8:
            iVar3 = 1;
            *param_5 = '\x01';
            *(int *)(uVar6 + 0x50) = *(int *)(uVar6 + 0x50) + 1;
            param_6[6] = uVar6;
            goto LAB_01406ee0;
          }
          nn::os::UnlockMutex(pMVar1);
        }
      }
    }
    else if (*param_4 == 1) {
      for (uVar6 = param_1[6]; uVar6 != 0; uVar6 = *(ulong *)(uVar6 + 8)) {
        uVar5 = FUN_0109f568(uVar6 + 0x10,param_2);
        iVar3 = FUN_0109f5f8(param_1,uVar6,uVar5,param_4,param_6);
        if (iVar3 == 1) goto LAB_01406ec8;
      }
    }
  }
  if ((*param_5 == '\0') && (*(char *)((long)param_1 + 0x1c) != '\0')) {
    *param_6 = 0;
    param_6[1] = 0;
    uVar2 = (undefined4)param_1[3];
    iVar3 = 1;
    param_6[3] = 0;
    *(undefined4 *)(param_6 + 2) = 0;
  }
  else {
    *param_5 = '\x01';
    iVar3 = FUN_011b49d0(param_1 + 2,param_2,param_3,param_4,0,param_6);
    if (iVar3 != 1) goto LAB_01406ee0;
    param_6[1] = 0;
    uVar2 = (undefined4)param_1[3];
  }
  *(undefined4 *)(param_6 + 5) = uVar2;
LAB_01406ee0:
  nn::os::UnlockMutex(pMVar1);
  return iVar3;
}


