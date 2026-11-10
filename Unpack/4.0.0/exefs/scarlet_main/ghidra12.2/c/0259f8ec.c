/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0259f8ec; name: FUN_0259f8ec
 */


void FUN_0259f8ec(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  code *local_138;
  undefined1 auStack_120 [96];
  undefined8 local_c0;
  code *local_b8;
  code *local_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [96];
  
  local_138 = (code *)0x0;
  puVar1 = PTR_LAB_047de9f0;
  if (DAT_04852098 == '\0') {
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
    uVar2 = *param_2;
    local_138 = (code *)param_2[1];
    pcVar3 = (code *)param_2[2];
    uVar4 = param_2[3];
    local_c0 = 0;
    local_b8 = (code *)0x0;
    local_b0 = (code *)0x0;
    uStack_a8 = 0;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(auStack_120,auStack_a0);
      local_c0 = uVar2;
      local_b8 = local_138;
      local_b0 = pcVar3;
      uStack_a8 = uVar4;
    }
  }
  FUN_025a2d88(param_1,puVar1,0,&local_c0);
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


