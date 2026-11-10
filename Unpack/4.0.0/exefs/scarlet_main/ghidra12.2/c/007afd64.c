/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007afd64; name: FUN_007afd64
 */


void FUN_007afd64(int *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined4 local_48 [4];
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  local_38[0] = 0;
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_48);
  puVar1 = PTR_DAT_047d0860;
  if (*(long *)PTR_DAT_047d0860 != 0) {
    lVar2 = FUN_007f72b0();
    if (lVar2 != 0) {
      FUN_00796c9c(lVar2 + 8);
    }
    lVar2 = FUN_007f72c8(*(undefined8 *)puVar1);
    if (lVar2 != 0) {
      FUN_00796c9c(lVar2 + 8);
    }
  }
  nn::os::LockMutex((MutexType *)(param_2 + 0x1240));
  if (((*(long *)(param_2 + 0x1238) == 0) || (*(int *)(*(long *)(param_2 + 0x1238) + 4) < 1)) ||
     (FUN_00792300(param_1), *param_1 == 0)) {
    local_48[0] = 0;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
    FUN_00cbd7c0(param_1,local_48);
  }
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x1240));
  return;
}


