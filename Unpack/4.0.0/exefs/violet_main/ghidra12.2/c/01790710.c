/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01790710; name: FUN_01790710
 */


/* WARNING: Removing unreachable block (ram,0x01790c98) */
/* WARNING: Removing unreachable block (ram,0x01790c9c) */
/* WARNING: Removing unreachable block (ram,0x01790ca4) */
/* WARNING: Removing unreachable block (ram,0x01790cac) */
/* WARNING: Removing unreachable block (ram,0x01791224) */
/* WARNING: Removing unreachable block (ram,0x0179122c) */
/* WARNING: Removing unreachable block (ram,0x01791230) */
/* WARNING: Removing unreachable block (ram,0x01791238) */
/* WARNING: Removing unreachable block (ram,0x01791240) */
/* WARNING: Removing unreachable block (ram,0x017917e8) */
/* WARNING: Removing unreachable block (ram,0x017917f8) */
/* WARNING: Removing unreachable block (ram,0x01791250) */
/* WARNING: Removing unreachable block (ram,0x01790cb4) */
/* WARNING: Removing unreachable block (ram,0x01790cb8) */

long FUN_01790710(long *param_1,char *param_2,undefined8 param_3,long param_4,undefined8 *param_5,
                 undefined8 *param_6)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 *local_f0;
  undefined8 local_e8;
  long *local_e0;
  undefined1 local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  long *local_c0;
  undefined1 local_b8;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  
  if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar11 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar11 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = param_1;
  *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
  lVar12 = (**(code **)(*param_1 + 0x10))(param_1,0xe0,8);
  if (lVar12 == 0) {
    (**(code **)(*param_1 + 0xe8))(param_1);
    goto LAB_01791874;
  }
  cVar5 = *param_2;
  local_b0 = (undefined8 *)0x0;
  uStack_a8 = 0;
  FUN_00c43ef0(&local_b0,param_4);
  local_a0 = *(undefined8 *)(param_4 + 0x10);
  local_98 = *(undefined1 *)(param_4 + 0x18);
  plVar15 = (long *)*param_5;
  (**(code **)(*plVar15 + 0x18))(&local_80,plVar15);
  local_90 = (undefined8 *)0x0;
  local_88 = 0;
  plVar3 = (long *)0x0;
  if (plVar15 != (long *)0x0) {
    plVar3 = plVar15 + 5;
  }
  if ((long *)local_80[2] == plVar3) {
    FUN_01791904(&local_90,&local_80);
  }
  puVar9 = local_80;
  puVar8 = PTR_DAT_047d3910;
  if (local_80 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_80 + 3);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar2 = (int *)((long)local_80 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)puVar8;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_68 = (undefined8 *)*puVar9;
        FUN_00c44438(lVar14 + 0x8040,&local_68);
      }
    }
    else if (sVar4 == 0) goto LAB_01791874;
  }
  local_d0 = (undefined8 *)0x0;
  local_c8 = 0;
  do {
    uVar16 = local_88;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(&local_88,0x10);
    if (bVar7) {
      local_88 = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (((*PTR_DAT_047d3908 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3908);
  }
  uVar13 = *(undefined8 *)puVar8;
  *(undefined8 *)PTR_DAT_047d3918 = uVar13;
  FUN_00c44204(&local_68,uVar13,uVar16);
  puVar9 = local_90;
  local_90 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar9 + 3);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar2 = (int *)((long)puVar9 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)puVar8;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_80 = (undefined8 *)*puVar9;
        FUN_00c44438(lVar14 + 0x8040,&local_80);
      }
    }
    else if (sVar4 == 0) goto LAB_01791874;
  }
  puVar9 = local_d0;
  local_d0 = (undefined8 *)0x0;
  if (local_68 == (undefined8 *)0x0) {
    if (puVar9 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar9 + 3);
      do {
        sVar4 = *psVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar4 == 1) {
        piVar2 = (int *)((long)puVar9 + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar7) {
            *piVar2 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar14 = *(long *)puVar8;
          *(long *)PTR_DAT_047d3918 = lVar14;
          local_80 = (undefined8 *)*puVar9;
          FUN_00c44438(lVar14 + 0x8040,&local_80);
          uVar16 = 0;
          goto LAB_01790894;
        }
      }
      else if (sVar4 == 0) goto LAB_01791874;
    }
    uVar16 = 0;
  }
  else {
    if (puVar9 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar9 + 3);
      do {
        sVar4 = *psVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar4 == 1) {
        piVar2 = (int *)((long)puVar9 + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar7) {
            *piVar2 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar14 = *(long *)puVar8;
          *(long *)PTR_DAT_047d3918 = lVar14;
          local_80 = (undefined8 *)*puVar9;
          FUN_00c44438(lVar14 + 0x8040,&local_80);
        }
      }
      else if (sVar4 == 0) goto LAB_01791874;
    }
    local_d0 = local_68;
    local_68 = (undefined8 *)0x0;
  }
