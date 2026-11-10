/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01962e20; name: FUN_01962e20
 */


void FUN_01962e20(undefined8 param_1,undefined8 param_2,undefined4 *param_3,long param_4)

{
  undefined4 uVar1;
  code *local_a8;
  undefined1 auStack_90 [96];
  
  uVar1 = *param_3;
  local_a8 = (code *)0x0;
  if (*(code **)(param_4 + 0x10) != (code *)0x0) {
    (**(code **)(param_4 + 0x10))(param_4 + 0x20,auStack_90);
    local_a8 = *(code **)(param_4 + 8);
  }
  FUN_01962ec8(uVar1,param_1,param_2);
  if (local_a8 != (code *)0x0) {
    (*local_a8)(auStack_90);
  }
  return;
}


