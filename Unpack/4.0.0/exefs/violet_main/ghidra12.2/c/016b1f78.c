/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016b1f78; name: FUN_016b1f78
 */


void FUN_016b1f78(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 local_28;
  undefined8 local_8;
  
  plVar2 = (long *)FUN_00e31554();
  FUN_016b2058(&local_28,*(undefined8 *)(param_1 + 8),plVar2,*plVar2 + 0xb8);
  local_8 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  FUN_016b1fe0(&local_8);
  uVar1 = local_28;
  local_28 = 0;
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  FUN_016b1fe0(&local_28);
  return;
}


