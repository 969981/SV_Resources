/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a42670; name: FUN_00a42670
 */


void FUN_00a42670(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined4 uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  char *pcVar10;
  int *piVar11;
  long *plVar12;
  long *plVar13;
  int iVar14;
  long *local_58;
  undefined1 local_50 [20];
  int local_3c [3];
  
  if (DAT_048364b8 != 0) {
    plVar12 = (long *)**(undefined8 **)(DAT_048364b8 + 0x58);
    if (plVar12 != (long *)0x0) {
      plVar13 = plVar12 + 5;
      do {
        lVar5 = *plVar13;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *(int *)plVar13 = (int)lVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar5 == -1) goto LAB_00a42a70;
    }
    plVar13 = (long *)plVar12[0xb];
    if (plVar13 != (long *)0x0) {
      plVar9 = plVar13 + 5;
      do {
        lVar5 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *(int *)plVar9 = (int)lVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar5 == -1) {
LAB_00a42a70:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    local_58 = (long *)0x0;
    local_50[0] = 0;
    FUN_00d8219c(plVar13,0,&local_58,0xffffffff,local_50);
    if (local_58 != (long *)0x0) {
      plVar9 = local_58 + 5;
      do {
        lVar5 = *plVar9;
        iVar14 = (int)lVar5 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *(int *)plVar9 = iVar14;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar14 == 0) {
        (**(code **)(*local_58 + 0x10))();
      }
      else if ((int)lVar5 == 0) goto LAB_00a42a4c;
    }
    uVar7 = (**(code **)(*DAT_0485a020 + 0x80))(DAT_0485a020,0);
    uVar6 = (**(code **)(*DAT_0485a020 + 0x78))();
    FUN_01343f00(plVar12,uVar7 >> 0x20,uVar6);
    local_58 = (long *)0x0;
    plVar9 = plVar13 + 0x22;
    iVar14 = (int)(uVar7 >> 0x20);
    local_3c[1] = 2;
    local_50[0] = 0;
    piVar11 = (int *)plVar13[0x22];
    local_3c[0] = iVar14;
    if (piVar11 != (int *)plVar13[0x23]) {
LAB_00a4277c:
      if ((*piVar11 != 2) || (piVar11[1] != iVar14)) goto LAB_00a42794;
      plVar8 = *(long **)(piVar11 + 2);
      piVar11[2] = 0;
      piVar11[3] = 0;
      if (plVar8 != (long *)0x0) {
        plVar1 = plVar8 + 5;
        do {
          lVar5 = *plVar1;
          iVar4 = (int)lVar5 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*plVar8 + 0x10))();
          goto LAB_00a427e4;
        }
        if ((int)lVar5 != 0) goto LAB_00a427e4;
        goto LAB_00a42a98;
      }
      goto LAB_00a427e4;
    }
LAB_00a427a0:
    FUN_00d11148(plVar9,local_3c + 1,local_3c,&local_58,local_50);
LAB_00a427e4:
    if (local_58 != (long *)0x0) {
      plVar8 = local_58 + 5;
      do {
        lVar5 = *plVar8;
        iVar4 = (int)lVar5 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *(int *)plVar8 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*local_58 + 0x10))();
      }
      else if ((int)lVar5 == 0) goto LAB_00a42a4c;
    }
    local_3c[0] = iVar14 + 1;
    local_58 = (long *)0x0;
    local_3c[1] = 2;
    local_50[0] = 0;
    piVar11 = (int *)plVar13[0x22];
    if (piVar11 != (int *)plVar13[0x23]) {
LAB_00a42828:
      if ((*piVar11 != 2) || (piVar11[1] != local_3c[0])) goto LAB_00a42840;
      plVar8 = *(long **)(piVar11 + 2);
      piVar11[2] = 0;
      piVar11[3] = 0;
      if (plVar8 != (long *)0x0) {
        plVar1 = plVar8 + 5;
        do {
          lVar5 = *plVar1;
          iVar4 = (int)lVar5 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*plVar8 + 0x10))();
          goto LAB_00a42890;
        }
        if ((int)lVar5 != 0) goto LAB_00a42890;
        goto LAB_00a42a98;
      }
      goto LAB_00a42890;
    }
LAB_00a4284c:
    FUN_00d11148(plVar9,local_3c + 1,local_3c,&local_58,local_50);
LAB_00a42890:
    if (local_58 != (long *)0x0) {
      plVar8 = local_58 + 5;
      do {
        lVar5 = *plVar8;
        iVar4 = (int)lVar5 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *(int *)plVar8 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*local_58 + 0x10))();
      }
      else if ((int)lVar5 == 0) goto LAB_00a42a4c;
    }
    local_3c[0] = iVar14 + 2;
    local_58 = (long *)0x0;
    local_3c[1] = 2;
    local_50[0] = 0;
    piVar11 = (int *)plVar13[0x22];
    if (piVar11 != (int *)plVar13[0x23]) {
LAB_00a428d4:
      if ((*piVar11 != 2) || (piVar11[1] != local_3c[0])) goto LAB_00a428ec;
      plVar9 = *(long **)(piVar11 + 2);
      piVar11[2] = 0;
      piVar11[3] = 0;
      if (plVar9 != (long *)0x0) {
        plVar8 = plVar9 + 5;
        do {
          lVar5 = *plVar8;
          iVar14 = (int)lVar5 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *(int *)plVar8 = iVar14;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar14 == 0) {
          (**(code **)(*plVar9 + 0x10))();
        }
        else if ((int)lVar5 == 0) {
LAB_00a42a98:
          local_3c[1] = 2;
          local_50[0] = 0;
          local_58 = (long *)0x0;
          pcVar10 = 
          "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
          ;
          goto LAB_00a42ab8;
        }
      }
      goto LAB_00a4293c;
    }
LAB_00a428f8:
    FUN_00d11148(plVar9,local_3c + 1,local_3c,&local_58,local_50);
LAB_00a4293c:
    if (local_58 != (long *)0x0) {
      plVar9 = local_58 + 5;
      do {
        lVar5 = *plVar9;
        iVar14 = (int)lVar5 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *(int *)plVar9 = iVar14;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar14 == 0) {
        (**(code **)(*local_58 + 0x10))();
      }
      else if ((int)lVar5 == 0) goto LAB_00a42a4c;
    }
    *(undefined1 *)(plVar12 + 0x51) = 0;
    if (plVar13 != (long *)0x0) {
      plVar9 = plVar13 + 5;
      do {
        lVar5 = *plVar9;
        iVar14 = (int)lVar5 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *(int *)plVar9 = iVar14;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar14 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
      else if ((int)lVar5 == 0) goto LAB_00a42a4c;
    }
    plVar13 = plVar12 + 5;
    do {
      lVar5 = *plVar13;
      iVar14 = (int)lVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *(int *)plVar13 = iVar14;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    else if ((int)lVar5 == 0) {
LAB_00a42a4c:
      pcVar10 = 
      "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
      ;
LAB_00a42ab8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 pcVar10,0x58,"Reference counter underflows.");
    }
  }
  return;
LAB_00a42794:
  piVar11 = piVar11 + 8;
  if ((int *)plVar13[0x23] == piVar11) goto LAB_00a427a0;
  goto LAB_00a4277c;
LAB_00a42840:
  piVar11 = piVar11 + 8;
  if ((int *)plVar13[0x23] == piVar11) goto LAB_00a4284c;
  goto LAB_00a42828;
LAB_00a428ec:
  piVar11 = piVar11 + 8;
  if ((int *)plVar13[0x23] == piVar11) goto LAB_00a428f8;
  goto LAB_00a428d4;
}


