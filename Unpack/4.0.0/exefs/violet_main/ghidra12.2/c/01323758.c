/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01323758; name: FUN_01323758
 */


/* WARNING: Removing unreachable block (ram,0x01323d40) */
/* WARNING: Removing unreachable block (ram,0x01323d44) */
/* WARNING: Removing unreachable block (ram,0x01323d4c) */
/* WARNING: Removing unreachable block (ram,0x01323d54) */
/* WARNING: Removing unreachable block (ram,0x0132405c) */
/* WARNING: Removing unreachable block (ram,0x01324064) */
/* WARNING: Removing unreachable block (ram,0x01324068) */
/* WARNING: Removing unreachable block (ram,0x01324070) */
/* WARNING: Removing unreachable block (ram,0x01324078) */
/* WARNING: Removing unreachable block (ram,0x013245f0) */
/* WARNING: Removing unreachable block (ram,0x01324600) */
/* WARNING: Removing unreachable block (ram,0x01324080) */
/* WARNING: Removing unreachable block (ram,0x01323d5c) */
/* WARNING: Removing unreachable block (ram,0x01323d60) */

void FUN_01323758(long param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4)

{
  short *psVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  int *piVar5;
  short sVar6;
  char cVar7;
  bool bVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  ulong uVar19;
  short sVar20;
  long lVar21;
  long *plVar22;
  long lVar23;
  undefined8 *puVar24;
  long *plVar25;
  undefined8 *local_e8;
  undefined8 local_e0;
  long *local_d8 [4];
  long *local_b8;
  long *local_a8;
  undefined8 *local_a0;
  undefined8 uStack_98;
  long *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  long *local_78;
  long *local_70;
  undefined8 *local_68;
  
  if (*(int *)(param_1 + 0x90) == 0) {
    *(undefined8 *)(param_1 + 0x98) = *param_2;
    *(undefined8 *)(param_1 + 0xa0) = param_2[1];
    *(undefined8 *)(param_1 + 0xa8) = param_2[2];
    plVar25 = (long *)param_2[3];
    if (plVar25 != (long *)0x0) {
      (**(code **)(*plVar25 + 0x18))(plVar25);
    }
    plVar12 = *(long **)(param_1 + 0xb0);
    *(long **)(param_1 + 0xb0) = plVar25;
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))();
    }
    *(undefined4 *)(param_1 + 0x90) = 1;
    *(undefined4 *)(param_1 + 0xbc) = param_3;
    FUN_00cbf4c0(local_d8,(undefined8 *)(param_1 + 0x98));
    uVar13 = FUN_00f2babc(param_1 + 0x48,1,local_d8,0,param_4);
    if ((uVar13 & 1) == 0) {
      plVar25 = (long *)0x0;
    }
    else {
      plVar25 = *(long **)(param_1 + 0x68);
      if (plVar25 != (long *)0x0) {
        lVar21 = plVar25[6];
        if (*(long *)(lVar21 + 0x10) == 0) goto LAB_013246a4;
        psVar1 = (short *)(lVar21 + 0x1a);
        do {
          sVar20 = *psVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar8) {
            *psVar1 = sVar20 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar20 == 0) {
          uVar15 = (**(code **)**(undefined8 **)(lVar21 + 0x10))();
          *(undefined8 *)(lVar21 + 8) = uVar15;
          *(undefined4 *)(lVar21 + 0x1c) = 0xfffffffe;
        }
        else if (sVar20 == -1) goto LAB_01323e60;
      }
    }
    local_88 = (undefined8 *)0x0;
    local_80 = 0;
    FUN_00c43ef0(&local_88,param_1 + 0x30);
    plVar12 = (long *)PTR_DAT_047d3918;
    puVar10 = PTR_DAT_047d3910;
    puVar9 = PTR_DAT_047d3908;
    local_e8 = (undefined8 *)0x0;
    local_e0 = 0;
    if (local_88[2] == param_1 + 0x28) {
      do {
        uVar15 = local_80;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(&local_80,0x10);
        if (bVar8) {
          local_80 = 0;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      uVar14 = *(undefined8 *)puVar10;
      *plVar12 = uVar14;
      FUN_00c44204(&local_68,uVar14,uVar15);
      puVar24 = local_88;
      local_88 = (undefined8 *)0x0;
      if (puVar24 != (undefined8 *)0x0) {
        psVar1 = (short *)(puVar24 + 3);
        do {
          sVar20 = *psVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar8) {
            *psVar1 = sVar20 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar20 == 1) {
          piVar5 = (int *)((long)puVar24 + 0x1c);
          do {
            iVar11 = *piVar5;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar5,0x10);
            if (bVar8) {
              *piVar5 = -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar11 != -1) {
            if (((*puVar9 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar21 = *(long *)puVar10;
            *plVar12 = lVar21;
            local_a0 = (undefined8 *)*puVar24;
            FUN_00c44438(lVar21 + 0x8040,&local_a0);
          }
        }
        else if (sVar20 == 0) goto LAB_01323d84;
      }
      puVar24 = local_e8;
      if (local_68 == (undefined8 *)0x0) {
        FUN_01324c88(&local_e8);
      }
      else {
        local_e8 = (undefined8 *)0x0;
        if (puVar24 != (undefined8 *)0x0) {
          psVar1 = (short *)(puVar24 + 3);
          do {
            sVar20 = *psVar1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar20 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar20 == 1) {
            piVar5 = (int *)((long)puVar24 + 0x1c);
            do {
              iVar11 = *piVar5;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar5,0x10);
              if (bVar8) {
                *piVar5 = -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar11 != -1) {
              if (((*puVar9 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar21 = *(long *)puVar10;
              *plVar12 = lVar21;
              local_a0 = (undefined8 *)*puVar24;
              FUN_00c44438(lVar21 + 0x8040,&local_a0);
            }
          }
          else if (sVar20 == 0) goto LAB_01323d84;
        }
        local_e8 = local_68;
        local_68 = (undefined8 *)0x0;
        local_e0 = uVar15;
      }
    }
    puVar24 = local_88;
    if (local_88 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_88 + 3);
      do {
        sVar20 = *psVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar20 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar20 == 1) {
        piVar5 = (int *)((long)local_88 + 0x1c);
        do {
          iVar11 = *piVar5;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar8) {
            *piVar5 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar11 != -1) {
          if (((*puVar9 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0))
          {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar21 = *(long *)puVar10;
          *plVar12 = lVar21;
          local_a0 = (undefined8 *)*puVar24;
          FUN_00c44438(lVar21 + 0x8040,&local_a0);
        }
      }
      else if (sVar20 == 0) goto LAB_01323d84;
    }
    if (((*PTR_DAT_047d8c58 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_047d8c58), iVar11 != 0)) {
      FUN_00100190(PTR_LAB_047d9368,PTR_DAT_047d8c60,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c58);
    }
    uVar15 = *(undefined8 *)PTR_DAT_047d8c60;
    *(undefined8 *)PTR_DAT_047d8c68 = uVar15;
    FUN_00cbf5d4(&local_a8,uVar15,plVar25[1]);
    local_a0 = (undefined8 *)0x0;
    uStack_98 = 0;
    FUN_01324700(&local_a0,&local_e8);
    local_90 = local_a8;
    if (local_a8 != (long *)0x0) {
      lVar21 = local_a8[6];
      if (*(long *)(lVar21 + 0x10) == 0) {
LAB_013246a4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar21 + 0x1a);
      do {
        sVar20 = *psVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar20 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar20 == 0) {
        uVar15 = (**(code **)**(undefined8 **)(lVar21 + 0x10))();
        *(undefined8 *)(lVar21 + 8) = uVar15;
        *(undefined4 *)(lVar21 + 0x1c) = 0xfffffffe;
      }
      else if (sVar20 == -1) {
LAB_01323e60:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    plVar22 = (long *)0x0;
    if (local_a8 != (long *)0x0) {
      plVar22 = local_a8 + 0xb;
    }
    if ((*(byte *)((long)plVar25 + 0x6d) & 1) == 0) {
      if ((*(byte *)((long)plVar25 + 0x6c) & 1) == 0) {
        plVar2 = plVar25 + 0xf;
        lVar21 = nn::os::GetCurrentThread();
LAB_01323968:
        if (*plVar2 == 0) goto code_r0x01323970;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar25 + 0x10));
        do {
          if (*plVar2 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(plVar25 + 0x10));
              while (*plVar2 == 0) {
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar8) {
                  *plVar2 = lVar21;
                  cVar7 = ExclusiveMonitorsStatus();
                }
                if (cVar7 == '\0') goto LAB_01323978;
              }
            } while( true );
          }
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar8) {
            *plVar2 = lVar21;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
LAB_01323978:
        if ((*(byte *)((long)plVar25 + 0x6c) & 1) == 0) {
          local_88 = (undefined8 *)0x0;
          local_80 = 0;
          FUN_01324a24(&local_88,&local_a0);
          local_78 = local_90;
          if (local_90 != (long *)0x0) {
            lVar21 = local_90[6];
            if (*(long *)(lVar21 + 0x10) == 0) goto LAB_013246a4;
            psVar1 = (short *)(lVar21 + 0x1a);
            do {
              sVar20 = *psVar1;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar8) {
                *psVar1 = sVar20 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (sVar20 == 0) {
              uVar15 = (**(code **)**(undefined8 **)(lVar21 + 0x10))();
              *(undefined8 *)(lVar21 + 8) = uVar15;
              *(undefined4 *)(lVar21 + 0x1c) = 0xfffffffe;
            }
            else if (sVar20 == -1) goto LAB_01323e60;
          }
          local_70 = plVar22;
          if ((ulong)plVar25[0x1a] < (ulong)plVar25[0x1b]) {
            FUN_01324db0(plVar25 + 0x19,&local_88);
            if (local_78 != (long *)0x0) {
              lVar21 = local_78[6];
              psVar1 = (short *)(lVar21 + 0x1a);
              do {
                sVar20 = *psVar1;
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar8) {
                  *psVar1 = sVar20 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (sVar20 == 1) {
                *(undefined8 *)(lVar21 + 0x10) = 0;
                (**(code **)(*local_78 + 0x50))();
              }
              else if (sVar20 == 0) goto LAB_01323e08;
            }
          }
          else {
            uVar13 = plVar25[0x1d];
            lVar21 = plVar25[0x1a] - plVar25[0x19] >> 4;
            if (0x7ffffffffffffffe < uVar13) {
              uVar13 = 0x7fffffffffffffff;
            }
            uVar3 = lVar21 * -0x71c71c71c71c71c7 + 1;
            if (uVar13 < uVar3) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar17 = plVar25[0x1b] - plVar25[0x19] >> 4;
            uVar19 = lVar17 * 0x1c71c71c71c71c72;
            if (uVar3 <= uVar19) {
              uVar3 = uVar19;
            }
            plVar22 = plVar25 + 0x1c;
            if (uVar13 >> 1 <= (ulong)(lVar17 * -0x71c71c71c71c71c7)) {
              uVar3 = uVar13;
            }
            if (uVar3 == 0) {
              lVar17 = 0;
            }
            else {
              lVar17 = (**(code **)(*(long *)*plVar22 + 0x10))((long *)*plVar22,uVar3 * 0x90,0x10);
              if (lVar17 == 0) {
                (**(code **)(*(long *)*plVar22 + 0xe8))();
              }
            }
            lVar23 = *plVar22;
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar16 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar16 != 0) {
              if (0xf < *(ulong *)(lVar16 + 0x80)) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *(long *)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = lVar23;
              *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
            }
            puVar24 = (undefined8 *)(lVar17 + lVar21 * 0x10);
            lVar21 = lVar17 + lVar21 * 0x10;
            puVar24[4] = 0;
            puVar24[5] = 0;
            puVar24[2] = 0;
            puVar24[3] = 0;
            *puVar24 = 0;
            puVar24[1] = 0;
            FUN_01324700(lVar21 + 0x20,&local_88);
            plVar12 = local_78;
            local_78 = (long *)0x0;
            *(long **)(lVar21 + 0x30) = plVar12;
            *puVar24 = FUN_011f0c80;
            *(undefined1 **)(lVar21 + 8) = &LAB_027053e0;
            *(undefined1 **)(lVar21 + 0x10) = &LAB_02705550;
            *(undefined1 **)(lVar21 + 0x18) = &LAB_02705628;
            *(long **)(lVar21 + 0x80) = local_70;
            if (lVar16 != 0) {
              *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
            }
            lVar21 = plVar25[0x19];
            lVar23 = plVar25[0x1a];
            puVar4 = puVar24 + 0x12;
            if (lVar23 == lVar21) {
              lVar23 = lVar21;
            }
            else {
              do {
                puVar24 = puVar24 + -0x12;
                lVar23 = lVar23 + -0x90;
                FUN_00cbf394(plVar22,puVar24,lVar23);
              } while (lVar21 != lVar23);
              lVar21 = plVar25[0x19];
              lVar23 = plVar25[0x1a];
            }
            plVar25[0x19] = (long)puVar24;
            plVar25[0x1a] = (long)puVar4;
            lVar16 = plVar25[0x1b];
            plVar25[0x1b] = lVar17 + uVar3 * 0x90;
            plVar12 = (long *)PTR_DAT_047d3918;
            while (lVar17 = lVar23, lVar17 != lVar21) {
              pcVar18 = *(code **)(lVar17 + -0x88);
              lVar23 = lVar17 + -0x90;
              if (pcVar18 != (code *)0x0) {
                *(undefined8 *)(lVar17 + -0x80) = 0;
                *(undefined8 *)(lVar17 + -0x78) = 0;
                *(undefined8 *)(lVar17 + -0x90) = 0;
                *(undefined8 *)(lVar17 + -0x88) = 0;
                (*pcVar18)(lVar17 + -0x70);
              }
            }
            if (lVar21 != 0) {
              plVar22 = (long *)*plVar22;
              uVar13 = (**(code **)(*plVar22 + 0xf8))(plVar22);
              if (((uVar13 & 1) == 0) || (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
                (**(code **)(*plVar22 + 0x18))(plVar22,lVar21,lVar16 - lVar21,0x10);
              }
              else {
                FUN_00c48fe8(plVar22,lVar21,lVar16 - lVar21,0x10);
              }
              plVar12 = (long *)PTR_DAT_047d3918;
            }
          }
          puVar24 = local_88;
          if (local_88 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_88 + 3);
            do {
              sVar20 = *psVar1;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar8) {
                *psVar1 = sVar20 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (sVar20 == 1) {
              piVar5 = (int *)((long)local_88 + 0x1c);
              do {
                iVar11 = *piVar5;
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                if (bVar8) {
                  *piVar5 = -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (iVar11 != -1) {
                if (((*puVar9 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar21 = *(long *)puVar10;
                *plVar12 = lVar21;
                local_68 = (undefined8 *)*puVar24;
                FUN_00c44438(lVar21 + 0x8040,&local_68);
              }
            }
            else if (sVar20 == 0) goto LAB_01323d84;
          }
        }
        else {
          if (local_a0 != (undefined8 *)0x0) {
            uVar13 = plVar25[0xc];
            lVar21 = plVar25[0xd];
            if (*(short *)((long)local_a0 + 0x1a) != 0) {
              psVar1 = (short *)((long)local_a0 + 0x1a);
              sVar20 = *(short *)((long)local_a0 + 0x1a);
              do {
                sVar6 = *psVar1;
                if (sVar6 == sVar20) {
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                  if (bVar8) {
                    *psVar1 = sVar20 + 1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                  if (cVar7 != '\0') goto LAB_01324414;
                  bVar8 = true;
                }
                else {
                  ClearExclusiveLocal();
LAB_01324414:
                  bVar8 = false;
                }
                if (bVar8) {
                  lVar17 = local_a0[2];
                  if (lVar17 != 0) {
                    plVar22 = (long *)(lVar17 + -0x28);
                    if ((((int)lVar21 == 0) && ((uVar13 >> 0x20 & 0xff) != 0)) &&
                       (*(long *)(lVar17 + 0x28) != 0)) {
                      FUN_011f0f84(plVar22);
                      *(undefined4 *)(lVar17 + 0x68) = 2;
                      if (*(code **)(lVar17 + 0x98) != (code *)0x0) {
                        (**(code **)(lVar17 + 0x98))(lVar17 + 0xb8,lVar17 + 0x70);
                      }
                    }
                    lVar21 = *(long *)(lVar17 + 8);
                    psVar1 = (short *)(lVar21 + 0x1a);
                    do {
                      sVar20 = *psVar1;
                      cVar7 = '\x01';
                      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                      if (bVar8) {
                        *psVar1 = sVar20 + -1;
                        cVar7 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar7 != '\0');
                    if (sVar20 == 1) {
                      *(undefined8 *)(lVar21 + 0x10) = 0;
                      (**(code **)(*plVar22 + 0x50))(plVar22);
                    }
                    else if (sVar20 == 0) goto LAB_01323e08;
                  }
                  break;
                }
                sVar20 = sVar6;
              } while (sVar6 != 0);
            }
          }
          FUN_011f0db0(local_90);
        }
        plVar25[0xf] = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar25 + 0x10));
        goto LAB_01323bc8;
      }
      if (local_a0 != (undefined8 *)0x0) {
        uVar13 = plVar25[0xc];
        lVar21 = plVar25[0xd];
        if (*(short *)((long)local_a0 + 0x1a) != 0) {
          psVar1 = (short *)((long)local_a0 + 0x1a);
          sVar20 = *(short *)((long)local_a0 + 0x1a);
LAB_013241f8:
          sVar6 = *psVar1;
          if (sVar6 == sVar20) {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar20 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 != '\0') goto LAB_0132421c;
            bVar8 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_0132421c:
            bVar8 = false;
          }
          if (!bVar8) goto code_r0x01324224;
          lVar17 = local_a0[2];
          if (lVar17 != 0) {
            plVar22 = (long *)(lVar17 + -0x28);
            if ((((int)lVar21 == 0) && ((uVar13 >> 0x20 & 0xff) != 0)) &&
               (*(long *)(lVar17 + 0x28) != 0)) {
              FUN_011f0f84(plVar22);
              *(undefined4 *)(lVar17 + 0x68) = 2;
              if (*(code **)(lVar17 + 0x98) != (code *)0x0) {
                (**(code **)(lVar17 + 0x98))(lVar17 + 0xb8,lVar17 + 0x70);
              }
            }
            lVar21 = *(long *)(lVar17 + 8);
            psVar1 = (short *)(lVar21 + 0x1a);
            do {
              sVar20 = *psVar1;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar8) {
                *psVar1 = sVar20 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (sVar20 == 1) {
              *(undefined8 *)(lVar21 + 0x10) = 0;
              (**(code **)(*plVar22 + 0x50))(plVar22);
            }
            else if (sVar20 == 0) goto LAB_01323e08;
          }
        }
      }
LAB_01323e90:
      plVar22 = local_90;
      FUN_011f0db0(local_90);
    }
    else {
LAB_01323bc8:
      plVar22 = local_90;
    }
    if (plVar22 != (long *)0x0) {
      lVar21 = plVar22[6];
      psVar1 = (short *)(lVar21 + 0x1a);
      do {
        sVar20 = *psVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar20 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar20 == 1) {
        *(undefined8 *)(lVar21 + 0x10) = 0;
        (**(code **)(*plVar22 + 0x50))(plVar22);
      }
      else if (sVar20 == 0) goto LAB_01323e08;
    }
    puVar24 = local_a0;
    if (local_a0 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_a0 + 3);
      do {
        sVar20 = *psVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar20 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar20 == 1) {
        piVar5 = (int *)((long)local_a0 + 0x1c);
        do {
          iVar11 = *piVar5;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar8) {
            *piVar5 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar11 != -1) {
          if (((*puVar9 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0))
          {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar21 = *(long *)puVar10;
          *plVar12 = lVar21;
          local_88 = (undefined8 *)*puVar24;
          FUN_00c44438(lVar21 + 0x8040,&local_88);
        }
      }
      else if (sVar20 == 0) goto LAB_01323d84;
    }
    if (local_a8 != (long *)0x0) {
      lVar21 = local_a8[6];
      psVar1 = (short *)(lVar21 + 0x1a);
      do {
        sVar20 = *psVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar20 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar20 == 1) {
        *(undefined8 *)(lVar21 + 0x10) = 0;
        (**(code **)(*local_a8 + 0x50))();
      }
      else if (sVar20 == 0) goto LAB_01323e08;
    }
    puVar24 = local_e8;
    if (local_e8 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_e8 + 3);
      do {
        sVar20 = *psVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar20 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar20 == 1) {
        piVar5 = (int *)((long)local_e8 + 0x1c);
        do {
          iVar11 = *piVar5;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar8) {
            *piVar5 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar11 != -1) {
          if (((*puVar9 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0))
          {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar21 = *(long *)puVar10;
          *plVar12 = lVar21;
          local_88 = (undefined8 *)*puVar24;
          FUN_00c44438(lVar21 + 0x8040,&local_88);
        }
      }
      else if (sVar20 == 0) {
LAB_01323d84:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    if (plVar25 != (long *)0x0) {
      lVar21 = plVar25[6];
      psVar1 = (short *)(lVar21 + 0x1a);
      do {
        sVar20 = *psVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar20 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar20 == 1) {
        *(undefined8 *)(lVar21 + 0x10) = 0;
        (**(code **)(*plVar25 + 0x50))(plVar25);
      }
      else if (sVar20 == 0) {
LAB_01323e08:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    if (local_b8 != (long *)0x0) {
      (**(code **)(*local_b8 + 0x20))();
    }
    if (local_d8[0] != (long *)0x0) {
      (**(code **)(*local_d8[0] + 0x20))();
    }
  }
  return;
code_r0x01323970:
  cVar7 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
  if (bVar8) {
    *plVar2 = lVar21;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_01323978;
  goto LAB_01323968;
code_r0x01324224:
  sVar20 = sVar6;
  if (sVar6 == 0) goto LAB_01323e90;
  goto LAB_013241f8;
}


