/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0215b53c; name: FUN_0215b53c
 */


void FUN_0215b53c(long param_1)

{
  undefined8 local_28;
  undefined8 local_8;
  
  FUN_0215dd10(&local_8,*(undefined8 *)(param_1 + 8));
  local_28 = local_8;
  local_8 = 0;
  FUN_021540fc(param_1 + 0x40,&local_28);
  FUN_015a7af4(&local_28);
  if (*(code **)(param_1 + 0xb0) != (code *)0x0) {
    (**(code **)(param_1 + 0xb0))(param_1 + 0xd0);
  }
  return;
}


