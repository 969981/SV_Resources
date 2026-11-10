/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d9e270; name: FUN_01d9e270
 */


undefined4 FUN_01d9e270(code *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [96];
  
  uVar3 = *param_2;
  local_a0 = 0;
  local_98 = 0;
  local_b0 = 0;
  local_a8 = (code *)0x0;
  if ((code *)param_3[3] != (code *)0x0) {
    (*(code *)param_3[3])(param_3 + 4,auStack_90);
    local_a0 = param_3[2];
    local_98 = param_3[3];
    local_b0 = *param_3;
    local_a8 = (code *)param_3[1];
    pcVar2 = (code *)param_3[1];
    if (pcVar2 != (code *)0x0) {
      param_3[2] = 0;
      param_3[3] = 0;
      *param_3 = 0;
      param_3[1] = 0;
      (*pcVar2)(param_3 + 4);
    }
  }
  uVar1 = (*param_1)(uVar3,&local_b0);
  pcVar2 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = 0;
    local_98 = 0;
    local_b0 = 0;
    local_a8 = (code *)0x0;
    (*pcVar2)(auStack_90);
  }
  return uVar1;
}


