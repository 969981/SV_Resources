/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007d9710; name: FUN_007d9710
 */


void FUN_007d9710(long param_1,long param_2)

{
  undefined4 local_30 [2];
  long local_28;
  
  FUN_007d44f0();
  FUN_007d6714(param_1 + 0x868,*(undefined8 *)(param_2 + 0x30),*(undefined2 *)(param_2 + 0x38));
  if (*(code **)(param_1 + 0x778) != (code *)0x0) {
    local_30[0] = 2;
    local_28 = param_2;
    (**(code **)(param_1 + 0x778))(local_30);
  }
  *(undefined1 *)(param_1 + 0x792) = 1;
  return;
}


