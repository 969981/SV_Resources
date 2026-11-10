/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cb9504; name: FUN_00cb9504
 */


void FUN_00cb9504(long *param_1)

{
  short *psVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  int *piVar5;
  short sVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  code *pcVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 local_48;
  
  *param_1 = (long)&DAT_045eb438;
  param_1[4] = (long)&PTR_LAB_045eb568;
  param_1[5] = (long)&DAT_045eb5b8;
  param_1[0x1f] = (long)&PTR_LAB_045eb610;
  FUN_00cb9f64(param_1 + 0x21);
  lVar18 = param_1[0x20];
  plVar11 = (long *)(lVar18 + 0x30);
  lVar15 = *plVar11;
  lVar10 = nn::os::GetCurrentThread();
  if (lVar10 != lVar15) {
    lVar10 = nn::os::GetCurrentThread();
LAB_00cb956c:
    if (*plVar11 == 0) goto code_r0x00cb9574;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar18 + 0x38));
    do {
      if (*plVar11 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar18 + 0x38));
          while (*plVar11 == 0) {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar8) {
              *plVar11 = lVar10;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') goto LAB_00cb957c;
          }
        } while( true );
      }
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar8) {
        *plVar11 = lVar10;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
LAB_00cb957c:
    *(undefined8 *)(lVar18 + 0x48) = 0;
    *(undefined8 *)(lVar18 + 0x30) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar18 + 0x38));
    goto LAB_00cb9590;
  }
  *(undefined8 *)(lVar18 + 0x48) = 0;
LAB_00cb9590:
  plVar11 = (long *)param_1[0xa7];
  if (plVar11 != (long *)0x0) {
    lVar10 = plVar11[6];
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar6 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*plVar11 + 0x50))();
    }
    else if (sVar6 == 0) goto LAB_00cb9778;
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0xa2));
  pcVar13 = (code *)param_1[0x8f];
  if (pcVar13 != (code *)0x0) {
    param_1[0x91] = 0;
    param_1[0x90] = 0;
    param_1[0x8f] = 0;
    param_1[0x8e] = 0;
    (*pcVar13)(param_1 + 0x92);
  }
  plVar11 = (long *)param_1[0x8c];
  if (plVar11 != (long *)0x0) {
    lVar10 = plVar11[6];
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar6 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*plVar11 + 0x50))();
    }
    else if (sVar6 == 0) {
LAB_00cb9778:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x89));
  puVar17 = (undefined8 *)param_1[0x82];
  if (puVar17 != (undefined8 *)0x0) {
    puVar14 = (undefined8 *)param_1[0x83];
    puVar16 = puVar17;
    if (puVar14 != puVar17) {
      pcVar13 = (code *)puVar14[-7];
      puVar16 = puVar14 + -8;
      if (pcVar13 != (code *)0x0) {
        puVar14[-6] = 0;
        puVar14[-5] = 0;
        *puVar16 = 0;
        puVar14[-7] = 0;
        (*pcVar13)(puVar14 + -4);
      }
      while (puVar14 = puVar16, puVar14 != puVar17) {
        pcVar13 = (code *)puVar14[-7];
        puVar16 = puVar14 + -8;
        if (pcVar13 != (code *)0x0) {
          puVar14[-6] = 0;
          puVar14[-5] = 0;
          puVar14[-8] = 0;
          puVar14[-7] = 0;
          (*pcVar13)(puVar14 + -4);
        }
      }
      puVar16 = (undefined8 *)param_1[0x82];
    }
    lVar10 = param_1[0x84];
    param_1[0x83] = (long)puVar17;
    plVar11 = (long *)param_1[0x85];
    uVar12 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar12 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar16,lVar10 - (long)puVar16,0x10);
    }
    else {
      FUN_00c48fe8(plVar11,puVar16,lVar10 - (long)puVar16,0x10);
    }
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x80));
  FUN_00cb9b14(param_1 + 0x7b);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x79));
  lVar10 = param_1[0x74];
  if (lVar10 != 0) {
    lVar18 = param_1[0x75];
    lVar15 = lVar10;
    if (lVar18 != lVar10) {
      if (*(long **)(lVar18 + -0xa8) != (long *)0x0) {
        (**(code **)(**(long **)(lVar18 + -0xa8) + 0x20))();
      }
      if (lVar18 + -0xc0 != lVar10) {
        if (*(long **)(lVar18 + -0x168) != (long *)0x0) {
          (**(code **)(**(long **)(lVar18 + -0x168) + 0x20))();
        }
        if (lVar18 + -0x180 != lVar10) {
          do {
            if (*(long **)(lVar18 + -0x228) != (long *)0x0) {
              (**(code **)(**(long **)(lVar18 + -0x228) + 0x20))();
            }
            lVar18 = lVar18 + -0xc0;
          } while (lVar10 + 0x180 != lVar18);
        }
      }
      lVar15 = param_1[0x74];
    }
    lVar18 = param_1[0x76];
    param_1[0x75] = lVar10;
    plVar11 = (long *)param_1[0x77];
    uVar12 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar12 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar15,lVar18 - lVar15,0x10);
    }
    else {
      FUN_00c48fe8(plVar11,lVar15,lVar18 - lVar15,0x10);
    }
  }
  puVar17 = (undefined8 *)param_1[0x71];
  if (puVar17 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar17 + 3);
    do {
      sVar6 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      piVar5 = (int *)((long)puVar17 + 0x1c);
      do {
        iVar9 = *piVar5;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar8) {
          *piVar5 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_48 = *puVar17;
        FUN_00c44438(lVar10 + 0x8040,&local_48);
      }
    }
    else if (sVar6 == 0) goto LAB_00cb971c;
  }
  if ((long *)param_1[0x70] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x70] + 0x20))();
  }
  FUN_00cb9d18(param_1 + 0x21);
  plVar11 = (long *)param_1[0x20];
  if (plVar11 != (long *)0x0) {
    plVar2 = plVar11 + 5;
    do {
      lVar10 = *plVar2;
      iVar9 = (int)lVar10 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar8) {
        *(int *)plVar2 = iVar9;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
    else if ((int)lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  puVar3 = PTR_DAT_047d8c78 + 0x88;
  puVar4 = PTR_DAT_047d8c78 + 0xd8;
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[4] = (long)puVar3;
  param_1[5] = (long)puVar4;
  puVar17 = (undefined8 *)param_1[6];
  if (puVar17 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar17 + 3);
    do {
      sVar6 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      piVar5 = (int *)((long)puVar17 + 0x1c);
      do {
        iVar9 = *piVar5;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar8) {
          *piVar5 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_48 = *puVar17;
        FUN_00c44438(lVar10 + 0x8040,&local_48);
      }
    }
    else if (sVar6 == 0) {
LAB_00cb971c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
code_r0x00cb9574:
  cVar7 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
  if (bVar8) {
    *plVar11 = lVar10;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_00cb957c;
  goto LAB_00cb956c;
}


