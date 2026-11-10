/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03200dd0; name: FUN_03200dd0
 */


undefined8 * FUN_03200dd0(long *param_1,byte *param_2)

{
  int *piVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  undefined **ppuVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar6 = PTR_DAT_047d1a08;
  for (; (*param_2 & 1) == 0; param_2 = *(byte **)(param_2 + 8)) {
  }
  puVar12 = (undefined8 *)0x0;
  switch(*(uint *)(param_2 + 0x10) & 0x1f) {
  case 0:
  case 1:
    goto switchD_03200e20_caseD_0;
  case 2:
    local_40 = 0x30;
    puVar12 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&local_40,0);
    if (*(code **)(puVar6 + 0x10) != (code *)0x0) {
      (**(code **)(puVar6 + 0x10))(puVar12,"ChildImpl");
    }
    puVar3 = (undefined8 *)*param_1;
    lVar9 = param_1[1];
    local_40 = *puVar3;
    uStack_38 = puVar3[1];
    uVar11 = puVar3[2];
    if ((uVar11 & 1) == 0) {
      ppuVar10 = &PTR_LAB_046a8af0;
LAB_032010a0:
      *puVar12 = ppuVar10;
      puVar12[2] = local_40;
      puVar12[3] = uStack_38;
      puVar12[4] = uVar11;
      puVar12[5] = lVar9;
      *(undefined4 *)(puVar12 + 1) = 0;
      return puVar12;
    }
    plVar7 = (long *)(uVar11 & 0xfffffffffffffffe);
    plVar2 = plVar7 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    *(undefined4 *)(puVar12 + 1) = 1;
    *puVar12 = &PTR_LAB_046a8af0;
    puVar12[4] = uVar11;
    puVar12[2] = local_40;
    puVar12[3] = uStack_38;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    puVar12[5] = lVar9;
    *(undefined4 *)(puVar12 + 1) = 0;
    do {
      iVar8 = (int)*plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    break;
  case 3:
    local_40 = 0x30;
    puVar12 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&local_40,0);
    if (*(code **)(puVar6 + 0x10) != (code *)0x0) {
      (**(code **)(puVar6 + 0x10))(puVar12,"ChildImpl");
    }
    puVar3 = (undefined8 *)*param_1;
    lVar9 = param_1[1];
    local_40 = *puVar3;
    uStack_38 = puVar3[1];
    uVar11 = puVar3[2];
    if ((uVar11 & 1) == 0) {
      ppuVar10 = &PTR_LAB_046a8b58;
      goto LAB_032010a0;
    }
    plVar7 = (long *)(uVar11 & 0xfffffffffffffffe);
    plVar2 = plVar7 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    *(undefined4 *)(puVar12 + 1) = 1;
    *puVar12 = &PTR_LAB_046a8b58;
    puVar12[4] = uVar11;
    puVar12[2] = local_40;
    puVar12[3] = uStack_38;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    puVar12[5] = lVar9;
    *(undefined4 *)(puVar12 + 1) = 0;
    do {
      iVar8 = (int)*plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    break;
  case 4:
    local_40 = 0x30;
    puVar12 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&local_40,0);
    if (*(code **)(puVar6 + 0x10) != (code *)0x0) {
      (**(code **)(puVar6 + 0x10))(puVar12,"ChildImpl");
    }
    puVar3 = (undefined8 *)*param_1;
    lVar9 = param_1[1];
    local_40 = *puVar3;
    uStack_38 = puVar3[1];
    uVar11 = puVar3[2];
    if ((uVar11 & 1) == 0) {
      ppuVar10 = &PTR_LAB_046a8bc8;
      goto LAB_032010a0;
    }
    plVar7 = (long *)(uVar11 & 0xfffffffffffffffe);
    plVar2 = plVar7 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    *(undefined4 *)(puVar12 + 1) = 1;
    *puVar12 = &PTR_LAB_046a8bc8;
    puVar12[4] = uVar11;
    puVar12[2] = local_40;
    puVar12[3] = uStack_38;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    puVar12[5] = lVar9;
    *(undefined4 *)(puVar12 + 1) = 0;
    do {
      iVar8 = (int)*plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    break;
  case 5:
    local_40 = 0x30;
    puVar12 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&local_40,0);
    if (*(code **)(puVar6 + 0x10) != (code *)0x0) {
      (**(code **)(puVar6 + 0x10))(puVar12,"ChildImpl");
    }
    puVar3 = (undefined8 *)*param_1;
    lVar9 = param_1[1];
    local_40 = *puVar3;
    uStack_38 = puVar3[1];
    uVar11 = puVar3[2];
    if ((uVar11 & 1) == 0) {
      ppuVar10 = &PTR_LAB_046a8c30;
      goto LAB_032010a0;
    }
    plVar7 = (long *)(uVar11 & 0xfffffffffffffffe);
    plVar2 = plVar7 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    *(undefined4 *)(puVar12 + 1) = 1;
    *puVar12 = &PTR_LAB_046a8c30;
    puVar12[4] = uVar11;
    puVar12[2] = local_40;
    puVar12[3] = uStack_38;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    puVar12[5] = lVar9;
    *(undefined4 *)(puVar12 + 1) = 0;
    do {
      iVar8 = (int)*plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    break;
  case 6:
    local_40 = 0x30;
    puVar12 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&local_40,0);
    if (*(code **)(puVar6 + 0x10) != (code *)0x0) {
      (**(code **)(puVar6 + 0x10))(puVar12,"ChildImpl");
    }
    puVar3 = (undefined8 *)*param_1;
    lVar9 = param_1[1];
    local_40 = *puVar3;
    uStack_38 = puVar3[1];
    uVar11 = puVar3[2];
    if ((uVar11 & 1) == 0) {
      ppuVar10 = &PTR_LAB_046a8c98;
      goto LAB_032010a0;
    }
    plVar7 = (long *)(uVar11 & 0xfffffffffffffffe);
    plVar2 = plVar7 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    *(undefined4 *)(puVar12 + 1) = 1;
    *puVar12 = &PTR_LAB_046a8c98;
    puVar12[4] = uVar11;
    puVar12[2] = local_40;
    puVar12[3] = uStack_38;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    puVar12[5] = lVar9;
    *(undefined4 *)(puVar12 + 1) = 0;
    do {
      iVar8 = (int)*plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    break;
  case 7:
    local_40 = 0x30;
    puVar12 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&local_40,0);
    if (*(code **)(puVar6 + 0x10) != (code *)0x0) {
      (**(code **)(puVar6 + 0x10))(puVar12,"ChildImpl");
    }
    puVar3 = (undefined8 *)*param_1;
    lVar9 = param_1[1];
    local_40 = *puVar3;
    uStack_38 = puVar3[1];
    uVar11 = puVar3[2];
    if ((uVar11 & 1) != 0) {
      piVar1 = (int *)((uVar11 & 0xfffffffffffffffe) + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    *(undefined4 *)(puVar12 + 1) = 1;
    *puVar12 = &PTR_LAB_046a8dc8;
    puVar12[4] = uVar11;
    puVar12[2] = local_40;
    puVar12[3] = uStack_38;
    if ((uVar11 & 1) == 0) {
      puVar12[5] = lVar9;
      ppuVar10 = &PTR_LAB_046a8d30;
LAB_03201154:
      *(undefined4 *)(puVar12 + 1) = 0;
      *puVar12 = ppuVar10;
      return puVar12;
    }
    plVar7 = (long *)(uVar11 & 0xfffffffffffffffe);
    plVar2 = plVar7 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    puVar12[5] = lVar9;
    *(undefined4 *)(puVar12 + 1) = 0;
    *puVar12 = &PTR_LAB_046a8d30;
    do {
      iVar8 = (int)*plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    break;
  case 8:
    local_40 = 0x30;
    puVar12 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&local_40,0);
    if (*(code **)(puVar6 + 0x10) != (code *)0x0) {
      (**(code **)(puVar6 + 0x10))(puVar12,"ChildImpl");
    }
    puVar3 = (undefined8 *)*param_1;
    lVar9 = param_1[1];
    local_40 = *puVar3;
    uStack_38 = puVar3[1];
    uVar11 = puVar3[2];
    if ((uVar11 & 1) != 0) {
      piVar1 = (int *)((uVar11 & 0xfffffffffffffffe) + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    *(undefined4 *)(puVar12 + 1) = 1;
    *puVar12 = &PTR_LAB_046a8ee8;
    puVar12[4] = uVar11;
    puVar12[2] = local_40;
    puVar12[3] = uStack_38;
    if ((uVar11 & 1) == 0) {
      puVar12[5] = lVar9;
      ppuVar10 = &PTR_LAB_046a8e30;
      goto LAB_03201154;
    }
    plVar7 = (long *)(uVar11 & 0xfffffffffffffffe);
    plVar2 = plVar7 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    puVar12[5] = lVar9;
    *(undefined4 *)(puVar12 + 1) = 0;
    *puVar12 = &PTR_LAB_046a8e30;
    do {
      iVar8 = (int)*plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    break;
  default:
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0xfdbd9f9,"../..\\Common/Base/Reflect/Visitor/Detail/hkReflectVisitorDetail.h",0x1b
                 ,"Bad type visitor switch");
  }
  if ((plVar7 != (long *)0x0) && (iVar8 == 1)) {
    (**(code **)(*plVar7 + 8))();
  }
switchD_03200e20_caseD_0:
  return puVar12;
}


