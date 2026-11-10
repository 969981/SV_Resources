/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011ccdd0; name: FUN_011ccdd0
 */


void FUN_011ccdd0(long param_1)

{
  short *psVar1;
  short sVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  long lVar15;
  long lVar16;
  bool bVar17;
  long *local_58;
  long *local_50;
  undefined1 auStack_48 [8];
  
  if (*(long *)(param_1 + 0x140) == 0) {
    FUN_00c9e664(&local_58,param_1 + 0xe8);
    if (local_50 == (long *)0x0) {
      lVar15 = 0;
    }
    else {
      lVar15 = local_50[9];
    }
    plVar9 = (long *)(lVar15 + 0x110);
    lVar16 = *plVar9;
    lVar7 = nn::os::GetCurrentThread();
    if (lVar7 != lVar16) {
      lVar7 = nn::os::GetCurrentThread();
      bVar17 = false;
LAB_011cd0ac:
      if (*plVar9 == 0) goto code_r0x011cd0b4;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x118));
      bVar17 = false;
      do {
        if (*plVar9 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x118));
            while (*plVar9 == 0) {
              cVar4 = '\x01';
              bVar17 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar17) {
                *plVar9 = lVar7;
                cVar4 = ExclusiveMonitorsStatus();
              }
              bVar17 = false;
              if (cVar4 == '\0') goto LAB_011cceb4;
            }
          } while( true );
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *plVar9 = lVar7;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_011cceb4;
    }
    bVar17 = true;
LAB_011cceb4:
    plVar9 = *(long **)(lVar15 + 0x128);
    plVar3 = *(long **)(lVar15 + 0x130);
    if (plVar9 == plVar3) {
LAB_011ccfac:
      plVar9 = *(long **)(lVar15 + 0x160);
      plVar3 = *(long **)(lVar15 + 0x168);
      if (plVar9 != plVar3) {
        do {
          if ((*plVar9 != 0) && (uVar8 = FUN_011cd19c(*plVar9 + 8), (uVar8 & 1) != 0)) {
            uVar8 = (**(code **)(*(long *)*plVar9 + 0xc0))();
            if ((uVar8 & 1) == 0) goto LAB_011ccff0;
          }
          plVar9 = plVar9 + 1;
        } while (plVar3 != plVar9);
        plVar9 = plVar3;
LAB_011ccff0:
        if (plVar9 != *(long **)(lVar15 + 0x168)) {
          lVar7 = 0;
          if (*plVar9 != 0) {
            lVar7 = *plVar9 + -0x20;
          }
          goto LAB_011ccf10;
        }
      }
      lVar7 = 0;
    }
    else {
      do {
        if ((*plVar9 != 0) && (uVar8 = FUN_011cd19c(*plVar9 + 8), (uVar8 & 1) != 0)) {
          uVar8 = (**(code **)(*(long *)*plVar9 + 0xc0))();
          if ((uVar8 & 1) == 0) goto LAB_011ccef8;
        }
        plVar9 = plVar9 + 1;
      } while (plVar3 != plVar9);
      plVar9 = plVar3;
LAB_011ccef8:
      if ((plVar9 == *(long **)(lVar15 + 0x130)) || (*plVar9 == 0)) goto LAB_011ccfac;
      lVar7 = *plVar9 + -0x20;
    }
LAB_011ccf10:
    if (!bVar17) {
      *(undefined8 *)(lVar15 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0x118));
    }
    if (lVar7 != 0) {
      lVar15 = *(long *)(lVar7 + 0x98);
      if (*(long *)(lVar15 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar15 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar4 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar17) {
          *psVar1 = sVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar2 == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
        *(undefined8 *)(lVar15 + 8) = uVar10;
        *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
        pcVar11 = "count != 0";
        pcVar12 = "AddReference";
        pcVar13 = 
        "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
        ;
        pcVar14 = "Reference counter overflows.";
        goto LAB_011cd150;
      }
    }
    plVar9 = *(long **)(param_1 + 0x140);
    *(long *)(param_1 + 0x140) = lVar7;
    if (plVar9 != (long *)0x0) {
      lVar15 = plVar9[0x13];
      psVar1 = (short *)(lVar15 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar4 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar17) {
          *psVar1 = sVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar15 + 0x10) = 0;
        (**(code **)(*plVar9 + 0x50))();
      }
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    if (local_50 != (long *)0x0) {
      plVar9 = local_50 + 5;
      do {
        lVar15 = *plVar9;
        iVar6 = (int)lVar15 + -1;
        cVar4 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar17) {
          *(int *)plVar9 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*local_50 + 0x10))();
      }
      else if ((int)lVar15 == 0) goto LAB_011cd130;
    }
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x60))();
    }
  }
  else {
    FUN_00c9e664(&local_58,param_1 + 0xe8);
    lVar15 = 0;
    if (local_50 != (long *)0x0) {
      lVar15 = local_50[9];
    }
    lVar15 = FUN_00efcb90(lVar15 + 0x108,auStack_48);
    if (local_50 != (long *)0x0) {
      plVar9 = local_50 + 5;
      do {
        lVar7 = *plVar9;
        iVar6 = (int)lVar7 + -1;
        cVar4 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar17) {
          *(int *)plVar9 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 != 0) {
        if ((int)lVar7 != 0) goto LAB_011cce40;
LAB_011cd130:
        pcVar11 = "count != std::numeric_limits<uint32_t>::max()";
        pcVar12 = "DecrementReferenceInternal";
        pcVar13 = 
        "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
        ;
        pcVar14 = "Reference counter underflows.";
LAB_011cd150:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl(pcVar11,pcVar12,pcVar13,0x58,pcVar14);
      }
      (**(code **)(*local_50 + 0x10))();
    }
LAB_011cce40:
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x60))();
    }
    if (lVar15 != 0) {
      *(undefined1 *)(param_1 + 0x148) = 1;
    }
    if (*(char *)(*(long *)(param_1 + 0x140) + 0x11a) != '\0') {
      *(undefined4 *)(param_1 + 0x138) = 3;
    }
  }
  return;
code_r0x011cd0b4:
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar5) {
    *plVar9 = lVar7;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_011cceb4;
  goto LAB_011cd0ac;
}


