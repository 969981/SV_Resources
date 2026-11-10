/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0066d114; name: FUN_0066d114
 */


void FUN_0066d114(long *param_1)

{
  char cVar1;
  
  *param_1 = (long)(PTR_DAT_047cf320 + 0x10);
  if ((char)param_1[0x21] == '\0') goto LAB_0066d184;
  FUN_01cfa410(param_1 + 0x1d);
  if ((*(byte *)(param_1 + 0x19) & 1) == 0) {
    if ((*(byte *)(param_1 + 0x15) & 1) == 0) goto LAB_0066d14c;
LAB_0066d1cc:
    (**(code **)(*(long *)param_1[0x18] + 0x18))
              ((long *)param_1[0x18],param_1[0x17],param_1[0x15] & 0xfffffffffffffffe,1);
    cVar1 = (char)param_1[0x10];
  }
  else {
    (**(code **)(*(long *)param_1[0x1c] + 0x18))
              ((long *)param_1[0x1c],param_1[0x1b],param_1[0x19] & 0xfffffffffffffffe,1);
    if ((*(byte *)(param_1 + 0x15) & 1) != 0) goto LAB_0066d1cc;
LAB_0066d14c:
    cVar1 = (char)param_1[0x10];
  }
  if (cVar1 != '\0') {
    FUN_01cfa44c(param_1 + 0x11,param_1[0x12]);
  }
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    (**(code **)(*(long *)param_1[0xf] + 0x18))
              ((long *)param_1[0xf],param_1[0xe],param_1[0xc] & 0xfffffffffffffffe,1);
  }
LAB_0066d184:
  nn::os::FinalizeMutex((MutexType *)(param_1 + 7));
  *param_1 = (long)(PTR_DAT_047cf318 + 0x10);
  nn::os::FinalizeEvent((EventType *)(param_1 + 2));
  return;
}


