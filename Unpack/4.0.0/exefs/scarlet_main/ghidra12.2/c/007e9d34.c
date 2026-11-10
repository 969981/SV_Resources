/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007e9d34; name: FUN_007e9d34
 */


void FUN_007e9d34(undefined8 param_1,long param_2)

{
  ulong local_40 [2];
  undefined4 local_28 [2];
  
  if (*(char *)(param_2 + 0x1938) == '\0') {
    nn::os::LockMutex((MutexType *)(param_2 + 0x1910));
    FUN_007ea44c(param_2);
    nn::os::UnlockMutex((MutexType *)(param_2 + 0x1910));
    if (*(ulong **)PTR_DAT_047d0860 == (ulong *)0x0) {
      local_40[0] = 0;
      FUN_007935cc(local_40);
    }
    else {
      local_40[0] = **(ulong **)PTR_DAT_047d0860;
    }
    *(ulong *)(param_2 + 0x1930) = local_40[0];
    *(char *)(param_2 + 0x1938) = '\x01';
    local_40[0] = local_40[0] & 0xffffffff00000000;
  }
  else {
    local_40[0] = CONCAT44(local_40[0]._4_4_,0x10408);
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  FUN_00cbd7c0(param_1,local_40);
  return;
}


