/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02355178; name: FUN_02355178
 */


void FUN_02355178(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  short sVar7;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long *plStack_30;
  long local_28;
  
  lVar6 = *param_2;
  if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar7 = *(short *)(lVar6 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar7) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_023551d4;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_023551d4:
        bVar5 = false;
      }
      if (bVar5) {
        if (*(long *)(lVar6 + 0x10) != 0) {
          local_28 = *(long *)(lVar6 + 0x10) + -0x28;
          local_48 = *param_5;
          uStack_40 = param_5[1];
          local_38 = param_5[2];
          plVar2 = (long *)param_5[3];
          param_5[3] = 0;
          plStack_30 = plVar2;
          FUN_0235566c(param_1,&local_28,param_3,param_4,&local_48);
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0x20))(plVar2);
          }
          FUN_02353c24(&local_28);
          return;
        }
        break;
      }
      sVar7 = sVar3;
    } while (sVar3 != 0);
  }
  local_28 = 0;
  FUN_02353c24(&local_28);
  FUN_02355264(param_1);
  return;
}


