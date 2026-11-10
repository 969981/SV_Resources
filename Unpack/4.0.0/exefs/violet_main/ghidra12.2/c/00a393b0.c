/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a393b0; name: FUN_00a393b0
 */


void FUN_00a393b0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),0xf200,8);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  uVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),0xf200,8);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  uVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),0xf200,8);
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  return;
}


