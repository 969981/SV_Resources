/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02358994; name: FUN_02358994
 */


void FUN_02358994(undefined8 param_1,byte *param_2,code *param_3,ulong param_4,undefined8 *param_5,
                 undefined8 *param_6)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  short sVar9;
  long *plVar10;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *plStack_78;
  undefined8 local_70;
  undefined8 local_68;
  long *local_60;
  undefined8 local_58;
  long *local_50;
  undefined8 local_48;
  long *local_40;
  undefined8 local_38;
  
  if (3 < *param_2) {
    FUN_02357374(param_1);
    return;
  }
  lVar6 = (long)param_4 >> 1;
  switch(*param_2) {
  case 0:
    if (*(long *)(param_2 + 8) == 0) {
      FUN_02357374(param_1);
      return;
    }
    plVar5 = (long *)(*(long *)(param_2 + 8) + lVar6);
    if ((param_4 & 1) != 0) {
      param_3 = *(code **)(param_3 + *plVar5);
    }
    plVar8 = (long *)param_5[3];
    param_5[3] = 0;
    local_68 = *param_6;
    local_60 = (long *)param_6[1];
    local_58 = param_6[2];
    local_50 = (long *)param_6[3];
    param_6[3] = 0;
    local_48 = param_6[4];
    local_40 = (long *)CONCAT71(local_40._1_7_,*(undefined1 *)(param_6 + 5));
    local_38 = (long *)param_6[6];
    param_6[6] = 0;
    (*param_3)(plVar5,(long)register0x00000008 + -0x30,&local_68);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x20))();
    }
    return;
  case 1:
    if (*(long *)(param_2 + 8) == 0) {
      FUN_02357374(param_1);
      return;
    }
    plVar5 = (long *)(*(long *)(param_2 + 8) + lVar6);
    if ((param_4 & 1) != 0) {
      param_3 = *(code **)(param_3 + *plVar5);
    }
    plVar8 = (long *)param_5[3];
    param_5[3] = 0;
    local_68 = *param_6;
    local_60 = (long *)param_6[1];
    local_58 = param_6[2];
    local_50 = (long *)param_6[3];
    param_6[3] = 0;
    local_48 = param_6[4];
    local_40 = (long *)CONCAT71(local_40._1_7_,*(undefined1 *)(param_6 + 5));
    local_38 = (long *)param_6[6];
    param_6[6] = 0;
    (*param_3)(plVar5,(long)register0x00000008 + -0x30,&local_68);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x20))();
    }
    return;
  case 2:
    if ((*(long *)(param_2 + 8) == 0) ||
       (lVar7 = *(long *)(*(long *)(param_2 + 8) + 0x10), lVar7 == 0)) {
      FUN_02357374(param_1);
      return;
    }
    plVar5 = (long *)(lVar7 + lVar6 + -0x28);
    if ((param_4 & 1) != 0) {
      param_3 = *(code **)(param_3 + *plVar5);
    }
    plVar8 = (long *)param_5[3];
    param_5[3] = 0;
    local_68 = *param_6;
    local_60 = (long *)param_6[1];
    local_58 = param_6[2];
    local_50 = (long *)param_6[3];
    param_6[3] = 0;
    local_48 = param_6[4];
    local_40 = (long *)CONCAT71(local_40._1_7_,*(undefined1 *)(param_6 + 5));
    local_38 = (long *)param_6[6];
    param_6[6] = 0;
    (*param_3)(plVar5,(long)register0x00000008 + -0x30,&local_68);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x20))();
    }
    return;
  }
  lVar6 = *(long *)(param_2 + 8);
  if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar9 = *(short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar9) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_02358d04;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02358d04:
        bVar4 = false;
      }
      if (bVar4) {
        if (*(long *)(lVar6 + 0x10) != 0) {
          local_38 = (long *)(*(long *)(lVar6 + 0x10) + -0x28);
          local_58 = *param_5;
          local_50 = (long *)param_5[1];
          local_48 = param_5[2];
          plVar5 = (long *)param_5[3];
          param_5[3] = 0;
          local_90 = *param_6;
          uStack_88 = param_6[1];
          local_80 = param_6[2];
          plVar8 = (long *)param_6[3];
          param_6[3] = 0;
          local_70 = param_6[4];
          local_68 = CONCAT71(local_68._1_7_,*(undefined1 *)(param_6 + 5));
          plVar10 = (long *)param_6[6];
          param_6[6] = 0;
          plStack_78 = plVar8;
          local_60 = plVar10;
          local_40 = plVar5;
          FUN_02358e04(param_1,&local_38,param_3,param_4,&local_58,&local_90);
          if (plVar10 != (long *)0x0) {
            (**(code **)(*plVar10 + 0x20))(plVar10);
          }
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x20))(plVar8);
          }
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x20))(plVar5);
          }
          FUN_02353c24(&local_38);
          return;
        }
        break;
      }
      sVar9 = sVar2;
    } while (sVar2 != 0);
  }
  local_38 = (long *)0x0;
  FUN_02353c24(&local_38);
  FUN_02357374(param_1);
  return;
}