LAB_01790894:
  puVar9 = local_68;
  local_c8 = uVar16;
  if (local_68 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_68 + 3);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar2 = (int *)((long)local_68 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)puVar8;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_80 = (undefined8 *)*puVar9;
        FUN_00c44438(lVar14 + 0x8040,&local_80);
      }
    }
    else if (sVar4 == 0) goto LAB_01791874;
  }
  puVar9 = local_90;
  if (local_90 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_90 + 3);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar2 = (int *)((long)local_90 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)puVar8;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_80 = (undefined8 *)*puVar9;
        FUN_00c44438(lVar14 + 0x8040,&local_80);
      }
    }
    else if (sVar4 == 0) goto LAB_01791874;
  }
  local_b8 = 0;
  local_c0 = (long *)0x0;
  if (plVar15 != (long *)0x0) {
    local_c0 = plVar15 + 8;
  }
  plVar15 = (long *)*param_6;
  (**(code **)(*plVar15 + 0x18))(&local_80,plVar15);
  local_90 = (undefined8 *)0x0;
  local_88 = 0;
  plVar3 = (long *)0x0;
  if (plVar15 != (long *)0x0) {
    plVar3 = plVar15 + 5;
  }
  if ((long *)local_80[2] == plVar3) {
    do {
      uVar16 = local_78;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(&local_78,0x10);
      if (bVar7) {
        local_78 = 0;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (((*PTR_DAT_047d3908 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3908);
    }
    uVar13 = *(undefined8 *)puVar8;
    *(undefined8 *)PTR_DAT_047d3918 = uVar13;
    FUN_00c44204(&local_70,uVar13,uVar16);
    puVar9 = local_80;
    local_80 = (undefined8 *)0x0;
    if (puVar9 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar9 + 3);
      do {
        sVar4 = *psVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar4 == 1) {
        piVar2 = (int *)((long)puVar9 + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar7) {
            *piVar2 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar14 = *(long *)puVar8;
          *(long *)PTR_DAT_047d3918 = lVar14;
          local_68 = (undefined8 *)*puVar9;
          FUN_00c44438(lVar14 + 0x8040,&local_68);
        }
      }
      else if (sVar4 == 0) goto LAB_01791874;
    }
    puVar9 = local_90;
    if (local_70 == (undefined8 *)0x0) {
      FUN_01792444(&local_90);
    }
    else {
      local_90 = (undefined8 *)0x0;
      if (puVar9 != (undefined8 *)0x0) {
        psVar1 = (short *)(puVar9 + 3);
        do {
          sVar4 = *psVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar4 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar4 == 1) {
          piVar2 = (int *)((long)puVar9 + 0x1c);
          do {
            iVar10 = *piVar2;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar7) {
              *piVar2 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar14 = *(long *)puVar8;
            *(long *)PTR_DAT_047d3918 = lVar14;
            local_68 = (undefined8 *)*puVar9;
            FUN_00c44438(lVar14 + 0x8040,&local_68);
          }
        }
        else if (sVar4 == 0) goto LAB_01791874;
      }
      local_90 = local_70;
      local_70 = (undefined8 *)0x0;
      local_88 = uVar16;
    }
  }
  puVar9 = local_80;
  if (local_80 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_80 + 3);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar2 = (int *)((long)local_80 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)puVar8;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_68 = (undefined8 *)*puVar9;
        FUN_00c44438(lVar14 + 0x8040,&local_68);
      }
    }
    else if (sVar4 == 0) goto LAB_01791874;
  }
  local_f0 = (undefined8 *)0x0;
  local_e8 = 0;
  do {
    uVar16 = local_88;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(&local_88,0x10);
    if (bVar7) {
      local_88 = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (((*PTR_DAT_047d3908 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3908);
  }
  uVar13 = *(undefined8 *)puVar8;
  *(undefined8 *)PTR_DAT_047d3918 = uVar13;
  FUN_00c44204(&local_68,uVar13,uVar16);
  puVar9 = local_90;
  local_90 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar9 + 3);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar2 = (int *)((long)puVar9 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)puVar8;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_80 = (undefined8 *)*puVar9;
        FUN_00c44438(lVar14 + 0x8040,&local_80);
      }
    }
    else if (sVar4 == 0) goto LAB_01791874;
  }
  puVar9 = local_f0;
  local_f0 = (undefined8 *)0x0;
  if (local_68 == (undefined8 *)0x0) {
    if (puVar9 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar9 + 3);
      do {
        sVar4 = *psVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar4 == 1) {
        piVar2 = (int *)((long)puVar9 + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar7) {
            *piVar2 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar10 == -1) {
          uVar16 = 0;
          goto LAB_017909f8;
        }
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)puVar8;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_80 = (undefined8 *)*puVar9;
        FUN_00c44438(lVar14 + 0x8040,&local_80);
      }
      else if (sVar4 == 0) goto LAB_01791874;
    }
    uVar16 = 0;
  }
  else {
    if (puVar9 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar9 + 3);
      do {
        sVar4 = *psVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar4 == 1) {
        piVar2 = (int *)((long)puVar9 + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar7) {
            *piVar2 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar14 = *(long *)puVar8;
          *(long *)PTR_DAT_047d3918 = lVar14;
          local_80 = (undefined8 *)*puVar9;
          FUN_00c44438(lVar14 + 0x8040,&local_80);
        }
      }
      else if (sVar4 == 0) goto LAB_01791874;
    }
    local_f0 = local_68;
    local_68 = (undefined8 *)0x0;
  }
