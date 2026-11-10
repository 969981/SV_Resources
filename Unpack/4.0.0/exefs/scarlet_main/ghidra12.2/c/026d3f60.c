/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026d3f60; name: FUN_026d3f60
 */


void FUN_026d3f60(byte *param_1,code *param_2,ulong param_3,undefined8 *param_4)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  short sVar8;
  long *plVar9;
  undefined8 local_c0;
  code *local_b8;
  undefined8 local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [80];
  
  if (3 < *param_1) {
    return;
  }
  lVar6 = (long)param_3 >> 1;
  switch(*param_1) {
  case 0:
    if (*(long *)(param_1 + 8) != 0) {
      plVar9 = (long *)(*(long *)(param_1 + 8) + lVar6);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar9);
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
        pcVar7 = (code *)param_4[1];
        if (pcVar7 != (code *)0x0) {
          param_4[2] = 0;
          param_4[3] = 0;
          *param_4 = 0;
          param_4[1] = 0;
          (*pcVar7)(param_4 + 4);
        }
      }
      (*param_2)(plVar9,&local_b0);
      pcVar7 = local_a8;
      if (local_a8 != (code *)0x0) {
        local_a0 = 0;
        local_98 = 0;
        local_b0 = 0;
        local_a8 = (code *)0x0;
        (*pcVar7)(auStack_90);
      }
    }
    return;
  case 1:
    if (*(long *)(param_1 + 8) != 0) {
      plVar9 = (long *)(*(long *)(param_1 + 8) + lVar6);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar9);
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
        pcVar7 = (code *)param_4[1];
        if (pcVar7 != (code *)0x0) {
          param_4[2] = 0;
          param_4[3] = 0;
          *param_4 = 0;
          param_4[1] = 0;
          (*pcVar7)(param_4 + 4);
        }
      }
      (*param_2)(plVar9,&local_b0);
      pcVar7 = local_a8;
      if (local_a8 != (code *)0x0) {
        local_a0 = 0;
        local_98 = 0;
        local_b0 = 0;
        local_a8 = (code *)0x0;
        (*pcVar7)(auStack_90);
      }
    }
    return;
  case 2:
    if ((*(long *)(param_1 + 8) != 0) &&
       (lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar5 != 0)) {
      plVar9 = (long *)(lVar5 + lVar6 + -0x28);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar9);
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
        pcVar7 = (code *)param_4[1];
        if (pcVar7 != (code *)0x0) {
          param_4[2] = 0;
          param_4[3] = 0;
          *param_4 = 0;
          param_4[1] = 0;
          (*pcVar7)(param_4 + 4);
        }
      }
      (*param_2)(plVar9,&local_b0);
      pcVar7 = local_a8;
      if (local_a8 != (code *)0x0) {
        local_a0 = 0;
        local_98 = 0;
        local_b0 = 0;
        local_a8 = (code *)0x0;
        (*pcVar7)(auStack_90);
      }
    }
    return;
  }
  lVar6 = *(long *)(param_1 + 8);
  if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar8 = *(short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_026d4268;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_026d4268:
        bVar4 = false;
      }
      if (bVar4) {
        if (*(long *)(lVar6 + 0x10) == 0) {
          return;
        }
        plVar9 = (long *)(*(long *)(lVar6 + 0x10) + -0x28);
        local_c0 = 0;
        local_b8 = (code *)0x0;
        local_b0 = 0;
        local_a8 = (code *)0x0;
        if ((code *)param_4[3] != (code *)0x0) {
          (*(code *)param_4[3])(param_4 + 4,&local_a0);
          local_b0 = param_4[2];
          local_a8 = (code *)param_4[3];
          local_c0 = *param_4;
          local_b8 = (code *)param_4[1];
          pcVar7 = (code *)param_4[1];
          if (pcVar7 != (code *)0x0) {
            param_4[2] = 0;
            param_4[3] = 0;
            *param_4 = 0;
            param_4[1] = 0;
            (*pcVar7)(param_4 + 4);
          }
        }
        FUN_026d432c(auStack_90 + 0x68,param_2,param_3,&local_c0);
        pcVar7 = local_b8;
        if (local_b8 != (code *)0x0) {
          local_b0 = 0;
          local_a8 = (code *)0x0;
          local_c0 = 0;
          local_b8 = (code *)0x0;
          (*pcVar7)(&local_a0);
        }
        (**(code **)(*plVar9 + 0x60))(plVar9);
        return;
      }
      sVar8 = sVar2;
    } while (sVar2 != 0);
  }
  return;
}


