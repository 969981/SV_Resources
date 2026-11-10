/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0115cfb8; name: FUN_0115cfb8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0115cfb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  short sVar4;
  bool bVar5;
  char cVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  bool bVar11;
  int iVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  ulong uVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  float fVar24;
  float fVar25;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar26 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 *local_d0;
  undefined8 uStack_c8;
  undefined8 *local_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 *local_90;
  undefined8 local_88;
  long *local_80;
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 local_68;
  
  puVar7 = PTR_DAT_047d88d0;
  if (((*PTR_DAT_047d88d0 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d88d0);
  }
  puVar8 = PTR_DAT_047d88d8;
  lVar16 = *(long *)PTR_DAT_047d88d8;
  *(long *)PTR_DAT_047d88e0 = lVar16;
  plVar19 = *(long **)(lVar16 + 8);
  if (((DAT_04865a38 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar16 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar16 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = plVar19;
  *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
  plVar13 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,0x3a0,8);
  if (plVar13 == (long *)0x0) {
    (**(code **)(*plVar19 + 0xe8))(plVar19);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  FUN_01001588();
  puVar9 = PTR_DAT_047dd498;
  plVar13[5] = (long)(PTR_DAT_047dd498 + 0xd8);
  plVar13[4] = (long)(puVar9 + 0x88);
  *plVar13 = (long)(puVar9 + 0x10);
  *(undefined2 *)(plVar13 + 0x73) = 0x100;
  local_c0 = (undefined8 *)0x0;
  uStack_b8 = 0;
  uVar20 = plVar13[7];
  if (((*PTR_DAT_047d3908 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3908);
  }
  uVar14 = *(undefined8 *)PTR_DAT_047d3910;
  *(undefined8 *)PTR_DAT_047d3918 = uVar14;
  FUN_00c44204(&local_90,uVar14,uVar20);
  puVar10 = local_c0;
  local_c0 = (undefined8 *)0x0;
  if (local_90 == (undefined8 *)0x0) {
    if (puVar10 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar10 + 3);
      do {
        sVar4 = *psVar1;
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar11) {
          *psVar1 = sVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)puVar10 + 0x1c);
        do {
          iVar12 = *piVar3;
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar11) {
            *piVar3 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar12 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar17 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar17;
          local_80 = (long *)*puVar10;
          FUN_00c44438(lVar17 + 0x8040,&local_80);
        }
      }
      else if (sVar4 == 0) goto LAB_0115d518;
    }
    uVar20 = 0;
  }
  else {
    if (puVar10 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar10 + 3);
      do {
        sVar4 = *psVar1;
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar11) {
          *psVar1 = sVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)puVar10 + 0x1c);
        do {
          iVar12 = *piVar3;
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar11) {
            *piVar3 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar12 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar17 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar17;
          local_80 = (long *)*puVar10;
          FUN_00c44438(lVar17 + 0x8040,&local_80);
        }
      }
      else if (sVar4 == 0) goto LAB_0115d518;
    }
    local_c0 = local_90;
    local_90 = (undefined8 *)0x0;
  }
  puVar10 = local_90;
  uStack_b8 = uVar20;
  if (local_90 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_90 + 3);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar11) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_90 + 0x1c);
      do {
        iVar12 = *piVar3;
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar11) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar12 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar17 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar17;
        local_80 = (long *)*puVar10;
        FUN_00c44438(lVar17 + 0x8040,&local_80);
      }
    }
    else if (sVar4 == 0) goto LAB_0115d518;
  }
  local_80 = (long *)0x0;
  local_78 = 0;
  if ((long *)local_c0[2] == plVar13 + 5) {
    FUN_00ec4fc4(&local_80,&local_c0);
  }
  puVar10 = local_c0;
  if (local_c0 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_c0 + 3);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar11) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_c0 + 0x1c);
      do {
        iVar12 = *piVar3;
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar11) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar12 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar17 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar17;
        local_90 = (undefined8 *)*puVar10;
        FUN_00c44438(lVar17 + 0x8040,&local_90);
      }
    }
    else if (sVar4 == 0) goto LAB_0115d518;
  }
  if (local_80 == (long *)0x0) {
    plVar13[8] = 0;
    lVar17 = 0;
  }
  else {
    plVar13[8] = *local_80;
    lVar17 = *local_80;
  }
  plVar13[9] = lVar17;
  if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d88d0);
  }
  lVar23 = *(long *)puVar8;
  plVar18 = (long *)(lVar23 + 0x28);
  *(long *)PTR_DAT_047d88e0 = lVar23;
  lVar21 = *plVar18;
  lVar17 = nn::os::GetCurrentThread();
  if (lVar17 != lVar21) {
    lVar17 = nn::os::GetCurrentThread();
LAB_0115d180:
    if (*plVar18 == 0) goto code_r0x0115d188;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar23 + 0x30));
    do {
      if (*plVar18 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar23 + 0x30));
          while (*plVar18 == 0) {
            cVar6 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar11) {
              *plVar18 = lVar17;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_0115d190;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar11) {
        *plVar18 = lVar17;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_0115d190:
    bVar11 = false;
    goto LAB_0115d194;
  }
  plVar18 = (long *)0x0;
  bVar11 = true;
