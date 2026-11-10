/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d574f8; name: FUN_01d574f8
 */


void FUN_01d574f8(undefined8 param_1,undefined8 param_2,long *param_3,code *param_4,ulong param_5,
                 undefined4 param_6,undefined8 *param_7,undefined8 param_8)

{
  long *plVar1;
  code *pcVar2;
  undefined8 local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 auStack_a0 [96];
  
  plVar1 = (long *)(*param_3 + ((long)param_5 >> 1));
  if ((param_5 & 1) != 0) {
    param_4 = *(code **)(param_4 + *plVar1);
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
  (*param_4)(param_1,param_2,plVar1,param_6,&local_c0,param_8);
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


