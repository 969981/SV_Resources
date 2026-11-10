/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01520114; name: FUN_01520114
 */


void FUN_01520114(undefined8 *param_1,ulong param_2,int param_3)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  code *pcVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 uVar14;
  long lVar15;
  undefined1 auStack_28 [4];
  undefined1 local_24 [4];
  
  lVar11 = param_1[3];
  uVar14 = 0;
  if ((param_3 == 0) && ((param_2 >> 0x20 & 0xff) != 0)) {
    lVar15 = param_1[2];
    lVar8 = FUN_011cb27c(auStack_28,*(undefined8 *)(lVar15 + 8),*param_1);
    if (lVar8 != 0) {
      piVar1 = (int *)(lVar8 + 0x28);
      do {
        iVar3 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar3 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_pokelib_build_s2/pokelib_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    lVar15 = lVar15 + (long)*(int *)(param_1 + 1) * 8;
    plVar9 = *(long **)(lVar15 + 0x2e8);
    *(undefined8 *)(lVar15 + 0x2e8) = 0;
    if (plVar9 != (long *)0x0) {
      plVar2 = plVar9 + 5;
      do {
        lVar7 = *plVar2;
        iVar3 = (int)lVar7 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *(int *)plVar2 = iVar3;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
      else if ((int)lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_pokelib_build_s2/pokelib_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    uVar14 = 1;
    *(long *)(lVar15 + 0x2e8) = lVar8;
  }
  if ((*(byte *)(lVar11 + 0x62) & 1) != 0) {
    return;
  }
  plVar9 = (long *)(lVar11 + 0x68);
  lVar15 = nn::os::GetCurrentThread();
  while (*plVar9 == 0) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar6) {
      *plVar9 = lVar15;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_015201e0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x70));
  do {
    if (*plVar9 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x70));
        while (*plVar9 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar6) {
            *plVar9 = lVar15;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_015201e0;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar6) {
      *plVar9 = lVar15;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_015201e0:
  puVar12 = *(undefined8 **)(lVar11 + 0xb8);
  puVar4 = *(undefined8 **)(lVar11 + 0xc0);
  if (puVar12 != puVar4) {
    if ((*(byte *)(lVar11 + 0x62) & 1) == 0) {
      local_24[0] = uVar14;
      (*(code *)*puVar12)(puVar12 + 4,local_24);
    }
    if ((*(byte *)(lVar11 + 0x62) & 1) != 0) {
      (*(code *)**(undefined8 **)puVar12[0x10])();
      *(int *)(lVar11 + 100) = *(int *)(lVar11 + 100) + 1;
    }
    while (puVar12 = puVar12 + 0x12, puVar12 != puVar4) {
      if ((*(byte *)(lVar11 + 0x62) & 1) == 0) {
        local_24[0] = uVar14;
        (*(code *)*puVar12)(puVar12 + 4,local_24);
      }
      if ((*(byte *)(lVar11 + 0x62) & 1) != 0) {
        (*(code *)**(undefined8 **)puVar12[0x10])();
        *(int *)(lVar11 + 100) = *(int *)(lVar11 + 100) + 1;
      }
    }
    puVar12 = *(undefined8 **)(lVar11 + 0xb8);
    puVar4 = *(undefined8 **)(lVar11 + 0xc0);
    if (puVar4 != puVar12) {
      pcVar10 = (code *)puVar4[-0x11];
      puVar13 = puVar4 + -0x12;
      if (pcVar10 != (code *)0x0) {
        puVar4[-0x10] = 0;
        puVar4[-0xf] = 0;
        *puVar13 = 0;
        puVar4[-0x11] = 0;
        (*pcVar10)(puVar4 + -0xe);
      }
      while (puVar4 = puVar13, puVar4 != puVar12) {
        pcVar10 = (code *)puVar4[-0x11];
        puVar13 = puVar4 + -0x12;
        if (pcVar10 != (code *)0x0) {
          puVar4[-0x10] = 0;
          puVar4[-0xf] = 0;
          puVar4[-0x12] = 0;
          puVar4[-0x11] = 0;
          (*pcVar10)(puVar4 + -0xe);
        }
      }
    }
  }
  *(undefined8 **)(lVar11 + 0xc0) = puVar12;
  *(undefined1 *)(lVar11 + 0x60) = uVar14;
  *(undefined1 *)(lVar11 + 0x61) = 1;
  if ((*(byte *)(lVar11 + 0x50) & 1) == 0) {
    FUN_00e2f328(*(undefined8 *)(lVar11 + 0x40),lVar11);
    *(byte *)(lVar11 + 0x50) = 1;
  }
  *(undefined8 *)(lVar11 + 0x68) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x70));
  return;
}


