/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005dd79c; name: FUN_005dd79c
 */


void FUN_005dd79c(long *param_1)

{
  *param_1 = (long)(PTR_DAT_047ce9c8 + 0x10);
  if ((char)param_1[0x21] != '\0') {
    FUN_005dd9c0(param_1 + 0x1a);
    if ((*(byte *)(param_1 + 0x15) & 1) != 0) {
      (**(code **)(*(long *)param_1[0x18] + 0x18))
                ((long *)param_1[0x18],param_1[0x17],param_1[0x15] & 0xfffffffffffffffe,1);
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
  *param_1 = (long)(PTR_DAT_047ce9c0 + 0x10);
  nn::os::FinalizeEvent((EventType *)(param_1 + 2));
  return;
}


