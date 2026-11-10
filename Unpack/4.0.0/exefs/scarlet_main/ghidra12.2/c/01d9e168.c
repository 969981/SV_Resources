/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d9e168; name: FUN_01d9e168
 */


long FUN_01d9e168(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  code *local_138;
  undefined1 auStack_120 [96];
  undefined8 local_c0;
  code *local_b8;
  code *local_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [104];
  undefined8 local_38;
  
  uVar4 = DAT_048337b8;
  local_38 = FUN_017f7db0();
  local_138 = (code *)0x0;
  if ((code *)param_2[2] == (code *)0x0) {
    local_b0 = (code *)0x0;
    uStack_a8 = 0;
    local_c0 = 0;
    local_b8 = (code *)0x0;
  }
  else {
    (*(code *)param_2[2])(param_2 + 4,auStack_120);
    uVar1 = *param_2;
    local_138 = (code *)param_2[1];
    pcVar2 = (code *)param_2[2];
    uVar3 = param_2[3];
    local_c0 = 0;
    local_b8 = (code *)0x0;
    local_b0 = (code *)0x0;
    uStack_a8 = 0;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(auStack_120,auStack_a0);
      local_c0 = uVar1;
      local_b8 = local_138;
      local_b0 = pcVar2;
      uStack_a8 = uVar3;
    }
  }
  iVar5 = FUN_01d9e270(uVar4,&local_38,&local_c0);
  pcVar2 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    uStack_a8 = 0;
    local_c0 = 0;
    local_b8 = (code *)0x0;
    (*pcVar2)(auStack_a0);
  }
  if (local_138 != (code *)0x0) {
    (*local_138)(auStack_120);
  }
  return (long)iVar5;
}


