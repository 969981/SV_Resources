/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00807714; name: FUN_00807714
 */


void FUN_00807714(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  MutexType *pMVar2;
  ulong uVar3;
  undefined4 local_40 [4];
  undefined4 local_28 [2];
  
  if (*(char *)(param_2 + 0x10) != '\0') {
    if (*(char *)(param_2 + 0xa8) != '\0') {
      pMVar2 = (MutexType *)(*(long *)(param_2 + 0x58) + 0x1378);
      nn::os::LockMutex(pMVar2);
      FUN_008014c4(*(undefined8 *)(param_2 + 0xa0),
                   *(undefined8 *)(*(long *)(param_2 + 0x58) + 0x1308));
      *(undefined1 *)(param_2 + 0xa8) = 0;
      nn::os::UnlockMutex(pMVar2);
    }
    if (((*(char *)(param_3 + 0x625) != '\0') ||
        (uVar3 = FUN_007a07c0(*(undefined8 *)(param_2 + 0x58)), (uVar3 & 1) != 0)) ||
       (*(int *)(*(long *)(param_2 + 0x58) + 0x1c0) != 0)) {
      uVar1 = (*(uint *)(param_3 + 0x5fc) >> 1 & 0x55555555) +
              (*(uint *)(param_3 + 0x5fc) & 0x55555555);
      uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
      uVar1 = (uVar1 >> 4 & 0x7070707) + (uVar1 & 0x7070707);
      uVar1 = (uVar1 >> 8 & 0xf000f) + (uVar1 & 0xf000f);
      if ((uVar1 & 0x1f) + (uVar1 >> 0x10) < 2) {
        FUN_008072e8(param_1,param_2,param_3);
        return;
      }
      FUN_00806df4(param_1,param_2,param_3);
      return;
    }
  }
  local_40[0] = 0;
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  FUN_00cbd7c0(param_1,local_40);
  return;
}


