/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e63fdc; name: FUN_01e63fdc
 */


void FUN_01e63fdc(undefined4 *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  
  lVar1 = FUN_01e6421c();
  if ((ulong)param_3[1] < lVar1 + param_3[2] + 2U) {
    *param_1 = 0xd;
    return;
  }
  *(undefined1 *)(*param_3 + param_3[2]) = 0xb9;
  param_3[2] = param_3[2] + 1;
  FUN_01e6424c(param_1,param_2,param_3);
  return;
}


