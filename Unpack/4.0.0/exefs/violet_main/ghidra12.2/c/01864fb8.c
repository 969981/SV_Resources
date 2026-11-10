/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01864fb8; name: FUN_01864fb8
 */


void FUN_01864fb8(long *param_1)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  undefined8 *puVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  code *pcVar13;
  short sVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined1 auStack_38 [8];
  
  lVar12 = *param_1;
  if ((lVar12 != 0) && (*(short *)(lVar12 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar12 + 0x1a);
    sVar14 = *(short *)(lVar12 + 0x1a);
LAB_01865158:
    sVar5 = *psVar1;
    if (sVar5 == sVar14) {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar14 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 != '\0') goto LAB_0186517c;
      bVar7 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_0186517c:
      bVar7 = false;
    }
    if (!bVar7) goto code_r0x01865184;
    lVar12 = *(long *)(lVar12 + 0x10);
    if (lVar12 != 0) {
      lVar10 = param_1[2];
      if (*(long *)(lVar10 + 0x90) == 0) {
LAB_01865330:
        FUN_00ff9e1c(lVar10 + 0x88);
      }
      else {
        if ((*(byte *)(*(long *)(lVar10 + 0x90) + 0x1e8) & 1) == 0) {
          lVar10 = param_1[2];
          goto LAB_01865330;
        }
        lVar10 = FUN_013e5740(auStack_38,param_1[3],*(long *)(param_1[2] + 0x90) + 0x210,
                              param_1[2] + 0x88);
        if (lVar10 != 0) {
          piVar2 = (int *)(lVar10 + 0x28);
          do {
            iVar8 = *piVar2;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar7) {
              *piVar2 = iVar8 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar8 == -1) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","IncrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x53,"Reference counter overflows.");
          }
        }
        lVar17 = param_1[2];
        plVar11 = *(long **)(lVar17 + 200);
        *(undefined8 *)(lVar17 + 200) = 0;
        if (plVar11 != (long *)0x0) {
          plVar3 = plVar11 + 5;
          do {
            lVar9 = *plVar3;
            iVar8 = (int)lVar9 + -1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar7) {
              *(int *)plVar3 = iVar8;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar8 == 0) {
            (**(code **)(*plVar11 + 0x10))();
          }
          else if ((int)lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
        *(long *)(lVar17 + 200) = lVar10;
      }
      lVar10 = *(long *)(lVar12 + 8);
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar14 = *psVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar14 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar14 == 1) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*(long *)(lVar12 + -0x28) + 0x50))();
      }
      else if (sVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
LAB_01864fd8:
  lVar12 = param_1[4];
  if ((*(byte *)(lVar12 + 0x61) & 1) != 0) {
    return;
  }
  plVar11 = (long *)(lVar12 + 0x68);
  lVar10 = nn::os::GetCurrentThread();
  while (*plVar11 == 0) {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar7) {
      *plVar11 = lVar10;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_01865004;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x70));
  do {
    if (*plVar11 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x70));
        while (*plVar11 == 0) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar7) {
            *plVar11 = lVar10;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_01865004;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar7) {
      *plVar11 = lVar10;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_01865004:
  puVar15 = *(undefined8 **)(lVar12 + 0x80);
  puVar4 = *(undefined8 **)(lVar12 + 0x88);
  if (puVar15 != puVar4) {
    if ((*(byte *)(lVar12 + 0x61) & 1) == 0) {
      (*(code *)*puVar15)(puVar15 + 4);
    }
    if ((*(byte *)(lVar12 + 0x61) & 1) != 0) {
      (*(code *)**(undefined8 **)puVar15[0x10])();
      *(int *)(lVar12 + 100) = *(int *)(lVar12 + 100) + 1;
    }
    while (puVar15 = puVar15 + 0x12, puVar15 != puVar4) {
      if ((*(byte *)(lVar12 + 0x61) & 1) == 0) {
        (*(code *)*puVar15)(puVar15 + 4);
      }
      if ((*(byte *)(lVar12 + 0x61) & 1) != 0) {
        (*(code *)**(undefined8 **)puVar15[0x10])();
        *(int *)(lVar12 + 100) = *(int *)(lVar12 + 100) + 1;
      }
    }
    puVar15 = *(undefined8 **)(lVar12 + 0x80);
    puVar4 = *(undefined8 **)(lVar12 + 0x88);
    if (puVar4 != puVar15) {
      pcVar13 = (code *)puVar4[-0x11];
      puVar16 = puVar4 + -0x12;
      if (pcVar13 != (code *)0x0) {
        puVar4[-0x10] = 0;
        puVar4[-0xf] = 0;
        *puVar16 = 0;
        puVar4[-0x11] = 0;
        (*pcVar13)(puVar4 + -0xe);
      }
      while (puVar4 = puVar16, puVar4 != puVar15) {
        pcVar13 = (code *)puVar4[-0x11];
        puVar16 = puVar4 + -0x12;
        if (pcVar13 != (code *)0x0) {
          puVar4[-0x10] = 0;
          puVar4[-0xf] = 0;
          puVar4[-0x12] = 0;
          puVar4[-0x11] = 0;
          (*pcVar13)(puVar4 + -0xe);
        }
      }
    }
  }
  *(undefined8 **)(lVar12 + 0x88) = puVar15;
  *(undefined1 *)(lVar12 + 0x60) = 1;
  if ((*(byte *)(lVar12 + 0x50) & 1) == 0) {
    FUN_00e2f328(*(undefined8 *)(lVar12 + 0x40),lVar12);
    *(byte *)(lVar12 + 0x50) = 1;
  }
  *(undefined8 *)(lVar12 + 0x68) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0x70));
  return;
code_r0x01865184:
  sVar14 = sVar5;
  if (sVar5 == 0) goto LAB_01864fd8;
  goto LAB_01865158;
}


