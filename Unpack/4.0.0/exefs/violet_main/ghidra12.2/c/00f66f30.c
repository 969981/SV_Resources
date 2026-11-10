/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f66f30; name: FUN_00f66f30
 */


void FUN_00f66f30(undefined8 param_1,long param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  short sVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *local_60;
  long *plStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)(DAT_04841a38 + 8);
  local_60 = (long *)0x0;
  plStack_58 = (long *)0x0;
  plVar10 = (long *)(param_2 + 0x3c0);
  local_50 = 0;
  lVar8 = *plVar10;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 == lVar8) {
    FUN_00f677a4(&local_60,param_2 + 0x3d8);
LAB_00f66fac:
    FUN_00e60324(param_2);
    FUN_00f670e0(param_1,param_2);
    plVar5 = plStack_58;
    plVar10 = local_60;
    do {
      if (plVar10 == plVar5) {
        FUN_00cb9b14(&local_60);
        return;
      }
      lVar6 = *plVar10;
      if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
        psVar1 = (short *)(lVar6 + 0x1a);
        sVar7 = *(short *)(lVar6 + 0x1a);
        do {
          sVar2 = *psVar1;
          if (sVar2 == sVar7) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar7 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 != '\0') goto LAB_00f67088;
            bVar4 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00f67088:
            bVar4 = false;
          }
          if (bVar4) {
            if (*(long *)(lVar6 + 0x10) != 0) {
              plVar9 = (long *)(*(long *)(lVar6 + 0x10) + -0x28);
              FUN_00f66f30(param_1,plVar9);
              FUN_00dfba48(plVar9,param_2);
              (**(code **)(*plVar9 + 0x60))(plVar9);
            }
            break;
          }
          sVar7 = sVar2;
        } while (sVar2 != 0);
      }
      plVar10 = plVar10 + 2;
    } while( true );
  }
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar4) {
      *plVar10 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_00f66f90;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x3c8));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x3c8));
        while (*plVar10 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *plVar10 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00f66f90;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar4) {
      *plVar10 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00f66f90:
  FUN_00f677a4(&local_60,param_2 + 0x3d8);
  *(undefined8 *)(param_2 + 0x3c0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x3c8));
  goto LAB_00f66fac;
}


