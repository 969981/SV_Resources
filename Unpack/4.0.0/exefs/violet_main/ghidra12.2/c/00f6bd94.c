/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f6bd94; name: FUN_00f6bd94
 */


void FUN_00f6bd94(long param_1)

{
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  
  (**(code **)(**(long **)(param_1 + 200) + 0x30))(*(long **)(param_1 + 200),param_1 + 0x148);
  *(undefined4 *)(param_1 + 0x2b4) = 0;
  *(undefined8 *)(param_1 + 0x288) = extraout_var_00;
  *(ulong *)(param_1 + 0x280) = CONCAT44(extraout_var,extraout_s0);
  FUN_00f6c0bc(param_1);
  FUN_00f6c214(param_1);
  FUN_00f6bdf8(param_1);
  FUN_00f6be74(0,*(undefined8 *)(param_1 + 0x238));
  *(undefined1 *)(param_1 + 0x2af) = 1;
  return;
}


