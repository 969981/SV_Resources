/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ff848; name: FUN_007ff848
 */


void FUN_007ff848(int *param_1,long param_2,long param_3,undefined8 param_4)

{
  MutexType *pMVar1;
  ulong uVar2;
  long lVar3;
  int local_48 [4];
  undefined4 local_38 [2];
  
  if (((*(long **)(param_2 + 0x13a8) == (long *)0x0) ||
      (uVar2 = (**(code **)(**(long **)(param_2 + 0x13a8) + 0x68))(), (uVar2 & 1) == 0)) ||
     (*(char *)(*(long *)PTR_DAT_047d0a08 + 0x472) == '\0')) {
    (**(code **)(**(long **)(param_2 + 0x1318) + 0x50))
              (param_1,*(long **)(param_2 + 0x1318),param_3 + 0x30,*(undefined4 *)(param_3 + 0x5f8),
               param_4);
    if (*param_1 != 0) {
      return;
    }
LAB_007ff914:
    local_48[0] = 0;
    local_38[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
    FUN_00cbd7c0(param_1,local_48);
  }
  else {
    pMVar1 = (MutexType *)(param_2 + 0x1378);
    nn::os::LockMutex(pMVar1);
    lVar3 = FUN_00801444(*(undefined8 *)(param_2 + 0x1308),param_4);
    if (lVar3 == 0) {
      local_48[0] = 0;
      local_38[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
    }
    else {
      (**(code **)(**(long **)(param_2 + 0x13a8) + 0x88))
                (local_48,*(long **)(param_2 + 0x13a8),*(undefined8 *)(lVar3 + 8),param_3 + 0x30,
                 *(undefined4 *)(param_3 + 0x5f8));
      if (local_48[0] == 0) {
        nn::os::UnlockMutex(pMVar1);
        goto LAB_007ff914;
      }
    }
    FUN_00cbd7c0(param_1,local_48);
    nn::os::UnlockMutex(pMVar1);
  }
  return;
}


