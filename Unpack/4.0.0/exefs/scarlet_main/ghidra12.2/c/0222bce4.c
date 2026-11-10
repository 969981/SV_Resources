/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0222bce4; name: FUN_0222bce4
 */


void FUN_0222bce4(long *param_1)

{
  short *psVar1;
  short sVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  
  lVar6 = FUN_01132f14();
  if (lVar6 == 0) {
    *param_1 = 0;
    return;
  }
  plVar11 = (long *)(lVar6 + 0x48);
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar11 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar5) {
      *plVar11 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_0222bd54;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x50));
  do {
    if (*plVar11 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x50));
        while (*plVar11 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar5) {
            *plVar11 = lVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_0222bd54;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar5) {
      *plVar11 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_0222bd54:
  plVar11 = *(long **)(lVar6 + 0xb0);
  plVar3 = *(long **)(lVar6 + 0xb8);
  if (plVar11 == plVar3) {
LAB_0222bdfc:
    plVar11 = *(long **)(lVar6 + 0x78);
    plVar3 = *(long **)(lVar6 + 0x80);
    if (plVar11 != plVar3) {
      do {
        uVar8 = FUN_01f9dac4(*plVar11 + 8);
        if ((uVar8 & 1) != 0) goto LAB_0222be28;
        plVar11 = plVar11 + 1;
      } while (plVar3 != plVar11);
      plVar11 = plVar3;
LAB_0222be28:
      if (plVar11 != *(long **)(lVar6 + 0x80)) {
        lVar10 = *plVar11;
        lVar7 = 0;
        if (lVar10 != 0) {
          lVar7 = lVar10 + -0x20;
        }
        *param_1 = lVar7;
        if (lVar10 == 0) goto LAB_0222bedc;
        lVar7 = *(long *)(lVar7 + 0x30);
        if (*(long *)(lVar7 + 0x10) == 0) {
LAB_0222befc:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)(lVar7 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        goto joined_r0x0222be6c;
      }
    }
    *param_1 = 0;
  }
  else {
    do {
      uVar8 = FUN_01f9dac4(*plVar11 + 8);
      if ((uVar8 & 1) != 0) goto LAB_0222bd80;
      plVar11 = plVar11 + 1;
    } while (plVar3 != plVar11);
    plVar11 = plVar3;
LAB_0222bd80:
    if (plVar11 == *(long **)(lVar6 + 0xb8)) goto LAB_0222bdfc;
    lVar10 = *plVar11;
    lVar7 = 0;
    if (lVar10 != 0) {
      lVar7 = lVar10 + -0x20;
    }
    *param_1 = lVar7;
    if (lVar10 == 0) goto LAB_0222bedc;
    lVar7 = *(long *)(lVar7 + 0x30);
    if (*(long *)(lVar7 + 0x10) == 0) goto LAB_0222befc;
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
joined_r0x0222be6c:
    if (sVar2 == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      *(undefined8 *)(lVar7 + 8) = uVar9;
      *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
LAB_0222bedc:
  *(undefined8 *)(lVar6 + 0x48) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0x50));
  return;
}


