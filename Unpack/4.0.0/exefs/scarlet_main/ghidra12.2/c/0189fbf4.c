/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0189fbf4; name: FUN_0189fbf4
 */


void FUN_0189fbf4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  code *local_228;
  undefined1 auStack_210 [96];
  undefined8 local_1b0;
  code *local_1a8;
  code *local_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [96];
  undefined8 local_130;
  code *local_128;
  code *local_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [96];
  undefined8 local_b0;
  code *local_a8;
  code *local_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [96];
  
  local_130 = 0;
  local_128 = (code *)0x0;
  local_120 = (code *)0x0;
  uStack_118 = 0;
  if ((code *)param_1[2] == (code *)0x0) {
    local_a0 = (code *)0x0;
    uStack_98 = 0;
    local_b0 = 0;
    local_a8 = (code *)0x0;
  }
  else {
    (*(code *)param_1[2])(param_1 + 4,auStack_110);
    local_130 = *param_1;
    local_128 = (code *)param_1[1];
    local_120 = (code *)param_1[2];
    uStack_118 = param_1[3];
    local_b0 = 0;
    local_a8 = (code *)0x0;
    local_a0 = (code *)0x0;
    uStack_98 = 0;
    if (local_120 != (code *)0x0) {
      (*local_120)(auStack_110,auStack_90);
      local_b0 = local_130;
      local_a8 = local_128;
      local_a0 = local_120;
      uStack_98 = uStack_118;
    }
  }
  local_228 = (code *)0x0;
  if ((code *)param_2[2] == (code *)0x0) {
    local_1a0 = (code *)0x0;
    uStack_198 = 0;
    local_1b0 = 0;
    local_1a8 = (code *)0x0;
  }
  else {
    (*(code *)param_2[2])(param_2 + 4,auStack_210);
    uVar1 = *param_2;
    local_228 = (code *)param_2[1];
    pcVar2 = (code *)param_2[2];
    uVar3 = param_2[3];
    local_1b0 = 0;
    local_1a8 = (code *)0x0;
    local_1a0 = (code *)0x0;
    uStack_198 = 0;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(auStack_210,auStack_190);
      local_1b0 = uVar1;
      local_1a8 = local_228;
      local_1a0 = pcVar2;
      uStack_198 = uVar3;
    }
  }
  FUN_0189fd80(&local_b0,&local_1b0);
  pcVar2 = local_1a8;
  if (local_1a8 != (code *)0x0) {
    local_1a0 = (code *)0x0;
    uStack_198 = 0;
    local_1b0 = 0;
    local_1a8 = (code *)0x0;
    (*pcVar2)(auStack_190);
  }
  if (local_228 != (code *)0x0) {
    (*local_228)(auStack_210);
  }
  pcVar2 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (code *)0x0;
    uStack_98 = 0;
    local_b0 = 0;
    local_a8 = (code *)0x0;
    (*pcVar2)(auStack_90);
  }
  pcVar2 = local_128;
  if (local_128 != (code *)0x0) {
    local_120 = (code *)0x0;
    uStack_118 = 0;
    local_130 = 0;
    local_128 = (code *)0x0;
    (*pcVar2)(auStack_110);
  }
  return;
}


