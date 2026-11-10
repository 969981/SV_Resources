/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018522e0; name: FUN_018522e0
 */


void FUN_018522e0(undefined8 param_1,long *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (param_2 == (long *)0x0) {
    return;
  }
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  FUN_018ce0ec(param_1,uVar1,param_3);
  return;
}


