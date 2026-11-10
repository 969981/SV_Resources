/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0121b8bc; name: FUN_0121b8bc
 */


void FUN_0121b8bc(long param_1)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined8 local_8;
  
  uVar1 = FUN_0121c834(*(undefined8 *)(param_1 + 8));
  FUN_0121b998(&local_28,uVar1);
  local_8 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  FUN_0121b920(&local_8);
  uVar1 = local_28;
  local_28 = 0;
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  FUN_0121b920(&local_28);
  FUN_01220b4c(*(undefined8 *)(param_1 + 0x40));
  return;
}


