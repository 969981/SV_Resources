/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007fe9c8; name: FUN_007fe9c8
 */


void FUN_007fe9c8(long *param_1,undefined8 param_2,undefined8 param_3,uint *param_4)

{
  MutexType *pMVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  undefined8 local_38;
  
  uVar4 = FUN_00796a00(param_3,param_1 + 0xd);
  if ((uVar4 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x007fea20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x138))(param_1,param_2);
    return;
  }
  uVar4 = (**(code **)(*param_1 + 0x3d0))(param_1,param_3);
  if ((uVar4 & 1) == 0) {
    FUN_0079fc68(param_1,param_2,param_3);
    return;
  }
  uVar5 = FUN_00796988(param_3);
  local_38 = uVar5;
  FUN_00796584(auStack_60);
  pMVar1 = (MutexType *)(param_1 + 0x26f);
  nn::os::LockMutex(pMVar1);
  puVar6 = (undefined8 *)FUN_00801444(param_1[0x261],uVar5);
  if (puVar6 == (undefined8 *)0x0) {
    nn::os::UnlockMutex(pMVar1);
  }
  else {
    local_38 = *puVar6;
    if (*(int *)(puVar6 + 2) == 0xd) {
      puVar2 = puVar6 + 7;
      if (*(char *)(puVar6 + 0xb) != '\0') {
        puVar2 = puVar6 + 3;
      }
      FUN_0078a1c0(auStack_80,puVar2);
      FUN_007968fc(auStack_60,auStack_80);
      FUN_0284e3d4(auStack_80);
    }
    nn::os::UnlockMutex(pMVar1);
    uVar4 = FUN_00796784(auStack_60);
    if ((uVar4 & 1) == 0) {
      (**(code **)(*param_1 + 0x3a8))(param_1,param_2,&local_38,1);
      uVar4 = (**(code **)(*param_1 + 0x3b0))(param_1);
      if ((uVar4 & 1) == 0) {
        uVar7 = 0;
      }
      else {
        iVar3 = FUN_007a0340(param_1,param_3);
        uVar7 = 1 << (ulong)((int)(short)iVar3 & 0x1f);
        if (iVar3 * 0x10000 < -0xffff) {
          uVar7 = 0;
        }
      }
      if (param_4 != (uint *)0x0) {
        *param_4 = *param_4 | uVar7;
      }
    }
    else {
      FUN_0079fc68(param_1,param_2,auStack_60);
    }
  }
  return;
}


