/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034e3610; name: FUN_034e3610
 */


void FUN_034e3610(undefined8 param_1,uint param_2,undefined4 *param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  MutexType *pMVar6;
  undefined4 local_70 [2];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined1 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined8 local_48;
  
  pMVar6 = *(MutexType **)PTR_DAT_047e6f28;
  nn::os::LockMutex(pMVar6);
  uVar1 = *(uint *)(pMVar6 + 0x28);
  if (uVar1 != 0) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = param_2 / uVar1;
    }
    for (lVar4 = *(long *)(*(long *)(pMVar6 + 0x20) + (ulong)(param_2 - uVar2 * uVar1) * 8);
        lVar4 != 0; lVar4 = *(long *)(lVar4 + 8)) {
      if (*(uint *)(lVar4 + 0x10) == param_2) {
        plVar5 = (long *)(lVar4 + -8);
        *(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + 1;
        nn::os::UnlockMutex(pMVar6);
        puVar3 = PTR_DAT_047e2fe8;
        FUN_0345423c(*(undefined8 *)PTR_DAT_047e2fe8,plVar5,param_4,0);
        if ((*(byte *)(param_3 + 2) & 7) == 1) {
          local_54 = 0;
          local_48 = 0;
          local_4c = 0;
          local_70[0] = 0;
          local_60 = 0;
          local_5c = *param_3;
          uStack_58 = 4;
          local_50 = 0;
          local_68 = param_4;
          (**(code **)(*plVar5 + 0x98))(plVar5,local_70);
          FUN_0345423c(*(undefined8 *)puVar3,plVar5,param_4,local_60);
        }
        else {
          (**(code **)(*plVar5 + 0xb8))(plVar5,param_4,param_1,0);
        }
        (**(code **)(*plVar5 + 0x30))(plVar5);
        return;
      }
    }
  }
  nn::os::UnlockMutex(pMVar6);
  return;
}