LAB_0115d194:
  if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d88d0);
  }
  uVar22 = *(undefined8 *)puVar8;
  *(undefined8 *)PTR_DAT_047d88e0 = uVar22;
  local_c0 = (undefined8 *)0x0;
  uStack_b8 = 0;
  FUN_00ec4cb4(&local_c0,&local_80);
  uVar14 = local_78;
  local_90 = (undefined8 *)0x0;
  local_88 = 0;
  if (((*PTR_DAT_047d3908 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3908);
  }
  uVar15 = *(undefined8 *)PTR_DAT_047d3910;
  *(undefined8 *)PTR_DAT_047d3918 = uVar15;
  FUN_00c44204(&local_70,uVar15,uVar14);
  puVar10 = local_90;
  local_90 = (undefined8 *)0x0;
  if (local_70 == (undefined8 *)0x0) {
    if (puVar10 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar10 + 3);
      do {
        sVar4 = *psVar1;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)puVar10 + 0x1c);
        do {
          iVar12 = *piVar3;
          cVar6 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar5) {
            *piVar3 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar12 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar17 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar17;
          local_68 = *puVar10;
          FUN_00c44438(lVar17 + 0x8040,&local_68);
        }
      }
      else if (sVar4 == 0) goto LAB_0115d518;
    }
    uVar14 = 0;
  }
  else {
    if (puVar10 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar10 + 3);
      do {
        sVar4 = *psVar1;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)puVar10 + 0x1c);
        do {
          iVar12 = *piVar3;
          cVar6 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar5) {
            *piVar3 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar12 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar17 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar17;
          local_68 = *puVar10;
          FUN_00c44438(lVar17 + 0x8040,&local_68);
        }
      }
      else if (sVar4 == 0) goto LAB_0115d518;
    }
    local_90 = local_70;
    local_70 = (undefined8 *)0x0;
  }
  puVar10 = local_70;
  local_88 = uVar14;
  if (local_70 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_70 + 3);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_70 + 0x1c);
      do {
        iVar12 = *piVar3;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar5) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar12 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar17 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar17;
        local_68 = *puVar10;
        FUN_00c44438(lVar17 + 0x8040,&local_68);
      }
    }
    else if (sVar4 == 0) goto LAB_0115d518;
  }
  FUN_01003b00(uVar22,plVar13 + 0xc,&local_c0,&local_90,0);
  puVar10 = local_90;
  if (local_90 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_90 + 3);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_90 + 0x1c);
      do {
        iVar12 = *piVar3;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar5) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar12 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar17 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar17;
        local_68 = *puVar10;
        FUN_00c44438(lVar17 + 0x8040,&local_68);
      }
    }
    else if (sVar4 == 0) goto LAB_0115d518;
  }
  puVar10 = local_c0;
  if (local_c0 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_c0 + 3);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_c0 + 0x1c);
      do {
        iVar12 = *piVar3;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar5) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar12 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar17 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar17;
        local_90 = (undefined8 *)*puVar10;
        FUN_00c44438(lVar17 + 0x8040,&local_90);
      }
    }
    else if (sVar4 == 0) goto LAB_0115d518;
  }
  if (!bVar11) {
    *plVar18 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar18 + 1));
  }
  plVar18 = local_80;
  if (local_80 != (long *)0x0) {
    plVar2 = local_80 + 3;
    do {
      sVar4 = (short)*plVar2;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar11) {
        *(short *)plVar2 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_80 + 0x1c);
      do {
        iVar12 = *piVar3;
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar11) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar12 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar17 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar17;
        local_c0 = (undefined8 *)*plVar18;
        FUN_00c44438(lVar17 + 0x8040,&local_c0);
      }
    }
    else if (sVar4 == 0) goto LAB_0115d518;
  }
  FUN_01001c1c(plVar13);
  *(undefined4 *)(plVar13 + 3) = 0x803a0;
  plVar13[1] = (long)plVar19;
  plVar13[2] = (long)plVar13;
  *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
  lVar16 = plVar13[6];
  if (*(long *)(lVar16 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_object != nullptr","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x3d);
  }
  psVar1 = (short *)(lVar16 + 0x1a);
  do {
    sVar4 = *psVar1;
    cVar6 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar11) {
      *psVar1 = sVar4 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar4 == 0) {
    uVar14 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
    *(undefined8 *)(lVar16 + 8) = uVar14;
    *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
  }
  else if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x58,"Reference counter overflows.");
  }
  if ((plVar13[8] == 0) && (plVar13[9] == 0)) {
    lVar16 = plVar13[6];
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar11) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*plVar13 + 0x50))(plVar13);
    }
    else if (sVar4 == 0) goto LAB_0115d564;
    plVar13 = (long *)0x0;
  }
  plVar19 = *(long **)(param_1 + 0x1d0);
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  if (plVar19 != (long *)0x0) {
    lVar16 = plVar19[6];
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar11) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*plVar19 + 0x50))();
    }
    else if (sVar4 == 0) {
LAB_0115d564:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  *(long **)(param_1 + 0x1d0) = plVar13;
  plVar19 = (long *)(param_1 + 0x1d0);
  FUN_00f8d3a8(plVar13,0);
  FUN_00f8e620(*(undefined8 *)(param_1 + 0x1d0),1);
  auVar26 = *(undefined1 (*) [16])(param_1 + 0x130);
  fVar24 = auVar26._0_4_;
  fVar31 = (float)*(undefined8 *)(param_1 + 0x140);
  fVar27 = auVar26._4_4_;
  fVar32 = (float)((ulong)*(undefined8 *)(param_1 + 0x140) >> 0x20);
  fVar29 = auVar26._8_4_;
  fVar33 = (float)*(undefined8 *)(param_1 + 0x148);
  if (((0.0 < fVar33 - fVar29) && (0.0 < fVar31 - fVar24)) && (0.0 < fVar32 - fVar27)) {
    lVar16 = *plVar19;
    fVar25 = fVar31 - fVar24;
    fVar28 = fVar32 - fVar27;
    local_c0 = (undefined8 *)CONCAT44(fVar28,fVar25);
    fVar30 = fVar33 - fVar29;
    local_a0 = CONCAT44((fVar27 + fVar32) * 0.5,(fVar24 + fVar31) * 0.5);
    uStack_98 = (ulong)(uint)((fVar29 + fVar33) * 0.5);
    uStack_b8 = (ulong)(uint)fVar30;
    uStack_a8 = _UNK_03cabe58;
    uStack_b0 = _DAT_03cabe50;
    if ((((*(ulong *)(lVar16 + 0x60) < 0xfffffffffffffffe) &&
         ((*(long *)(lVar16 + 0x40) != 0 || (*(long *)(lVar16 + 0x48) != 0)))) &&
        (auVar26._0_4_ = fVar25 * fVar25 + fVar28 * fVar28, auVar26._4_4_ = fVar30 * fVar30 + 0.0,
        auVar26._8_4_ = fVar25 * fVar25 + fVar28 * fVar28, auVar26._12_4_ = fVar30 * fVar30 + 0.0,
        auVar26 = NEON_ext(auVar26,auVar26,4,1), 1.1920929e-07 < auVar26._0_4_ + auVar26._4_4_)) &&
       (*(char *)(lVar16 + 0x68) == '\0')) {
      if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar12 != 0)) {
        FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d88d0);
      }
      uVar14 = *(undefined8 *)PTR_DAT_047d88d8;
      *(undefined8 *)PTR_DAT_047d88e0 = uVar14;
      FUN_00dc21b8(uVar14,*(undefined8 *)(lVar16 + 0x40),*(undefined8 *)(lVar16 + 0x48),
                   *(undefined8 *)(lVar16 + 0x60),&local_c0);
    }
  }
  local_d0 = (undefined8 *)0x0;
  uStack_c8 = 0;
  FUN_01160880(&local_d0,param_3);
  FUN_0115e024(param_1,&local_d0);
  puVar10 = local_d0;
  if (local_d0 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_d0 + 3);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar11) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_d0 + 0x1c);
      do {
        iVar12 = *piVar3;
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar11) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar12 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_c0 = (undefined8 *)*puVar10;
        FUN_00c44438(lVar16 + 0x8040,&local_c0);
      }
    }
    else if (sVar4 == 0) {
LAB_0115d518:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (*(char *)(*plVar19 + 0x69) == '\0') {
    bVar11 = *(char *)(*plVar19 + 0x6a) != '\0';
  }
  else {
    bVar11 = true;
  }
  *(bool *)(param_1 + 0x1e0) = bVar11;
  return plVar19;
code_r0x0115d188:
  cVar6 = '\x01';
  bVar11 = (bool)ExclusiveMonitorPass(plVar18,0x10);
  if (bVar11) {
    *plVar18 = lVar17;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_0115d190;
  goto LAB_0115d180;
}


