/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0331deb8; name: FUN_0331deb8
 */


void FUN_0331deb8(undefined8 *param_1,ulong *param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  long *plVar6;
  double dVar7;
  undefined8 uVar8;
  byte *pbVar9;
  ulong *puVar10;
  int iVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  ulong *puVar15;
  ulong uVar16;
  ulong *puVar17;
  long *plVar18;
  double local_78;
  ulong local_70;
  ulong local_68;
  undefined4 local_38 [2];
  
  uVar12 = *param_2;
  puVar15 = param_2;
  if ((uVar12 & 1) == 0) {
    do {
      puVar15 = (ulong *)puVar15[1];
    } while ((*puVar15 & 1) == 0);
  }
  switch((uint)puVar15[2] & 0x1f) {
  case 0:
  case 1:
    goto switchD_0331df18_caseD_0;
  case 2:
    pbVar9 = (byte *)param_3[1];
    uVar12 = param_3[2];
    if ((uVar12 & 1) != 0) {
      piVar1 = (int *)((uVar12 & 0xfffffffffffffffe) + 8);
      do {
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pbVar13 = pbVar9;
    if ((*pbVar9 & 1) == 0) {
      do {
        pbVar13 = *(byte **)(pbVar13 + 8);
      } while ((*pbVar13 & 1) == 0);
    }
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    if ((uVar12 & 1) != 0) {
      plVar6 = (long *)(uVar12 & 0xfffffffffffffffe);
      plVar18 = plVar6 + 1;
      do {
        lVar14 = *plVar18;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar4) {
          *(int *)plVar18 = (int)lVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((plVar6 != (long *)0x0) && ((int)lVar14 == 1)) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    if (pbVar9 != (byte *)0x0 && (uVar16 & 0x1f) == 4) goto LAB_0331e3ec;
    puVar10 = (ulong *)param_3[1];
    uVar12 = *puVar10;
    puVar15 = puVar10;
    if ((uVar12 & 1) == 0) {
      puVar17 = puVar10;
      do {
        puVar17 = (ulong *)puVar17[1];
      } while ((*puVar17 & 1) == 0);
      if ((puVar10 == (ulong *)0x0) || ((puVar17[2] & 0x1f) != 2)) {
        if ((uVar12 & 1) != 0) goto LAB_0331e684;
        puVar17 = puVar10;
        do {
          puVar17 = (ulong *)puVar17[1];
        } while ((*puVar17 & 1) == 0);
        bVar4 = false;
        if ((puVar10 == (ulong *)0x0) || ((puVar17[2] & 0x1f) != 4)) goto LAB_0331e820;
        do {
          puVar15 = (ulong *)puVar15[1];
        } while ((*puVar15 & 1) == 0);
        goto LAB_0331e6a0;
      }
      if ((uVar12 & 1) == 0) {
        do {
          puVar15 = (ulong *)puVar15[1];
        } while ((*puVar15 & 1) == 0);
      }
LAB_0331e434:
      if ((puVar15[2] & 0x1f) == 2) {
        uVar8 = *param_3;
        uVar12 = param_3[2];
        if ((uVar12 & 1) != 0) {
          piVar1 = (int *)((uVar12 & 0xfffffffffffffffe) + 8);
          do {
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          uVar12 = param_3[2];
        }
      }
      else {
        uVar12 = 0;
        puVar10 = (ulong *)0x0;
        uVar8 = 0;
      }
      local_78 = (double)((ulong)local_78 & 0xffffffffffffff00);
      plVar18 = (long *)(uVar12 & 0xfffffffffffffffe);
      (**(code **)(*plVar18 + 0x38))(plVar18,uVar8,puVar10,&local_78);
      bVar4 = local_78._0_1_ != '\0';
      if ((uVar12 & 1) == 0) goto LAB_0331e820;
      plVar6 = plVar18 + 1;
      do {
        iVar11 = (int)*plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *(int *)plVar6 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    else {
      if ((puVar10 != (ulong *)0x0) && ((puVar10[2] & 0x1f) == 2)) goto LAB_0331e434;
LAB_0331e684:
      bVar4 = false;
      if ((puVar10 == (ulong *)0x0) || ((puVar10[2] & 0x1f) != 4)) goto LAB_0331e820;
LAB_0331e6a0:
      if ((puVar15[2] & 0x1f) == 4) {
        uVar8 = *param_3;
        uVar12 = param_3[2];
        if ((uVar12 & 1) != 0) {
          piVar1 = (int *)((uVar12 & 0xfffffffffffffffe) + 8);
          do {
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          uVar12 = param_3[2];
        }
      }
      else {
        uVar8 = 0;
        puVar10 = (ulong *)0x0;
        uVar12 = 0;
      }
      local_78 = 0.0;
      plVar18 = (long *)(uVar12 & 0xfffffffffffffffe);
      local_70 = local_70 & 0xffffffffffffff00;
      (**(code **)(*plVar18 + 0x38))(plVar18,uVar8,puVar10,&local_78);
      bVar4 = local_78 != 0.0;
      if ((uVar12 & 1) == 0) goto LAB_0331e820;
      plVar6 = plVar18 + 1;
      do {
        iVar11 = (int)*plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *(int *)plVar6 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if ((plVar18 != (long *)0x0) && (iVar11 == 1)) {
      (**(code **)(*plVar18 + 8))(plVar18);
    }
LAB_0331e820:
    FUN_0331ece0(*param_1,bVar4);
    return;
  case 3:
    pbVar9 = (byte *)param_3[1];
    if (pbVar9 == (byte *)0x0) {
LAB_0331e2ac:
      uVar12 = 0;
      uVar8 = 0;
    }
    else {
      pbVar13 = pbVar9;
      if ((*pbVar9 & 1) == 0) {
        do {
          pbVar13 = *(byte **)(pbVar13 + 8);
        } while ((*pbVar13 & 1) == 0);
      }
      if ((*(ulong *)(pbVar13 + 0x10) & 0x1f) != 3) {
        pbVar9 = (byte *)0x0;
        goto LAB_0331e2ac;
      }
      uVar8 = *param_3;
      uVar12 = param_3[2];
      if ((uVar12 & 1) != 0) {
        piVar1 = (int *)((uVar12 & 0xfffffffffffffffe) + 8);
        do {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar12 = param_3[2];
      }
    }
    local_78 = 0.0;
    plVar18 = (long *)(uVar12 & 0xfffffffffffffffe);
    (**(code **)(*plVar18 + 0x38))(plVar18,uVar8,pbVar9,&local_78);
    dVar7 = local_78;
    if ((uVar12 & 1) != 0) {
      plVar6 = plVar18 + 1;
      do {
        lVar14 = *plVar6;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *(int *)plVar6 = (int)lVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((plVar18 != (long *)0x0) && ((int)lVar14 == 1)) {
        (**(code **)(*plVar18 + 8))(plVar18);
      }
    }
    param_1 = (undefined8 *)*param_1;
    pbVar9 = (byte *)param_1[1];
    if (pbVar9 == (byte *)0x0) {
LAB_0331e370:
      uVar12 = 0;
      uVar8 = 0;
    }
    else {
      pbVar13 = pbVar9;
      if ((*pbVar9 & 1) == 0) {
        do {
          pbVar13 = *(byte **)(pbVar13 + 8);
        } while ((*pbVar13 & 1) == 0);
      }
      if ((*(ulong *)(pbVar13 + 0x10) & 0x1f) != 3) {
        pbVar9 = (byte *)0x0;
        goto LAB_0331e370;
      }
      uVar8 = *param_1;
      uVar12 = param_1[2];
      if ((uVar12 & 1) != 0) {
        piVar1 = (int *)((uVar12 & 0xfffffffffffffffe) + 8);
        do {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar12 = param_1[2];
      }
    }
    plVar6 = (long *)(uVar12 & 0xfffffffffffffffe);
    (**(code **)(*plVar6 + 0x30))(plVar6,uVar8,pbVar9,dVar7);
    if ((uVar12 & 1) == 0) {
      return;
    }
    plVar18 = plVar6 + 1;
    do {
      iVar11 = (int)*plVar18;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar4) {
        *(int *)plVar18 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  case 4:
    if ((uVar12 & 1) == 0) {
      puVar15 = param_2;
      do {
        puVar15 = (ulong *)puVar15[1];
      } while ((*puVar15 & 1) == 0);
      if ((int)puVar15[2] != 0x10004) {
        puVar15 = param_2;
        do {
          puVar15 = (ulong *)puVar15[1];
        } while ((*puVar15 & 1) == 0);
        if ((int)puVar15[2] != 0x10204) {
          if ((uVar12 & 1) == 0) {
            do {
              param_2 = (ulong *)param_2[1];
            } while ((*param_2 & 1) == 0);
          }
          goto LAB_0331e3b4;
        }
      }
    }
    else if (((int)param_2[2] != 0x10004) && ((int)param_2[2] != 0x10204)) {
LAB_0331e3b4:
      if ((int)param_2[2] == 0x8004) {
        uVar5 = FUN_032796a8(param_3);
        FUN_0331eaac(*param_1,uVar5);
        return;
      }
LAB_0331e3ec:
      uVar5 = FUN_0327462c(param_3);
      FUN_0331e864(*param_1,uVar5);
      return;
    }
    dVar7 = (double)FUN_032d0164(param_3);
    param_1 = (undefined8 *)*param_1;
    pbVar9 = (byte *)param_1[1];
    if (pbVar9 == (byte *)0x0) {
LAB_0331e4d8:
      uVar12 = 0;
      uVar8 = 0;
    }
    else {
      pbVar13 = pbVar9;
      if ((*pbVar9 & 1) == 0) {
        do {
          pbVar13 = *(byte **)(pbVar13 + 8);
        } while ((*pbVar13 & 1) == 0);
      }
      if ((*(ulong *)(pbVar13 + 0x10) & 0x1f) != 4) {
        pbVar9 = (byte *)0x0;
        goto LAB_0331e4d8;
      }
      uVar8 = *param_1;
      uVar12 = param_1[2];
      if ((uVar12 & 1) != 0) {
        piVar1 = (int *)((uVar12 & 0xfffffffffffffffe) + 8);
        do {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar12 = param_1[2];
      }
    }
    local_78 = (double)-(long)dVar7;
    if (-1 < (long)dVar7) {
      local_78 = dVar7;
    }
    local_70 = (ulong)dVar7 >> 0x3f;
    plVar6 = (long *)(uVar12 & 0xfffffffffffffffe);
    (**(code **)(*plVar6 + 0x30))(plVar6,uVar8,pbVar9,&local_78);
    if ((uVar12 & 1) == 0) {
      return;
    }
    plVar18 = plVar6 + 1;
    do {
      iVar11 = (int)*plVar18;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar4) {
        *(int *)plVar18 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  case 5:
    if ((uVar12 & 1) == 0) {
      do {
        param_2 = (ulong *)param_2[1];
      } while ((*param_2 & 1) == 0);
    }
    iVar11 = (int)param_2[2];
    if (iVar11 == 0x74605) {
      pbVar9 = (byte *)param_3[1];
      if (pbVar9 != (byte *)0x0) {
        pbVar13 = pbVar9;
        if ((*pbVar9 & 1) == 0) {
          do {
            pbVar13 = *(byte **)(pbVar13 + 8);
          } while ((*pbVar13 & 1) == 0);
        }
        if ((*(ulong *)(pbVar13 + 0x10) & 0x1f) == 5) {
          uVar8 = *param_3;
          uVar12 = param_3[2];
          if ((uVar12 & 1) != 0) {
            piVar1 = (int *)((uVar12 & 0xfffffffffffffffe) + 8);
            do {
              cVar2 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = *piVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            uVar12 = param_3[2];
          }
          goto LAB_0331e738;
        }
        pbVar9 = (byte *)0x0;
      }
      uVar12 = 0;
      uVar8 = 0;
LAB_0331e738:
      local_78 = 0.0;
      plVar18 = (long *)(uVar12 & 0xfffffffffffffffe);
      (**(code **)(*plVar18 + 0x38))(plVar18,uVar8,pbVar9,&local_78);
      dVar7 = local_78;
      if ((uVar12 & 1) != 0) {
        plVar6 = plVar18 + 1;
        do {
          lVar14 = *plVar6;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *(int *)plVar6 = (int)lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar18 != (long *)0x0) && ((int)lVar14 == 1)) {
          (**(code **)(*plVar18 + 8))(plVar18);
        }
      }
      FUN_0331ef0c(*param_1,(uint)((float)dVar7 * 1.0039062) >> 0x10);
      return;
    }
    if (iVar11 != 0x345e05 && iVar11 != 0x174605) {
      return;
    }
    pbVar9 = (byte *)param_3[1];
    if (pbVar9 == (byte *)0x0) {
LAB_0331e524:
      uVar12 = 0;
      uVar8 = 0;
    }
    else {
      pbVar13 = pbVar9;
      if ((*pbVar9 & 1) == 0) {
        do {
          pbVar13 = *(byte **)(pbVar13 + 8);
        } while ((*pbVar13 & 1) == 0);
      }
      if ((*(ulong *)(pbVar13 + 0x10) & 0x1f) != 5) {
        pbVar9 = (byte *)0x0;
        goto LAB_0331e524;
      }
      uVar8 = *param_3;
      uVar12 = param_3[2];
      if ((uVar12 & 1) != 0) {
        piVar1 = (int *)((uVar12 & 0xfffffffffffffffe) + 8);
        do {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar12 = param_3[2];
      }
    }
    local_78 = 0.0;
    plVar18 = (long *)(uVar12 & 0xfffffffffffffffe);
    (**(code **)(*plVar18 + 0x38))(plVar18,uVar8,pbVar9,&local_78);
    dVar7 = local_78;
    if ((uVar12 & 1) != 0) {
      plVar6 = plVar18 + 1;
      do {
        lVar14 = *plVar6;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *(int *)plVar6 = (int)lVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((plVar18 != (long *)0x0) && ((int)lVar14 == 1)) {
        (**(code **)(*plVar18 + 8))(plVar18);
      }
    }
    param_1 = (undefined8 *)*param_1;
    pbVar9 = (byte *)param_1[1];
    if (pbVar9 == (byte *)0x0) {
LAB_0331e5ec:
      uVar12 = 0;
      uVar8 = 0;
    }
    else {
      pbVar13 = pbVar9;
      if ((*pbVar9 & 1) == 0) {
        do {
          pbVar13 = *(byte **)(pbVar13 + 8);
        } while ((*pbVar13 & 1) == 0);
      }
      if ((*(ulong *)(pbVar13 + 0x10) & 0x1f) != 5) {
        pbVar9 = (byte *)0x0;
        goto LAB_0331e5ec;
      }
      uVar8 = *param_1;
      uVar12 = param_1[2];
      if ((uVar12 & 1) != 0) {
        piVar1 = (int *)((uVar12 & 0xfffffffffffffffe) + 8);
        do {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar12 = param_1[2];
      }
    }
    plVar6 = (long *)(uVar12 & 0xfffffffffffffffe);
    (**(code **)(*plVar6 + 0x30))((double)(float)dVar7,plVar6,uVar8,pbVar9);
    if ((uVar12 & 1) == 0) {
      return;
    }
    plVar18 = plVar6 + 1;
    do {
      iVar11 = (int)*plVar18;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar4) {
        *(int *)plVar18 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  case 6:
    FUN_033234d0(&local_78,param_3);
    FUN_03322aa8(*param_1,&local_78);
    if ((local_68 & 1) == 0) {
      return;
    }
    plVar6 = (long *)(local_68 & 0xfffffffffffffffe);
    plVar18 = plVar6 + 1;
    do {
      iVar11 = (int)*plVar18;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar4) {
        *(int *)plVar18 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    goto LAB_0331e128;
  case 7:
    FUN_033234d0(&local_78,param_3);
    FUN_03322aa8(*param_1,&local_78);
    if ((local_68 & 1) == 0) {
      return;
    }
    plVar6 = (long *)(local_68 & 0xfffffffffffffffe);
    plVar18 = plVar6 + 1;
    do {
      iVar11 = (int)*plVar18;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar4) {
        *(int *)plVar18 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_0331e128:
    if (plVar6 == (long *)0x0) {
      return;
    }
    if (iVar11 != 1) {
      return;
    }
    lVar14 = *plVar6;
    goto LAB_0331e638;
  case 8:
    local_38[0] = *(undefined4 *)(param_3 + 4);
    FUN_03323c3c(&local_78,*param_3,param_3[1],param_3[3],local_38,0);
    FUN_0331f144(*param_1,&local_78);
    return;
  default:
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0xfdbd9f9,"../..\\Common/Base/Reflect/Visitor/Detail/hkReflectVisitorDetail.h",0x1b
                 ,"Bad type visitor switch");
  }
  if ((plVar6 != (long *)0x0) && (iVar11 == 1)) {
    lVar14 = *plVar6;
LAB_0331e638:
    (**(code **)(lVar14 + 8))(plVar6);
  }
switchD_0331df18_caseD_0:
  return;
}


