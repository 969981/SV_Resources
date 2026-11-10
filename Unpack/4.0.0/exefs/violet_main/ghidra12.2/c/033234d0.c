/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033234d0; name: FUN_033234d0
 */


void FUN_033234d0(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  int iVar10;
  ulong *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong *puVar16;
  long lVar17;
  bool bVar18;
  undefined4 local_c8 [2];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8 [2];
  undefined8 local_a0;
  ulong *puStack_98;
  ulong local_90;
  uint local_88 [2];
  undefined8 local_80;
  ulong *puStack_78;
  ulong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulong local_58;
  undefined4 local_38 [2];
  
  puVar11 = (ulong *)param_2[1];
  uVar13 = *puVar11;
  puVar16 = puVar11;
  if ((uVar13 & 1) != 0) {
    if ((puVar11 == (ulong *)0x0) || ((puVar11[2] & 0x1f) != 7)) goto LAB_03323594;
LAB_03323564:
    local_68 = *param_2;
    uStack_60 = param_2[1];
    local_58 = param_2[2];
    if ((local_58 & 1) == 0) {
      local_38[0] = *(undefined4 *)(param_2 + 4);
      puVar12 = &local_68;
      puVar9 = local_38;
      uVar8 = param_2[3];
      goto LAB_033237e4;
    }
    plVar6 = (long *)(local_58 & 0xfffffffffffffffe);
    plVar1 = plVar6 + 1;
    do {
      cVar4 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar18) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    local_38[0] = *(undefined4 *)(param_2 + 4);
    FUN_03326184(param_1,&local_68,param_2[3],local_38);
    do {
      iVar10 = (int)*plVar1;
      cVar4 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar18) {
        *(int *)plVar1 = iVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_03323674:
    if (plVar6 == (long *)0x0) {
      return;
    }
    if (iVar10 != 1) {
      return;
    }
    lVar17 = *plVar6;
    goto LAB_033238cc;
  }
  puVar15 = puVar11;
  do {
    puVar15 = (ulong *)puVar15[1];
  } while ((*puVar15 & 1) == 0);
  if ((puVar11 != (ulong *)0x0) && ((puVar15[2] & 0x1f) == 7)) goto LAB_03323564;
  if ((uVar13 & 1) == 0) {
    do {
      puVar16 = (ulong *)puVar16[1];
    } while ((*puVar16 & 1) == 0);
  }
LAB_03323594:
  if ((puVar11 == (ulong *)0x0) || ((puVar16[2] & 0x1f) != 6)) {
LAB_033237cc:
    local_b8 = 0;
    uStack_b0 = 0;
    puVar12 = &local_c0;
    puVar9 = local_c8;
    local_c0 = 0;
    uVar8 = param_2[3];
    local_c8[0] = 0;
LAB_033237e4:
    FUN_03326184(param_1,puVar12,uVar8,puVar9);
    return;
  }
  uVar3 = *(uint *)*param_2;
  lVar17 = (long)(int)uVar3;
  if (((uint)uVar13 >> 1 & 1) == 0) {
    do {
      puVar11 = (ulong *)puVar11[1];
      puVar16 = (ulong *)0x0;
      if (puVar11 == (ulong *)0x0) goto LAB_033235f8;
    } while (((byte)*puVar11 >> 1 & 1) == 0);
  }
  puVar16 = (ulong *)puVar11[3];
  if (puVar16 != (ulong *)0x0) {
    puVar11 = puVar16;
    if ((*puVar16 & 1) == 0) {
      do {
        puVar11 = (ulong *)puVar11[1];
      } while ((*puVar11 & 1) == 0);
    }
    if ((puVar11[2] & 0x1f) != 7) {
      puVar16 = (ulong *)0x0;
    }
  }
LAB_033235f8:
  if ((uVar3 == 0) || (puVar16 != (ulong *)0x0)) {
LAB_0332371c:
    if (uVar3 == 0) {
      if (puVar16 != (ulong *)0x0) {
        local_a0 = 0;
        puVar11 = puVar16;
        do {
          uVar13 = *puVar11;
          if (((uint)uVar13 >> 2 & 1) != 0) {
            local_90 = puVar11[(uVar13 >> 1 & 1) + (uVar13 & 1) + 2];
            goto LAB_03323900;
          }
          puVar11 = (ulong *)puVar11[1];
        } while (puVar11 != (ulong *)0x0);
        local_90 = 0;
LAB_03323900:
        puStack_98 = puVar16;
        if ((local_90 & 1) == 0) {
          uVar8 = param_2[3];
          puVar12 = &local_a0;
          puVar9 = local_a8;
          local_a8[0] = 0;
          goto LAB_033237e4;
        }
        plVar6 = (long *)(local_90 & 0xfffffffffffffffe);
        plVar1 = plVar6 + 1;
        do {
          cVar4 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar18) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        local_a8[0] = 0;
        FUN_03326184(param_1,&local_a0,param_2[3],local_a8);
        do {
          iVar10 = (int)*plVar1;
          cVar4 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar18) {
            *(int *)plVar1 = iVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        goto LAB_03323674;
      }
      goto LAB_033237cc;
    }
    puVar16 = (ulong *)(*(long *)(param_2[3] + 0x218) + lVar17 * 0x18);
    do {
      puVar16 = (ulong *)puVar16[1];
      if (puVar16 == (ulong *)0x0) {
        uVar13 = 0;
        goto LAB_0332377c;
      }
      uVar13 = *puVar16;
    } while (((uint)uVar13 >> 2 & 1) == 0);
    uVar13 = puVar16[(uVar13 >> 1 & 1) + (uVar13 & 1) + 2];
    if ((uVar13 & 1) == 0) goto LAB_0332377c;
    piVar2 = (int *)((uVar13 & 0xfffffffffffffffe) + 8);
    do {
      cVar4 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar18) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar18 = false;
  }
  else {
    puVar16 = *(ulong **)(*(long *)(param_2[3] + 0x218) + lVar17 * 0x18 + 8);
    if (puVar16 != (ulong *)0x0) {
      puVar11 = puVar16;
      do {
        uVar13 = *puVar11;
        if (((uint)uVar13 >> 2 & 1) != 0) {
          uVar13 = puVar11[(uVar13 >> 1 & 1) + (uVar13 & 1) + 2];
          goto LAB_033236ac;
        }
        puVar11 = (ulong *)puVar11[1];
      } while (puVar11 != (ulong *)0x0);
      uVar13 = 0;
LAB_033236ac:
      if ((uVar13 & 1) != 0) {
        plVar6 = (long *)(uVar13 & 0xfffffffffffffffe);
        plVar1 = plVar6 + 1;
        do {
          cVar4 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar18) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        do {
          lVar7 = *plVar1;
          cVar4 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar18) {
            *(int *)plVar1 = (int)lVar7 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((plVar6 != (long *)0x0) && ((int)lVar7 == 1)) {
          (**(code **)(*plVar6 + 8))();
        }
      }
      puVar11 = puVar16;
      if ((*puVar16 & 1) == 0) {
        do {
          puVar11 = (ulong *)puVar11[1];
        } while ((*puVar11 & 1) == 0);
      }
      if ((puVar11[2] & 0x1f) != 7) {
        puVar16 = (ulong *)0x0;
      }
      goto LAB_0332371c;
    }
    uVar13 = 0;
LAB_0332377c:
    bVar18 = true;
  }
  lVar7 = param_2[3];
  puVar12 = (undefined8 *)(*(long *)(lVar7 + 0x218) + lVar17 * 0x18);
  local_80 = *puVar12;
  puStack_78 = (ulong *)puVar12[1];
  local_70 = 0;
  puVar16 = puStack_78;
  if (puStack_78 != (ulong *)0x0) {
    do {
      uVar14 = *puVar16;
      if (((uint)uVar14 >> 2 & 1) != 0) {
        local_70 = puVar16[(uVar14 >> 1 & 1) + (uVar14 & 1) + 2];
        goto LAB_0332381c;
      }
      puVar16 = (ulong *)puVar16[1];
    } while (puVar16 != (ulong *)0x0);
    local_70 = 0;
  }
LAB_0332381c:
  if ((local_70 & 1) == 0) {
    local_88[0] = uVar3 & 0x7fffffff;
    FUN_03326184(param_1,&local_80,lVar7,local_88);
  }
  else {
    plVar6 = (long *)(local_70 & 0xfffffffffffffffe);
    plVar1 = plVar6 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    local_88[0] = uVar3 & 0x7fffffff;
    FUN_03326184(param_1,&local_80,param_2[3],local_88);
    do {
      lVar17 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)lVar17 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar17 == 1)) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
  }
  if (bVar18) {
    return;
  }
  plVar6 = (long *)(uVar13 & 0xfffffffffffffffe);
  plVar1 = plVar6 + 1;
  do {
    lVar17 = *plVar1;
    cVar4 = '\x01';
    bVar18 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar18) {
      *(int *)plVar1 = (int)lVar17 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (plVar6 == (long *)0x0) {
    return;
  }
  if ((int)lVar17 != 1) {
    return;
  }
  lVar17 = *plVar6;
LAB_033238cc:
                    /* WARNING: Could not recover jumptable at 0x033238e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar17 + 8))(plVar6);
  return;
}


