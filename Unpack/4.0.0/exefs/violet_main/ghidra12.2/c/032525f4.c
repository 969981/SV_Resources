/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 032525f4; name: FUN_032525f4
 */


void FUN_032525f4(undefined2 param_1,long *param_2,long param_3,long param_4,long param_5,
                 undefined4 param_6,undefined4 param_7,long param_8,long param_9,
                 undefined2 *param_10,ushort *param_11,long param_12,long *param_13,long *param_14,
                 long *param_15)

{
  undefined2 *puVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  ushort uVar8;
  long *plVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  uint uVar18;
  long *plVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 local_68;
  
  puVar5 = PTR_DAT_047d1a08;
  local_68 = 0x38;
  plVar9 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
  if (*(code **)(puVar5 + 0x10) != (code *)0x0) {
    (**(code **)(puVar5 + 0x10))(plVar9,"hkReferencedObject");
  }
  plVar17 = plVar9 + 2;
  *plVar17 = 1;
  *plVar9 = (long)&PTR_LAB_046be050;
  plVar9[1] = 0xffffffff;
  lVar16 = *param_2;
  plVar9[3] = (long)&PTR_LAB_046be000;
  plVar9[4] = 0;
  plVar9[5] = lVar16;
  plVar9[6] = (long)param_2;
  if (((param_13 == (long *)0x0) || (param_14 == (long *)0x0)) || (param_15 == (long *)0x0)) {
    local_68 = 0x60;
    plVar15 = (long *)(**(code **)puVar5)(0,&local_68,0);
    if (*(code **)(puVar5 + 0x10) != (code *)0x0) {
      (**(code **)(puVar5 + 0x10))(plVar15,"hkReferencedTask");
    }
    plVar19 = plVar15 + 2;
    *plVar19 = 1;
    *plVar15 = (long)&PTR_LAB_046be150;
    plVar15[1] = 0xffffffff;
    plVar15[4] = (long)&PTR_LAB_046be180;
    plVar15[5] = param_8;
    plVar15[8] = (long)plVar9;
    plVar15[6] = param_4;
    plVar15[7] = param_3;
    if (plVar9[1] != 0) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar4) {
          *plVar17 = *plVar17 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    *plVar15 = (long)&PTR_LAB_046be098;
    plVar15[4] = (long)&PTR_LAB_046be0d8;
    plVar15[9] = param_12;
    plVar15[10] = param_5;
    *(undefined4 *)(plVar15 + 0xb) = param_6;
    uVar6 = FUN_0323f360(param_9,plVar15,param_7);
    if (plVar15[1] != 0) {
      do {
        lVar16 = *plVar19;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar4) {
          *plVar19 = lVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar16 + -1 == 0) {
        (**(code **)(*plVar15 + 0x18))(plVar15);
      }
    }
    iVar11 = *(int *)(param_9 + 0x330);
    lVar16 = (long)iVar11;
    if ((int)(*(uint *)(param_9 + 0x334) & 0x7fffffff) <= iVar11) {
      FUN_02e7f7cc(param_9 + 0x328,PTR_PTR_047d1a50,lVar16 + 1);
      iVar11 = *(int *)(param_9 + 0x330);
    }
    puVar1 = (undefined2 *)(*(long *)(param_9 + 0x328) + (long)iVar11 * 4);
    *(int *)(param_9 + 0x330) = (int)(lVar16 + 1);
    *puVar1 = param_1;
    puVar1[1] = uVar6;
    puVar5 = PTR_DAT_047d1a08;
    local_68 = 0x50;
    plVar15 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
    if (*(code **)(puVar5 + 0x10) != (code *)0x0) {
      (**(code **)(puVar5 + 0x10))(plVar15,"hkReferencedTask");
    }
    *plVar15 = (long)&PTR_LAB_046be150;
    plVar15[1] = 0xffffffff;
    plVar19 = plVar15 + 2;
    *plVar19 = 1;
    plVar15[4] = (long)&PTR_LAB_046be180;
    plVar15[5] = param_8;
    plVar15[8] = (long)plVar9;
    plVar15[6] = param_4;
    plVar15[7] = param_3;
    if (plVar9[1] != 0) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar4) {
          *plVar17 = *plVar17 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar15[9] = param_12;
    *plVar15 = (long)&PTR_LAB_046be1c8;
    plVar15[4] = (long)&PTR_LAB_046be208;
    uVar7 = FUN_0323f458(param_9,plVar15,param_6,1,param_7);
    *param_10 = uVar7;
    if (plVar15[1] != 0) {
      do {
        lVar16 = *plVar19;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar4) {
          *plVar19 = lVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar16 + -1 == 0) {
        (**(code **)(*plVar15 + 0x18))(plVar15);
      }
    }
    iVar11 = *(int *)(param_9 + 0x330);
    lVar16 = (long)iVar11;
    uVar7 = *param_10;
    if ((int)(*(uint *)(param_9 + 0x334) & 0x7fffffff) <= iVar11) {
      FUN_02e7f7cc(param_9 + 0x328,PTR_PTR_047d1a50,lVar16 + 1);
      iVar11 = *(int *)(param_9 + 0x330);
    }
    puVar1 = (undefined2 *)(*(long *)(param_9 + 0x328) + (long)iVar11 * 4);
    *(int *)(param_9 + 0x330) = (int)(lVar16 + 1);
    *puVar1 = uVar6;
    puVar1[1] = uVar7;
    puVar5 = PTR_DAT_047d1a08;
    local_68 = 0x60;
    plVar15 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
    if (*(code **)(puVar5 + 0x10) != (code *)0x0) {
      (**(code **)(puVar5 + 0x10))(plVar15,"hkReferencedTask");
    }
    *plVar15 = (long)&PTR_LAB_046be150;
    plVar15[1] = 0xffffffff;
    plVar19 = plVar15 + 2;
    *plVar19 = 1;
    plVar15[4] = (long)&PTR_LAB_046be180;
    plVar15[5] = param_8;
    plVar15[8] = (long)plVar9;
    plVar15[6] = param_4;
    plVar15[7] = param_3;
    if (plVar9[1] != 0) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar4) {
          *plVar17 = *plVar17 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    *plVar15 = (long)&PTR_LAB_046be268;
    plVar15[4] = (long)&PTR_LAB_046be2a8;
    plVar15[9] = param_12;
    plVar15[10] = param_5;
    uVar8 = FUN_0323f360(param_9,plVar15,param_7);
    *param_11 = uVar8;
    if (plVar15[1] != 0) {
      do {
        lVar16 = *plVar19;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar4) {
          *plVar19 = lVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar16 + -1 == 0) {
        (**(code **)(*plVar15 + 0x18))(plVar15);
      }
    }
    iVar11 = *(int *)(param_9 + 0x330);
    uVar18 = (uint)*param_11;
    uVar6 = *param_10;
    lVar16 = (long)iVar11 + 1;
    uVar14 = (uint)*param_11;
    if (iVar11 < (int)(*(uint *)(param_9 + 0x334) & 0x7fffffff)) goto LAB_03252ee8;
  }
  else {
    lVar16 = *param_13;
    if (lVar16 == 0) {
      local_68 = 0x60;
      puVar21 = (undefined8 *)(**(code **)puVar5)(0,&local_68,0);
      if (*(code **)(puVar5 + 0x10) != (code *)0x0) {
        (**(code **)(puVar5 + 0x10))(puVar21,"hkReferencedTask");
      }
      puVar21[1] = 0xffffffff;
      puVar21[2] = 1;
      puVar21[4] = &PTR_LAB_046be180;
      *puVar21 = &PTR_LAB_046be150;
      puVar21[5] = param_8;
      puVar21[6] = param_4;
      puVar21[7] = param_3;
      puVar21[8] = plVar9;
      if (plVar9[1] != 0) {
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar4) {
            *plVar17 = *plVar17 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      *puVar21 = &PTR_LAB_046be098;
      puVar21[4] = &PTR_LAB_046be0d8;
      puVar21[9] = param_12;
      puVar21[10] = param_5;
      *(undefined4 *)(puVar21 + 0xb) = param_6;
      plVar15 = (long *)*param_13;
      *param_13 = (long)(puVar21 + 4);
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x10))();
      }
    }
    else {
      *(long *)(lVar16 + 0x30) = param_5;
      *(undefined4 *)(lVar16 + 0x38) = param_6;
    }
    lVar16 = param_9 + 0x18;
    lVar20 = *param_13;
    iVar11 = *(int *)(param_9 + 0x20);
    iVar12 = iVar11;
    if ((int)(*(uint *)(param_9 + 0x24) & 0x7fffffff) <= iVar11) {
      FUN_0323ff70(lVar16,PTR_PTR_047d1a50,(long)iVar11 + 1);
      iVar12 = *(int *)(param_9 + 0x20);
    }
    plVar15 = (long *)(*(long *)(param_9 + 0x18) + (long)iVar12 * 0x18);
    *(int *)(param_9 + 0x20) = (int)((long)iVar11 + 1);
    *plVar15 = lVar20;
    *(undefined2 *)(plVar15 + 1) = 1;
    uVar2 = (undefined1)param_7;
    *(undefined1 *)((long)plVar15 + 10) = uVar2;
    plVar15[2] = 0;
    iVar12 = *(int *)(param_9 + 0x330);
    lVar20 = (long)iVar12;
    if ((int)(*(uint *)(param_9 + 0x334) & 0x7fffffff) <= iVar12) {
      FUN_02e7f7cc(param_9 + 0x328,PTR_PTR_047d1a50,lVar20 + 1);
      iVar12 = *(int *)(param_9 + 0x330);
    }
    puVar1 = (undefined2 *)(*(long *)(param_9 + 0x328) + (long)iVar12 * 4);
    *(int *)(param_9 + 0x330) = (int)(lVar20 + 1);
    *puVar1 = param_1;
    puVar1[1] = (short)iVar11;
    puVar5 = PTR_DAT_047d1a08;
    puVar21 = (undefined8 *)*param_14;
    if (puVar21 == (undefined8 *)0x0) {
      local_68 = 0x50;
      puVar10 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
      if (*(code **)(puVar5 + 0x10) != (code *)0x0) {
        (**(code **)(puVar5 + 0x10))(puVar10,"hkReferencedTask");
      }
      puVar10[1] = 0xffffffff;
      puVar10[2] = 1;
      puVar21 = puVar10 + 4;
      *puVar21 = &PTR_LAB_046be180;
      *puVar10 = &PTR_LAB_046be150;
      puVar10[5] = param_8;
      puVar10[6] = param_4;
      puVar10[7] = param_3;
      puVar10[8] = plVar9;
      if (plVar9[1] != 0) {
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar4) {
            *plVar17 = *plVar17 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      *puVar10 = &PTR_LAB_046be1c8;
      puVar10[4] = &PTR_LAB_046be208;
      puVar10[9] = param_12;
      plVar15 = (long *)*param_14;
      *param_14 = (long)puVar21;
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x10))();
        puVar21 = (undefined8 *)*param_14;
      }
    }
    iVar12 = *(int *)(param_9 + 0x20);
    iVar13 = iVar12;
    if ((int)(*(uint *)(param_9 + 0x24) & 0x7fffffff) <= iVar12) {
      FUN_0323ff70(lVar16,PTR_PTR_047d1a50,(long)iVar12 + 1);
      iVar13 = *(int *)(param_9 + 0x20);
    }
    puVar10 = (undefined8 *)(*(long *)(param_9 + 0x18) + (long)iVar13 * 0x18);
    *(int *)(param_9 + 0x20) = (int)((long)iVar12 + 1);
    *puVar10 = puVar21;
    *(short *)(puVar10 + 1) = (short)param_6;
    *(undefined1 *)((long)puVar10 + 0xb) = 1;
    *(undefined1 *)((long)puVar10 + 10) = uVar2;
    puVar10[2] = 0;
    *param_10 = (short)iVar12;
    iVar13 = *(int *)(param_9 + 0x330);
    lVar20 = (long)iVar13;
    if ((int)(*(uint *)(param_9 + 0x334) & 0x7fffffff) <= iVar13) {
      FUN_02e7f7cc(param_9 + 0x328,PTR_PTR_047d1a50,lVar20 + 1);
      iVar13 = *(int *)(param_9 + 0x330);
    }
    puVar1 = (undefined2 *)(*(long *)(param_9 + 0x328) + (long)iVar13 * 4);
    *(int *)(param_9 + 0x330) = (int)(lVar20 + 1);
    puVar1[1] = (short)iVar12;
    *puVar1 = (short)iVar11;
    if (*param_15 == 0) {
      local_68 = 0x60;
      puVar21 = (undefined8 *)(**(code **)puVar5)(0,&local_68,0);
      if (*(code **)(puVar5 + 0x10) != (code *)0x0) {
        (**(code **)(puVar5 + 0x10))(puVar21,"hkReferencedTask");
      }
      puVar21[1] = 0xffffffff;
      puVar21[2] = 1;
      puVar21[4] = &PTR_LAB_046be180;
      *puVar21 = &PTR_LAB_046be150;
      puVar21[5] = param_8;
      puVar21[6] = param_4;
      puVar21[7] = param_3;
      puVar21[8] = plVar9;
      if (plVar9[1] != 0) {
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar4) {
            *plVar17 = *plVar17 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      *puVar21 = &PTR_LAB_046be268;
      puVar21[4] = &PTR_LAB_046be2a8;
      puVar21[9] = param_12;
      puVar21[10] = param_5;
      plVar15 = (long *)*param_15;
      *param_15 = (long)(puVar21 + 4);
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x10))();
      }
    }
    else {
      *(long *)(*param_15 + 0x30) = param_5;
    }
    uVar18 = *(uint *)(param_9 + 0x20);
    lVar20 = *param_15;
    uVar14 = uVar18;
    if ((int)(*(uint *)(param_9 + 0x24) & 0x7fffffff) <= (int)uVar18) {
      FUN_0323ff70(lVar16,PTR_PTR_047d1a50,(long)(int)uVar18 + 1);
      uVar14 = *(uint *)(param_9 + 0x20);
    }
    plVar15 = (long *)(*(long *)(param_9 + 0x18) + (long)(int)uVar14 * 0x18);
    *(int *)(param_9 + 0x20) = (int)((long)(int)uVar18 + 1);
    *plVar15 = lVar20;
    *(undefined2 *)(plVar15 + 1) = 1;
    *(undefined1 *)((long)plVar15 + 10) = uVar2;
    plVar15[2] = 0;
    *param_11 = (ushort)uVar18;
    iVar11 = *(int *)(param_9 + 0x330);
    uVar6 = *param_10;
    lVar16 = (long)iVar11 + 1;
    uVar14 = uVar18;
    if (iVar11 < (int)(*(uint *)(param_9 + 0x334) & 0x7fffffff)) goto LAB_03252ee8;
  }
  uVar18 = uVar14;
  FUN_02e7f7cc(param_9 + 0x328,PTR_PTR_047d1a50,lVar16);
  iVar11 = *(int *)(param_9 + 0x330);
LAB_03252ee8:
  puVar1 = (undefined2 *)(*(long *)(param_9 + 0x328) + (long)iVar11 * 4);
  *(int *)(param_9 + 0x330) = (int)lVar16;
  *puVar1 = uVar6;
  puVar1[1] = (short)uVar18;
  if (plVar9[1] != 0) {
    do {
      lVar16 = *plVar17;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar4) {
        *plVar17 = lVar16 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar16 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  return;
}


