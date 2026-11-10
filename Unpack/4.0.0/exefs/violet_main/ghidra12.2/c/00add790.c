/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00add790; name: FUN_00add790
 */


void FUN_00add790(ulong *param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong uVar17;
  
LAB_00add7b8:
  puVar11 = param_2 + -2;
  puVar8 = param_1;
LAB_00add7c0:
  param_1 = puVar8;
  lVar9 = (long)param_2 - (long)param_1;
  uVar7 = lVar9 >> 4;
  switch(uVar7) {
  case 0:
  case 1:
    goto switchD_00addb90_caseD_0;
  case 2:
    uVar7 = *param_1;
    if (param_2[-2] <= uVar7) {
      return;
    }
    uVar17 = param_1[1];
    param_1[1] = 0;
    *param_1 = param_2[-2];
    param_1[1] = 0;
    uVar10 = param_2[-1];
    param_2[-1] = 0;
    param_1[1] = uVar10;
    plVar6 = (long *)param_2[-1];
    param_2[-2] = uVar7;
    param_2[-1] = 0;
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 5;
      do {
        lVar9 = *plVar1;
        iVar5 = (int)lVar9 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 != 0) {
        if ((int)lVar9 != 0) goto LAB_00addbe8;
        goto LAB_00adddb0;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
LAB_00addbe8:
    param_2[-1] = uVar17;
    return;
  case 3:
    FUN_00addde0(param_1,param_1 + 2,puVar11);
    return;
  case 4:
    FUN_00ade040(param_1,param_1 + 2,param_1 + 4,puVar11);
    return;
  case 5:
    FUN_00ade200(param_1,param_1 + 2,param_1 + 4,param_1 + 6,puVar11);
    return;
  default:
    if (0x6f < lVar9) {
      uVar10 = uVar7;
      if ((long)uVar7 < 0) {
        uVar10 = uVar7 + 1;
      }
      puVar8 = param_1 + (uVar10 & 0x1ffffffffffffffe);
      if (lVar9 < 0x3e71) {
        iVar5 = FUN_00addde0(param_1,puVar8,puVar11);
      }
      else {
        uVar10 = uVar7 + 3;
        if (-1 < (long)uVar7) {
          uVar10 = uVar7;
        }
        lVar9 = (uVar10 & 0x3ffffffffffffffc) * 4;
        iVar5 = FUN_00ade200(param_1,(long)param_1 + lVar9,puVar8,(long)puVar8 + lVar9,puVar11);
      }
      uVar7 = *param_1;
      if (uVar7 <= *puVar8) break;
      puVar12 = puVar11;
      goto LAB_00add8c4;
    }
    FUN_00addde0(param_1,param_1 + 2,param_1 + 4);
    puVar8 = param_1 + 6;
    puVar11 = param_1 + 4;
    if (param_1 + 6 == param_2) {
      return;
    }
    goto LAB_00addc10;
  }
  puVar12 = param_2;
  while (puVar14 = puVar12, param_1 + 4 != puVar14) {
    puVar12 = puVar14 + -2;
    if (*puVar8 < puVar14[-4]) goto code_r0x00add874;
  }
  puVar12 = param_1 + 2;
  if (uVar7 <= *puVar11) {
    if (puVar12 == puVar11) {
      return;
    }
    puVar12 = param_1 + 4;
    while (uVar10 = puVar12[-2], uVar7 <= uVar10) {
      puVar12 = puVar12 + 2;
      if (param_2 == puVar12) {
        return;
      }
    }
    uVar17 = puVar12[-1];
    puVar12[-1] = 0;
    puVar12[-2] = param_2[-2];
    puVar12[-1] = 0;
    uVar7 = param_2[-1];
    param_2[-1] = 0;
    puVar12[-1] = uVar7;
    plVar6 = (long *)param_2[-1];
    param_2[-2] = uVar10;
    param_2[-1] = 0;
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 5;
      do {
        lVar9 = *plVar1;
        iVar5 = (int)lVar9 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
      else if ((int)lVar9 == 0) goto LAB_00adddb0;
    }
    param_2[-1] = uVar17;
  }
  if (puVar12 == puVar11) {
    return;
  }
  puVar14 = puVar11;
  while( true ) {
    do {
      puVar8 = puVar12;
      puVar12 = puVar8 + 2;
      uVar7 = *puVar8;
    } while (*param_1 <= uVar7);
    do {
      puVar13 = puVar14;
      puVar14 = puVar13 + -2;
    } while (*puVar14 < *param_1);
    if (puVar14 <= puVar8) break;
    uVar17 = puVar8[1];
    puVar8[1] = 0;
    *puVar8 = *puVar14;
    puVar8[1] = 0;
    uVar10 = puVar13[-1];
    puVar13[-1] = 0;
    puVar8[1] = uVar10;
    plVar6 = (long *)puVar13[-1];
    *puVar14 = uVar7;
    puVar13[-1] = 0;
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 5;
      do {
        lVar9 = *plVar1;
        iVar5 = (int)lVar9 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
      else if ((int)lVar9 == 0) goto LAB_00adddb0;
    }
    puVar13[-1] = uVar17;
  }
  goto LAB_00add7c0;
code_r0x00add874:
  uVar17 = param_1[1];
  param_1[1] = 0;
  puVar12 = puVar14 + -4;
  *param_1 = *puVar12;
  param_1[1] = 0;
  uVar10 = puVar14[-3];
  puVar14[-3] = 0;
  param_1[1] = uVar10;
  plVar6 = (long *)puVar14[-3];
  *puVar12 = uVar7;
  puVar14[-3] = 0;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 5;
    do {
      lVar9 = *plVar1;
      iVar4 = (int)lVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
    else if ((int)lVar9 == 0) goto LAB_00adddb0;
  }
  iVar5 = iVar5 + 1;
  puVar14[-3] = uVar17;
LAB_00add8c4:
  puVar14 = param_1 + 2;
  puVar13 = puVar14;
  if (puVar14 < puVar12) {
    while( true ) {
      puVar14 = puVar13 + -2;
      do {
        puVar16 = puVar14;
        puVar14 = puVar16 + 2;
        uVar7 = *puVar14;
      } while (*puVar8 < uVar7);
      puVar13 = puVar16 + 4;
      do {
        puVar15 = puVar12;
        puVar12 = puVar15 + -2;
      } while (*puVar12 <= *puVar8);
      if (puVar12 < puVar14) break;
      uVar17 = puVar16[3];
      puVar16[3] = 0;
      *puVar14 = *puVar12;
      puVar16[3] = 0;
      uVar10 = puVar15[-1];
      puVar15[-1] = 0;
      puVar16[3] = uVar10;
      plVar6 = (long *)puVar15[-1];
      *puVar12 = uVar7;
      puVar15[-1] = 0;
      if (plVar6 != (long *)0x0) {
        plVar1 = plVar6 + 5;
        do {
          lVar9 = *plVar1;
          iVar4 = (int)lVar9 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
        else if ((int)lVar9 == 0) goto LAB_00adddb0;
      }
      puVar15[-1] = uVar17;
      iVar5 = iVar5 + 1;
      puVar16 = puVar12;
      if (puVar8 != puVar14) {
        puVar16 = puVar8;
      }
      puVar8 = puVar16;
    }
  }
  if ((puVar14 != puVar8) && (uVar7 = *puVar14, uVar7 < *puVar8)) {
    uVar17 = puVar14[1];
    puVar14[1] = 0;
    *puVar14 = *puVar8;
    puVar14[1] = 0;
    uVar10 = puVar8[1];
    puVar8[1] = 0;
    puVar14[1] = uVar10;
    plVar6 = (long *)puVar8[1];
    *puVar8 = uVar7;
    puVar8[1] = 0;
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 5;
      do {
        lVar9 = *plVar1;
        iVar4 = (int)lVar9 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
      else if ((int)lVar9 == 0) goto LAB_00adddb0;
    }
    iVar5 = iVar5 + 1;
    puVar8[1] = uVar17;
  }
  if (iVar5 == 0) {
    uVar7 = FUN_00ade440(param_1,puVar14);
    uVar10 = FUN_00ade440(puVar14 + 2,param_2);
    if ((uVar10 & 1) != 0) goto LAB_00addb70;
    puVar8 = puVar14 + 2;
    if ((uVar7 & 1) != 0) goto LAB_00add7c0;
  }
  if ((long)param_2 - (long)puVar14 <= (long)puVar14 - (long)param_1) {
    FUN_00add790(puVar14 + 2,param_2);
    param_2 = puVar14;
    goto LAB_00add7b8;
  }
  FUN_00add790(param_1,puVar14);
  puVar8 = puVar14 + 2;
  goto LAB_00add7c0;
LAB_00addb70:
  param_2 = puVar14;
  if ((uVar7 & 1) != 0) {
    return;
  }
  goto LAB_00add7b8;
LAB_00addc10:
  puVar12 = puVar8;
  uVar7 = *puVar12;
  if (*puVar11 < uVar7) {
    uVar17 = puVar12[1];
    puVar12[1] = 0;
    plVar6 = (long *)0x0;
    uVar10 = *puVar11;
    puVar8 = puVar12;
    while( true ) {
      puVar14 = puVar11;
      *puVar8 = uVar10;
      puVar8[1] = 0;
      if (plVar6 != (long *)0x0) {
        plVar1 = plVar6 + 5;
        do {
          lVar9 = *plVar1;
          iVar5 = (int)lVar9 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
        else if ((int)lVar9 == 0) goto LAB_00adddb0;
      }
      uVar10 = puVar14[1];
      puVar14[1] = 0;
      puVar8[1] = uVar10;
      if (puVar14 == param_1) {
        puVar8 = param_1;
        goto LAB_00addcac;
      }
      uVar10 = puVar14[-2];
      if (uVar7 <= uVar10) break;
      plVar6 = (long *)puVar14[1];
      puVar11 = puVar14 + -2;
      puVar8 = puVar14;
    }
    puVar8 = puVar14;
LAB_00addcac:
    *puVar8 = uVar7;
    plVar6 = (long *)puVar14[1];
    puVar14[1] = 0;
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 5;
      do {
        lVar9 = *plVar1;
        iVar5 = (int)lVar9 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
      else if ((int)lVar9 == 0) {
LAB_00adddb0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    puVar14[1] = uVar17;
  }
  puVar8 = puVar12 + 2;
  puVar11 = puVar12;
  if (puVar12 + 2 == param_2) {
switchD_00addb90_caseD_0:
    return;
  }
  goto LAB_00addc10;
}


