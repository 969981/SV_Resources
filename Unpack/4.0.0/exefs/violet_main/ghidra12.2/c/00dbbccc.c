/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dbbccc; name: FUN_00dbbccc
 */


void FUN_00dbbccc(long param_1,long *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  long *plVar17;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  long *local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  local_60 = (long *)*param_2;
  if (local_60 != (long *)0x0) {
    lVar15 = local_60[6];
    if (*(long *)(lVar15 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 0) {
      uVar16 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      *(undefined8 *)(lVar15 + 8) = uVar16;
      *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  FUN_00dbc56c(param_1 + 0x40,&local_60);
  if (local_60 != (long *)0x0) {
    lVar15 = local_60[6];
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar15 + 0x10) = 0;
      (**(code **)(*local_60 + 0x50))();
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  lVar15 = *(long *)(param_1 + 0x1c8);
  *(undefined1 *)(param_1 + 0x448) = 1;
  for (; (lVar15 != 0 && (lVar15 = *(long *)(lVar15 + 0x10), lVar15 != 0));
      lVar15 = *(long *)(lVar15 + 0x1a0)) {
    *(undefined1 *)(lVar15 + 0x420) = 1;
  }
  uVar11 = *(ulong *)(param_1 + 0x2d8);
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    plVar17 = (long *)*param_2;
    uVar9 = plVar17[0x6d];
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & uVar9;
    }
    else if (uVar9 < uVar11) {
      uVar13 = uVar9;
    }
    else {
      uVar13 = 0;
      if (uVar11 != 0) {
        uVar13 = uVar9 / uVar11;
      }
      uVar13 = uVar9 - uVar13 * uVar11;
    }
    plVar14 = *(long **)(*(long *)(param_1 + 0x2d0) + uVar13 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar14[1] == uVar9) {
            if (plVar14[2] == uVar9) goto LAB_00dbc1cc;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar13) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar14[1];
          if (uVar12 == uVar9) {
            if (plVar14[2] == uVar9) goto LAB_00dbc1cc;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar6 = 0;
              if (uVar11 != 0) {
                uVar6 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar6 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
LAB_00dbbd68:
  if ((*(char *)(param_1 + 0x440) == '\x02') && (*(long *)(param_1 + 0x490) != 0)) {
    if (((*PTR_DAT_047d89c8 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d89c8), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d9110,PTR_DAT_047d89d0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d89c8);
    }
    lVar15 = *(long *)PTR_DAT_047d89d0;
    *(long *)PTR_DAT_047d89d8 = lVar15;
    uVar16 = *(undefined8 *)(lVar15 + 0x38);
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    FUN_00c43ef0(&local_58,param_1 + 0x30);
    local_80 = (undefined8 *)0x0;
    uStack_78 = 0;
    if (local_58[2] == param_1 + 0x28) {
      FUN_00e29918(&local_80,&local_58);
    }
    puVar7 = local_58;
    if (local_58 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_58 + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_58 + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar15 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar15;
          local_48 = *puVar7;
          FUN_00c44438(lVar15 + 0x8040,&local_48);
        }
      }
      else if (sVar3 == 0) goto LAB_00dbc004;
    }
    param_2 = (long *)*param_2;
    (**(code **)(*param_2 + 0x18))(&local_58,param_2);
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    plVar17 = (long *)0x0;
    if (param_2 != (long *)0x0) {
      plVar17 = param_2 + 5;
    }
    if ((long *)local_58[2] == plVar17) {
      FUN_00cbc6dc(&local_70,&local_58);
    }
    puVar7 = local_58;
    if (local_58 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_58 + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_58 + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar15 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar15;
          local_48 = *puVar7;
          FUN_00c44438(lVar15 + 0x8040,&local_48);
        }
      }
      else if (sVar3 == 0) goto LAB_00dbc004;
    }
    FUN_00dbd530(uVar16,&local_80);
    puVar7 = local_70;
    if (local_70 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_70 + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_70 + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar15 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar15;
          local_58 = (undefined8 *)*puVar7;
          FUN_00c44438(lVar15 + 0x8040,&local_58);
        }
      }
      else if (sVar3 == 0) goto LAB_00dbc004;
    }
    puVar7 = local_80;
    if (local_80 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_80 + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_80 + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar15 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar15;
          local_58 = (undefined8 *)*puVar7;
          FUN_00c44438(lVar15 + 0x8040,&local_58);
        }
      }
      else if (sVar3 == 0) {
LAB_00dbc004:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  return;
LAB_00dbc1cc:
  lVar15 = plVar14[3];
  if (lVar15 != 0) {
    (**(code **)(*plVar17 + 0x18))(&local_80,plVar17);
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    plVar14 = (long *)0x0;
    if (plVar17 != (long *)0x0) {
      plVar14 = plVar17 + 5;
    }
    if ((long *)local_80[2] == plVar14) {
      FUN_00cbc6dc(&local_58,&local_80);
    }
    puVar7 = local_80;
    if (local_80 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_80 + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_80 + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_48 = *puVar7;
          FUN_00c44438(lVar10 + 0x8040,&local_48);
        }
      }
      else if (sVar3 == 0) goto LAB_00dbc004;
    }
    FUN_00ca1a48(lVar15 + 0x70,&local_58);
    puVar7 = local_58;
    if (local_58 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_58 + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_58 + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar15 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar15;
          local_80 = (undefined8 *)*puVar7;
          FUN_00c44438(lVar15 + 0x8040,&local_80);
        }
      }
      else if (sVar3 == 0) goto LAB_00dbc004;
    }
  }
  goto LAB_00dbbd68;
}


