/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02158fb4; name: FUN_02158fb4
 */


void FUN_02158fb4(long param_1)

{
  undefined4 local_4;
  
  FUN_021529f8(*(undefined8 *)(param_1 + 0x950),*(undefined8 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 0x9e0) = 0xffffffff;
  if (*(code **)(param_1 + 0x4d0) != (code *)0x0) {
    local_4 = 1;
    (**(code **)(param_1 + 0x4d0))(param_1 + 0x4f0,&local_4);
  }
  return;
}


