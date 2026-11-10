/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016b854c; name: FUN_016b854c
 */


void FUN_016b854c(char *param_1,code *param_2,ulong param_3,undefined2 *param_4,undefined8 *param_5,
                 undefined4 *param_6)

{
  long lVar1;
  short *psVar2;
  char cVar3;
  short sVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  short sVar8;
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  cVar3 = *param_1;
  lVar1 = (long)param_3 >> 1;
  if (cVar3 == '\x01') {
    if (*(long *)(param_1 + 8) != 0) {
      plVar6 = (long *)(*(long *)(param_1 + 8) + lVar1);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar6);
      }
      local_28 = *param_5;
      local_20 = param_5[1];
      local_18 = param_5[2];
      (*param_2)(plVar6,*param_4,&local_28,*param_6);
    }
    return;
  }
  if (cVar3 != '\x03') {
    if (cVar3 == '\x02') {
      if ((*(long *)(param_1 + 8) != 0) &&
         (lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar7 != 0)) {
        plVar6 = (long *)(lVar7 + lVar1 + -0x28);
        if ((param_3 & 1) != 0) {
          param_2 = *(code **)(param_2 + *plVar6);
        }
        local_28 = *param_5;
        local_20 = param_5[1];
        local_18 = param_5[2];
        (*param_2)(plVar6,*param_4,&local_28,*param_6);
      }
      return;
    }
    if ((cVar3 == '\0') && (*(long *)(param_1 + 8) != 0)) {
      plVar6 = (long *)(*(long *)(param_1 + 8) + lVar1);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar6);
      }
      local_28 = *param_5;
      local_20 = param_5[1];
      local_18 = param_5[2];
      (*param_2)(plVar6,*param_4,&local_28,*param_6);
    }
    return;
  }
  lVar7 = *(long *)(param_1 + 8);
  if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
    psVar2 = (short *)(lVar7 + 0x1a);
    sVar8 = *(short *)(lVar7 + 0x1a);
    do {
      sVar4 = *psVar2;
      if (sVar4 == sVar8) {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_016b8708;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_016b8708:
        bVar5 = false;
      }
      if (bVar5) {
        if (*(long *)(lVar7 + 0x10) != 0) {
          local_28 = *param_5;
          local_20 = param_5[1];
          local_30 = *(long *)(lVar7 + 0x10) + -0x28;
          local_18 = param_5[2];
          if ((param_3 & 1) != 0) {
            param_2 = *(code **)(param_2 + *(long *)(local_30 + lVar1));
          }
          (*param_2)((long *)(local_30 + lVar1),*param_4,&local_28,*param_6);
          goto LAB_016b8764;
        }
        break;
      }
      sVar8 = sVar4;
    } while (sVar4 != 0);
  }
  local_30 = 0;
LAB_016b8764:
  FUN_01b69c38(&local_30);
  return;
}


