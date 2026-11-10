/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01143cb0; name: FUN_01143cb0
 */


void FUN_01143cb0(long *param_1,code *param_2,ulong param_3,undefined4 *param_4,undefined8 *param_5,
                 char *param_6,undefined8 *param_7)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 local_d0;
  code *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 auStack_b0 [96];
  
  if (*param_1 != 0) {
    plVar1 = (long *)(*param_1 + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *plVar1);
    }
    uVar2 = *param_4;
    uVar5 = *param_5;
    cVar3 = *param_6;
    local_c0 = 0;
    local_b8 = 0;
    local_d0 = 0;
    local_c8 = (code *)0x0;
    if ((code *)param_7[3] != (code *)0x0) {
      (*(code *)param_7[3])(param_7 + 4,auStack_b0);
      local_c0 = param_7[2];
      local_b8 = param_7[3];
      local_d0 = *param_7;
      local_c8 = (code *)param_7[1];
      pcVar4 = (code *)param_7[1];
      if (pcVar4 != (code *)0x0) {
        param_7[2] = 0;
        param_7[3] = 0;
        *param_7 = 0;
        param_7[1] = 0;
        (*pcVar4)(param_7 + 4);
      }
    }
    (*param_2)(plVar1,uVar2,uVar5,cVar3 != '\0',&local_d0);
    pcVar4 = local_c8;
    if (local_c8 != (code *)0x0) {
      local_c0 = 0;
      local_b8 = 0;
      local_d0 = 0;
      local_c8 = (code *)0x0;
      (*pcVar4)(auStack_b0);
    }
  }
  return;
}


