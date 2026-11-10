/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cfe35c; name: FUN_00cfe35c
 */


/* WARNING: Removing unreachable block (ram,0x00cfe7d8) */
/* WARNING: Removing unreachable block (ram,0x00cfe7dc) */
/* WARNING: Removing unreachable block (ram,0x00cfe7e4) */
/* WARNING: Removing unreachable block (ram,0x00cfe7ec) */
/* WARNING: Removing unreachable block (ram,0x00cfeb3c) */
/* WARNING: Removing unreachable block (ram,0x00cfeb44) */
/* WARNING: Removing unreachable block (ram,0x00cfeb48) */
/* WARNING: Removing unreachable block (ram,0x00cfeb50) */
/* WARNING: Removing unreachable block (ram,0x00cfeb60) */
/* WARNING: Removing unreachable block (ram,0x00cfef9c) */
/* WARNING: Removing unreachable block (ram,0x00cfefac) */
/* WARNING: Removing unreachable block (ram,0x00cfeb68) */
/* WARNING: Removing unreachable block (ram,0x00cfe7f4) */
/* WARNING: Removing unreachable block (ram,0x00cfe7f8) */

void FUN_00cfe35c(long param_1,long *param_2,int param_3)

{
  ulong uVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  bool bVar5;
  char cVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  code *pcVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  undefined8 *puVar20;
  long lVar21;
  bool bVar22;
  long *plVar23;
  undefined8 *puVar24;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *puStack_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  
  lVar12 = *param_2;
  if (lVar12 != 0) {
    if ((param_3 == 2) && (*(long *)(param_1 + 200) != 0)) {
      if (*(code **)(lVar12 + 0xc0) != (code *)0x0) {
        (**(code **)(lVar12 + 0xc0))(lVar12 + 0xe0);
      }
    }
    else if ((param_3 == 1) && ((*(byte *)(param_1 + 0x1e8) & 1) != 0)) {
      pcVar15 = *(code **)(*param_2 + 0x40);
      if (pcVar15 != (code *)0x0) {
        (*pcVar15)(*param_2 + 0x60);
      }
    }
    plVar23 = (long *)(param_1 + 0xd0);
    lVar21 = *plVar23;
    lVar12 = nn::os::GetCurrentThread();
    if (lVar12 != lVar21) {
      lVar12 = nn::os::GetCurrentThread();
LAB_00cfe3ec:
      if (*plVar23 == 0) goto code_r0x00cfe3f4;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xd8));
      do {
        if (*plVar23 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xd8));
            while (*plVar23 == 0) {
              cVar6 = '\x01';
              bVar22 = (bool)ExclusiveMonitorPass(plVar23,0x10);
              if (bVar22) {
                *plVar23 = lVar12;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_00cfe3fc;
            }
          } while( true );
        }
        cVar6 = '\x01';
        bVar22 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar22) {
          *plVar23 = lVar12;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_00cfe3fc:
      bVar22 = false;
      goto LAB_00cfe400;
    }
    plVar23 = (long *)0x0;
    bVar22 = true;
