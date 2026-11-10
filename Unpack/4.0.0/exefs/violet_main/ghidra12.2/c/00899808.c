/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00899808; name: FUN_00899808
 */


void FUN_00899808(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(long *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_00892dc4(param_2,param_1);
  (**(code **)(**(long **)(param_1 + 0x18) + 0xb8))(*(long **)(param_1 + 0x18),param_2,param_3);
  FUN_00892ddc(param_2);
  return;
}


