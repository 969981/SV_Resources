/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006f1648; name: FUN_006f1648
 */


void FUN_006f1648(long *param_1)

{
  char cVar1;
  
  *param_1 = (long)(PTR_DAT_047cff00 + 0x10);
  if ((char)param_1[0x20] == '\0') goto LAB_006f16c0;
  param_1[0x15] = (long)(PTR_DAT_047cff40 + 0x10);
  if ((*(byte *)(param_1 + 0x1c) & 1) == 0) {
    if ((*(byte *)(param_1 + 0x18) & 1) == 0) goto LAB_006f1688;
LAB_006f1708:
    (**(code **)(*(long *)param_1[0x1b] + 0x18))
              ((long *)param_1[0x1b],param_1[0x1a],param_1[0x18] & 0xfffffffffffffffe,1);
    cVar1 = (char)param_1[0x10];
  }
  else {
    (**(code **)(*(long *)param_1[0x1f] + 0x18))
              ((long *)param_1[0x1f],param_1[0x1e],param_1[0x1c] & 0xfffffffffffffffe,1);
    if ((*(byte *)(param_1 + 0x18) & 1) != 0) goto LAB_006f1708;
LAB_006f1688:
    cVar1 = (char)param_1[0x10];
  }
  if (cVar1 != '\0') {
    FUN_01cfa44c(param_1 + 0x11,param_1[0x12]);
  }
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    (**(code **)(*(long *)param_1[0xf] + 0x18))
              ((long *)param_1[0xf],param_1[0xe],param_1[0xc] & 0xfffffffffffffffe,1);
  }
LAB_006f16c0:
  nn::os::FinalizeMutex((MutexType *)(param_1 + 7));
  *param_1 = (long)(PTR_DAT_047cfef8 + 0x10);
  nn::os::FinalizeEvent((EventType *)(param_1 + 2));
  return;
}


