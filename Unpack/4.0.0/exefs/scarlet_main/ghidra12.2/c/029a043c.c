/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


