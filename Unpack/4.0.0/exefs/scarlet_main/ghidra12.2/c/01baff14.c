/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01baff14; name: FUN_01baff14
 */


void FUN_01baff14(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined8 local_148;
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
  puVar1 = &LAB_009570cc;
  if (DAT_0480c8e8 == '\0') {
    puVar1 = (undefined1 *)0x0;
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
  local_148 = param_3;
  FUN_01bb05a8(param_1,puVar1,0,&local_c0,&local_148);
  pcVar2 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    uStack_a8 = 0;
    local_c0 = 0;
    local_b8 = (code *)0x0;
    (*pcVar2)(auStack_a0);
  }
  pcVar2 = local_138;
  if (local_138 != (code *)0x0) {
    local_130 = (code *)0x0;
    uStack_128 = 0;
    local_140 = 0;
    local_138 = (code *)0x0;
    (*pcVar2)(auStack_120);
  }
  return;
}


