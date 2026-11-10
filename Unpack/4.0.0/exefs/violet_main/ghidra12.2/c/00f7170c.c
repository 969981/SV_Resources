/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f7170c; name: FUN_00f7170c
 */


void FUN_00f7170c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *local_18;
  
  FUN_00f7176c(&local_18);
  if (local_18 == (long *)0x0) {
    *param_1 = 0;
  }
  else {
    FUN_00cb7f10(param_1,local_18 + 8,param_4);
    (**(code **)(*local_18 + 0x60))(local_18);
  }
  return;
}