LAB_017909f8:
  puVar9 = local_68;
  local_e8 = uVar16;
  if (local_68 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_68 + 3);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar2 = (int *)((long)local_68 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)puVar8;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_80 = (undefined8 *)*puVar9;
        FUN_00c44438(lVar14 + 0x8040,&local_80);
      }
    }
    else if (sVar4 == 0) goto LAB_01791874;
  }
  puVar9 = local_90;
  if (local_90 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_90 + 3);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar2 = (int *)((long)local_90 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)puVar8;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_80 = (undefined8 *)*puVar9;
        FUN_00c44438(lVar14 + 0x8040,&local_80);
      }
    }
    else if (sVar4 == 0) goto LAB_01791874;
  }
  local_d8 = 0;
  local_e0 = (long *)0x0;
  if (plVar15 != (long *)0x0) {
    local_e0 = plVar15 + 8;
  }
  FUN_01791c18(lVar12,cVar5 != '\0',param_3,&local_b0,&local_d0,&local_f0);
  puVar9 = local_f0;
  if (local_f0 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_f0 + 3);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar2 = (int *)((long)local_f0 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)puVar8;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_80 = (undefined8 *)*puVar9;
        FUN_00c44438(lVar14 + 0x8040,&local_80);
      }
    }
    else if (sVar4 == 0) goto LAB_01791874;
  }
  puVar9 = local_d0;
  if (local_d0 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_d0 + 3);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar2 = (int *)((long)local_d0 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)puVar8;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_80 = (undefined8 *)*puVar9;
        FUN_00c44438(lVar14 + 0x8040,&local_80);
      }
    }
    else if (sVar4 == 0) goto LAB_01791874;
  }
  puVar9 = local_b0;
  if (local_b0 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_b0 + 3);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar2 = (int *)((long)local_b0 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)puVar8;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_80 = (undefined8 *)*puVar9;
        FUN_00c44438(lVar14 + 0x8040,&local_80);
      }
    }
    else if (sVar4 == 0) {
LAB_01791874:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  *(undefined4 *)(lVar12 + 0x18) = 0x800e0;
  *(long **)(lVar12 + 8) = param_1;
  *(long *)(lVar12 + 0x10) = lVar12;
  *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
  return lVar12;
}