LAB_00cfe400:
    if (*(long **)(*param_2 + 0x30) == (long *)0x0) {
      lVar12 = 0;
    }
    else {
      lVar12 = **(long **)(*param_2 + 0x30);
    }
    plVar13 = *(long **)(param_1 + 0xe8);
    plVar16 = *(long **)(param_1 + 0xf0);
    if (plVar13 == plVar16) {
      plVar19 = plVar13;
    }
    else {
      do {
        plVar18 = (long *)*plVar13;
        if (((plVar18 != (long *)0x0) && (*plVar18 == lVar12)) &&
           (plVar19 = plVar13, *(short *)((long)plVar18 + 0x1a) != 0)) break;
        plVar13 = plVar13 + 2;
        plVar19 = plVar16;
      } while (plVar16 != plVar13);
      plVar13 = *(long **)(param_1 + 0xf0);
    }
    if (plVar13 == plVar19) {
      local_b8 = (undefined8 *)0x0;
      local_b0 = (undefined8 *)0x0;
      lVar21 = *param_2;
      local_a8 = (undefined8 *)0x0;
      local_a0 = (undefined8 *)0x0;
      FUN_00c43ef0(&local_a8,lVar21 + 0x30);
      puVar8 = PTR_DAT_047d3918;
      puVar24 = (undefined8 *)PTR_DAT_047d3910;
      puVar7 = PTR_DAT_047d3908;
      local_80 = (undefined8 *)0x0;
      local_78 = (undefined8 *)0x0;
      lVar12 = 0;
      if (lVar21 != 0) {
        lVar12 = lVar21 + 0x28;
      }
      if (local_a8[2] == lVar12) {
        do {
          puVar11 = local_a0;
          cVar6 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(&local_a0,0x10);
          if (bVar5) {
            local_a0 = (undefined8 *)0x0;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        uVar10 = *puVar24;
        *(undefined8 *)puVar8 = uVar10;
        FUN_00c44204(&local_70,uVar10,puVar11);
        puVar20 = local_a8;
        local_a8 = (undefined8 *)0x0;
        if (puVar20 != (undefined8 *)0x0) {
          psVar2 = (short *)(puVar20 + 3);
          do {
            sVar4 = *psVar2;
            cVar6 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar5) {
              *psVar2 = sVar4 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar4 == 1) {
            piVar3 = (int *)((long)puVar20 + 0x1c);
            do {
              iVar9 = *piVar3;
              cVar6 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar5) {
                *piVar3 = -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            puVar24 = (undefined8 *)PTR_DAT_047d3910;
            if (iVar9 != -1) {
              if (((*puVar7 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              puVar24 = (undefined8 *)PTR_DAT_047d3910;
              lVar12 = *(long *)PTR_DAT_047d3910;
              *(long *)puVar8 = lVar12;
              local_68 = (undefined8 *)*puVar20;
              FUN_00c44438(lVar12 + 0x8040,&local_68);
            }
          }
          else if (sVar4 == 0) goto LAB_00cfe81c;
        }
        puVar20 = local_80;
        if (local_70 == (undefined8 *)0x0) {
          FUN_00d06570(&local_80);
        }
        else {
          local_80 = (undefined8 *)0x0;
          if (puVar20 != (undefined8 *)0x0) {
            psVar2 = (short *)(puVar20 + 3);
            do {
              sVar4 = *psVar2;
              cVar6 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar5) {
                *psVar2 = sVar4 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar4 == 1) {
              piVar3 = (int *)((long)puVar20 + 0x1c);
              do {
                iVar9 = *piVar3;
                cVar6 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar5) {
                  *piVar3 = -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              puVar24 = (undefined8 *)PTR_DAT_047d3910;
              if (iVar9 != -1) {
                if (((*puVar7 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                puVar24 = (undefined8 *)PTR_DAT_047d3910;
                lVar12 = *(long *)PTR_DAT_047d3910;
                *(long *)puVar8 = lVar12;
                local_68 = (undefined8 *)*puVar20;
                FUN_00c44438(lVar12 + 0x8040,&local_68);
              }
            }
            else if (sVar4 == 0) goto LAB_00cfe81c;
          }
          local_80 = local_70;
          local_70 = (undefined8 *)0x0;
          local_78 = puVar11;
        }
      }
      puVar11 = local_a8;
      if (local_a8 != (undefined8 *)0x0) {
        psVar2 = (short *)(local_a8 + 3);
        do {
          sVar4 = *psVar2;
          cVar6 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar4 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar4 == 1) {
          piVar3 = (int *)((long)local_a8 + 0x1c);
          do {
            iVar9 = *piVar3;
            cVar6 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar5) {
              *piVar3 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          puVar24 = (undefined8 *)PTR_DAT_047d3910;
          if (iVar9 != -1) {
            if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0))
            {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            puVar24 = (undefined8 *)PTR_DAT_047d3910;
            lVar12 = *(long *)PTR_DAT_047d3910;
            *(long *)puVar8 = lVar12;
            local_68 = (undefined8 *)*puVar11;
            FUN_00c44438(lVar12 + 0x8040,&local_68);
          }
        }
        else if (sVar4 == 0) goto LAB_00cfe81c;
      }
      do {
        puVar11 = local_78;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(&local_78,0x10);
        if (bVar5) {
          local_78 = (undefined8 *)0x0;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      uVar10 = *puVar24;
      *(undefined8 *)puVar8 = uVar10;
      FUN_00c44204(&local_68,uVar10,puVar11);
      puVar24 = local_80;
      local_80 = (undefined8 *)0x0;
      if (puVar24 != (undefined8 *)0x0) {
        psVar2 = (short *)(puVar24 + 3);
        do {
          sVar4 = *psVar2;
          cVar6 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar4 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar4 == 1) {
          piVar3 = (int *)((long)puVar24 + 0x1c);
          do {
            iVar9 = *piVar3;
            cVar6 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar5) {
              *piVar3 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar9 != -1) {
            if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0))
            {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar12 = *(long *)PTR_DAT_047d3910;
            *(long *)puVar8 = lVar12;
            local_a8 = (undefined8 *)*puVar24;
            FUN_00c44438(lVar12 + 0x8040,&local_a8);
          }
        }
        else if (sVar4 == 0) goto LAB_00cfe81c;
      }
      puVar24 = local_b8;
      local_b8 = (undefined8 *)0x0;
      if (local_68 == (undefined8 *)0x0) {
        puVar11 = (undefined8 *)0x0;
        if (puVar24 != (undefined8 *)0x0) {
          psVar2 = (short *)(puVar24 + 3);
          do {
            sVar4 = *psVar2;
            cVar6 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar5) {
              *psVar2 = sVar4 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar4 == 1) {
            piVar3 = (int *)((long)puVar24 + 0x1c);
            do {
              iVar9 = *piVar3;
              cVar6 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar5) {
                *piVar3 = -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar9 != -1) {
              if (((*puVar7 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar12 = *(long *)PTR_DAT_047d3910;
              *(long *)puVar8 = lVar12;
              local_a8 = (undefined8 *)*puVar24;
              FUN_00c44438(lVar12 + 0x8040,&local_a8);
            }
          }
          else if (sVar4 == 0) goto LAB_00cfe81c;
          puVar11 = (undefined8 *)0x0;
        }
      }
      else {
        if (puVar24 != (undefined8 *)0x0) {
          psVar2 = (short *)(puVar24 + 3);
          do {
            sVar4 = *psVar2;
            cVar6 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar5) {
              *psVar2 = sVar4 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar4 == 1) {
            piVar3 = (int *)((long)puVar24 + 0x1c);
            do {
              iVar9 = *piVar3;
              cVar6 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar5) {
                *piVar3 = -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar9 != -1) {
              if (((*puVar7 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar12 = *(long *)PTR_DAT_047d3910;
              *(long *)puVar8 = lVar12;
              local_a8 = (undefined8 *)*puVar24;
              FUN_00c44438(lVar12 + 0x8040,&local_a8);
            }
          }
          else if (sVar4 == 0) goto LAB_00cfe81c;
        }
        local_b8 = local_68;
        local_68 = (undefined8 *)0x0;
      }
      puVar24 = local_68;
      local_b0 = puVar11;
      if (local_68 != (undefined8 *)0x0) {
        psVar2 = (short *)(local_68 + 3);
        do {
          sVar4 = *psVar2;
          cVar6 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar4 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar4 == 1) {
          piVar3 = (int *)((long)local_68 + 0x1c);
          do {
            iVar9 = *piVar3;
            cVar6 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar5) {
              *piVar3 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar9 != -1) {
            if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0))
            {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar12 = *(long *)PTR_DAT_047d3910;
            *(long *)puVar8 = lVar12;
            local_a8 = (undefined8 *)*puVar24;
            FUN_00c44438(lVar12 + 0x8040,&local_a8);
          }
        }
        else if (sVar4 == 0) goto LAB_00cfe81c;
      }
      puVar24 = local_80;
      if (local_80 != (undefined8 *)0x0) {
        psVar2 = (short *)(local_80 + 3);
        do {
          sVar4 = *psVar2;
          cVar6 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar4 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar4 == 1) {
          piVar3 = (int *)((long)local_80 + 0x1c);
          do {
            iVar9 = *piVar3;
            cVar6 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar5) {
              *piVar3 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar9 != -1) {
            if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0))
            {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar12 = *(long *)PTR_DAT_047d3910;
            *(long *)puVar8 = lVar12;
            local_a8 = (undefined8 *)*puVar24;
            FUN_00c44438(lVar12 + 0x8040,&local_a8);
          }
        }
        else if (sVar4 == 0) goto LAB_00cfe81c;
      }
      puVar11 = *(undefined8 **)(param_1 + 0xf0);
      puVar24 = (undefined8 *)(param_1 + 0x100);
      if (puVar11 < *(undefined8 **)(param_1 + 0xf8)) {
        uVar10 = *puVar24;
        if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar12 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar12 == 0) {
          *puVar11 = 0;
          puVar11[1] = 0;
          FUN_00c96b7c(puVar11,&local_b8);
        }
        else {
          if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00cff028;
          *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar10;
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
          *puVar11 = 0;
          puVar11[1] = 0;
          FUN_00c96b7c(puVar11,&local_b8);
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
        }
        *(undefined8 **)(param_1 + 0xf0) = puVar11 + 2;
      }
      else {
        uVar17 = *(ulong *)(param_1 + 0x108);
        lVar12 = (long)puVar11 - *(long *)(param_1 + 0xe8) >> 4;
        uVar1 = lVar12 + 1;
        if (0x7ffffffffffffffe < uVar17) {
          uVar17 = 0x7fffffffffffffff;
        }
        if (uVar17 < uVar1) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar21 = (long)*(undefined8 **)(param_1 + 0xf8) - *(long *)(param_1 + 0xe8);
        uVar14 = lVar21 >> 3;
        local_90 = (undefined8 *)0x0;
        if (uVar1 <= uVar14) {
          uVar1 = uVar14;
        }
        if (uVar17 >> 1 <= (ulong)(lVar21 >> 4)) {
          uVar1 = uVar17;
        }
        puStack_88 = puVar24;
        if (uVar1 == 0) {
          puVar11 = (undefined8 *)0x0;
        }
        else {
          puVar11 = (undefined8 *)
                    (**(code **)(*(long *)*puVar24 + 0x10))((long *)*puVar24,uVar1 << 4,8);
          if (puVar11 == (undefined8 *)0x0) {
            (**(code **)(*(long *)*puVar24 + 0xe8))();
          }
        }
        puVar20 = puVar11 + lVar12 * 2;
        local_90 = puVar11 + uVar1 * 2;
        uVar10 = *puVar24;
        local_a8 = puVar11;
        local_a0 = puVar20;
        local_98 = puVar20;
        if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar12 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar12 == 0) {
          *puVar20 = 0;
          puVar20[1] = 0;
          FUN_00c96b7c(puVar20,&local_b8);
        }
        else {
          if (0xf < *(ulong *)(lVar12 + 0x80)) {
LAB_00cff028:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar10;
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
          *puVar20 = 0;
          puVar20[1] = 0;
          FUN_00c96b7c(puVar20,&local_b8);
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
          puVar20 = local_98;
        }
        local_98 = puVar20 + 2;
        FUN_00d02424((long *)(param_1 + 0xe8),&local_a8);
        FUN_00d02590(&local_a8);
      }
      puVar24 = local_b8;
      if (local_b8 != (undefined8 *)0x0) {
        psVar2 = (short *)(local_b8 + 3);
        do {
          sVar4 = *psVar2;
          cVar6 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar4 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar4 == 1) {
          piVar3 = (int *)((long)local_b8 + 0x1c);
          do {
            iVar9 = *piVar3;
            cVar6 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar5) {
              *piVar3 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar9 != -1) {
            if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0))
            {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar12 = *(long *)PTR_DAT_047d3910;
            *(long *)puVar8 = lVar12;
            local_a8 = (undefined8 *)*puVar24;
            FUN_00c44438(lVar12 + 0x8040,&local_a8);
          }
        }
        else if (sVar4 == 0) {
LAB_00cfe81c:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
    }
    if (!bVar22) {
      *plVar23 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar23 + 1));
    }
  }
  return;
code_r0x00cfe3f4:
  cVar6 = '\x01';
  bVar22 = (bool)ExclusiveMonitorPass(plVar23,0x10);
  if (bVar22) {
    *plVar23 = lVar12;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_00cfe3fc;
  goto LAB_00cfe3ec;
}


