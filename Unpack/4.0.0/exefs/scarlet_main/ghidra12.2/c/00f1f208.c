/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f1f208; name: FUN_00f1f208
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_00f1f208(long param_1)

{
  short *psVar1;
  short sVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  char cVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  bool bVar12;
  long *plVar13;
  
  uVar7 = (**(code **)(*(long *)(param_1 + 0x120) + 0x70))(param_1 + 0x120);
  if ((uVar7 & 1) == 0) {
    plVar13 = (long *)(param_1 + 0x128);
    lVar10 = *plVar13;
    lVar8 = nn::os::GetCurrentThread();
    if (lVar8 != lVar10) {
      lVar8 = nn::os::GetCurrentThread();
LAB_00f1f258:
      if (*plVar13 == 0) goto code_r0x00f1f260;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x130));
      do {
        if (*plVar13 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x130));
            while (*plVar13 == 0) {
              cVar6 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar12) {
                *plVar13 = lVar8;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_00f1f268;
            }
          } while( true );
        }
        cVar6 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar12) {
          *plVar13 = lVar8;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_00f1f268:
      bVar12 = false;
      goto LAB_00f1f26c;
    }
    plVar13 = (long *)0x0;
    bVar12 = true;
LAB_00f1f26c:
    puVar4 = *(undefined8 **)(param_1 + 0x148);
    for (puVar3 = *(undefined8 **)(param_1 + 0x140); puVar3 != puVar4; puVar3 = puVar3 + 1) {
      plVar11 = (long *)*puVar3;
      if (plVar11 == (long *)0x0) {
        FUN_00f1fcc0(0);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      lVar8 = plVar11[6];
      if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar8 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar2 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar2 == 0) {
        uVar9 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
        *(undefined8 *)(lVar8 + 8) = uVar9;
        *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
      FUN_00f1fcc0(plVar11);
      (**(code **)(*plVar11 + 0x120))(plVar11,1);
      lVar8 = plVar11[6];
      psVar1 = (short *)(lVar8 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar2 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*plVar11 + 0x50))(plVar11);
      }
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    if (!bVar12) {
      *plVar13 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar13 + 1));
    }
  }
  FUN_00f1f438(param_1);
  return;
code_r0x00f1f260:
  cVar6 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar13,0x10);
  if (bVar12) {
    *plVar13 = lVar8;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_00f1f268;
  goto LAB_00f1f258;
}


