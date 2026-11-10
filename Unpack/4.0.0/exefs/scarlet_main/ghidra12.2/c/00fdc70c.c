/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fdc70c; name: FUN_00fdc70c
 */


void FUN_00fdc70c(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  long local_58;
  
  *param_1 = &DAT_045d1928;
  param_1[4] = &PTR_LAB_045d1960;
  lVar10 = *(long *)(param_1[6] + 0x38);
  local_58 = lVar10;
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x20) + 0x10))();
  }
  plVar7 = (long *)param_1[0x1a];
  plVar11 = (long *)param_1[0x1b];
  if (plVar7 != plVar11) {
    do {
      plVar6 = (long *)*plVar7;
      if (plVar6 != (long *)0x0) {
        plVar1 = plVar6 + 5;
        do {
          lVar10 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = (int)lVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((int)lVar10 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
        lVar10 = plVar6[0xf];
        do {
          lVar12 = *plVar1;
          iVar5 = (int)lVar12 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
        else if ((int)lVar12 == 0) goto LAB_00fdcb70;
        if (lVar10 != 0) {
          lVar10 = *plVar7;
          for (lVar12 = *(long *)(lVar10 + 0x70); lVar12 != lVar10 + 0x68;
              lVar12 = *(long *)(lVar12 + 8)) {
            puVar13 = *(undefined8 **)(*(long *)(lVar12 + 0x10) + 0x50);
            puVar2 = *(undefined8 **)(*(long *)(lVar12 + 0x10) + 0x58);
            if ((puVar13 != puVar2) && (FUN_00fdcbd0(*puVar13,&local_58), puVar13 + 1 != puVar2)) {
              FUN_00fdcbd0(puVar13[1],&local_58);
              for (puVar13 = puVar13 + 2; puVar13 != puVar2; puVar13 = puVar13 + 1) {
                FUN_00fdcbd0(*puVar13,&local_58);
              }
            }
          }
        }
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar11);
    lVar10 = local_58;
  }
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x20) + 0x18))((long *)(lVar10 + 0x20));
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x33));
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x30));
  plVar7 = (long *)param_1[0x2d];
  if (plVar7 != (long *)0x0) {
    plVar11 = plVar7 + 5;
    do {
      lVar10 = *plVar11;
      iVar5 = (int)lVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *(int *)plVar11 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar10 == 0) goto LAB_00fdcb70;
  }
  plVar7 = (long *)param_1[0x2c];
  if (plVar7 != (long *)0x0) {
    plVar11 = plVar7 + 5;
    do {
      lVar10 = *plVar11;
      iVar5 = (int)lVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *(int *)plVar11 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar10 == 0) goto LAB_00fdcb70;
  }
  lVar10 = param_1[0x24];
  if (lVar10 != 0) {
    lVar12 = param_1[0x26];
    plVar7 = (long *)param_1[0x27];
    param_1[0x25] = lVar10;
    uVar8 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar8 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar10,lVar12 - lVar10,4);
    }
    else {
      FUN_00c48fe8(plVar7,lVar10,lVar12 - lVar10,4);
    }
  }
  plVar7 = (long *)param_1[0x23];
  if (plVar7 != (long *)0x0) {
    plVar11 = plVar7 + 5;
    do {
      lVar10 = *plVar11;
      iVar5 = (int)lVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *(int *)plVar11 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar10 == 0) goto LAB_00fdcb70;
  }
  plVar7 = (long *)param_1[0x22];
  if (plVar7 != (long *)0x0) {
    plVar11 = plVar7 + 5;
    do {
      lVar10 = *plVar11;
      iVar5 = (int)lVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *(int *)plVar11 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar10 == 0) goto LAB_00fdcb70;
  }
  plVar7 = (long *)param_1[0x21];
  if (plVar7 != (long *)0x0) {
    plVar11 = plVar7 + 5;
    do {
      lVar10 = *plVar11;
      iVar5 = (int)lVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *(int *)plVar11 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar10 == 0) goto LAB_00fdcb70;
  }
  plVar7 = (long *)param_1[0x1a];
  if (plVar7 != (long *)0x0) {
    plVar11 = (long *)param_1[0x1b];
    if (plVar11 == plVar7) {
      plVar11 = plVar7;
    }
    else {
      do {
        plVar11 = plVar11 + -1;
        plVar6 = (long *)*plVar11;
        if (plVar6 != (long *)0x0) {
          plVar1 = plVar6 + 5;
          do {
            lVar10 = *plVar1;
            iVar5 = (int)lVar10 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *(int *)plVar1 = iVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 == 0) {
            (**(code **)(*plVar6 + 0x10))();
          }
          else if ((int)lVar10 == 0) goto LAB_00fdcb70;
        }
      } while (plVar11 != plVar7);
      plVar11 = (long *)param_1[0x1a];
    }
    lVar10 = param_1[0x1c];
    plVar6 = (long *)param_1[0x1d];
    param_1[0x1b] = plVar7;
    uVar8 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar8 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,plVar11,lVar10 - (long)plVar11,8);
    }
    else {
      FUN_00c48fe8(plVar6,plVar11,lVar10 - (long)plVar11,8);
    }
  }
  plVar7 = (long *)param_1[0x19];
  if (plVar7 != (long *)0x0) {
    plVar11 = plVar7 + 5;
    do {
      lVar10 = *plVar11;
      iVar5 = (int)lVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *(int *)plVar11 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar10 == 0) goto LAB_00fdcb70;
  }
  FUN_00fdcd28(param_1 + 0x11);
  if ((long *)param_1[0x10] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x10] + 0x20))();
  }
  if ((long *)param_1[0xb] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xb] + 0x20))();
  }
  if ((long *)param_1[7] != (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 0x20))();
  }
  plVar7 = (long *)param_1[6];
  if (plVar7 != (long *)0x0) {
    plVar11 = plVar7 + 5;
    do {
      lVar10 = *plVar11;
      iVar5 = (int)lVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *(int *)plVar11 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar10 == 0) {
LAB_00fdcb70:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


