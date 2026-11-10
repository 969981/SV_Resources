/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029a043c; name: FUN_029a043c
 */


void FUN_029a043c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_28;
  
  local_28 = param_2;
  uVar1 = FUN_029a04b0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),&local_28);
  FUN_029a056c((undefined8 *)(param_1 + 0x18),uVar1,*(undefined8 *)(param_1 + 0x20));
  uVar1 = FUN_029a0670(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),&local_28);
  FUN_029a056c((undefined8 *)(param_1 + 0x50),uVar1,*(undefined8 *)(param_1 + 0x58));
  return;
}


