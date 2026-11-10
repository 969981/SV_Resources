/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031e7848; name: FUN_031e7848
 */


undefined4 FUN_031e7848(long *param_1,ulong *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined4 uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  byte *pbVar9;
  int iVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  ulong *puVar13;
  byte *pbVar14;
  ulong *puVar15;
  uint uVar16;
  ulong *puVar17;
  undefined8 uVar18;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong local_70;
  ulong *local_68;
  ulong local_60;
  ulong local_58;
  ulong *local_50;
  ulong *local_48;
  
  pbVar9 = (byte *)param_2[1];
  pbVar11 = pbVar9;
  if ((*pbVar9 & 1) == 0) {
    do {
      pbVar11 = *(byte **)(pbVar11 + 8);
    } while ((*pbVar11 & 1) == 0);
  }
  uVar5 = 0x80040200;
  switch(*(uint *)(pbVar11 + 0x10) & 0x1f) {
  case 0:
  case 1:
    goto switchD_031e78ac_caseD_0;
  case 2:
    puVar12 = (undefined8 *)*param_1;
    pbVar11 = (byte *)puVar12[1];
    if (pbVar11 == (byte *)0x0) {
LAB_031e7c3c:
      uVar18 = 0;
      uVar20 = 0;
    }
    else {
      pbVar14 = pbVar11;
      if ((*pbVar11 & 1) == 0) {
        do {
          pbVar14 = *(byte **)(pbVar14 + 8);
        } while ((*pbVar14 & 1) == 0);
      }
      if ((*(ulong *)(pbVar14 + 0x10) & 0x1f) != 2) {
        pbVar11 = (byte *)0x0;
        goto LAB_031e7c3c;
      }
      uVar18 = *puVar12;
      uVar20 = puVar12[2];
      if ((uVar20 & 1) != 0) {
        piVar1 = (int *)((uVar20 & 0xfffffffffffffffe) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar20 = puVar12[2];
        pbVar9 = (byte *)param_2[1];
      }
    }
    local_70 = local_70 & 0xffffffffffffff00;
    (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
              ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,pbVar9,&local_70);
    plVar19 = (long *)(uVar20 & 0xfffffffffffffffe);
    uVar5 = (**(code **)(*plVar19 + 0x30))(plVar19,uVar18,pbVar11,local_70 & 0xff);
    if ((uVar20 & 1) == 0) goto switchD_031e78ac_caseD_0;
    plVar8 = plVar19 + 1;
    do {
      iVar10 = (int)*plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  case 3:
    puVar12 = (undefined8 *)*param_1;
    pbVar11 = (byte *)puVar12[1];
    if (pbVar11 == (byte *)0x0) {
LAB_031e7ca8:
      uVar18 = 0;
      uVar20 = 0;
    }
    else {
      pbVar14 = pbVar11;
      if ((*pbVar11 & 1) == 0) {
        do {
          pbVar14 = *(byte **)(pbVar14 + 8);
        } while ((*pbVar14 & 1) == 0);
      }
      if ((*(ulong *)(pbVar14 + 0x10) & 0x1f) != 3) {
        pbVar11 = (byte *)0x0;
        goto LAB_031e7ca8;
      }
      uVar18 = *puVar12;
      uVar20 = puVar12[2];
      if ((uVar20 & 1) != 0) {
        piVar1 = (int *)((uVar20 & 0xfffffffffffffffe) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar20 = puVar12[2];
        pbVar9 = (byte *)param_2[1];
      }
    }
    local_70 = 0;
    (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
              ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,pbVar9,&local_70);
    plVar19 = (long *)(uVar20 & 0xfffffffffffffffe);
    uVar5 = (**(code **)(*plVar19 + 0x30))(plVar19,uVar18,pbVar11,local_70);
    if ((uVar20 & 1) == 0) goto switchD_031e78ac_caseD_0;
    plVar8 = plVar19 + 1;
    do {
      iVar10 = (int)*plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  case 4:
    puVar12 = (undefined8 *)*param_1;
    pbVar11 = (byte *)puVar12[1];
    if (pbVar11 == (byte *)0x0) {
LAB_031e7bc4:
      uVar18 = 0;
      uVar20 = 0;
    }
    else {
      pbVar14 = pbVar11;
      if ((*pbVar11 & 1) == 0) {
        do {
          pbVar14 = *(byte **)(pbVar14 + 8);
        } while ((*pbVar14 & 1) == 0);
      }
      if ((*(ulong *)(pbVar14 + 0x10) & 0x1f) != 4) {
        pbVar11 = (byte *)0x0;
        goto LAB_031e7bc4;
      }
      uVar18 = *puVar12;
      uVar20 = puVar12[2];
      if ((uVar20 & 1) != 0) {
        piVar1 = (int *)((uVar20 & 0xfffffffffffffffe) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar20 = puVar12[2];
        pbVar9 = (byte *)param_2[1];
      }
    }
    local_70 = 0;
    local_68 = (ulong *)((ulong)local_68 & 0xffffffffffffff00);
    (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
              ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,pbVar9,&local_70);
    plVar19 = (long *)(uVar20 & 0xfffffffffffffffe);
    uVar5 = (**(code **)(*plVar19 + 0x30))(plVar19,uVar18,pbVar11,&local_70);
    if ((uVar20 & 1) == 0) goto switchD_031e78ac_caseD_0;
    plVar8 = plVar19 + 1;
    do {
      iVar10 = (int)*plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  case 5:
    puVar12 = (undefined8 *)*param_1;
    pbVar11 = (byte *)puVar12[1];
    if (pbVar11 == (byte *)0x0) {
LAB_031e7d78:
      uVar18 = 0;
      uVar20 = 0;
    }
    else {
      pbVar14 = pbVar11;
      if ((*pbVar11 & 1) == 0) {
        do {
          pbVar14 = *(byte **)(pbVar14 + 8);
        } while ((*pbVar14 & 1) == 0);
      }
      if ((*(ulong *)(pbVar14 + 0x10) & 0x1f) != 5) {
        pbVar11 = (byte *)0x0;
        goto LAB_031e7d78;
      }
      uVar18 = *puVar12;
      uVar20 = puVar12[2];
      if ((uVar20 & 1) != 0) {
        piVar1 = (int *)((uVar20 & 0xfffffffffffffffe) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar20 = puVar12[2];
        pbVar9 = (byte *)param_2[1];
      }
    }
    local_70 = 0;
    (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
              ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,pbVar9,&local_70);
    plVar19 = (long *)(uVar20 & 0xfffffffffffffffe);
    uVar5 = (**(code **)(*plVar19 + 0x30))(local_70,plVar19,uVar18,pbVar11);
    if ((uVar20 & 1) == 0) goto switchD_031e78ac_caseD_0;
    plVar8 = plVar19 + 1;
    do {
      iVar10 = (int)*plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  case 6:
    puVar12 = (undefined8 *)*param_1;
    pbVar11 = (byte *)puVar12[1];
    if (pbVar11 == (byte *)0x0) {
LAB_031e7de4:
      uVar18 = 0;
      uVar20 = 0;
    }
    else {
      pbVar14 = pbVar11;
      if ((*pbVar11 & 1) == 0) {
        do {
          pbVar14 = *(byte **)(pbVar14 + 8);
        } while ((*pbVar14 & 1) == 0);
      }
      if ((*(ulong *)(pbVar14 + 0x10) & 0x1f) != 6) {
        pbVar11 = (byte *)0x0;
        goto LAB_031e7de4;
      }
      uVar18 = *puVar12;
      uVar20 = puVar12[2];
      if ((uVar20 & 1) != 0) {
        piVar1 = (int *)((uVar20 & 0xfffffffffffffffe) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar20 = puVar12[2];
        pbVar9 = (byte *)param_2[1];
      }
    }
    local_68 = (ulong *)0x0;
    local_60 = 0;
    local_70 = 0;
    (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x50))
              ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,pbVar9,&local_70);
    plVar19 = (long *)(uVar20 & 0xfffffffffffffffe);
    uVar5 = (**(code **)(*plVar19 + 0x48))(plVar19,uVar18,pbVar11,&local_70);
    if ((local_60 & 1) != 0) {
      plVar6 = (long *)(local_60 & 0xfffffffffffffffe);
      plVar8 = plVar6 + 1;
      do {
        lVar4 = *plVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *(int *)plVar8 = (int)lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    if ((uVar20 & 1) == 0) goto switchD_031e78ac_caseD_0;
    plVar8 = plVar19 + 1;
    do {
      iVar10 = (int)*plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  case 7:
    puVar12 = (undefined8 *)*param_1;
    puVar17 = (ulong *)puVar12[1];
    if (puVar17 != (ulong *)0x0) {
      puVar13 = puVar17;
      if ((*puVar17 & 1) == 0) {
        do {
          puVar13 = (ulong *)puVar13[1];
        } while ((*puVar13 & 1) == 0);
      }
      if ((puVar13[2] & 0x1f) == 7) {
        uVar18 = *puVar12;
        uVar20 = puVar12[2];
        if ((uVar20 & 1) != 0) {
          piVar1 = (int *)((uVar20 & 0xfffffffffffffffe) + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          uVar20 = puVar12[2];
        }
        goto LAB_031e7d18;
      }
      puVar17 = (ulong *)0x0;
    }
    uVar18 = 0;
    uVar20 = 0;
LAB_031e7d18:
    local_70 = *param_2;
    local_68 = (ulong *)param_2[1];
    uVar21 = param_2[2];
    if ((uVar21 & 1) != 0) {
      piVar1 = (int *)((uVar21 & 0xfffffffffffffffe) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    local_60 = uVar21;
    if (local_68 == puVar17) {
LAB_031e7ff0:
      uVar5 = (**(code **)(*(long *)(uVar20 & 0xfffffffffffffffe) + 0x48))
                        ((long *)(uVar20 & 0xfffffffffffffffe),uVar18,puVar17,&local_70);
      uVar22 = local_60 & 1;
      uVar21 = local_60;
LAB_031e8054:
      if (uVar22 != 0) {
        plVar8 = (long *)(uVar21 & 0xfffffffffffffffe);
        plVar19 = plVar8 + 1;
        do {
          lVar4 = *plVar19;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar3) {
            *(int *)plVar19 = (int)lVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar8 != (long *)0x0) && ((int)lVar4 == 1)) {
          (**(code **)(*plVar8 + 8))();
        }
      }
      if ((uVar20 & 1) == 0) {
        return uVar5;
      }
      plVar8 = (long *)(uVar20 & 0xfffffffffffffffe);
      plVar19 = plVar8 + 1;
      do {
        lVar4 = *plVar19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar3) {
          *(int *)plVar19 = (int)lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (plVar8 == (long *)0x0) {
        return uVar5;
      }
      if ((int)lVar4 == 1) {
        (**(code **)(*plVar8 + 8))();
        return uVar5;
      }
      return uVar5;
    }
    uVar22 = uVar21 & 1;
    local_48 = local_68;
    while( true ) {
      uVar16 = (uint)*local_48;
      if ((uVar16 >> 0xd & 1) != 0) break;
      if (((*local_48 & 1) != 0) || (local_48 = (ulong *)local_48[1], local_48 == (ulong *)0x0))
      goto LAB_031e7f90;
    }
    if (local_48 != (ulong *)0x0) {
      uVar7 = CONCAT44(uVar16,uVar16) & 0x1fff00001fff;
      local_48 = local_48 + (ulong)(byte)(POPCOUNT((char)uVar7) + POPCOUNT((char)(uVar7 >> 8))) + 2;
      goto LAB_031e7f98;
    }
LAB_031e7f90:
    local_48 = (ulong *)0x0;
LAB_031e7f98:
    local_50 = puVar17;
    while( true ) {
      uVar16 = (uint)*local_50;
      if ((uVar16 >> 0xd & 1) != 0) break;
      if (((*local_50 & 1) != 0) || (local_50 = (ulong *)local_50[1], local_50 == (ulong *)0x0))
      goto LAB_031e801c;
    }
    if (local_50 != (ulong *)0x0) {
      uVar7 = CONCAT44(uVar16,uVar16) & 0x1fff00001fff;
      local_50 = local_50 + (ulong)(byte)(POPCOUNT((char)uVar7) + POPCOUNT((char)(uVar7 >> 8))) + 2;
      if (local_48 == (ulong *)0x0) goto LAB_031e8020;
      uVar7 = FUN_031dd354(&local_48,&local_50);
      if ((uVar7 & 1) == 0) goto LAB_031e8054;
      goto LAB_031e7ff0;
    }
LAB_031e801c:
    local_50 = (ulong *)0x0;
LAB_031e8020:
    puVar13 = local_68;
    if (puVar17 == (ulong *)0x0) {
      puVar15 = (ulong *)0x0;
    }
    else {
      puVar15 = puVar17;
      do {
        if ((*puVar15 & 1) != 0) break;
        puVar15 = (ulong *)puVar15[1];
      } while (puVar15 != (ulong *)0x0);
    }
    do {
      if (puVar13 == (ulong *)0x0) goto LAB_031e8054;
      if (puVar13 == puVar15) goto LAB_031e7ff0;
      puVar13 = (ulong *)puVar13[1];
    } while( true );
  case 8:
    puVar12 = (undefined8 *)*param_1;
    pbVar11 = (byte *)puVar12[1];
    if (pbVar11 == (byte *)0x0) {
LAB_031e7e8c:
      uVar18 = 0;
      uVar20 = 0;
    }
    else {
      pbVar14 = pbVar11;
      if ((*pbVar11 & 1) == 0) {
        do {
          pbVar14 = *(byte **)(pbVar14 + 8);
        } while ((*pbVar14 & 1) == 0);
      }
      if ((*(ulong *)(pbVar14 + 0x10) & 0x1f) != 8) {
        pbVar11 = (byte *)0x0;
        goto LAB_031e7e8c;
      }
      uVar18 = *puVar12;
      uVar20 = puVar12[2];
      if ((uVar20 & 1) != 0) {
        piVar1 = (int *)((uVar20 & 0xfffffffffffffffe) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar20 = puVar12[2];
        pbVar9 = (byte *)param_2[1];
      }
    }
    local_60 = 0;
    local_58 = 0;
    local_70 = 0;
    local_68 = (ulong *)0x0;
    (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x50))
              ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,pbVar9,&local_70);
    plVar19 = (long *)(uVar20 & 0xfffffffffffffffe);
    uVar5 = (**(code **)(*plVar19 + 0x48))(plVar19,uVar18,pbVar11,&local_70);
    if ((local_58 & 1) != 0) {
      plVar6 = (long *)(local_58 & 0xfffffffffffffffe);
      plVar8 = plVar6 + 1;
      do {
        lVar4 = *plVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *(int *)plVar8 = (int)lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    if ((uVar20 & 1) == 0) goto switchD_031e78ac_caseD_0;
    plVar8 = plVar19 + 1;
    do {
      iVar10 = (int)*plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  default:
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0x261011c5,"../..\\Common/Base/Reflect/Visitor/Detail/hkReflectVisitorDetail.h",
                 0x3c,"Bad var visitor switch");
  }
  if ((plVar19 != (long *)0x0) && (iVar10 == 1)) {
    (**(code **)(*plVar19 + 8))(plVar19);
  }
switchD_031e78ac_caseD_0:
  return uVar5;
}


