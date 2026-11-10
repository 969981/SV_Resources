/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0269cb04; name: FUN_0269cb04
 */


void FUN_0269cb04(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  code *local_238;
  undefined1 auStack_220 [96];
  undefined8 local_1c0;
  code *local_1b8;
  code *local_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [96];
  undefined8 local_140;
  code *local_138;
  code *local_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [96];
  undefined8 local_c0;
  code *local_b8;
  code *local_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [96];
  
  local_140 = 0;
  local_138 = (code *)0x0;
  local_130 = (code *)0x0;
  uStack_128 = 0;
  puVar1 = PTR_LAB_047e07f8;
  if (DAT_048590f0 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  if ((code *)param_2[2] == (code *)0x0) {
    local_b0 = (code *)0x0;
    uStack_a8 = 0;
    local_c0 = 0;
    local_b8 = (code *)0x0;
  }
  else {
    (*(code *)param_2[2])(param_2 + 4,auStack_120);
    local_140 = *param_2;
    local_138 = (code *)param_2[1];
    local_130 = (code *)param_2[2];
    uStack_128 = param_2[3];
    local_c0 = 0;
    local_b8 = (code *)0x0;
    local_b0 = (code *)0x0;
    uStack_a8 = 0;
    if (local_130 != (code *)0x0) {
      (*local_130)(auStack_120,auStack_a0);
      local_c0 = local_140;
      local_b8 = local_138;
      local_b0 = local_130;
      uStack_a8 = uStack_128;
    }
  }
  local_238 = (code *)0x0;
  if ((code *)param_3[2] == (code *)0x0) {
    local_1b0 = (code *)0x0;
    uStack_1a8 = 0;
    local_1c0 = 0;
    local_1b8 = (code *)0x0;
  }
  else {
    (*(code *)param_3[2])(param_3 + 4,auStack_220);
    uVar2 = *param_3;
    local_238 = (code *)param_3[1];
    pcVar3 = (code *)param_3[2];
    uVar4 = param_3[3];
    local_1c0 = 0;
    local_1b8 = (code *)0x0;
    local_1b0 = (code *)0x0;
    uStack_1a8 = 0;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(auStack_220,auStack_1a0);
      local_1c0 = uVar2;
      local_1b8 = local_238;
      local_1b0 = pcVar3;
      uStack_1a8 = uVar4;
    }
  }
  FUN_0269ec78(param_1,puVar1,0,&local_c0,&local_1c0);
  pcVar3 = local_1b8;
  if (local_1b8 != (code *)0x0) {
    local_1b0 = (code *)0x0;
    uStack_1a8 = 0;
    local_1c0 = 0;
    local_1b8 = (code *)0x0;
    (*pcVar3)(auStack_1a0);
  }
  if (local_238 != (code *)0x0) {
    (*local_238)(auStack_220);
  }
  pcVar3 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    uStack_a8 = 0;
    local_c0 = 0;
    local_b8 = (code *)0x0;
    (*pcVar3)(auStack_a0);
  }
  pcVar3 = local_138;
  if (local_138 != (code *)0x0) {
    local_130 = (code *)0x0;
    uStack_128 = 0;
    local_140 = 0;
    local_138 = (code *)0x0;
    (*pcVar3)(auStack_120);
  }
  return;
}


