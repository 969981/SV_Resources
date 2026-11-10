/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006d3408; name: FUN_006d3408
 */


void FUN_006d3408(long *param_1)

{
  char cVar1;
  
  *param_1 = (long)(PTR_DAT_047cfb40 + 0x10);
  if ((char)param_1[0x20] == '\0') goto LAB_006d3480;
  param_1[0x15] = (long)(PTR_DAT_047cfc88 + 0x10);
  if ((*(byte *)(param_1 + 0x1a) & 1) == 0) {
    if ((*(byte *)(param_1 + 0x16) & 1) == 0) goto LAB_006d3448;
LAB_006d34c8:
    (**(code **)(*(long *)param_1[0x19] + 0x18))
              ((long *)param_1[0x19],param_1[0x18],param_1[0x16] & 0xfffffffffffffffe,1);
    cVar1 = (char)param_1[0x10];
  }
  else {
    (**(code **)(*(long *)param_1[0x1d] + 0x18))
              ((long *)param_1[0x1d],param_1[0x1c],param_1[0x1a] & 0xfffffffffffffffe,1);
    if ((*(byte *)(param_1 + 0x16) & 1) != 0) goto LAB_006d34c8;
LAB_006d3448:
    cVar1 = (char)param_1[0x10];
  }
  if (cVar1 != '\0') {
    FUN_01cfa44c(param_1 + 0x11,param_1[0x12]);
  }
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    (**(code **)(*(long *)param_1[0xf] + 0x18))
              ((long *)param_1[0xf],param_1[0xe],param_1[0xc] & 0xfffffffffffffffe,1);
  }
LAB_006d3480:
  nn::os::FinalizeMutex((MutexType *)(param_1 + 7));
  *param_1 = (long)(PTR_DAT_047cfb38 + 0x10);
  nn::os::FinalizeEvent((EventType *)(param_1 + 2));
  return;
}


