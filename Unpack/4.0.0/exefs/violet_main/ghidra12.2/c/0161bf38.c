/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0161bf38; name: FUN_0161bf38
 */


void FUN_0161bf38(long *param_1)

{
  short *psVar1;
  undefined8 *puVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  short sVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined1 auStack_38 [8];
  
  *(undefined1 *)(param_1[2] + 0x40) = 0;
  lVar9 = *param_1;
  if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar9 + 0x1a);
    sVar12 = *(short *)(lVar9 + 0x1a);
LAB_0161c12c:
    sVar3 = *psVar1;
    if (sVar3 == sVar12) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_0161c150;
      bVar5 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_0161c150:
      bVar5 = false;
    }
    if (!bVar5) goto code_r0x0161c158;
    lVar9 = *(long *)(lVar9 + 0x10);
    if (lVar9 != 0) {
      if (*(long *)(param_1[2] + 0x58) != 0) {
        lVar6 = FUN_0118766c(auStack_38,param_1[3],param_1[2] + 0x50);
        if (lVar6 != 0) {
          lVar15 = *(long *)(lVar6 + 0x30);
          if (*(long *)(lVar15 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("m_object != nullptr","AddReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x3d);
          }
          psVar1 = (short *)(lVar15 + 0x1a);
          do {
            sVar12 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar12 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar12 == 0) {
            uVar8 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
            *(undefined8 *)(lVar15 + 8) = uVar8;
            *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
          }
          else if (sVar12 == -1) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","AddReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x58,"Reference counter overflows.");
          }
        }
        lVar15 = param_1[2];
        plVar7 = *(long **)(lVar15 + 0x48);
        *(undefined8 *)(lVar15 + 0x48) = 0;
        if (plVar7 != (long *)0x0) {
          lVar10 = plVar7[6];
          psVar1 = (short *)(lVar10 + 0x1a);
          do {
            sVar12 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar12 == 1) {
            *(undefined8 *)(lVar10 + 0x10) = 0;
            (**(code **)(*plVar7 + 0x50))();
          }
          else if (sVar12 == 0) goto LAB_0161c208;
        }
        *(long *)(lVar15 + 0x48) = lVar6;
        FUN_00efa2a4(*(undefined8 *)(param_1[2] + 0x48));
      }
      lVar6 = *(long *)(lVar9 + 8);
      psVar1 = (short *)(lVar6 + 0x1a);
      do {
        sVar12 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar12 == 1) {
        *(undefined8 *)(lVar6 + 0x10) = 0;
        (**(code **)(*(long *)(lVar9 + -0x28) + 0x50))();
      }
      else if (sVar12 == 0) {
LAB_0161c208:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
LAB_0161bf60:
  lVar9 = param_1[4];
  if ((*(byte *)(lVar9 + 0x61) & 1) != 0) {
    return;
  }
  plVar7 = (long *)(lVar9 + 0x68);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar7 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar5) {
      *plVar7 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_0161bf8c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x70));
  do {
    if (*plVar7 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x70));
        while (*plVar7 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar5) {
            *plVar7 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_0161bf8c;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar5) {
      *plVar7 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_0161bf8c:
  puVar13 = *(undefined8 **)(lVar9 + 0x80);
  puVar2 = *(undefined8 **)(lVar9 + 0x88);
  if (puVar13 != puVar2) {
    if ((*(byte *)(lVar9 + 0x61) & 1) == 0) {
      (*(code *)*puVar13)(puVar13 + 4);
    }
    if ((*(byte *)(lVar9 + 0x61) & 1) != 0) {
      (*(code *)**(undefined8 **)puVar13[0x10])();
      *(int *)(lVar9 + 100) = *(int *)(lVar9 + 100) + 1;
    }
    while (puVar13 = puVar13 + 0x12, puVar13 != puVar2) {
      if ((*(byte *)(lVar9 + 0x61) & 1) == 0) {
        (*(code *)*puVar13)(puVar13 + 4);
      }
      if ((*(byte *)(lVar9 + 0x61) & 1) != 0) {
        (*(code *)**(undefined8 **)puVar13[0x10])();
        *(int *)(lVar9 + 100) = *(int *)(lVar9 + 100) + 1;
      }
    }
    puVar13 = *(undefined8 **)(lVar9 + 0x80);
    puVar2 = *(undefined8 **)(lVar9 + 0x88);
    if (puVar2 != puVar13) {
      pcVar11 = (code *)puVar2[-0x11];
      puVar14 = puVar2 + -0x12;
      if (pcVar11 != (code *)0x0) {
        puVar2[-0x10] = 0;
        puVar2[-0xf] = 0;
        *puVar14 = 0;
        puVar2[-0x11] = 0;
        (*pcVar11)(puVar2 + -0xe);
      }
      while (puVar2 = puVar14, puVar2 != puVar13) {
        pcVar11 = (code *)puVar2[-0x11];
        puVar14 = puVar2 + -0x12;
        if (pcVar11 != (code *)0x0) {
          puVar2[-0x10] = 0;
          puVar2[-0xf] = 0;
          puVar2[-0x12] = 0;
          puVar2[-0x11] = 0;
          (*pcVar11)(puVar2 + -0xe);
        }
      }
    }
  }
  *(undefined8 **)(lVar9 + 0x88) = puVar13;
  *(undefined1 *)(lVar9 + 0x60) = 1;
  if ((*(byte *)(lVar9 + 0x50) & 1) == 0) {
    FUN_00e2f328(*(undefined8 *)(lVar9 + 0x40),lVar9);
    *(byte *)(lVar9 + 0x50) = 1;
  }
  *(undefined8 *)(lVar9 + 0x68) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0x70));
  return;
code_r0x0161c158:
  sVar12 = sVar3;
  if (sVar3 == 0) goto LAB_0161bf60;
  goto LAB_0161c12c;
}


