/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0158e974; name: FUN_0158e974
 */


void FUN_0158e974(long param_1)

{
  short *psVar1;
  ulong *puVar2;
  int *piVar3;
  char **ppcVar4;
  undefined8 *puVar5;
  long **pplVar6;
  short sVar7;
  char cVar8;
  char *pcVar9;
  ulong *puVar10;
  bool bVar11;
  int iVar12;
  long lVar13;
  undefined4 uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  short sVar19;
  undefined8 local_108;
  undefined *puStack_100;
  undefined8 local_f8;
  long *local_f0;
  char *local_e8;
  undefined8 uStack_e0;
  long *local_d8;
  long *local_d0;
  char *local_c8;
  char *local_c0;
  long *local_b8;
  long *local_b0;
  ulong local_a8;
  char *local_a0;
  undefined8 local_98;
  long *local_90;
  long *local_88;
  ulong *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  ulong *local_50;
  undefined8 uStack_48;
  
  local_70 = *(undefined8 *)(param_1 + 0x110);
  uStack_68 = *(undefined8 *)(param_1 + 0x118);
  local_60 = *(undefined8 *)(param_1 + 0x120);
  plVar18 = *(long **)(param_1 + 0x128);
  local_58 = plVar18;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x18))(plVar18);
  }
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    local_50 = (ulong *)0x0;
    uStack_48 = 0;
  }
  else {
    (**(code **)(param_1 + 0x10))(&local_50,param_1 + 0x30,&local_70);
    plVar18 = local_58;
  }
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x20))(plVar18);
  }
  if (local_50 != (ulong *)0x0) {
    if (*(short *)((long)local_50 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_50 + 0x1a);
      sVar19 = *(short *)((long)local_50 + 0x1a);
LAB_0158ea24:
      sVar7 = *psVar1;
      if (sVar7 == sVar19) {
        cVar8 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar11) {
          *psVar1 = sVar19 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
        if (cVar8 != '\0') goto LAB_0158ea48;
        bVar11 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0158ea48:
        bVar11 = false;
      }
      if (!bVar11) goto code_r0x0158ea50;
      uVar15 = local_50[2];
      plVar18 = (long *)(uVar15 - 0x28);
      if (uVar15 == 0) goto LAB_0158eb40;
      local_80 = (ulong *)0x0;
      uStack_78 = 0;
      local_c8 = &DAT_94ed70272cac328;
      local_c0 = "Target";
      local_b8 = (long *)0x6;
      local_b0 = (long *)0x0;
      FUN_01315eac(&local_a8,param_1,&local_c8);
      if (local_b0 != (long *)0x0) {
        (**(code **)(*local_b0 + 0x20))();
      }
      if ((char)local_a8 != '\0') {
        local_e8 = local_a0;
        uStack_e0 = local_98;
        local_d8 = local_90;
        local_d0 = local_88;
        if (local_88 != (long *)0x0) {
          (**(code **)(*local_88 + 0x18))();
        }
        if (*(code **)(param_1 + 0x10) == (code *)0x0) {
          local_c8 = (char *)0x0;
          local_c0 = (char *)0x0;
        }
        else {
          (**(code **)(param_1 + 0x10))(&local_c8,param_1 + 0x30,&local_e8);
        }
        FUN_00d0a34c(&local_80,&local_c8);
        pcVar9 = local_c8;
        if (local_c8 != (char *)0x0) {
          psVar1 = (short *)(local_c8 + 0x18);
          do {
            sVar19 = *psVar1;
            cVar8 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar11) {
              *psVar1 = sVar19 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (sVar19 == 1) {
            piVar3 = (int *)(local_c8 + 0x1c);
            do {
              iVar12 = *piVar3;
              cVar8 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar11) {
                *piVar3 = -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (iVar12 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar16 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar16;
              local_108 = *(undefined8 *)pcVar9;
              FUN_00c44438(lVar16 + 0x8040,&local_108);
            }
          }
          else if (sVar19 == 0) goto LAB_0158eb60;
        }
        if (local_d0 != (long *)0x0) {
          (**(code **)(*local_d0 + 0x20))();
        }
        if ((char)local_a8 != '\0') {
          if (local_88 != (long *)0x0) {
            (**(code **)(*local_88 + 0x20))();
          }
          local_a8 = local_a8 & 0xffffffffffffff00;
        }
      }
      if (local_80 != (ulong *)0x0) {
        if (*(short *)((long)local_80 + 0x1a) != 0) {
          psVar1 = (short *)((long)local_80 + 0x1a);
          sVar19 = *(short *)((long)local_80 + 0x1a);
          do {
            sVar7 = *psVar1;
            if (sVar7 == sVar19) {
              cVar8 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar11) {
                *psVar1 = sVar19 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
              if (cVar8 != '\0') goto LAB_0158ecd8;
              bVar11 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_0158ecd8:
              bVar11 = false;
            }
            if (bVar11) {
              uVar17 = local_80[2];
              if (uVar17 == 0) goto LAB_0158ee84;
              lVar13 = FUN_01104bd8(uVar17 + 0xe0,&local_a8);
              local_108 = 0x83f932aa5abe94ed;
              puStack_100 = &DAT_03c3caca;
              local_f8 = 4;
              local_f0 = (long *)0x0;
              lVar16 = uVar17 + 0xd0;
              if (lVar13 != 0) {
                lVar16 = lVar13 + 0x128;
              }
              FUN_01315eac(&local_a8,param_1,&local_108);
              if (((*PTR_DAT_047d3e28 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar12 != 0)) {
                FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3e28);
              }
              bVar11 = (char)local_a8 != '\0';
              ppcVar4 = (char **)PTR_DAT_047d3e30;
              if (bVar11) {
                ppcVar4 = &local_a0;
              }
              local_c8 = *ppcVar4;
              puVar5 = (undefined8 *)(PTR_DAT_047d3e30 + 8);
              if (bVar11) {
                puVar5 = &local_98;
              }
              local_c0 = (char *)*puVar5;
              pplVar6 = (long **)(PTR_DAT_047d3e30 + 0x10);
              if (bVar11) {
                pplVar6 = &local_90;
              }
              local_b8 = *pplVar6;
              pplVar6 = (long **)(PTR_DAT_047d3e30 + 0x18);
              if (bVar11) {
                pplVar6 = &local_88;
              }
              local_b0 = *pplVar6;
              if (local_b0 != (long *)0x0) {
                (**(code **)(*local_b0 + 0x18))();
              }
              if ((char)local_a8 != '\0') {
                if (local_88 != (long *)0x0) {
                  (**(code **)(*local_88 + 0x20))();
                }
                local_a8 = local_a8 & 0xffffffffffffff00;
              }
              if (local_f0 != (long *)0x0) {
                (**(code **)(*local_f0 + 0x20))();
              }
              if (*local_c0 == '\0') {
                FUN_00df6ee8(plVar18,lVar16);
              }
              else {
                FUN_01df7a00(plVar18,lVar16,&local_c8);
              }
              lVar16 = FUN_0120fc08(uVar15 + 0xe0,&local_a8);
              if (lVar16 != 0) {
                local_a8 = 0xb7857147cef90bb1;
                local_a0 = "PropagateState";
                local_98 = 0xe;
                local_90 = (long *)0x0;
                uVar15 = FUN_01470908(param_1,&local_a8);
                uVar14 = 0;
                if ((uVar15 & 0xff) != 0) {
                  uVar14 = (undefined4)(uVar15 >> 0x20);
                }
                if (local_90 != (long *)0x0) {
                  (**(code **)(*local_90 + 0x20))();
                }
                *(undefined4 *)(lVar16 + 0x228) = uVar14;
              }
              if (local_b0 != (long *)0x0) {
                (**(code **)(*local_b0 + 0x20))();
              }
              (**(code **)(*(long *)(uVar17 - 0x28) + 0x60))((long *)(uVar17 - 0x28));
              break;
            }
            sVar19 = sVar7;
          } while (sVar7 != 0);
          if (local_80 == (ulong *)0x0) goto LAB_0158eb28;
        }
LAB_0158ee84:
        puVar10 = local_80;
        puVar2 = local_80 + 3;
        do {
          sVar19 = (short)*puVar2;
          cVar8 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar11) {
            *(short *)puVar2 = sVar19 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (sVar19 == 1) {
          piVar3 = (int *)((long)local_80 + 0x1c);
          do {
            iVar12 = *piVar3;
            cVar8 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar11) {
              *piVar3 = -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (iVar12 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar16 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar16;
            local_a8 = *puVar10;
            FUN_00c44438(lVar16 + 0x8040,&local_a8);
          }
        }
        else if (sVar19 == 0) goto LAB_0158eb60;
      }
LAB_0158eb28:
      (**(code **)(*plVar18 + 0x60))(plVar18);
LAB_0158eb3c:
      if (local_50 == (ulong *)0x0) {
        return;
      }
    }
LAB_0158eb40:
    puVar10 = local_50;
    puVar2 = local_50 + 3;
    do {
      sVar19 = (short)*puVar2;
      cVar8 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar11) {
        *(short *)puVar2 = sVar19 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar19 == 1) {
      piVar3 = (int *)((long)local_50 + 0x1c);
      do {
        iVar12 = *piVar3;
        cVar8 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar11) {
          *piVar3 = -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar12 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_a8 = *puVar10;
        FUN_00c44438(lVar16 + 0x8040,&local_a8);
      }
    }
    else if (sVar19 == 0) {
LAB_0158eb60:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
code_r0x0158ea50:
  sVar19 = sVar7;
  if (sVar7 == 0) goto LAB_0158eb3c;
  goto LAB_0158ea24;
}


