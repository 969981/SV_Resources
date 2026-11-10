/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0264ff70; name: FUN_0264ff70
 */


void FUN_0264ff70(byte *param_1,code *param_2,ulong param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 local_c0;
  code *local_b8;
  undefined8 local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [88];
  long local_38;
  
  if (3 < *param_1) {
    return;
  }
  lVar1 = (long)param_3 >> 1;
  switch(*param_1) {
  case 0:
    if (*(long *)(param_1 + 8) != 0) {
      plVar4 = (long *)(*(long *)(param_1 + 8) + lVar1);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar4);
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
        pcVar3 = (code *)param_4[1];
        if (pcVar3 != (code *)0x0) {
          param_4[2] = 0;
          param_4[3] = 0;
          *param_4 = 0;
          param_4[1] = 0;
          (*pcVar3)(param_4 + 4);
        }
      }
      (*param_2)(plVar4,&local_b0);
      pcVar3 = local_a8;
      if (local_a8 != (code *)0x0) {
        local_a0 = 0;
        local_98 = 0;
        local_b0 = 0;
        local_a8 = (code *)0x0;
        (*pcVar3)(auStack_90);
      }
    }
    return;
  case 1:
    if (*(long *)(param_1 + 8) != 0) {
      plVar4 = (long *)(*(long *)(param_1 + 8) + lVar1);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar4);
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
        pcVar3 = (code *)param_4[1];
        if (pcVar3 != (code *)0x0) {
          param_4[2] = 0;
          param_4[3] = 0;
          *param_4 = 0;
          param_4[1] = 0;
          (*pcVar3)(param_4 + 4);
        }
      }
      (*param_2)(plVar4,&local_b0);
      pcVar3 = local_a8;
      if (local_a8 != (code *)0x0) {
        local_a0 = 0;
        local_98 = 0;
        local_b0 = 0;
        local_a8 = (code *)0x0;
        (*pcVar3)(auStack_90);
      }
    }
    return;
  case 2:
    if ((*(long *)(param_1 + 8) != 0) &&
       (lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar2 != 0)) {
      plVar4 = (long *)(lVar2 + lVar1 + -0x28);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar4);
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
        pcVar3 = (code *)param_4[1];
        if (pcVar3 != (code *)0x0) {
          param_4[2] = 0;
          param_4[3] = 0;
          *param_4 = 0;
          param_4[1] = 0;
          (*pcVar3)(param_4 + 4);
        }
      }
      (*param_2)(plVar4,&local_b0);
      pcVar3 = local_a8;
      if (local_a8 != (code *)0x0) {
        local_a0 = 0;
        local_98 = 0;
        local_b0 = 0;
        local_a8 = (code *)0x0;
        (*pcVar3)(auStack_90);
      }
    }
    return;
  case 3:
    FUN_0264fe90(&local_38,param_1 + 8);
    if (local_38 != 0) {
      local_b0 = 0;
      local_a8 = (code *)0x0;
      local_c0 = 0;
      local_b8 = (code *)0x0;
      if ((code *)param_4[3] != (code *)0x0) {
        (*(code *)param_4[3])(param_4 + 4,&local_a0);
        local_b0 = param_4[2];
        local_a8 = (code *)param_4[3];
        local_c0 = *param_4;
        local_b8 = (code *)param_4[1];
        pcVar3 = (code *)param_4[1];
        if (pcVar3 != (code *)0x0) {
          param_4[2] = 0;
          param_4[3] = 0;
          *param_4 = 0;
          param_4[1] = 0;
          (*pcVar3)(param_4 + 4);
        }
      }
      FUN_026502cc(&local_38,param_2,param_3,&local_c0);
      pcVar3 = local_b8;
      if (local_b8 != (code *)0x0) {
        local_b0 = 0;
        local_a8 = (code *)0x0;
        local_c0 = 0;
        local_b8 = (code *)0x0;
        (*pcVar3)(&local_a0);
      }
    }
  }
  FUN_0127add4(&local_38);
  return;
}


