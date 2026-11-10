/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ea354; name: FUN_007ea354
 */


void FUN_007ea354(undefined8 param_1,void *param_2,void *param_3)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  ulong local_48 [2];
  undefined4 local_38 [2];
  
  if (param_3 == (void *)0x0) {
    local_48[0] = CONCAT44(local_48[0]._4_4_,0x10407);
  }
  else {
    nn::os::LockMutex((MutexType *)((long)param_2 + 0x1910));
    memcpy(param_3,param_2,0x1910);
    nn::os::UnlockMutex((MutexType *)((long)param_2 + 0x1910));
    if (*(ulong **)PTR_DAT_047d0860 == (ulong *)0x0) {
      local_48[0] = 0;
      FUN_007935cc(local_48);
    }
    else {
      local_48[0] = **(ulong **)PTR_DAT_047d0860;
    }
    lVar3 = local_48[0] - *(long *)((long)param_2 + 0x1930);
    plVar2 = (long *)FUN_0079365c();
    uVar1 = 0;
    if (*plVar2 != 0) {
      uVar1 = (undefined4)(lVar3 / *plVar2);
    }
    *(undefined4 *)((long)param_3 + 0x1804) = uVar1;
    local_48[0] = local_48[0] & 0xffffffff00000000;
  }
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
  FUN_00cbd7c0(param_1,local_48);
  return;
}


