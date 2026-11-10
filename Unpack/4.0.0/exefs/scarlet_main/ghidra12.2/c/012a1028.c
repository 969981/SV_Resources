/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012a1028; name: FUN_012a1028
 */


uint FUN_012a1028(long *param_1,uint param_2)

{
  long *plVar1;
  short sVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  short sVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  char *pcVar11;
  long lVar12;
  bool bVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  undefined1 *local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  
  lVar15 = *param_1;
  plVar8 = (long *)(lVar15 + 0x110);
  lVar12 = *plVar8;
  lVar7 = nn::os::GetCurrentThread();
  if (lVar7 != lVar12) {
    lVar7 = nn::os::GetCurrentThread();
LAB_012a1068:
    if (*plVar8 == 0) goto code_r0x012a1070;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x118));
    do {
      if (*plVar8 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x118));
          while (*plVar8 == 0) {
            cVar4 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar13) {
              *plVar8 = lVar7;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_012a1078;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar13) {
        *plVar8 = lVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_012a1078:
    bVar13 = false;
    goto LAB_012a107c;
  }
  bVar13 = true;
LAB_012a107c:
  plVar8 = (long *)FUN_012a1340(*(undefined8 *)(lVar15 + 0x128),*(undefined8 *)(lVar15 + 0x130));
  if ((*(long **)(lVar15 + 0x130) == plVar8) || (*plVar8 == 0)) {
    plVar8 = (long *)FUN_012a1340(*(undefined8 *)(lVar15 + 0x160),*(undefined8 *)(lVar15 + 0x168));
    if (*(long **)(lVar15 + 0x168) == plVar8) {
      lVar7 = 0;
    }
    else {
      lVar7 = 0;
      if (*plVar8 != 0) {
        lVar7 = *plVar8 + -0x20;
      }
    }
  }
  else {
    lVar7 = *plVar8 + -0x20;
  }
  if (!bVar13) {
    *(undefined8 *)(lVar15 + 0x110) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0x118));
  }
  if (lVar7 != 0) {
    local_70 = &DAT_afc4d6c05abef19e;
    pcStack_68 = "default";
    local_60 = 7;
    local_58 = (long *)0x0;
    puVar9 = (undefined8 *)FUN_00cb7028(lVar7,&local_70);
    plVar8 = (long *)*puVar9;
    if (plVar8 != (long *)0x0) {
      plVar14 = plVar8 + 5;
      do {
        lVar7 = *plVar14;
        cVar4 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar13) {
          *(int *)plVar14 = (int)lVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((int)lVar7 == -1) {
        pcVar11 = 
        "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
        ;
        goto LAB_012a1314;
      }
    }
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    if (plVar8 != (long *)0x0) {
      if ((plVar8[0x22] == 0) || (plVar14 = *(long **)(plVar8[0x22] + 0x70), plVar14 == (long *)0x0)
         ) {
        bVar13 = true;
      }
      else {
        plVar1 = plVar14 + 5;
        do {
          lVar7 = *plVar1;
          cVar4 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar13) {
            *(int *)plVar1 = (int)lVar7 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((int)lVar7 == -1) {
          pcVar11 = 
          "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
          ;
LAB_012a1314:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",pcVar11,0x53,
                     "Reference counter overflows.");
        }
        plVar16 = (long *)plVar14[6];
        plVar10 = (long *)plVar14[7];
        if (plVar16 != plVar10) {
          do {
            sVar2 = *(short *)((long)plVar16 + 10);
            sVar6 = (**(code **)(*(long *)(*(long *)(*plVar16 + 0x30) + 0x30) + 0x10))();
            if ((int)(short)param_2 < (int)sVar2 + (int)sVar6) {
              plVar10 = (long *)(*(long *)(*plVar16 + 0x30) + 0x30);
              param_2 = (**(code **)(*plVar10 + 0x48))
                                  (plVar10,param_2 - *(ushort *)((long)plVar16 + 10));
              goto LAB_012a11b4;
            }
            plVar16 = plVar16 + 2;
          } while (plVar10 != plVar16);
        }
        param_2 = 0;
LAB_012a11b4:
        do {
          iVar5 = (int)*plVar1;
          cVar4 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar13) {
            *(int *)plVar1 = iVar5 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar5 == 1) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
        else if (iVar5 == 0) goto LAB_012a12cc;
        bVar13 = false;
      }
      plVar14 = plVar8 + 5;
      do {
        lVar7 = *plVar14;
        iVar5 = (int)lVar7 + -1;
        cVar4 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *(int *)plVar14 = iVar5;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
      else if ((int)lVar7 == 0) {
LAB_012a12cc:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
      if (!bVar13) goto LAB_012a11f8;
    }
  }
  param_2 = 0;
LAB_012a11f8:
  return param_2 & 1;
code_r0x012a1070:
  cVar4 = '\x01';
  bVar13 = (bool)ExclusiveMonitorPass(plVar8,0x10);
  if (bVar13) {
    *plVar8 = lVar7;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_012a1078;
  goto LAB_012a1068;
}


