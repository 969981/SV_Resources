/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e064c0; name: FUN_01e064c0
 */


void FUN_01e064c0(undefined1 *param_1,undefined4 param_2,undefined4 param_3,long *param_4,
                 uint param_5)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  bool bVar9;
  short sVar10;
  long local_58;
  long **pplStack_50;
  undefined4 *local_48;
  undefined4 *puStack_40;
  long *local_38;
  undefined4 local_18;
  undefined4 uStack_14;
  
  if (((DAT_04837608 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04837608), iVar6 != 0)) {
    FUN_00100190(&LAB_00a92af8,&DAT_048375f8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04837608);
  }
  lVar5 = DAT_048375f8;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  DAT_04837610 = lVar5;
  *param_1 = 0;
  lVar8 = *param_4;
  if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar8 + 0x1a);
    sVar10 = *(short *)(lVar8 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar10) {
        cVar3 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar9) {
          *psVar1 = sVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01e065d4;
        bVar9 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01e065d4:
        bVar9 = false;
      }
      if (bVar9) {
        local_38 = (long *)(*(long *)(lVar8 + 0x10) + -0x28);
        if (*(long *)(lVar8 + 0x10) == 0) {
          return;
        }
        pplStack_50 = &local_38;
        local_48 = &uStack_14;
        puStack_40 = &local_18;
        local_58 = lVar5;
        plVar7 = (long *)(lVar5 + 0x2d8);
        local_18 = param_3;
        uStack_14 = param_2;
        lVar8 = nn::os::GetCurrentThread();
        goto LAB_01e06624;
      }
      sVar10 = sVar2;
    } while (sVar2 != 0);
  }
  return;
LAB_01e06624:
  if (*plVar7 != 0) {
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x2e0));
    do {
      if (*plVar7 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x2e0));
          while (*plVar7 == 0) {
            cVar3 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar9) {
              *plVar7 = lVar8;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_01e06634;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar9) {
        *plVar7 = lVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_01e06634:
    if ((param_5 & 0xff) == 0) {
      plVar7 = *(long **)(lVar5 + 0x50);
      while (plVar4 = plVar7, plVar4 != (long *)(lVar5 + 0x58)) {
        FUN_01e0675c(&local_58,param_1,(char)plVar4[4]);
        plVar7 = (long *)plVar4[1];
        if (plVar7 == (long *)0x0) {
          plVar7 = (long *)plVar4[2];
          if (*(long **)plVar4[2] != plVar4) {
            lVar8 = plVar4[2];
            plVar7 = *(long **)(lVar8 + 0x10);
            if (**(long **)(lVar8 + 0x10) != lVar8) {
              lVar8 = *(long *)(lVar8 + 0x10);
              while( true ) {
                plVar7 = *(long **)(lVar8 + 0x10);
                if (*plVar7 == lVar8) break;
                lVar8 = *(long *)(lVar8 + 0x10);
              }
            }
          }
        }
        else {
          for (plVar4 = (long *)*plVar7; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
            plVar7 = plVar4;
          }
        }
      }
    }
    else {
      FUN_01e0675c(&local_58,param_1,param_5);
    }
    *(undefined8 *)(lVar5 + 0x2d8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar5 + 0x2e0));
    if (local_38 == (long *)0x0) {
      return;
    }
    (**(code **)(*local_38 + 0x60))();
    return;
  }
  cVar3 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(plVar7,0x10);
  if (bVar9) {
    *plVar7 = lVar8;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_01e06634;
  goto LAB_01e06624;
}


