/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0066f514; name: FUN_0066f514
 */


void FUN_0066f514(long *param_1)

{
  char cVar1;
  
  *param_1 = (long)(PTR_DAT_047cf338 + 0x10);
  if ((char)param_1[0x1d] == '\0') goto LAB_0066f57c;
  if ((*(byte *)(param_1 + 0x19) & 1) == 0) {
    if ((*(byte *)(param_1 + 0x15) & 1) == 0) goto LAB_0066f544;
LAB_0066f5c4:
    (**(code **)(*(long *)param_1[0x18] + 0x18))
              ((long *)param_1[0x18],param_1[0x17],param_1[0x15] & 0xfffffffffffffffe,1);
    cVar1 = (char)param_1[0x10];
  }
  else {
    (**(code **)(*(long *)param_1[0x1c] + 0x18))
              ((long *)param_1[0x1c],param_1[0x1b],param_1[0x19] & 0xfffffffffffffffe,1);
    if ((*(byte *)(param_1 + 0x15) & 1) != 0) goto LAB_0066f5c4;
LAB_0066f544:
    cVar1 = (char)param_1[0x10];
  }
  if (cVar1 != '\0') {
    FUN_01cfa44c(param_1 + 0x11,param_1[0x12]);
  }
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    (**(code **)(*(long *)param_1[0xf] + 0x18))
              ((long *)param_1[0xf],param_1[0xe],param_1[0xc] & 0xfffffffffffffffe,1);
  }
LAB_0066f57c:
  nn::os::FinalizeMutex((MutexType *)(param_1 + 7));
  *param_1 = (long)(PTR_DAT_047cf330 + 0x10);
  nn::os::FinalizeEvent((EventType *)(param_1 + 2));
  return;
}


