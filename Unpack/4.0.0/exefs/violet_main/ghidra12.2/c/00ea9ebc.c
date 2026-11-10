/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ea9ebc; name: FUN_00ea9ebc
 */


void FUN_00ea9ebc(long param_1,long *param_2,uint param_3)

{
  long *plVar1;
  LightEventType *pLVar2;
  undefined8 *puVar3;
  long *plVar4;
  int *piVar5;
  long *plVar6;
  char cVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  bool bVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  int *local_78;
  long *local_70;
  long *local_68;
  
  plVar1 = (long *)(param_1 + 400);
  lVar11 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar7 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar13) {
      *plVar1 = lVar11;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') goto LAB_00ea9f04;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x198));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x198));
        while (*plVar1 == 0) {
          cVar7 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar13) {
            *plVar1 = lVar11;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_00ea9f04;
        }
      } while( true );
    }
    cVar7 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar13) {
      *plVar1 = lVar11;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_00ea9f04:
  plVar1 = (long *)(param_1 + 0x170);
  lVar11 = nn::os::GetCurrentThread();
  do {
    lVar15 = *plVar1;
    lVar14 = *(long *)(param_1 + 0x178);
    cVar7 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar13) {
      *plVar1 = lVar15;
      *(long *)(param_1 + 0x178) = lVar14;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  pLVar2 = (LightEventType *)(param_1 + 0x180);
LAB_00ea9f20:
  while ((lVar15 != 0 && (lVar11 != lVar15))) {
    nn::os::WaitLightEvent(pLVar2);
    do {
      lVar15 = *plVar1;
      lVar14 = *(long *)(param_1 + 0x178);
      cVar7 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *plVar1 = lVar15;
        *(long *)(param_1 + 0x178) = lVar14;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  do {
    lVar18 = *plVar1;
    if (lVar18 != lVar15 || *(long *)(param_1 + 0x178) != lVar14) {
      bVar13 = false;
      ClearExclusiveLocal();
      goto LAB_00ea9f50;
    }
    cVar7 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar13) {
      *plVar1 = lVar15;
      *(long *)(param_1 + 0x174) = lVar14 + 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  bVar13 = true;
LAB_00ea9f50:
  if (!bVar13) {
    lVar15 = lVar18;
    lVar14 = *(long *)(param_1 + 0x178);
    goto LAB_00ea9f20;
  }
  piVar16 = *(int **)(param_1 + 0x120);
  piVar5 = *(int **)(param_1 + 0x128);
  if ((piVar16 != piVar5) &&
     (FUN_00ebb820(*(undefined8 *)(*(long *)(param_1 + 0xd0) + (long)*piVar16 * 8),
                   *(long *)(param_1 + 0x30) + 0x30), piVar16 + 3 != piVar5)) {
    FUN_00ebb820(*(undefined8 *)(*(long *)(param_1 + 0xd0) + (long)piVar16[3] * 8),
                 *(long *)(param_1 + 0x30) + 0x30);
    for (piVar16 = piVar16 + 6; piVar16 != piVar5; piVar16 = piVar16 + 3) {
      FUN_00ebb820(*(undefined8 *)(*(long *)(param_1 + 0xd0) + (long)*piVar16 * 8),
                   *(long *)(param_1 + 0x30) + 0x30);
    }
  }
  do {
    lVar11 = *plVar1;
    lVar15 = *(long *)(param_1 + 0x178);
    cVar7 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar13) {
      *plVar1 = lVar11;
      *(long *)(param_1 + 0x178) = lVar15;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  do {
    lVar14 = *plVar1;
    lVar18 = *(long *)(param_1 + 0x178);
    if (lVar14 != lVar11 || lVar18 != lVar15) {
      bVar13 = false;
      ClearExclusiveLocal();
      goto LAB_00eaa038;
    }
    cVar7 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar13) {
      *plVar1 = lVar11;
      *(long *)(param_1 + 0x174) = lVar15 + -1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  bVar13 = true;
LAB_00eaa038:
  if (!bVar13) {
    do {
      lVar11 = *plVar1;
      lVar15 = *(long *)(param_1 + 0x178);
      if (lVar11 != lVar14 || lVar15 != lVar18) {
        bVar13 = false;
        ClearExclusiveLocal();
        goto joined_r0x00eaa578;
      }
      cVar7 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *plVar1 = lVar14;
        *(long *)(param_1 + 0x174) = lVar18 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    bVar13 = true;
joined_r0x00eaa578:
    if (!bVar13) {
      do {
        lVar14 = *plVar1;
        lVar18 = *(long *)(param_1 + 0x178);
        if (lVar14 != lVar11 || lVar18 != lVar15) {
          bVar13 = false;
          ClearExclusiveLocal();
          lVar11 = lVar14;
          lVar15 = lVar18;
          goto joined_r0x00eaa578;
        }
        cVar7 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar13) {
          *plVar1 = lVar11;
          *(long *)(param_1 + 0x174) = lVar15 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      bVar13 = true;
      lVar11 = lVar14;
      lVar15 = lVar18;
      goto joined_r0x00eaa578;
    }
  }
  nn::os::SignalLightEvent(pLVar2);
  lVar11 = *(long *)(param_1 + 0x110);
  if ((lVar11 != 0) && (*(long *)(lVar11 + 0x70) == 0)) {
    FUN_00ebbbd4(lVar11,*(long *)(param_1 + 0x30) + 0x40);
  }
  local_68 = *(long **)(*(long *)(param_1 + 0x30) + 0x38);
  if (local_68 != (long *)0x0) {
    (**(code **)(local_68[4] + 0x10))();
  }
  lVar11 = *(long *)(param_1 + 0x108);
  puVar3 = (undefined8 *)(param_1 + 0x108);
  if (*(long *)(lVar11 + 0x70) == *(long *)(lVar11 + 0x78)) {
    lVar15 = *param_2;
    if (lVar15 != 0) {
      piVar16 = (int *)(lVar15 + 0x28);
      do {
        iVar9 = *piVar16;
        cVar7 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar13) {
          *piVar16 = iVar9 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar9 == -1) goto LAB_00eaa928;
    }
    plVar12 = *(long **)(lVar11 + 0xa8);
    *(long *)(lVar11 + 0xa8) = lVar15;
    if (plVar12 != (long *)0x0) {
      plVar6 = plVar12 + 5;
      do {
        lVar11 = *plVar6;
        iVar9 = (int)lVar11 + -1;
        cVar7 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar13) {
          *(int *)plVar6 = iVar9;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*plVar12 + 0x10))();
      }
      else if ((int)lVar11 == 0) goto LAB_00eaa950;
    }
    FUN_00ebbcc0(*puVar3,&local_68,param_3 & 1);
  }
  if (((*(char *)(*(long *)(param_1 + 0x90) + 0x330) != '\0') && (*(long *)(param_1 + 0x110) != 0))
     && (plVar12 = *(long **)(*(long *)(param_1 + 0x110) + 0x70), plVar12 != (long *)0x0)) {
    plVar6 = plVar12 + 5;
    do {
      lVar11 = *plVar6;
      cVar7 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar13) {
        *(int *)plVar6 = (int)lVar11 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if ((int)lVar11 == -1) {
LAB_00eaa928:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    iVar9 = FUN_00ed5b28(*puVar3);
    if (iVar9 != 0) {
      uVar17 = 0;
      do {
        FUN_00ed64e8(&local_70,*puVar3,uVar17);
        (**(code **)(*(long *)(local_70[7] + 0x30) + 0xc0))
                  ((long *)(local_70[7] + 0x30),plVar12 + 0x73);
        if (local_70 != (long *)0x0) {
          plVar4 = local_70 + 5;
          do {
            lVar11 = *plVar4;
            iVar9 = (int)lVar11 + -1;
            cVar7 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar13) {
              *(int *)plVar4 = iVar9;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar9 == 0) {
            (**(code **)(*local_70 + 0x10))();
          }
          else if ((int)lVar11 == 0) goto LAB_00eaa950;
        }
        uVar17 = uVar17 + 1;
        uVar10 = FUN_00ed5b28(*puVar3);
      } while (uVar17 < uVar10);
    }
    do {
      lVar11 = *plVar6;
      iVar9 = (int)lVar11 + -1;
      cVar7 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar13) {
        *(int *)plVar6 = iVar9;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    else if ((int)lVar11 == 0) {
LAB_00eaa950:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  lVar11 = nn::os::GetCurrentThread();
  do {
    lVar15 = *plVar1;
    lVar14 = *(long *)(param_1 + 0x178);
    cVar7 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar13) {
      *plVar1 = lVar15;
      *(long *)(param_1 + 0x178) = lVar14;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  do {
    while ((lVar15 != 0 && (lVar11 != lVar15))) {
      nn::os::WaitLightEvent(pLVar2);
      do {
        lVar15 = *plVar1;
        lVar14 = *(long *)(param_1 + 0x178);
        cVar7 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar13) {
          *plVar1 = lVar15;
          *(long *)(param_1 + 0x178) = lVar14;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    do {
      lVar18 = *plVar1;
      if (lVar18 != lVar15 || *(long *)(param_1 + 0x178) != lVar14) {
        bVar13 = false;
        ClearExclusiveLocal();
        goto LAB_00eaa134;
      }
      cVar7 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *plVar1 = lVar15;
        *(long *)(param_1 + 0x174) = lVar14 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    bVar13 = true;
LAB_00eaa134:
    lVar15 = lVar18;
    lVar14 = *(long *)(param_1 + 0x178);
  } while (!bVar13);
  piVar16 = *(int **)(param_1 + 0x120);
  piVar5 = *(int **)(param_1 + 0x128);
  if ((piVar16 != piVar5) &&
     (FUN_00eaa980(*(long *)(param_1 + 0xd0) + (long)*piVar16 * 8,puVar3,&local_68),
     piVar16 + 3 != piVar5)) {
    FUN_00eaa980(*(long *)(param_1 + 0xd0) + (long)piVar16[3] * 8,puVar3,&local_68);
    for (piVar16 = piVar16 + 6; piVar16 != piVar5; piVar16 = piVar16 + 3) {
      FUN_00eaa980(*(long *)(param_1 + 0xd0) + (long)*piVar16 * 8,puVar3,&local_68);
    }
  }
  do {
    lVar11 = *plVar1;
    lVar15 = *(long *)(param_1 + 0x178);
    cVar7 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar13) {
      *plVar1 = lVar11;
      *(long *)(param_1 + 0x178) = lVar15;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  do {
    lVar14 = *plVar1;
    lVar18 = *(long *)(param_1 + 0x178);
    if (lVar14 != lVar11 || lVar18 != lVar15) {
      bVar13 = false;
      ClearExclusiveLocal();
      goto LAB_00eaa1d0;
    }
    cVar7 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar13) {
      *plVar1 = lVar11;
      *(long *)(param_1 + 0x174) = lVar15 + -1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  bVar13 = true;
LAB_00eaa1d0:
  if (!bVar13) {
    do {
      lVar11 = *plVar1;
      lVar15 = *(long *)(param_1 + 0x178);
      if (lVar11 != lVar14 || lVar15 != lVar18) {
        bVar13 = false;
        ClearExclusiveLocal();
        goto joined_r0x00eaa5c4;
      }
      cVar7 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *plVar1 = lVar14;
        *(long *)(param_1 + 0x174) = lVar18 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    bVar13 = true;
joined_r0x00eaa5c4:
    if (!bVar13) {
      do {
        lVar14 = *plVar1;
        lVar18 = *(long *)(param_1 + 0x178);
        if (lVar14 != lVar11 || lVar18 != lVar15) {
          bVar13 = false;
          ClearExclusiveLocal();
          lVar11 = lVar14;
          lVar15 = lVar18;
          goto joined_r0x00eaa5c4;
        }
        cVar7 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar13) {
          *plVar1 = lVar11;
          *(long *)(param_1 + 0x174) = lVar15 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      bVar13 = true;
      lVar11 = lVar14;
      lVar15 = lVar18;
      goto joined_r0x00eaa5c4;
    }
  }
  nn::os::SignalLightEvent(pLVar2);
  if (local_68 != (long *)0x0) {
    (**(code **)(local_68[4] + 0x18))();
  }
  if (*(long *)(param_1 + 0x110) != 0) {
    lVar11 = *(long *)(param_1 + 0x118);
    if ((lVar11 != 0) && (*(long *)(lVar11 + 0x70) == 0)) {
      FUN_00edd288(lVar11,*(long *)(param_1 + 0x30) + 0x48);
      FUN_00edd50c(*(undefined8 *)(*(long *)(param_1 + 0x110) + 0x70),
                   *(long *)(param_1 + 0x118) + 0x70);
      if (*(long *)(param_1 + 0x110) == 0) goto LAB_00eaa1f8;
    }
    lVar11 = nn::os::GetCurrentThread();
    do {
      lVar15 = *plVar1;
      lVar14 = *(long *)(param_1 + 0x178);
      cVar7 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *plVar1 = lVar15;
        *(long *)(param_1 + 0x178) = lVar14;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    do {
      while ((lVar15 != 0 && (lVar11 != lVar15))) {
        nn::os::WaitLightEvent(pLVar2);
        do {
          lVar15 = *plVar1;
          lVar14 = *(long *)(param_1 + 0x178);
          cVar7 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar13) {
            *plVar1 = lVar15;
            *(long *)(param_1 + 0x178) = lVar14;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      do {
        lVar18 = *plVar1;
        if (lVar18 != lVar15 || *(long *)(param_1 + 0x178) != lVar14) {
          bVar13 = false;
          ClearExclusiveLocal();
          goto LAB_00eaa358;
        }
        cVar7 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar13) {
          *plVar1 = lVar15;
          *(long *)(param_1 + 0x174) = lVar14 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      bVar13 = true;
LAB_00eaa358:
      lVar15 = lVar18;
      lVar14 = *(long *)(param_1 + 0x178);
    } while (!bVar13);
    piVar5 = *(int **)(param_1 + 0x128);
    for (piVar16 = *(int **)(param_1 + 0x120); piVar16 != piVar5; piVar16 = piVar16 + 3) {
      lVar11 = *(long *)(*(long *)(param_1 + 0xd0) + (long)*piVar16 * 8);
      for (lVar15 = *(long *)(lVar11 + 0x70); lVar15 != lVar11 + 0x68;
          lVar15 = *(long *)(lVar15 + 8)) {
        FUN_00e0534c(*(undefined8 *)(lVar15 + 0x10),*(long *)(param_1 + 0x110) + 0x70);
      }
    }
    do {
      lVar11 = *plVar1;
      lVar15 = *(long *)(param_1 + 0x178);
      cVar7 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *plVar1 = lVar11;
        *(long *)(param_1 + 0x178) = lVar15;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    do {
      lVar14 = *plVar1;
      lVar18 = *(long *)(param_1 + 0x178);
      if (lVar14 != lVar11 || lVar18 != lVar15) {
        bVar13 = false;
        ClearExclusiveLocal();
        goto LAB_00eaa4d0;
      }
      cVar7 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *plVar1 = lVar11;
        *(long *)(param_1 + 0x174) = lVar15 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    bVar13 = true;
LAB_00eaa4d0:
    if (!bVar13) {
      do {
        lVar11 = *plVar1;
        lVar15 = *(long *)(param_1 + 0x178);
        if (lVar11 != lVar14 || lVar15 != lVar18) {
          bVar13 = false;
          ClearExclusiveLocal();
          goto joined_r0x00eaa75c;
        }
        cVar7 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar13) {
          *plVar1 = lVar14;
          *(long *)(param_1 + 0x174) = lVar18 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      bVar13 = true;
joined_r0x00eaa75c:
      if (!bVar13) {
        do {
          lVar14 = *plVar1;
          lVar18 = *(long *)(param_1 + 0x178);
          if (lVar14 != lVar11 || lVar18 != lVar15) {
            bVar13 = false;
            ClearExclusiveLocal();
            lVar11 = lVar14;
            lVar15 = lVar18;
            goto joined_r0x00eaa75c;
          }
          cVar7 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar13) {
            *plVar1 = lVar11;
            *(long *)(param_1 + 0x174) = lVar15 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        bVar13 = true;
        lVar11 = lVar14;
        lVar15 = lVar18;
        goto joined_r0x00eaa75c;
      }
    }
    nn::os::SignalLightEvent(pLVar2);
  }
LAB_00eaa1f8:
  lVar11 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_1 + 0x178) == 0) {
    cVar7 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar13) {
      *plVar1 = lVar11;
      *(undefined8 *)(param_1 + 0x178) = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') goto LAB_00eaa214;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent(pLVar2);
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0x178) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar2);
        while (*plVar1 == 0 && *(long *)(param_1 + 0x178) == 0) {
          cVar7 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar13) {
            *plVar1 = lVar11;
            *(undefined8 *)(param_1 + 0x178) = 0;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_00eaa214;
        }
      } while( true );
    }
    cVar7 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar13) {
      *plVar1 = lVar11;
      *(undefined8 *)(param_1 + 0x178) = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_00eaa214:
  puVar8 = PTR_DAT_047d8b70;
  lVar11 = *(long *)(param_1 + 200);
  if (lVar11 != 0) {
    local_78 = *(int **)(param_1 + 0x120);
    piVar16 = *(int **)(param_1 + 0x128);
    if (local_78 != piVar16) {
      do {
        plVar12 = *(long **)(lVar11 + 0xb8);
        if (plVar12 != (long *)0x0) {
          iVar9 = *local_78;
          lVar11 = *(long *)(param_1 + 0xd0);
          do {
            lVar14 = *(long *)(lVar11 + (long)iVar9 * 8);
            lVar15 = lVar14 + 0x68;
            for (lVar14 = *(long *)(lVar14 + 0x70); lVar15 != lVar14; lVar14 = *(long *)(lVar14 + 8)
                ) {
              FUN_00daf8b8(&local_68,*(long *)(lVar14 + 0x10) + 0x30,iVar9);
              plVar6 = (long *)puVar8;
              if (local_68 != (long *)0x0) {
                plVar6 = local_68 + 6;
              }
              lVar19 = *plVar6;
              lVar18 = plVar12[2];
              if (local_68 != (long *)0x0) {
                (**(code **)(*local_68 + 0x20))();
              }
              if (lVar19 == lVar18) {
                if (lVar15 != lVar14) {
                  *(char *)(*(long *)(lVar14 + 0x10) + 0x240) = (char)plVar12[6];
                }
                break;
              }
            }
            plVar12 = (long *)*plVar12;
          } while (plVar12 != (long *)0x0);
        }
        local_78 = local_78 + 3;
        if (local_78 == piVar16) break;
        lVar11 = *(long *)(param_1 + 200);
      } while( true );
    }
  }
  piVar16 = (int *)(param_1 + 0x1a8);
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_1 + 0x120);
  do {
    iVar9 = *piVar16;
    cVar7 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(piVar16,0x10);
    if (bVar13) {
      *piVar16 = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (iVar9 == 2) {
    plVar6 = *(long **)(param_1 + 0xd8);
    for (plVar12 = *(long **)(param_1 + 0xd0); plVar12 != plVar6; plVar12 = plVar12 + 1) {
      lVar11 = *plVar12;
      for (lVar15 = *(long *)(lVar11 + 0x70); lVar15 != lVar11 + 0x68;
          lVar15 = *(long *)(lVar15 + 8)) {
        FUN_00e12ca8(*(undefined8 *)(lVar15 + 0x10),0);
      }
    }
  }
  else if (iVar9 == 1) {
    plVar6 = *(long **)(param_1 + 0xd8);
    for (plVar12 = *(long **)(param_1 + 0xd0); plVar12 != plVar6; plVar12 = plVar12 + 1) {
      lVar11 = *plVar12;
      for (lVar15 = *(long *)(lVar11 + 0x70); lVar15 != lVar11 + 0x68;
          lVar15 = *(long *)(lVar15 + 8)) {
        FUN_00e12ca8(*(undefined8 *)(lVar15 + 0x10),1);
      }
    }
  }
  do {
    lVar11 = *plVar1;
    lVar15 = *(long *)(param_1 + 0x178);
    cVar7 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar13) {
      *plVar1 = lVar11;
      *(long *)(param_1 + 0x178) = lVar15;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  do {
    lVar14 = *plVar1;
    lVar18 = *(long *)(param_1 + 0x178);
    if (lVar14 != lVar11 || lVar18 != lVar15) {
      bVar13 = false;
      ClearExclusiveLocal();
      goto LAB_00eaa2c8;
    }
    cVar7 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar13) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x174) = lVar15;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  bVar13 = true;
LAB_00eaa2c8:
  if (!bVar13) {
    do {
      lVar11 = *plVar1;
      lVar15 = *(long *)(param_1 + 0x178);
      if (lVar11 != lVar14 || lVar15 != lVar18) {
        bVar13 = false;
        ClearExclusiveLocal();
        goto joined_r0x00eaa8b8;
      }
      cVar7 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x174) = lVar18;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    bVar13 = true;
joined_r0x00eaa8b8:
    if (!bVar13) {
      do {
        lVar14 = *plVar1;
        lVar18 = *(long *)(param_1 + 0x178);
        if (lVar14 != lVar11 || lVar18 != lVar15) {
          bVar13 = false;
          ClearExclusiveLocal();
          lVar11 = lVar14;
          lVar15 = lVar18;
          goto joined_r0x00eaa8b8;
        }
        cVar7 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar13) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x174) = lVar15;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      bVar13 = true;
      lVar11 = lVar14;
      lVar15 = lVar18;
      goto joined_r0x00eaa8b8;
    }
  }
  nn::os::SignalLightEvent(pLVar2);
  *(undefined8 *)(param_1 + 400) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x198));
  return;
}


