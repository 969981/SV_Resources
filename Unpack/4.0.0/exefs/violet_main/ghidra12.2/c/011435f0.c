/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011435f0; name: FUN_011435f0
 */


void FUN_011435f0(char *param_1,code *param_2,ulong param_3,undefined4 *param_4,undefined8 *param_5,
                 char *param_6,undefined8 *param_7)

{
  undefined4 uVar1;
  char cVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 local_d0;
  code *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 auStack_b0 [96];
  
  cVar2 = *param_1;
  if (cVar2 == '\x02') {
    if ((*(long *)(param_1 + 8) != 0) &&
       (lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar3 != 0)) {
      plVar5 = (long *)(lVar3 + ((long)param_3 >> 1) + -0x28);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar5);
      }
      uVar1 = *param_4;
      uVar6 = *param_5;
      cVar2 = *param_6;
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
      (*param_2)(plVar5,uVar1,uVar6,cVar2 != '\0',&local_d0);
      pcVar4 = local_c8;
      if (local_c8 != (code *)0x0) {
        local_c0 = 0;
        local_b8 = 0;
        local_d0 = 0;
        local_c8 = (code *)0x0;
        (*pcVar4)(auStack_b0);
      }
    }
  }
  else {
    if (cVar2 == '\x03') {
      FUN_01143d9c(param_1 + 8,param_2);
      return;
    }
    if (cVar2 == '\x01') {
      FUN_01143cb0(param_1 + 8,param_2);
      return;
    }
    if (cVar2 == '\0') {
      FUN_01143bc8(*(undefined8 *)(param_1 + 8),param_2);
      return;
    }
  }
  return;
}


