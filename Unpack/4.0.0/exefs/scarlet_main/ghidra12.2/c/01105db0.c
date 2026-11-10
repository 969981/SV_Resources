/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01105db0; name: FUN_01105db0
 */


void FUN_01105db0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [96];
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  local_a0 = 0;
  local_98 = 0;
  local_b0 = 0;
  local_a8 = (code *)0x0;
  if ((code *)param_3[2] != (code *)0x0) {
    (*(code *)param_3[2])(param_3 + 4,auStack_90);
    local_98 = param_3[3];
    local_a8 = (code *)param_3[1];
    local_b0 = *param_3;
    local_a0 = param_3[2];
  }
  FUN_01105e4c(uVar2,param_2,&local_b0);
  pcVar1 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = 0;
    local_98 = 0;
    local_b0 = 0;
    local_a8 = (code *)0x0;
    (*pcVar1)(auStack_90);
  }
  return;
}


