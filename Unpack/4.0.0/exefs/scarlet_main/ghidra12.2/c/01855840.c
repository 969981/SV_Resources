/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01855840; name: FUN_01855840
 */


void FUN_01855840(char *param_1,code *param_2,ulong param_3,undefined8 *param_4)

{
  short *psVar1;
  char cVar2;
  short sVar3;
  bool bVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  short sVar8;
  long *plVar9;
  undefined8 local_c0;
  code *local_b8;
  undefined8 local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [96];
  
  cVar2 = *param_1;
  lVar7 = (long)param_3 >> 1;
  if (cVar2 == '\x02') {
    if ((*(long *)(param_1 + 8) != 0) &&
       (lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar5 != 0)) {
      plVar9 = (long *)(lVar5 + lVar7 + -0x28);
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
        pcVar6 = (code *)param_4[1];
        if (pcVar6 != (code *)0x0) {
          param_4[2] = 0;
          param_4[3] = 0;
          *param_4 = 0;
          param_4[1] = 0;
          (*pcVar6)(param_4 + 4);
        }
      }
      (*param_2)(plVar9,&local_b0);
      pcVar6 = local_a8;
      if (local_a8 != (code *)0x0) {
        local_a0 = 0;
        local_98 = 0;
        local_b0 = 0;
        local_a8 = (code *)0x0;
        (*pcVar6)(auStack_90);
      }
    }
  }
  else {
    if (cVar2 == '\x03') {
      lVar7 = *(long *)(param_1 + 8);
      if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
        psVar1 = (short *)(lVar7 + 0x1a);
        sVar8 = *(short *)(lVar7 + 0x1a);
        do {
          sVar3 = *psVar1;
          if (sVar3 == sVar8) {
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar8 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 != '\0') goto LAB_01855b74;
            bVar4 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01855b74:
            bVar4 = false;
          }
          if (bVar4) {
            if (*(long *)(lVar7 + 0x10) == 0) {
              return;
            }
            plVar9 = (long *)(*(long *)(lVar7 + 0x10) + -0x28);
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
              pcVar6 = (code *)param_4[1];
              if (pcVar6 != (code *)0x0) {
                param_4[2] = 0;
                param_4[3] = 0;
                *param_4 = 0;
                param_4[1] = 0;
                (*pcVar6)(param_4 + 4);
              }
            }
            FUN_026d43d4(auStack_90 + 0x68,param_2,param_3,&local_c0);
            pcVar6 = local_b8;
            if (local_b8 != (code *)0x0) {
              local_b0 = 0;
              local_a8 = (code *)0x0;
              local_c0 = 0;
              local_b8 = (code *)0x0;
              (*pcVar6)(&local_a0);
            }
            (**(code **)(*plVar9 + 0x60))(plVar9);
            return;
          }
          sVar8 = sVar3;
        } while (sVar3 != 0);
      }
      return;
    }
    if (cVar2 == '\x01') {
      if (*(long *)(param_1 + 8) != 0) {
        plVar9 = (long *)(*(long *)(param_1 + 8) + lVar7);
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
          pcVar6 = (code *)param_4[1];
          if (pcVar6 != (code *)0x0) {
            param_4[2] = 0;
            param_4[3] = 0;
            *param_4 = 0;
            param_4[1] = 0;
            (*pcVar6)(param_4 + 4);
          }
        }
        (*param_2)(plVar9,&local_b0);
        pcVar6 = local_a8;
        if (local_a8 != (code *)0x0) {
          local_a0 = 0;
          local_98 = 0;
          local_b0 = 0;
          local_a8 = (code *)0x0;
          (*pcVar6)(auStack_90);
        }
      }
      return;
    }
    if (cVar2 == '\0') {
      if (*(long *)(param_1 + 8) != 0) {
        plVar9 = (long *)(*(long *)(param_1 + 8) + lVar7);
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
          pcVar6 = (code *)param_4[1];
          if (pcVar6 != (code *)0x0) {
            param_4[2] = 0;
            param_4[3] = 0;
            *param_4 = 0;
            param_4[1] = 0;
            (*pcVar6)(param_4 + 4);
          }
        }
        (*param_2)(plVar9,&local_b0);
        pcVar6 = local_a8;
        if (local_a8 != (code *)0x0) {
          local_a0 = 0;
          local_98 = 0;
          local_b0 = 0;
          local_a8 = (code *)0x0;
          (*pcVar6)(auStack_90);
        }
      }
      return;
    }
  }
  return;
}


