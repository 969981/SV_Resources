/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026502cc; name: FUN_026502cc
 */


void FUN_026502cc(long *param_1,code *param_2,ulong param_3,undefined8 *param_4)

{
  long *plVar1;
  code *pcVar2;
  undefined8 local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [96];
  
  plVar1 = (long *)(*param_1 + ((long)param_3 >> 1));
  if ((param_3 & 1) != 0) {
    param_2 = *(code **)(param_2 + *plVar1);
  }
  local_a0 = 0;
  local_98 = 0;
  local_b0 = 0;
  local_a8 = (code *)0x0;
  if ((code *)param_4[2] != (code *)0x0) {
    (*(code *)param_4[2])(param_4 + 4,auStack_90);
    local_98 = param_4[3];
    local_a8 = (code *)param_4[1];
    local_b0 = *param_4;
    local_a0 = param_4[2];
  }
  (*param_2)(plVar1,&local_b0);
  pcVar2 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = 0;
    local_98 = 0;
    local_b0 = 0;
    local_a8 = (code *)0x0;
    (*pcVar2)(auStack_90);
  }
  return;
}


