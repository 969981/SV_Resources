/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ddb1e0; name: FUN_00ddb1e0
 */


void FUN_00ddb1e0(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  int *piVar2;
  short sVar3;
  undefined8 uVar4;
  bool bVar5;
  char cVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  char *pcVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  char *pcVar16;
  long *plVar17;
  bool bVar18;
  long *plVar19;
  long local_68;
  
  lVar15 = *param_1;
  lVar9 = nn::os::GetCurrentThread();
  if (lVar9 != lVar15) {
    lVar9 = nn::os::GetCurrentThread();
LAB_00ddb220:
    if (*param_1 == 0) goto code_r0x00ddb228;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 1));
    do {
      if (*param_1 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 1));
          while (*param_1 == 0) {
            cVar6 = '\x01';
            bVar18 = (bool)ExclusiveMonitorPass(param_1,0x10);
            if (bVar18) {
              *param_1 = lVar9;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_00ddb230;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar18) {
        *param_1 = lVar9;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_00ddb230:
    bVar18 = false;
    plVar17 = param_1;
    goto LAB_00ddb238;
  }
  plVar17 = (long *)0x0;
  bVar18 = true;
LAB_00ddb238:
  pcVar16 = (char *)param_1[3];
  pcVar10 = (char *)param_1[4];
  if (pcVar16 != pcVar10) {
    do {
      if (*pcVar16 == '\0') {
        lVar9 = FUN_00ddc800(param_1[10],param_1[0xb],pcVar16);
        lVar11 = param_1[0xb];
        lVar15 = lVar11 - lVar9;
        if (lVar15 != 0) {
          if (lVar9 + lVar15 != lVar11) {
            do {
              lVar12 = lVar9 + (lVar15 >> 3) * 8;
              FUN_00c96b7c(lVar9);
              uVar4 = *(undefined8 *)(lVar12 + 0x10);
              uVar13 = *(undefined8 *)(lVar12 + 0x20);
              *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)(lVar12 + 0x18);
              *(undefined8 *)(lVar9 + 0x20) = uVar13;
              *(undefined8 *)(lVar9 + 0x10) = uVar4;
              lVar9 = lVar9 + 0x28;
            } while (lVar11 + (lVar15 >> 3) * -8 != lVar9);
          }
          FUN_00ddc9e8(param_1 + 10,lVar9);
        }
      }
      else {
        FUN_00ddbe54(param_1 + 10,pcVar16 + 8);
      }
      puVar7 = PTR_DAT_047d3918;
      pcVar16 = pcVar16 + 0x30;
    } while (pcVar16 != pcVar10);
    pcVar16 = (char *)param_1[3];
    for (pcVar10 = (char *)param_1[4]; pcVar10 != pcVar16; pcVar10 = pcVar10 + -0x30) {
      plVar19 = *(long **)(pcVar10 + -0x28);
      if (plVar19 != (long *)0x0) {
        plVar1 = plVar19 + 3;
        do {
          sVar3 = (short)*plVar1;
          cVar6 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(short *)plVar1 = sVar3 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar3 == 1) {
          piVar2 = (int *)((long)plVar19 + 0x1c);
          do {
            iVar8 = *piVar2;
            cVar6 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar9 = *(long *)PTR_DAT_047d3910;
            *(long *)puVar7 = lVar9;
            local_68 = *plVar19;
            FUN_00c44438(lVar9 + 0x8040,&local_68);
          }
        }
        else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
    }
  }
  param_1[4] = (long)pcVar16;
  if (!bVar18) {
    *plVar17 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar17 + 1));
  }
  plVar17 = (long *)param_1[10];
  plVar19 = (long *)param_1[0xb];
  if (plVar17 != plVar19) {
    do {
      if ((plVar17[2] == 0) && ((*plVar17 == 0 || (*(short *)(*plVar17 + 0x1a) == 0))))
      goto LAB_00ddb29c;
      plVar17 = plVar17 + 5;
    } while (plVar19 != plVar17);
    plVar17 = plVar19;
  }
LAB_00ddb29c:
  plVar1 = plVar17;
  if (plVar17 != plVar19) {
    while (plVar1 = plVar1 + 5, plVar1 != plVar19) {
      if ((plVar1[2] != 0) || ((*plVar1 != 0 && (*(short *)(*plVar1 + 0x1a) != 0)))) {
        FUN_00c96b7c(plVar17,plVar1);
        lVar9 = plVar1[2];
        lVar15 = plVar1[4];
        plVar17[3] = plVar1[3];
        plVar17[4] = lVar15;
        plVar17[2] = lVar9;
        plVar17 = plVar17 + 5;
      }
    }
  }
  lVar15 = param_1[0xb];
  lVar9 = lVar15 - (long)plVar17;
  if (lVar9 == 0) {
    plVar19 = (long *)param_1[10];
  }
  else {
    if ((long)plVar17 + lVar9 != lVar15) {
      do {
        plVar19 = plVar17 + (lVar9 >> 3);
        FUN_00c96b7c(plVar17,plVar19);
        lVar11 = plVar19[2];
        lVar12 = plVar19[4];
        plVar17[3] = plVar19[3];
        plVar17[4] = lVar12;
        plVar17[2] = lVar11;
        plVar17 = plVar17 + 5;
      } while ((long *)(lVar15 + (lVar9 >> 3) * -8) != plVar17);
    }
    FUN_00ddc9e8(param_1 + 10,plVar17);
    plVar19 = (long *)param_1[10];
    plVar17 = (long *)param_1[0xb];
  }
  if (plVar19 != plVar17) {
    local_68 = plVar19[3];
    puVar14 = param_2 + 4;
    (*(code *)*param_2)(puVar14,&local_68);
    if (plVar19 + 5 != plVar17) {
      local_68 = plVar19[8];
      (*(code *)*param_2)(puVar14,&local_68);
      if (plVar19 + 10 != plVar17) {
        local_68 = plVar19[0xd];
        (*(code *)*param_2)(puVar14,&local_68);
        for (plVar19 = plVar19 + 0xf; plVar19 != plVar17; plVar19 = plVar19 + 5) {
          local_68 = plVar19[3];
          (*(code *)*param_2)(puVar14,&local_68);
        }
      }
    }
  }
  return;
code_r0x00ddb228:
  cVar6 = '\x01';
  bVar18 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar18) {
    *param_1 = lVar9;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_00ddb230;
  goto LAB_00ddb220;
}


