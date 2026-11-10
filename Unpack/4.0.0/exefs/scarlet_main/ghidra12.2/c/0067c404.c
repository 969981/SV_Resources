/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0067c404; name: FUN_0067c404
 */


void FUN_0067c404(long *param_1)

{
  long lVar1;
  
  *param_1 = (long)(PTR_DAT_047cf4a0 + 0x10);
  if ((char)param_1[0x19] != '\0') {
    lVar1 = param_1[0x15];
    if (lVar1 != 0) {
      param_1[0x16] = lVar1;
      (**(code **)(*(long *)param_1[0x18] + 0x18))
                ((long *)param_1[0x18],lVar1,param_1[0x17] - lVar1,8);
    }
    if ((char)param_1[0x10] != '\0') {
      FUN_01cfa44c(param_1 + 0x11,param_1[0x12]);
    }
    if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
      (**(code **)(*(long *)param_1[0xf] + 0x18))
                ((long *)param_1[0xf],param_1[0xe],param_1[0xc] & 0xfffffffffffffffe,1);
    }
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 7));
  *param_1 = (long)(PTR_DAT_047cf498 + 0x10);
  nn::os::FinalizeEvent((EventType *)(param_1 + 2));
  return;
}


