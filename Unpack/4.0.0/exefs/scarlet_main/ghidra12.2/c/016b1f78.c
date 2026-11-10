/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


