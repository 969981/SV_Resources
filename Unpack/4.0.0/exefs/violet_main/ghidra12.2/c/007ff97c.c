/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ff97c; name: FUN_007ff97c
 */


void FUN_007ff97c(int *param_1,long param_2,long param_3,undefined8 *param_4,uint param_5)

{
  MutexType *pMVar1;
  ulong uVar2;
  long lVar3;
  int *piVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_a0 [16];
  int local_90 [8];
  int local_70 [4];
  undefined1 auStack_54 [4];
  
  uVar5 = (ulong)param_5;
  if ((*(long **)(param_2 + 0x13a8) == (long *)0x0) ||
     (uVar2 = (**(code **)(**(long **)(param_2 + 0x13a8) + 0x68))(), (uVar2 & 1) == 0)) {
    (**(code **)(**(long **)(param_2 + 0x1318) + 0x58))
              (param_1,*(long **)(param_2 + 0x1318),param_3 + 0x30,*(undefined4 *)(param_3 + 0x5f8),
               param_4,uVar5);
    if (*param_1 != 0) {
      return;
    }
  }
  else {
    pMVar1 = (MutexType *)(param_2 + 0x1378);
    nn::os::LockMutex(pMVar1);
    if (0 < (int)param_5) {
      do {
        lVar3 = FUN_00801444(*(undefined8 *)(param_2 + 0x1308),*param_4);
        if (lVar3 == 0) {
          local_90[0] = 0;
          local_70[0] = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)local_90 | 4),(Result *)local_70);
          piVar4 = local_90;
LAB_007ffb54:
          FUN_00cbd7c0(param_1,piVar4);
          nn::os::UnlockMutex(pMVar1);
          return;
        }
        lVar6 = *(long *)(lVar3 + 8);
        if (lVar6 != 0) {
          local_70[0] = 0;
          local_90[0] = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_90);
          uVar2 = (**(code **)(**(long **)(param_2 + 0x13a8) + 0x90))
                            (*(long **)(param_2 + 0x13a8),lVar6);
          if ((uVar2 & 1) == 0) {
            lVar6 = lVar3 + 0x38;
            if (*(char *)(lVar3 + 0x58) != '\0') {
              lVar6 = lVar3 + 0x18;
            }
            FUN_0078a1c0(local_90,lVar6);
            FUN_007929a0(auStack_a0,*(undefined8 *)(param_2 + 0x13b0),param_3 + 0x30,
                         *(undefined4 *)(param_3 + 0x5f8),local_90,auStack_54);
            FUN_018ff39c(local_70,auStack_a0);
            FUN_0284e3d4(local_90);
          }
          else {
            (**(code **)(**(long **)(param_2 + 0x13a8) + 0x88))
                      (local_90,*(long **)(param_2 + 0x13a8),lVar6,param_3 + 0x30,
                       *(undefined4 *)(param_3 + 0x5f8));
            FUN_018ff39c(local_70,local_90);
          }
          if (local_70[0] != 0) {
            piVar4 = local_70;
            goto LAB_007ffb54;
          }
        }
        param_4 = param_4 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    nn::os::UnlockMutex(pMVar1);
  }
  local_90[0] = 0;
  local_70[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_90 | 4),(Result *)local_70);
  FUN_00cbd7c0(param_1,local_90);
  return;
}


