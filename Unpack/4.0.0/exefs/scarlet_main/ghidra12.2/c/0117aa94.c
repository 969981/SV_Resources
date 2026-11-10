/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0117aa94; name: FUN_0117aa94
 */


void FUN_0117aa94(long param_1,ulong param_2,undefined4 param_3)

{
  long *plVar1;
  short *psVar2;
  undefined8 *puVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  short sVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined4 uVar16;
  ulong uVar17;
  ulong local_50;
  undefined4 local_48;
  
  lVar11 = *(long *)(param_1 + 0x18);
  lVar7 = *(long *)(param_1 + 8);
  if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
    psVar2 = (short *)(lVar7 + 0x1a);
    sVar10 = *(short *)(lVar7 + 0x1a);
LAB_0117abb8:
    sVar4 = *psVar2;
    if (sVar4 == sVar10) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_0117abdc;
      bVar6 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_0117abdc:
      bVar6 = false;
    }
    if (!bVar6) goto code_r0x0117abe4;
    lVar7 = *(long *)(lVar7 + 0x10);
    if (lVar7 != 0) {
      lVar8 = *(long *)(lVar7 + 8);
      uVar13 = param_2 >> 0x20;
      uVar17 = param_2 >> 0x28;
      psVar2 = (short *)(lVar8 + 0x1a);
      do {
        sVar10 = *psVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar6) {
          *psVar2 = sVar10 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      uVar15 = param_2;
      uVar16 = param_3;
      if (sVar10 == 1) {
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*(long *)(lVar7 + -0x28) + 0x50))();
      }
      else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      goto LAB_0117aac8;
    }
  }
  uVar13 = 0;
  uVar17 = 0;
  uVar15 = 0;
  uVar16 = 0;
LAB_0117aac8:
  if ((*(byte *)(lVar11 + 0x6d) & 1) != 0) {
    return;
  }
  uVar15 = uVar15 & 0xffffffff | (uVar13 & 0xff) << 0x20 | uVar17 << 0x28;
  plVar1 = (long *)(lVar11 + 0x78);
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_0117aaf8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x80));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x80));
        while (*plVar1 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_0117aaf8;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_0117aaf8:
  puVar12 = *(undefined8 **)(lVar11 + 200);
  puVar3 = *(undefined8 **)(lVar11 + 0xd0);
  if (puVar12 != puVar3) {
    if ((*(byte *)(lVar11 + 0x6d) & 1) == 0) {
      local_50 = uVar15;
      local_48 = uVar16;
      (*(code *)*puVar12)(puVar12 + 4,&local_50);
    }
    if ((*(byte *)(lVar11 + 0x6d) & 1) != 0) {
      (*(code *)**(undefined8 **)puVar12[0x10])();
      *(int *)(lVar11 + 0x70) = *(int *)(lVar11 + 0x70) + 1;
    }
    while (puVar12 = puVar12 + 0x12, puVar12 != puVar3) {
      if ((*(byte *)(lVar11 + 0x6d) & 1) == 0) {
        local_50 = uVar15;
        local_48 = uVar16;
        (*(code *)*puVar12)(puVar12 + 4,&local_50);
      }
      if ((*(byte *)(lVar11 + 0x6d) & 1) != 0) {
        (*(code *)**(undefined8 **)puVar12[0x10])();
        *(int *)(lVar11 + 0x70) = *(int *)(lVar11 + 0x70) + 1;
      }
    }
    puVar12 = *(undefined8 **)(lVar11 + 200);
    puVar3 = *(undefined8 **)(lVar11 + 0xd0);
    if (puVar3 != puVar12) {
      pcVar9 = (code *)puVar3[-0x11];
      puVar14 = puVar3 + -0x12;
      if (pcVar9 != (code *)0x0) {
        puVar3[-0x10] = 0;
        puVar3[-0xf] = 0;
        *puVar14 = 0;
        puVar3[-0x11] = 0;
        (*pcVar9)(puVar3 + -0xe);
      }
      while (puVar3 = puVar14, puVar3 != puVar12) {
        pcVar9 = (code *)puVar3[-0x11];
        puVar14 = puVar3 + -0x12;
        if (pcVar9 != (code *)0x0) {
          puVar3[-0x10] = 0;
          puVar3[-0xf] = 0;
          puVar3[-0x12] = 0;
          puVar3[-0x11] = 0;
          (*pcVar9)(puVar3 + -0xe);
        }
      }
    }
  }
  *(undefined8 **)(lVar11 + 0xd0) = puVar12;
  *(ulong *)(lVar11 + 0x60) = uVar15;
  *(undefined4 *)(lVar11 + 0x68) = uVar16;
  *(undefined1 *)(lVar11 + 0x6c) = 1;
  if ((*(byte *)(lVar11 + 0x50) & 1) == 0) {
    FUN_00e2f328(*(undefined8 *)(lVar11 + 0x40),lVar11);
    *(byte *)(lVar11 + 0x50) = 1;
  }
  *(undefined8 *)(lVar11 + 0x78) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x80));
  return;
code_r0x0117abe4:
  uVar15 = 0;
  uVar13 = 0;
  uVar17 = 0;
  uVar16 = 0;
  sVar10 = sVar4;
  if (sVar4 == 0) goto LAB_0117aac8;
  goto LAB_0117abb8;
}


