/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006ce60c; name: FUN_006ce60c
 */


void FUN_006ce60c(long *param_1)

{
  *param_1 = (long)(PTR_DAT_047cfb10 + 0x10);
  if ((char)param_1[0x75] != '\0') {
    param_1[0x15] = (long)(PTR_DAT_047cfbf0 + 0x10);
    FUN_01d06ee8(param_1 + 0x52);
    FUN_01cfa274(param_1 + 0x16);
    if ((char)param_1[0x10] != '\0') {
      FUN_01cfa44c(param_1 + 0x11,param_1[0x12]);
    }
    if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
      (**(code **)(*(long *)param_1[0xf] + 0x18))
                ((long *)param_1[0xf],param_1[0xe],param_1[0xc] & 0xfffffffffffffffe,1);
    }
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 7));
  *param_1 = (long)(PTR_DAT_047cfb08 + 0x10);
  nn::os::FinalizeEvent((EventType *)(param_1 + 2));
  return;
}


