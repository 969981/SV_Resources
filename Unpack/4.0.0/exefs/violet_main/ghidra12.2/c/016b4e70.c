/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016b4e70; name: FUN_016b4e70
 */


bool FUN_016b4e70(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x160));
  if (*(long *)(param_1 + 0x140) == 0) {
    FUN_016b5040(&local_50,*(undefined8 *)(param_1 + 0x70),param_1 + 0x78,param_2,param_1 + 0x80);
    lVar2 = local_50;
    local_50 = 0;
    lVar3 = *(long *)(param_1 + 0x140);
    *(long *)(param_1 + 0x140) = lVar2;
    if (lVar3 == 0) {
      *(undefined8 *)(param_1 + 0x150) = uStack_40;
      *(undefined8 *)(param_1 + 0x158) = local_38;
    }
    else {
      FUN_016b5500(param_1 + 0x148);
      *(undefined8 *)(param_1 + 0x150) = uStack_40;
      *(undefined8 *)(param_1 + 0x158) = local_38;
      lVar2 = *(long *)(param_1 + 0x140);
    }
    *(undefined8 *)(param_1 + 0x148) = local_48;
    if (lVar2 != 0) {
      FUN_016b4f44(lVar2,param_1 + 0x280);
      FUN_016b4fbc(*(undefined8 *)(param_1 + 0x140),param_1 + 0x300);
      bVar1 = *(long *)(param_1 + 0x140) != 0;
      goto LAB_016b4f00;
    }
  }
  bVar1 = false;
LAB_016b4f00:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x160));
  return bVar1;
}


