/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0100d810; name: FUN_0100d810
 */


void FUN_0100d810(long *param_1,long param_2)

{
  short *psVar1;
  short sVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  
  plVar10 = (long *)(param_2 + 0x48);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar5) {
      *plVar10 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_0100d848;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x50));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x50));
        while (*plVar10 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_0100d848;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar5) {
      *plVar10 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_0100d848:
  plVar10 = *(long **)(param_2 + 0xb0);
  plVar3 = *(long **)(param_2 + 0xb8);
  if (plVar10 == plVar3) {
LAB_0100d880:
    plVar10 = *(long **)(param_2 + 0x78);
    plVar3 = *(long **)(param_2 + 0x80);
    if (plVar10 != plVar3) {
      do {
        uVar7 = FUN_0100da14(*plVar10 + 8);
        if ((uVar7 & 1) != 0) goto LAB_0100d8ac;
        plVar10 = plVar10 + 1;
      } while (plVar3 != plVar10);
      plVar10 = plVar3;
LAB_0100d8ac:
      if (plVar10 != *(long **)(param_2 + 0x80)) {
        lVar9 = *plVar10;
        lVar6 = 0;
        if (lVar9 != 0) {
          lVar6 = lVar9 + -0x20;
        }
        *param_1 = lVar6;
        if (lVar9 == 0) goto LAB_0100d900;
        lVar6 = *(long *)(lVar6 + 0x30);
        if (*(long *)(lVar6 + 0x10) == 0) {
LAB_0100d9f4:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)(lVar6 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        goto joined_r0x0100d99c;
      }
    }
    *param_1 = 0;
  }
  else {
    do {
      uVar7 = FUN_0100da14(*plVar10 + 8);
      if ((uVar7 & 1) != 0) goto LAB_0100d874;
      plVar10 = plVar10 + 1;
    } while (plVar3 != plVar10);
    plVar10 = plVar3;
LAB_0100d874:
    if (plVar10 == *(long **)(param_2 + 0xb8)) goto LAB_0100d880;
    lVar9 = *plVar10;
    lVar6 = 0;
    if (lVar9 != 0) {
      lVar6 = lVar9 + -0x20;
    }
    *param_1 = lVar6;
    if (lVar9 == 0) goto LAB_0100d900;
    lVar6 = *(long *)(lVar6 + 0x30);
    if (*(long *)(lVar6 + 0x10) == 0) goto LAB_0100d9f4;
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
joined_r0x0100d99c:
    if (sVar2 == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      *(undefined8 *)(lVar6 + 8) = uVar8;
      *(undefined4 *)(lVar6 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
LAB_0100d900:
  *(undefined8 *)(param_2 + 0x48) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x50));
  return;
}


