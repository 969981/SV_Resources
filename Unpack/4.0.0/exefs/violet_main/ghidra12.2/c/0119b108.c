/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0119b108; name: FUN_0119b108
 */


void FUN_0119b108(long *param_1,ulong param_2,int param_3)

{
  short *psVar1;
  MutexType *pMVar2;
  undefined8 *puVar3;
  long *plVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  code *pcVar11;
  short sVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long *local_90;
  long local_88;
  long lStack_80;
  long local_78;
  long *plStack_70;
  undefined4 local_68;
  
  lVar10 = *param_1;
  if ((lVar10 != 0) && (*(short *)(lVar10 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar10 + 0x1a);
    sVar12 = *(short *)(lVar10 + 0x1a);
    do {
      sVar5 = *psVar1;
      if (sVar5 == sVar12) {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar12 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_0119b240;
        bVar7 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0119b240:
        bVar7 = false;
      }
      if (bVar7) {
        lVar10 = *(long *)(lVar10 + 0x10);
        if (lVar10 != 0) {
          pMVar2 = (MutexType *)(lVar10 + 0x128);
          uVar9 = nn::os::IsMutexLockedByCurrentThread(pMVar2);
          bVar7 = (uVar9 & 1) == 0;
          if (bVar7) {
            nn::os::LockMutex(pMVar2);
          }
          if ((param_3 == 0) && ((param_2 >> 0x20 & 0xff) != 0)) goto LAB_0119b34c;
          lVar8 = *(long *)(lVar10 + 0x50);
          lVar17 = *(long *)(lVar10 + 0x58);
          plVar15 = (long *)param_1[2];
          local_90 = plVar15;
          if (plVar15 != (long *)0x0) {
            (**(code **)(*plVar15 + 0x18))(plVar15);
          }
          local_88 = param_1[3];
          lStack_80 = param_1[4];
          local_78 = param_1[5];
          plVar4 = (long *)param_1[6];
          plStack_70 = plVar4;
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x18))(plVar4);
          }
          local_68 = (undefined4)param_1[7];
          if ((lVar8 == lVar17) || (uVar9 = FUN_029c99f0(&local_90,lVar8), (uVar9 & 1) != 0))
          goto LAB_0119b4c0;
          goto LAB_0119b49c;
        }
        break;
      }
      sVar12 = sVar5;
    } while (sVar5 != 0);
  }
  goto LAB_0119b130;
  while( true ) {
    uVar9 = FUN_029c99f0(&local_90,lVar16);
    lVar8 = lVar16;
    if ((uVar9 & 1) != 0) break;
LAB_0119b49c:
    lVar16 = lVar8 + 0x40;
    lVar8 = lVar17;
    if (lVar17 == lVar16) break;
  }
LAB_0119b4c0:
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
  }
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x20))(plVar15);
  }
  if (*(long *)(lVar10 + 0x58) != lVar8) {
    FUN_029c9a60((long *)(lVar10 + 0x50),lVar8);
  }
LAB_0119b34c:
  if (bVar7) {
    nn::os::UnlockMutex(pMVar2);
  }
  lVar8 = *(long *)(lVar10 + 8);
  psVar1 = (short *)(lVar8 + 0x1a);
  do {
    sVar12 = *psVar1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar7) {
      *psVar1 = sVar12 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar12 == 1) {
    *(undefined8 *)(lVar8 + 0x10) = 0;
    (**(code **)(*(long *)(lVar10 + -0x28) + 0x50))((long *)(lVar10 + -0x28));
  }
  else if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
LAB_0119b130:
  lVar10 = param_1[8];
  if ((*(byte *)(lVar10 + 0x61) & 1) != 0) {
    return;
  }
  plVar15 = (long *)(lVar10 + 0x68);
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar15 == 0) {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar7) {
      *plVar15 = lVar8;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_0119b15c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x70));
  do {
    if (*plVar15 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x70));
        while (*plVar15 == 0) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar7) {
            *plVar15 = lVar8;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_0119b15c;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar7) {
      *plVar15 = lVar8;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_0119b15c:
  puVar13 = *(undefined8 **)(lVar10 + 0x80);
  puVar3 = *(undefined8 **)(lVar10 + 0x88);
  if (puVar13 != puVar3) {
    if ((*(byte *)(lVar10 + 0x61) & 1) == 0) {
      (*(code *)*puVar13)(puVar13 + 4);
    }
    if ((*(byte *)(lVar10 + 0x61) & 1) != 0) {
      (*(code *)**(undefined8 **)puVar13[0x10])();
      *(int *)(lVar10 + 100) = *(int *)(lVar10 + 100) + 1;
    }
    while (puVar13 = puVar13 + 0x12, puVar13 != puVar3) {
      if ((*(byte *)(lVar10 + 0x61) & 1) == 0) {
        (*(code *)*puVar13)(puVar13 + 4);
      }
      if ((*(byte *)(lVar10 + 0x61) & 1) != 0) {
        (*(code *)**(undefined8 **)puVar13[0x10])();
        *(int *)(lVar10 + 100) = *(int *)(lVar10 + 100) + 1;
      }
    }
    puVar13 = *(undefined8 **)(lVar10 + 0x80);
    puVar3 = *(undefined8 **)(lVar10 + 0x88);
    if (puVar3 != puVar13) {
      pcVar11 = (code *)puVar3[-0x11];
      puVar14 = puVar3 + -0x12;
      if (pcVar11 != (code *)0x0) {
        puVar3[-0x10] = 0;
        puVar3[-0xf] = 0;
        *puVar14 = 0;
        puVar3[-0x11] = 0;
        (*pcVar11)(puVar3 + -0xe);
      }
      while (puVar3 = puVar14, puVar3 != puVar13) {
        pcVar11 = (code *)puVar3[-0x11];
        puVar14 = puVar3 + -0x12;
        if (pcVar11 != (code *)0x0) {
          puVar3[-0x10] = 0;
          puVar3[-0xf] = 0;
          puVar3[-0x12] = 0;
          puVar3[-0x11] = 0;
          (*pcVar11)(puVar3 + -0xe);
        }
      }
    }
  }
  *(undefined8 **)(lVar10 + 0x88) = puVar13;
  *(undefined1 *)(lVar10 + 0x60) = 1;
  if ((*(byte *)(lVar10 + 0x50) & 1) == 0) {
    FUN_00e2f328(*(undefined8 *)(lVar10 + 0x40),lVar10);
    *(byte *)(lVar10 + 0x50) = 1;
  }
  *(undefined8 *)(lVar10 + 0x68) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0x70));
  return;
}


