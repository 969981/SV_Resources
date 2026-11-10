/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a37cc4; name: FUN_01a37cc4
 */


void FUN_01a37cc4(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *local_98;
  undefined1 auStack_80 [96];
  
  local_98 = (code *)0x0;
  if (*(code **)(param_3 + 0x10) != (code *)0x0) {
    (**(code **)(param_3 + 0x10))(param_3 + 0x20,auStack_80);
    local_98 = *(code **)(param_3 + 8);
  }
  FUN_01a37d4c(param_2);
  if (local_98 != (code *)0x0) {
    (*local_98)(auStack_80);
  }
  return;
}


