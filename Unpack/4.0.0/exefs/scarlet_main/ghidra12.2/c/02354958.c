/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02354958; name: FUN_02354958
 */


void FUN_02354958(byte *param_1,code *param_2,ulong param_3,undefined8 *param_4,undefined8 *param_5,
                 undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,undefined1 *param_9)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  short sVar11;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long *local_50;
  undefined8 local_48;
  undefined8 local_40;
  long *local_38;
  long *local_30;
  long local_28;
  
  if (3 < *param_1) {
    return;
  }
  lVar8 = (long)param_3 >> 1;
  switch(*param_1) {
  case 0:
    if (*(long *)(param_1 + 8) != 0) {
      plVar5 = (long *)(*(long *)(param_1 + 8) + lVar8);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar5);
      }
      local_30 = (long *)*param_6;
      local_28 = param_6[1];
      uVar6 = *param_4;
      uVar7 = *param_5;
      plVar10 = (long *)param_6[3];
      param_6[3] = 0;
      local_50 = (long *)*param_7;
      local_48 = param_7[1];
      local_40 = param_7[2];
      local_38 = (long *)param_7[3];
      param_7[3] = 0;
      (*param_2)(plVar5,uVar6,uVar7,&local_30,&local_50,*param_8,*param_9);
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x20))();
      }
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x20))();
      }
    }
    return;
  case 1:
    if (*(long *)(param_1 + 8) != 0) {
      plVar5 = (long *)(*(long *)(param_1 + 8) + lVar8);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar5);
      }
      local_30 = (long *)*param_6;
      local_28 = param_6[1];
      uVar6 = *param_4;
      uVar7 = *param_5;
      plVar10 = (long *)param_6[3];
      param_6[3] = 0;
      local_50 = (long *)*param_7;
      local_48 = param_7[1];
      local_40 = param_7[2];
      local_38 = (long *)param_7[3];
      param_7[3] = 0;
      (*param_2)(plVar5,uVar6,uVar7,&local_30,&local_50,*param_8,*param_9);
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x20))();
      }
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x20))();
      }
    }
    return;
  case 2:
    if ((*(long *)(param_1 + 8) != 0) &&
       (lVar9 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar9 != 0)) {
      plVar5 = (long *)(lVar9 + lVar8 + -0x28);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar5);
      }
      local_30 = (long *)*param_6;
      local_28 = param_6[1];
      uVar6 = *param_4;
      uVar7 = *param_5;
      plVar10 = (long *)param_6[3];
      param_6[3] = 0;
      local_50 = (long *)*param_7;
      local_48 = param_7[1];
      local_40 = param_7[2];
      local_38 = (long *)param_7[3];
      param_7[3] = 0;
      (*param_2)(plVar5,uVar6,uVar7,&local_30,&local_50,*param_8,*param_9);
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x20))();
      }
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x20))();
      }
    }
    return;
  }
  lVar8 = *(long *)(param_1 + 8);
  if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar8 + 0x1a);
    sVar11 = *(short *)(lVar8 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar11) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_02354c4c;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02354c4c:
        bVar4 = false;
      }
      if (bVar4) {
        if (*(long *)(lVar8 + 0x10) != 0) {
          local_28 = *(long *)(lVar8 + 0x10) + -0x28;
          local_48 = *param_6;
          local_40 = param_6[1];
          uVar6 = *param_4;
          uVar7 = *param_5;
          local_38 = (long *)param_6[2];
          plVar5 = (long *)param_6[3];
          param_6[3] = 0;
          local_68 = *param_7;
          uStack_60 = param_7[1];
          local_58 = param_7[2];
          plVar10 = (long *)param_7[3];
          param_7[3] = 0;
          local_50 = plVar10;
          local_30 = plVar5;
          FUN_02354d04(&local_28,param_2,param_3,uVar6,uVar7,&local_48,&local_68,*param_8,*param_9);
          if (plVar10 != (long *)0x0) {
            (**(code **)(*plVar10 + 0x20))(plVar10);
          }
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x20))(plVar5);
          }
          goto LAB_02354cd8;
        }
        break;
      }
      sVar11 = sVar2;
    } while (sVar2 != 0);
  }
  local_28 = 0;
LAB_02354cd8:
  FUN_02353c24(&local_28);
  return;
}


