/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d57058; name: FUN_01d57058
 */


void FUN_01d57058(undefined8 *param_1,byte *param_2,code *param_3,ulong param_4,undefined4 *param_5,
                 undefined8 *param_6,ulong *param_7,undefined8 param_8)

{
  short *psVar1;
  undefined4 uVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  short sVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong local_d0;
  code *local_c8;
  ulong local_c0;
  code *local_b8;
  ulong local_b0;
  ulong local_a8;
  undefined1 auStack_a0 [80];
  
  if (3 < *param_2) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  lVar7 = (long)param_4 >> 1;
  switch(*param_2) {
  case 0:
    if (*(long *)(param_2 + 8) == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      plVar10 = (long *)(*(long *)(param_2 + 8) + lVar7);
      if ((param_4 & 1) != 0) {
        param_3 = *(code **)(param_3 + *plVar10);
      }
      uVar2 = *param_5;
      uVar11 = *param_6;
      local_c0 = 0;
      local_b8 = (code *)0x0;
      local_d0 = 0;
      local_c8 = (code *)0x0;
      if ((code *)param_7[3] != (code *)0x0) {
        (*(code *)param_7[3])(param_7 + 4,&local_b0);
        local_c0 = param_7[2];
        local_b8 = (code *)param_7[3];
        local_d0 = *param_7;
        local_c8 = (code *)param_7[1];
        pcVar8 = (code *)param_7[1];
        if (pcVar8 != (code *)0x0) {
          param_7[2] = 0;
          param_7[3] = 0;
          *param_7 = 0;
          param_7[1] = 0;
          (*pcVar8)(param_7 + 4);
        }
      }
      (*param_3)(param_1,uVar11,plVar10,uVar2,&local_d0,param_8);
      pcVar8 = local_c8;
      if (local_c8 != (code *)0x0) {
        local_c0 = 0;
        local_b8 = (code *)0x0;
        local_d0 = 0;
        local_c8 = (code *)0x0;
        (*pcVar8)(&local_b0);
      }
    }
    return;
  case 1:
    if (*(long *)(param_2 + 8) == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      plVar10 = (long *)(*(long *)(param_2 + 8) + lVar7);
      if ((param_4 & 1) != 0) {
        param_3 = *(code **)(param_3 + *plVar10);
      }
      uVar2 = *param_5;
      uVar11 = *param_6;
      local_c0 = 0;
      local_b8 = (code *)0x0;
      local_d0 = 0;
      local_c8 = (code *)0x0;
      if ((code *)param_7[3] != (code *)0x0) {
        (*(code *)param_7[3])(param_7 + 4,&local_b0);
        local_c0 = param_7[2];
        local_b8 = (code *)param_7[3];
        local_d0 = *param_7;
        local_c8 = (code *)param_7[1];
        pcVar8 = (code *)param_7[1];
        if (pcVar8 != (code *)0x0) {
          param_7[2] = 0;
          param_7[3] = 0;
          *param_7 = 0;
          param_7[1] = 0;
          (*pcVar8)(param_7 + 4);
        }
      }
      (*param_3)(param_1,uVar11,plVar10,uVar2,&local_d0,param_8);
      pcVar8 = local_c8;
      if (local_c8 != (code *)0x0) {
        local_c0 = 0;
        local_b8 = (code *)0x0;
        local_d0 = 0;
        local_c8 = (code *)0x0;
        (*pcVar8)(&local_b0);
      }
    }
    return;
  case 2:
    if ((*(long *)(param_2 + 8) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_2 + 8) + 0x10), lVar6 == 0)) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      plVar10 = (long *)(lVar6 + lVar7 + -0x28);
      if ((param_4 & 1) != 0) {
        param_3 = *(code **)(param_3 + *plVar10);
      }
      uVar2 = *param_5;
      uVar11 = *param_6;
      local_c0 = 0;
      local_b8 = (code *)0x0;
      local_d0 = 0;
      local_c8 = (code *)0x0;
      if ((code *)param_7[3] != (code *)0x0) {
        (*(code *)param_7[3])(param_7 + 4,&local_b0);
        local_c0 = param_7[2];
        local_b8 = (code *)param_7[3];
        local_d0 = *param_7;
        local_c8 = (code *)param_7[1];
        pcVar8 = (code *)param_7[1];
        if (pcVar8 != (code *)0x0) {
          param_7[2] = 0;
          param_7[3] = 0;
          *param_7 = 0;
          param_7[1] = 0;
          (*pcVar8)(param_7 + 4);
        }
      }
      (*param_3)(param_1,uVar11,plVar10,uVar2,&local_d0,param_8);
      pcVar8 = local_c8;
      if (local_c8 != (code *)0x0) {
        local_c0 = 0;
        local_b8 = (code *)0x0;
        local_d0 = 0;
        local_c8 = (code *)0x0;
        (*pcVar8)(&local_b0);
      }
    }
    return;
  }
  lVar7 = *(long *)(param_2 + 8);
  if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar7 + 0x1a);
    sVar9 = *(short *)(lVar7 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar9) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01d57420;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01d57420:
        bVar5 = false;
      }
      if (bVar5) {
        if (*(long *)(lVar7 + 0x10) != 0) {
          local_c0 = 0;
          uVar2 = *param_5;
          uVar11 = *param_6;
          local_b8 = (code *)0x0;
          local_b0 = 0;
          local_a8 = 0;
          local_d0 = param_4;
          local_c8 = (code *)param_8;
          if ((code *)param_7[3] != (code *)0x0) {
            (*(code *)param_7[3])(param_7 + 4,auStack_a0);
            local_b0 = param_7[2];
            local_a8 = param_7[3];
            local_c0 = *param_7;
            local_b8 = (code *)param_7[1];
            pcVar8 = (code *)param_7[1];
            if (pcVar8 != (code *)0x0) {
              param_7[2] = 0;
              param_7[3] = 0;
              *param_7 = 0;
              param_7[1] = 0;
              (*pcVar8)(param_7 + 4);
            }
          }
          FUN_01d574f8(param_1,uVar11,auStack_a0 + 0x78,param_3,local_d0,uVar2,&local_c0,local_c8);
          pcVar8 = local_b8;
          if (local_b8 != (code *)0x0) {
            local_b0 = 0;
            local_a8 = 0;
            local_c0 = 0;
            local_b8 = (code *)0x0;
            (*pcVar8)(auStack_a0);
          }
          FUN_01d56fe0(auStack_a0 + 0x78);
          return;
        }
        break;
      }
      sVar9 = sVar3;
    } while (sVar3 != 0);
  }
  FUN_01d56fe0(auStack_a0 + 0x78);
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


