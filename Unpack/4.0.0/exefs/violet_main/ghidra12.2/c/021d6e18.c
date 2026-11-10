/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021d6e18; name: FUN_021d6e18
 */


void FUN_021d6e18(long *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  long lVar4;
  short sVar5;
  long lVar6;
  long *plVar7;
  bool bVar8;
  long lVar9;
  long *plVar10;
  
  plVar10 = param_1 + 0xb;
  lVar6 = *plVar10;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 != lVar6) {
    lVar4 = nn::os::GetCurrentThread();
LAB_021d6e4c:
    if (*plVar10 == 0) goto code_r0x021d6e54;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xc));
    do {
      if (*plVar10 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xc));
          while (*plVar10 == 0) {
            cVar3 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar8) {
              *plVar10 = lVar4;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              bVar8 = false;
              goto LAB_021d6e64;
            }
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar8) {
        *plVar10 = lVar4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar8 = false;
    goto LAB_021d6e64;
  }
  bVar8 = true;
LAB_021d6e64:
  if (*(char *)((long)param_1 + 0x51) == '\0') {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_requested","DoIt",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/src/scene/streaming_unit.cpp"
               ,0x40);
  }
  lVar4 = param_1[10];
  *(undefined1 *)((long)param_1 + 0x51) = 0;
  if (!bVar8) {
    param_1[0xb] = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xc));
  }
  if ((((char)lVar4 != '\0') && (lVar4 = param_1[8], lVar4 != 0)) && (*(short *)(lVar4 + 0x1a) != 0)
     ) {
    psVar1 = (short *)(lVar4 + 0x1a);
    sVar5 = *(short *)(lVar4 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar5) {
        cVar3 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar5 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_021d6f20;
        bVar8 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_021d6f20:
        bVar8 = false;
      }
      if (bVar8) {
        lVar4 = *(long *)(lVar4 + 0x10);
        if (lVar4 == 0) {
          return;
        }
        plVar10 = (long *)(lVar4 + 0x400);
        lVar9 = *plVar10;
        plVar7 = (long *)(lVar4 + -0x28);
        lVar6 = nn::os::GetCurrentThread();
        if (lVar6 != lVar9) {
          lVar6 = nn::os::GetCurrentThread();
          goto LAB_021d6f5c;
        }
        plVar10 = (long *)0x0;
        bVar8 = true;
        goto LAB_021d6f70;
      }
      sVar5 = sVar2;
    } while (sVar2 != 0);
  }
  return;
code_r0x021d6e54:
  cVar3 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
  if (bVar8) {
    *plVar10 = lVar4;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto code_r0x021d6e5c;
  goto LAB_021d6e4c;
code_r0x021d6e5c:
  bVar8 = false;
  goto LAB_021d6e64;
LAB_021d6f5c:
  if (*plVar10 != 0) {
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar4 + 0x408));
    do {
      if (*plVar10 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar4 + 0x408));
          while (*plVar10 == 0) {
            cVar3 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar8) {
              *plVar10 = lVar6;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_021d6f6c;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar8) {
        *plVar10 = lVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_021d6f6c:
    bVar8 = false;
LAB_021d6f70:
    if (*(char *)(lVar4 + 0x418) != '\0') {
      (**(code **)(*param_1 + 0x78))(param_1,plVar7);
    }
    if (!bVar8) {
      *plVar10 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar10 + 1));
    }
                    /* WARNING: Could not recover jumptable at 0x021d6fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar7 + 0x60))(plVar7);
    return;
  }
  cVar3 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
  if (bVar8) {
    *plVar10 = lVar6;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_021d6f6c;
  goto LAB_021d6f5c;
}


