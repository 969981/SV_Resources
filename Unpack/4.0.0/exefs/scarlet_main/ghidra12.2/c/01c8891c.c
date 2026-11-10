/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c8891c; name: FUN_01c8891c
 */


void FUN_01c8891c(undefined8 *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  code *local_128;
  undefined1 auStack_110 [96];
  undefined8 local_b0;
  code *local_a8;
  code *local_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [96];
  
  local_128 = (code *)0x0;
  if ((code *)param_1[2] == (code *)0x0) {
    local_a0 = (code *)0x0;
    uStack_98 = 0;
    local_b0 = 0;
    local_a8 = (code *)0x0;
  }
  else {
    (*(code *)param_1[2])(param_1 + 4,auStack_110);
    uVar1 = *param_1;
    local_128 = (code *)param_1[1];
    pcVar2 = (code *)param_1[2];
    uVar3 = param_1[3];
    local_b0 = 0;
    local_a8 = (code *)0x0;
    local_a0 = (code *)0x0;
    uStack_98 = 0;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(auStack_110,auStack_90);
      local_b0 = uVar1;
      local_a8 = local_128;
      local_a0 = pcVar2;
      uStack_98 = uVar3;
    }
  }
  FUN_01c89b4c(&local_b0);
  pcVar2 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (code *)0x0;
    uStack_98 = 0;
    local_b0 = 0;
    local_a8 = (code *)0x0;
    (*pcVar2)(auStack_90);
  }
  if (local_128 != (code *)0x0) {
    (*local_128)(auStack_110);
  }
  return;
}


