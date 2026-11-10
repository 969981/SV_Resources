/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01bab434; name: FUN_01bab434
 */


void FUN_01bab434(long *param_1,code *param_2,ulong param_3,undefined4 param_4,undefined8 param_5,
                 uint param_6,undefined8 *param_7)

{
  long *plVar1;
  code *pcVar2;
  undefined8 local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 auStack_a0 [96];
  
  plVar1 = (long *)(*param_1 + ((long)param_3 >> 1));
  if ((param_3 & 1) != 0) {
    param_2 = *(code **)(param_2 + *plVar1);
  }
  local_b0 = 0;
  local_a8 = 0;
  local_c0 = 0;
  local_b8 = (code *)0x0;
  if ((code *)param_7[2] != (code *)0x0) {
    (*(code *)param_7[2])(param_7 + 4,auStack_a0);
    local_a8 = param_7[3];
    local_b8 = (code *)param_7[1];
    local_c0 = *param_7;
    local_b0 = param_7[2];
  }
  (*param_2)(plVar1,param_4,param_5,param_6 & 1,&local_c0);
  pcVar2 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = 0;
    local_a8 = 0;
    local_c0 = 0;
    local_b8 = (code *)0x0;
    (*pcVar2)(auStack_a0);
  }
  return;
}


