/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01132f58; name: FUN_01132f58
 */


void FUN_01132f58(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  code *pcVar2;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  long *local_148;
  undefined8 local_140;
  code *local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 auStack_120 [96];
  undefined8 local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [96];
  
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  local_b8 = (code *)0x0;
  local_148 = (long *)0x0;
  local_140 = 0;
  local_138 = (code *)0x0;
  local_130 = 0;
  local_128 = 0;
  local_160 = *param_2;
  uStack_158 = param_2[1];
  local_150 = param_2[2];
  plVar1 = (long *)param_2[3];
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  local_148 = plVar1;
  if ((code *)param_3[2] != (code *)0x0) {
    (*(code *)param_3[2])(param_3 + 4,auStack_120);
    local_128 = param_3[3];
    local_138 = (code *)param_3[1];
    local_140 = *param_3;
    local_130 = param_3[2];
  }
  FUN_01133070(param_1,&local_160);
  pcVar2 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    local_b8 = (code *)0x0;
    (*pcVar2)(auStack_a0);
  }
  pcVar2 = local_138;
  if (local_138 != (code *)0x0) {
    local_130 = 0;
    local_128 = 0;
    local_140 = 0;
    local_138 = (code *)0x0;
    (*pcVar2)(auStack_120);
  }
  if (local_148 != (long *)0x0) {
    (**(code **)(*local_148 + 0x20))();
  }
  return;
}


