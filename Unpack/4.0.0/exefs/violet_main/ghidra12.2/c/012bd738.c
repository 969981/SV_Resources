/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012bd738; name: FUN_012bd738
 */


void FUN_012bd738(long param_1)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined1 local_14;
  
  local_14 = 1;
  local_28 = *(undefined8 *)(*(long *)PTR_DAT_047d3f70 + 0x28);
  uStack_20 = *(undefined8 *)(param_1 + 0x10);
  local_18 = *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x58);
  FUN_012bdadc(&local_28);
  return;
}


