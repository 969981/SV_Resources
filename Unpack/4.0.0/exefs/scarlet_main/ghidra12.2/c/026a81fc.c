/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026a81fc; name: FUN_026a81fc
 */


void FUN_026a81fc(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *local_138;
  undefined1 auStack_120 [96];
  undefined8 local_c0;
  code *local_b8;
  code *local_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [96];
  
  uVar1 = *param_1;
  uVar4 = param_1[1];
  local_138 = (code *)0x0;
  if ((code *)param_3[2] == (code *)0x0) {
    local_b0 = (code *)0x0;
    uStack_a8 = 0;
    local_c0 = 0;
    local_b8 = (code *)0x0;
  }
  else {
    (*(code *)param_3[2])(param_3 + 4,auStack_120);
    uVar2 = *param_3;
    local_138 = (code *)param_3[1];
    pcVar3 = (code *)param_3[2];
    uVar5 = param_3[3];
    local_c0 = 0;
    local_b8 = (code *)0x0;
    local_b0 = (code *)0x0;
    uStack_a8 = 0;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(auStack_120,auStack_a0);
      local_c0 = uVar2;
      local_b8 = local_138;
      local_b0 = pcVar3;
      uStack_a8 = uVar5;
    }
  }
  FUN_026aa2e8(param_2,uVar1,uVar4,&local_c0);
  pcVar3 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    uStack_a8 = 0;
    local_c0 = 0;
    local_b8 = (code *)0x0;
    (*pcVar3)(auStack_a0);
  }
  if (local_138 != (code *)0x0) {
    (*local_138)(auStack_120);
  }
  return;
}


