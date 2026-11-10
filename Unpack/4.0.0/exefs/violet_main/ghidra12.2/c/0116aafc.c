/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0116aafc; name: FUN_0116aafc
 */


void FUN_0116aafc(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  long *plVar1;
  code *pcVar2;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  long *local_1e8;
  undefined8 local_1e0;
  code *local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined1 auStack_1c0 [96];
  undefined8 local_160;
  code *local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined1 auStack_140 [96];
  undefined8 local_e0;
  code *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 auStack_c0 [96];
  
  local_150 = 0;
  local_148 = 0;
  local_160 = 0;
  local_158 = (code *)0x0;
  local_e0 = 0;
  local_d8 = (code *)0x0;
  local_d0 = 0;
  local_c8 = 0;
  local_1e8 = (long *)0x0;
  local_1e0 = 0;
  local_1d8 = (code *)0x0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_200 = *param_2;
  uStack_1f8 = param_2[1];
  local_1f0 = param_2[2];
  plVar1 = (long *)param_2[3];
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  local_1e8 = plVar1;
  if ((code *)param_3[2] != (code *)0x0) {
    (*(code *)param_3[2])(param_3 + 4,auStack_1c0);
    pcVar2 = local_158;
    local_1d0 = param_3[2];
    local_1c8 = param_3[3];
    local_1e0 = *param_3;
    local_1d8 = (code *)param_3[1];
    if (local_158 != (code *)0x0) {
      local_150 = 0;
      local_148 = 0;
      local_160 = 0;
      local_158 = (code *)0x0;
      (*pcVar2)(auStack_140);
    }
  }
  if ((code *)param_5[2] != (code *)0x0) {
    (*(code *)param_5[2])(param_5 + 4,auStack_140);
    local_148 = param_5[3];
    local_158 = (code *)param_5[1];
    local_160 = *param_5;
    local_150 = param_5[2];
  }
  pcVar2 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = 0;
    local_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar2)(auStack_c0);
  }
  if ((code *)param_4[2] != (code *)0x0) {
    (*(code *)param_4[2])(param_4 + 4,auStack_c0);
    local_c8 = param_4[3];
    local_d8 = (code *)param_4[1];
    local_e0 = *param_4;
    local_d0 = param_4[2];
  }
  FUN_0116ace8(param_1,&local_200);
  pcVar2 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = 0;
    local_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar2)(auStack_c0);
  }
  pcVar2 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = 0;
    local_148 = 0;
    local_160 = 0;
    local_158 = (code *)0x0;
    (*pcVar2)(auStack_140);
  }
  pcVar2 = local_1d8;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = 0;
    local_1c8 = 0;
    local_1e0 = 0;
    local_1d8 = (code *)0x0;
    (*pcVar2)(auStack_1c0);
  }
  if (local_1e8 != (long *)0x0) {
    (**(code **)(*local_1e8 + 0x20))();
  }
  return;
}


