/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e1d474; name: FUN_02e1d474
 */


bool FUN_02e1d474(long *param_1,undefined8 param_2,short param_3)

{
  short sVar1;
  
  sVar1 = (**(code **)(*param_1 + 0x38))();
  return sVar1 == param_3;
}


