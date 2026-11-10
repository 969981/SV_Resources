/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0235d290; name: FUN_0235d290
 */


void FUN_0235d290(code *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [96];
  
  local_a0 = 0;
  local_98 = 0;
  local_b0 = 0;
  local_a8 = (code *)0x0;
  if ((code *)param_2[3] != (code *)0x0) {
    (*(code *)param_2[3])(param_2 + 4,auStack_90);
    local_a0 = param_2[2];
    local_98 = param_2[3];
    local_b0 = *param_2;
    local_a8 = (code *)param_2[1];
    pcVar1 = (code *)param_2[1];
    if (pcVar1 != (code *)0x0) {
      param_2[2] = 0;
      param_2[3] = 0;
      *param_2 = 0;
      param_2[1] = 0;
      (*pcVar1)(param_2 + 4);
    }
  }
  (*param_1)(&local_b0);
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


