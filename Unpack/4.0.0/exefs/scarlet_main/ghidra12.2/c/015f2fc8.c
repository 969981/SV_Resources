/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015f2fc8; name: FUN_015f2fc8
 */


uint FUN_015f2fc8(char *param_1,code *param_2,ulong param_3,undefined8 *param_4)

{
  short *psVar1;
  char cVar2;
  short sVar3;
  bool bVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  short sVar9;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long *local_28;
  long local_8;
  
  cVar2 = *param_1;
  lVar7 = (long)param_3 >> 1;
  if (cVar2 == '\x02') {
    if ((*(long *)(param_1 + 8) == 0) ||
       (lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar8 == 0)) {
      uVar5 = 0;
    }
    else {
      plVar6 = (long *)(lVar8 + lVar7 + -0x28);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar6);
      }
      local_40 = *param_4;
      uStack_38 = param_4[1];
      local_30 = param_4[2];
      local_28 = (long *)param_4[3];
      param_4[3] = 0;
      uVar5 = (*param_2)(plVar6,&local_40);
      if (local_28 != (long *)0x0) {
        (**(code **)(*local_28 + 0x20))();
      }
    }
    return uVar5 & 1;
  }
  if (cVar2 != '\x03') {
    if (cVar2 == '\x01') {
      if (*(long *)(param_1 + 8) == 0) {
        uVar5 = 0;
      }
      else {
        plVar6 = (long *)(*(long *)(param_1 + 8) + lVar7);
        if ((param_3 & 1) != 0) {
          param_2 = *(code **)(param_2 + *plVar6);
        }
        local_40 = *param_4;
        uStack_38 = param_4[1];
        local_30 = param_4[2];
        local_28 = (long *)param_4[3];
        param_4[3] = 0;
        uVar5 = (*param_2)(plVar6,&local_40);
        if (local_28 != (long *)0x0) {
          (**(code **)(*local_28 + 0x20))();
        }
      }
      return uVar5 & 1;
    }
    if (cVar2 != '\0') {
      return 0;
    }
    if (*(long *)(param_1 + 8) == 0) {
      uVar5 = 0;
    }
    else {
      plVar6 = (long *)(*(long *)(param_1 + 8) + lVar7);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar6);
      }
      local_40 = *param_4;
      uStack_38 = param_4[1];
      local_30 = param_4[2];
      local_28 = (long *)param_4[3];
      param_4[3] = 0;
      uVar5 = (*param_2)(plVar6,&local_40);
      if (local_28 != (long *)0x0) {
        (**(code **)(*local_28 + 0x20))();
      }
    }
    return uVar5 & 1;
  }
  lVar7 = *(long *)(param_1 + 8);
  if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar7 + 0x1a);
    sVar9 = *(short *)(lVar7 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar9) {
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_015f3214;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_015f3214:
        bVar4 = false;
      }
      if (bVar4) {
        if (*(long *)(lVar7 + 0x10) != 0) {
          local_8 = *(long *)(lVar7 + 0x10) + -0x28;
          local_40 = *param_4;
          uStack_38 = param_4[1];
          local_30 = param_4[2];
          plVar6 = (long *)param_4[3];
          param_4[3] = 0;
          local_28 = plVar6;
          uVar5 = FUN_01b9e834(&local_8,param_2,(int)param_3,&local_40);
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x20))(plVar6);
          }
          FUN_00c7f318(&local_8);
          goto LAB_015f31cc;
        }
        break;
      }
      sVar9 = sVar3;
    } while (sVar3 != 0);
  }
  local_8 = 0;
  FUN_00c7f318(&local_8);
  uVar5 = 0;
LAB_015f31cc:
  return uVar5 & 1;
}


