/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e6b3d8; name: FUN_01e6b3d8
 */


void FUN_01e6b3d8(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 long *param_5)

{
  long lVar1;
  
  lVar1 = FUN_01e6b088(*param_5 + 0x28);
  if (lVar1 == 0) {
    return;
  }
  FUN_01e625cc(lVar1,param_4,param_2,param_3);
  FUN_01e6ae6c(param_1,param_4);
  return;
}


