/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005d9edc; name: FUN_005d9edc
 */


void FUN_005d9edc(long *param_1)

{
  char cVar1;
  
  *param_1 = (long)(PTR_DAT_047ce6e8 + 0x10);
  if ((char)param_1[0x1e] == '\0') goto LAB_005d9f44;
  if ((*(byte *)(param_1 + 0x19) & 1) == 0) {
    if ((*(byte *)(param_1 + 0x15) & 1) == 0) goto LAB_005d9f0c;
LAB_005d9f8c:
    (**(code **)(*(long *)param_1[0x18] + 0x18))
              ((long *)param_1[0x18],param_1[0x17],param_1[0x15] & 0xfffffffffffffffe,1);
    cVar1 = (char)param_1[0x10];
  }
  else {
    (**(code **)(*(long *)param_1[0x1c] + 0x18))
              ((long *)param_1[0x1c],param_1[0x1b],param_1[0x19] & 0xfffffffffffffffe,1);
    if ((*(byte *)(param_1 + 0x15) & 1) != 0) goto LAB_005d9f8c;
LAB_005d9f0c:
    cVar1 = (char)param_1[0x10];
  }
  if (cVar1 != '\0') {
    FUN_01cfa44c(param_1 + 0x11,param_1[0x12]);
  }
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    (**(code **)(*(long *)param_1[0xf] + 0x18))
              ((long *)param_1[0xf],param_1[0xe],param_1[0xc] & 0xfffffffffffffffe,1);
  }
LAB_005d9f44:
  nn::os::FinalizeMutex((MutexType *)(param_1 + 7));
  *param_1 = (long)(PTR_DAT_047ce6e0 + 0x10);
  nn::os::FinalizeEvent((EventType *)(param_1 + 2));
  return;
}


