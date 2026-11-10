/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02357d88; name: FUN_02357d88
 */


void FUN_02357d88(long *param_1,code *param_2,ulong param_3,undefined8 *param_4)

{
  long *plVar1;
  code *pcVar2;
  undefined8 local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [96];
  
  if (*param_1 != 0) {
    plVar1 = (long *)(*param_1 + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *plVar1);
    }
    local_a0 = 0;
    local_98 = 0;
    local_b0 = 0;
    local_a8 = (code *)0x0;
    if ((code *)param_4[3] != (code *)0x0) {
      (*(code *)param_4[3])(param_4 + 4,auStack_90);
      local_a0 = param_4[2];
      local_98 = param_4[3];
      local_b0 = *param_4;
      local_a8 = (code *)param_4[1];
      pcVar2 = (code *)param_4[1];
      if (pcVar2 != (code *)0x0) {
        param_4[2] = 0;
        param_4[3] = 0;
        *param_4 = 0;
        param_4[1] = 0;
        (*pcVar2)(param_4 + 4);
      }
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
  }
  return;
}


