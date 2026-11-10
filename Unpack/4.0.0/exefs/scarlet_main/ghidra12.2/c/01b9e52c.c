/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b9e52c; name: FUN_01b9e52c
 */


void FUN_01b9e52c(byte *param_1,code *param_2,ulong param_3,undefined8 *param_4,undefined1 *param_5)

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
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (3 < *param_1) {
    return;
  }
  lVar6 = (long)param_3 >> 1;
  switch(*param_1) {
  case 0:
    if (*(long *)(param_1 + 8) != 0) {
      plVar5 = (long *)(*(long *)(param_1 + 8) + lVar6);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar5);
      }
      local_30 = *param_4;
      uStack_28 = (long *)param_4[1];
      plVar8 = (long *)param_4[3];
      param_4[3] = 0;
      (*param_2)(plVar5,&local_30,*param_5);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x20))();
      }
    }
    return;
  case 1:
    if (*(long *)(param_1 + 8) != 0) {
      plVar5 = (long *)(*(long *)(param_1 + 8) + lVar6);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar5);
      }
      local_30 = *param_4;
      uStack_28 = (long *)param_4[1];
      plVar8 = (long *)param_4[3];
      param_4[3] = 0;
      (*param_2)(plVar5,&local_30,*param_5);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x20))();
      }
    }
    return;
  case 2:
    if ((*(long *)(param_1 + 8) != 0) &&
       (lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar7 != 0)) {
      plVar5 = (long *)(lVar7 + lVar6 + -0x28);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar5);
      }
      local_30 = *param_4;
      uStack_28 = (long *)param_4[1];
      plVar8 = (long *)param_4[3];
      param_4[3] = 0;
      (*param_2)(plVar5,&local_30,*param_5);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x20))();
      }
    }
    return;
  }
  lVar6 = *(long *)(param_1 + 8);
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
        if (cVar3 != '\0') goto LAB_01b9e740;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01b9e740:
        bVar4 = false;
      }
      if (bVar4) {
        if (*(long *)(lVar6 + 0x10) != 0) {
          local_40 = *param_4;
          uStack_38 = param_4[1];
          local_30 = param_4[2];
          plVar5 = (long *)param_4[3];
          param_4[3] = 0;
          uStack_28 = plVar5;
          FUN_01b9e7a4((long)register0x00000008 + -8,param_2,param_3,&local_40,*param_5);
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x20))(plVar5);
          }
        }
        break;
      }
      sVar9 = sVar2;
    } while (sVar2 != 0);
  }
  FUN_00c7f318((long)register0x00000008 + -8);
  return;
}


