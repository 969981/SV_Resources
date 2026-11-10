/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a39424; name: FUN_00a39424
 */


void FUN_00a39424(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),0x97e00,8);
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  uVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),0x97e00,8);
  *(undefined8 *)(param_1 + 0xb0) = uVar1;
  uVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),0x97e00,8);
  *(undefined8 *)(param_1 + 0xd0) = uVar1;
  return;
}


