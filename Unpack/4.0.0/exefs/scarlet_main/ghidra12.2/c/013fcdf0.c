/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013fcdf0; name: FUN_013fcdf0
 */


undefined8 * FUN_013fcdf0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  
  puVar2 = param_3;
  if (param_1 != param_2) {
    local_18 = *param_3;
    *param_3 = 0;
    FUN_019b5bd8(&local_18);
    uVar1 = *param_1;
    *param_1 = 0;
    puVar2 = param_3 + 1;
    *param_3 = uVar1;
    if (param_1 + 1 != param_2) {
      local_18 = param_3[1];
      param_3[1] = 0;
      FUN_019b5bd8(&local_18);
      uVar1 = param_1[1];
      param_1[1] = 0;
      param_3[1] = uVar1;
      puVar2 = param_3 + 2;
      for (param_1 = param_1 + 2; param_1 != param_2; param_1 = param_1 + 1) {
        local_18 = *puVar2;
        *puVar2 = 0;
        FUN_019b5bd8(&local_18);
        uVar1 = *param_1;
        *param_1 = 0;
        *puVar2 = uVar1;
        puVar2 = puVar2 + 1;
      }
    }
  }
  return puVar2;
}


