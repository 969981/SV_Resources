/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02244be8; name: FUN_02244be8
 */


void FUN_02244be8(undefined8 param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  
  lVar11 = *param_2;
  plVar9 = (long *)(lVar11 + 0x48);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar9 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar5) {
      *plVar9 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_02244c18;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x50));
  do {
    if (*plVar9 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x50));
        while (*plVar9 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_02244c18;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar5) {
      *plVar9 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_02244c18:
  plVar9 = *(long **)(lVar11 + 0xb0);
  plVar3 = *(long **)(lVar11 + 0xb8);
  if (plVar9 == plVar3) {
LAB_02244d24:
    plVar9 = *(long **)(lVar11 + 0x78);
    plVar3 = *(long **)(lVar11 + 0x80);
    if (plVar9 != plVar3) {
      do {
        uVar7 = FUN_0129ff44(*plVar9 + 8);
        if ((uVar7 & 1) != 0) goto LAB_02244d50;
        plVar9 = plVar9 + 1;
      } while (plVar3 != plVar9);
      plVar9 = plVar3;
LAB_02244d50:
      if ((plVar9 != *(long **)(lVar11 + 0x80)) && (lVar6 = *plVar9, lVar6 != 0)) {
        lVar10 = *(long *)(lVar6 + 0x10);
        if (*(long *)(lVar10 + 0x10) == 0) {
LAB_02244e28:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)(lVar10 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        goto joined_r0x02244d90;
      }
    }
  }
  else {
    do {
      uVar7 = FUN_0129ff44(*plVar9 + 8);
      if ((uVar7 & 1) != 0) goto LAB_02244c44;
      plVar9 = plVar9 + 1;
    } while (plVar3 != plVar9);
    plVar9 = plVar3;
LAB_02244c44:
    if (plVar9 == *(long **)(lVar11 + 0xb8)) goto LAB_02244d24;
    lVar6 = *plVar9;
    if (lVar6 != 0) {
      lVar10 = *(long *)(lVar6 + 0x10);
      if (*(long *)(lVar10 + 0x10) == 0) goto LAB_02244e28;
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
joined_r0x02244d90:
      plVar9 = (long *)(lVar6 + -0x20);
      if (sVar2 == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
        *(undefined8 *)(lVar10 + 8) = uVar8;
        *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
      goto LAB_02244c8c;
    }
  }
  plVar9 = (long *)0x0;
LAB_02244c8c:
  *(undefined8 *)(lVar11 + 0x48) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x50));
  if (plVar9 != (long *)0x0) {
    *(undefined4 *)(plVar9[0xd] + 0x160) = 1;
    lVar6 = plVar9[6];
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar6 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x02244dd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 0x50))(plVar9);
      return;
    }
    if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


