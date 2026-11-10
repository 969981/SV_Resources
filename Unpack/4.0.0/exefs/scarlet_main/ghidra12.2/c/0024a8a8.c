/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0024a8a8; name: FUN_0024a8a8
 */


void FUN_0024a8a8(long *param_1)

{
  *param_1 = (long)(PTR_DAT_047cc150 + 0x10);
  if ((char)param_1[0x1a] != '\0') {
    if ((*(byte *)(param_1 + 0x16) & 1) != 0) {
      (**(code **)(*(long *)param_1[0x19] + 0x18))
                ((long *)param_1[0x19],param_1[0x18],param_1[0x16] & 0xfffffffffffffffe,1);
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
  *param_1 = (long)(PTR_DAT_047cc148 + 0x10);
  nn::os::FinalizeEvent((EventType *)(param_1 + 2));
  return;
}


