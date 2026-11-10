/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dad39c; name: FUN_01dad39c
 */


void FUN_01dad39c(long *param_1)

{
  long lVar1;
  
  *param_1 = (long)&DAT_0453ffd0;
  if ((char)param_1[0x6f] != '\0') {
    nn::os::DestroySystemEvent((SystemEventType *)(param_1 + 0x6a));
  }
  lVar1 = param_1[100];
  param_1[100] = 0;
  if (lVar1 != 0) {
    FUN_01dad408(param_1 + 0x65);
  }
  *param_1 = (long)(PTR_DAT_047d8b60 + 0x10);
  FUN_01dad824(param_1 + 0x50);
  FUN_01dad874(param_1);
  return;
}


