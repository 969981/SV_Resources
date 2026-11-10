/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b25aa0; name: FUN_02b25aa0
 */


void FUN_02b25aa0(undefined8 param_1,long param_2,long param_3)

{
  short *psVar1;
  int *piVar2;
  undefined8 **ppuVar3;
  char **ppcVar4;
  long **pplVar5;
  undefined8 *puVar6;
  short sVar7;
  char cVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  long *plVar12;
  bool bVar13;
  int iVar14;
  long lVar15;
  long *plVar16;
  short sVar17;
  long *plVar18;
  long *plVar19;
  code *local_1f8;
  undefined1 auStack_1e0 [96];
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 *local_170;
  char *pcStack_168;
  undefined8 local_160;
  long *local_158;
  undefined8 *local_150;
  char *local_148;
  undefined8 local_140;
  long *local_138;
  long *local_130 [2];
  undefined8 local_120;
  undefined8 *local_118;
  undefined8 local_110;
  char *local_108;
  long *local_100;
  long *local_f8;
  long *local_f0;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined2 local_d0;
  undefined8 *local_c0;
  undefined8 local_b8;
  char *local_b0;
  long *local_a8;
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  long *local_48;
  
  local_1f8 = (code *)0x0;
  if (*(code **)(param_3 + 0x10) != (code *)0x0) {
    (**(code **)(param_3 + 0x10))(param_3 + 0x20,auStack_1e0);
    local_1f8 = *(code **)(param_3 + 8);
  }
  local_90 = *(undefined8 *)(param_2 + 0x110);
  uStack_88 = *(undefined8 *)(param_2 + 0x118);
  local_80 = *(undefined8 *)(param_2 + 0x120);
  local_78 = *(long **)(param_2 + 0x128);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x18))();
  }
  if (*(code **)(param_2 + 0x10) == (code *)0x0) {
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
  }
  else {
    (**(code **)(param_2 + 0x10))(&local_70,param_2 + 0x30,&local_90);
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_70 != (undefined8 *)0x0) {
    if (*(short *)((long)local_70 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_70 + 0x1a);
      sVar17 = *(short *)((long)local_70 + 0x1a);
LAB_02b25bb4:
      sVar7 = *psVar1;
      if (sVar7 == sVar17) {
        cVar8 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar13) {
          *psVar1 = sVar17 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
        if (cVar8 != '\0') goto LAB_02b25bd8;
        bVar13 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02b25bd8:
        bVar13 = false;
      }
      if (!bVar13) goto code_r0x02b25be0;
      lVar15 = local_70[2];
      plVar16 = (long *)(lVar15 + -0x28);
      if (lVar15 == 0) goto LAB_02b260a0;
      (**(code **)(*plVar16 + 0x18))(&local_120,plVar16);
      local_a0 = (undefined8 *)0x0;
      uStack_98 = 0;
      if (local_120[2] == lVar15) {
        FUN_00c9ea00(&local_a0,&local_120);
      }
      puVar6 = local_120;
      if (local_120 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_120 + 3);
        do {
          sVar17 = *psVar1;
          cVar8 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar13) {
            *psVar1 = sVar17 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (sVar17 == 1) {
          piVar2 = (int *)((long)local_120 + 0x1c);
          do {
            iVar14 = *piVar2;
            cVar8 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar13) {
              *piVar2 = -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (iVar14 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar15 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar15;
            local_150 = (undefined8 *)*puVar6;
            FUN_00c44438(lVar15 + 0x8040,&local_150);
          }
        }
        else if (sVar17 == 0) goto LAB_02b260c0;
      }
      FUN_02b24cd0(&local_48,&local_a0);
      puVar6 = local_a0;
      if (local_a0 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_a0 + 3);
        do {
          sVar17 = *psVar1;
          cVar8 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar13) {
            *psVar1 = sVar17 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (sVar17 == 1) {
          piVar2 = (int *)((long)local_a0 + 0x1c);
          do {
            iVar14 = *piVar2;
            cVar8 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar13) {
              *piVar2 = -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (iVar14 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar15 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar15;
            local_120 = (undefined8 *)*puVar6;
            FUN_00c44438(lVar15 + 0x8040,&local_120);
          }
        }
        else if (sVar17 == 0) goto LAB_02b260c0;
      }
      plVar12 = local_48;
      if (local_48 != (long *)0x0) {
        local_150 = (undefined8 *)&DAT_94ed70272cac328;
        local_148 = "Target";
        local_140 = 6;
        local_138 = (long *)0x0;
        FUN_01315eac(&local_120,param_2,&local_150);
        puVar10 = PTR_DAT_047d3e28;
        if (((*PTR_DAT_047d3e28 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar14 != 0)) {
          FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3e28);
        }
        puVar11 = PTR_DAT_047d3e30;
        bVar13 = (char)local_120 != '\0';
        ppuVar3 = (undefined8 **)PTR_DAT_047d3e30;
        if (bVar13) {
          ppuVar3 = &local_118;
        }
        local_c0 = *ppuVar3;
        puVar6 = (undefined8 *)(PTR_DAT_047d3e30 + 8);
        if (bVar13) {
          puVar6 = &local_110;
        }
        local_b8 = *puVar6;
        ppcVar4 = (char **)(PTR_DAT_047d3e30 + 0x10);
        if (bVar13) {
          ppcVar4 = &local_108;
        }
        local_b0 = *ppcVar4;
        pplVar5 = (long **)(PTR_DAT_047d3e30 + 0x18);
        if (bVar13) {
          pplVar5 = &local_100;
        }
        local_a8 = *pplVar5;
        if (local_a8 != (long *)0x0) {
          (**(code **)(*local_a8 + 0x18))();
        }
        if (*(code **)(param_2 + 0x10) == (code *)0x0) {
          plVar18 = (long *)0x0;
          local_170 = (undefined8 *)0x0;
          pcStack_168 = (char *)0x0;
        }
        else {
          (**(code **)(param_2 + 0x10))(&local_170,param_2 + 0x30,&local_c0);
          puVar6 = local_170;
          if (local_170 == (undefined8 *)0x0) {
            plVar18 = (long *)0x0;
          }
          else {
            if (*(short *)((long)local_170 + 0x1a) != 0) {
              psVar1 = (short *)((long)local_170 + 0x1a);
              sVar17 = *(short *)((long)local_170 + 0x1a);
              do {
                sVar7 = *psVar1;
                if (sVar7 == sVar17) {
                  cVar8 = '\x01';
                  bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                  if (bVar13) {
                    *psVar1 = sVar17 + 1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                  if (cVar8 != '\0') goto LAB_02b264c4;
                  bVar13 = true;
                }
                else {
                  ClearExclusiveLocal();
LAB_02b264c4:
                  bVar13 = false;
                }
                if (bVar13) {
                  plVar18 = (long *)0x0;
                  if (local_170[2] != 0) {
                    plVar18 = (long *)(local_170[2] + -0x28);
                  }
                  goto LAB_02b264ec;
                }
                sVar17 = sVar7;
                if (sVar7 == 0) break;
              } while( true );
            }
            plVar18 = (long *)0x0;
LAB_02b264ec:
            psVar1 = (short *)(local_170 + 3);
            do {
              sVar17 = *psVar1;
              cVar8 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar13) {
                *psVar1 = sVar17 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (sVar17 == 1) {
              piVar2 = (int *)((long)local_170 + 0x1c);
              do {
                iVar14 = *piVar2;
                cVar8 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar13) {
                  *piVar2 = -1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (iVar14 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar15 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar15;
                local_180 = *puVar6;
                FUN_00c44438(lVar15 + 0x8040,&local_180);
              }
            }
            else if (sVar17 == 0) goto LAB_02b260c0;
          }
        }
        if (local_a8 != (long *)0x0) {
          (**(code **)(*local_a8 + 0x20))();
        }
        if ((char)local_120 != '\0') {
          if (local_100 != (long *)0x0) {
            (**(code **)(*local_100 + 0x20))();
          }
          local_120 = (undefined8 *)((ulong)local_120 & 0xffffffffffffff00);
        }
        if (local_138 != (long *)0x0) {
          (**(code **)(*local_138 + 0x20))();
        }
        if (plVar18 != (long *)0x0) {
          local_118 = (undefined8 *)0x0;
          local_110 = 0;
          local_108 = &DAT_cbf29ce484222645;
          local_100 = (long *)&DAT_03c886bc;
          local_d0 = 0x101;
          local_f8 = (long *)0x0;
          local_f0 = (long *)0x0;
          uVar9 = (ulong)local_120 >> 0x20;
          local_120 = (undefined8 *)CONCAT44((int)uVar9,1);
          local_e0 = 0;
          local_d8 = 0;
          (**(code **)(*plVar18 + 0x18))(&local_150,plVar18);
          local_170 = (undefined8 *)0x0;
          pcStack_168 = (char *)0x0;
          if ((long *)local_150[2] == plVar18 + 5) {
            FUN_00c9ea00(&local_170,&local_150);
          }
          puVar6 = local_150;
          if (local_150 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_150 + 3);
            do {
              sVar17 = *psVar1;
              cVar8 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar13) {
                *psVar1 = sVar17 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (sVar17 == 1) {
              piVar2 = (int *)((long)local_150 + 0x1c);
              do {
                iVar14 = *piVar2;
                cVar8 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar13) {
                  *piVar2 = -1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (iVar14 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar15 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar15;
                local_180 = *puVar6;
                FUN_00c44438(lVar15 + 0x8040,&local_180);
              }
            }
            else if (sVar17 == 0) goto LAB_02b260c0;
          }
          FUN_00d0a34c((ulong)&local_120 | 8,&local_170);
          puVar6 = local_170;
          if (local_170 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_170 + 3);
            do {
              sVar17 = *psVar1;
              cVar8 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar13) {
                *psVar1 = sVar17 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (sVar17 == 1) {
              piVar2 = (int *)((long)local_170 + 0x1c);
              do {
                iVar14 = *piVar2;
                cVar8 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar13) {
                  *piVar2 = -1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (iVar14 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar15 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar15;
                local_150 = (undefined8 *)*puVar6;
                FUN_00c44438(lVar15 + 0x8040,&local_150);
              }
            }
            else if (sVar17 == 0) goto LAB_02b260c0;
          }
          local_170 = (undefined8 *)0x352b79c017918034;
          pcStack_168 = "JointName";
          local_160 = 9;
          local_158 = (long *)0x0;
          FUN_01315eac(&local_150,param_2,&local_170);
          if (((*puVar10 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar14 != 0)
             ) {
            FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3e28);
          }
          bVar13 = (char)local_150 != '\0';
          ppcVar4 = (char **)puVar11;
          if (bVar13) {
            ppcVar4 = &local_148;
          }
          local_108 = *ppcVar4;
          puVar6 = (undefined8 *)(puVar11 + 8);
          if (bVar13) {
            puVar6 = &local_140;
          }
          local_100 = (long *)*puVar6;
          pplVar5 = (long **)(puVar11 + 0x10);
          if (bVar13) {
            pplVar5 = &local_138;
          }
          local_f8 = *pplVar5;
          pplVar5 = (long **)(puVar11 + 0x18);
          if (bVar13) {
            pplVar5 = local_130;
          }
          plVar19 = *pplVar5;
          if (plVar19 != (long *)0x0) {
            (**(code **)(*plVar19 + 0x18))(plVar19);
          }
          if (local_f0 != (long *)0x0) {
            lVar15 = *local_f0;
            local_f0 = plVar19;
            (**(code **)(lVar15 + 0x20))();
            plVar19 = local_f0;
          }
          local_f0 = plVar19;
          if ((char)local_150 != '\0') {
            if (local_130[0] != (long *)0x0) {
              (**(code **)(*local_130[0] + 0x20))();
            }
            local_150 = (undefined8 *)((ulong)local_150 & 0xffffffffffffff00);
          }
          if (local_158 != (long *)0x0) {
            (**(code **)(*local_158 + 0x20))();
          }
          local_170 = (undefined8 *)0xa1a5a39f1e539c0a;
          pcStack_168 = "Offset";
          local_160 = 6;
          local_158 = (long *)0x0;
          FUN_015eea10(&local_150,param_2,&local_170);
          local_180 = 0;
          uStack_178 = 0;
          puVar6 = &local_180;
          if ((char)local_150 != '\0') {
            puVar6 = &local_140;
          }
          local_e0 = *puVar6;
          local_d8 = puVar6[1];
          if ((char)local_150 != '\0') {
            local_150 = (undefined8 *)((ulong)local_150 & 0xffffffffffffff00);
          }
          if (local_158 != (long *)0x0) {
            (**(code **)(*local_158 + 0x20))();
          }
          lVar15 = plVar12[0xb];
          if (*(char *)(lVar15 + 0xff) == '\0') {
            *(undefined4 *)(lVar15 + 0x50) = (undefined4)local_120;
            FUN_00d0a71c(lVar15 + 0x58,(ulong)&local_120 | 8);
            plVar12 = local_f0;
            *(char **)(lVar15 + 0x68) = local_108;
            *(long **)(lVar15 + 0x70) = local_100;
            *(long **)(lVar15 + 0x78) = local_f8;
            if (local_f0 != (long *)0x0) {
              (**(code **)(*local_f0 + 0x18))(local_f0);
            }
            plVar19 = *(long **)(lVar15 + 0x80);
            *(long **)(lVar15 + 0x80) = plVar12;
            if (plVar19 != (long *)0x0) {
              (**(code **)(*plVar19 + 0x20))();
            }
            *(undefined2 *)(lVar15 + 0xa0) = local_d0;
            *(undefined1 *)(lVar15 + 0xfc) = 1;
            *(undefined8 *)(lVar15 + 0x90) = local_e0;
            *(undefined8 *)(lVar15 + 0x98) = local_d8;
          }
          if (local_f0 != (long *)0x0) {
            (**(code **)(*local_f0 + 0x20))();
          }
          puVar6 = local_118;
          if (local_118 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_118 + 3);
            do {
              sVar17 = *psVar1;
              cVar8 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar13) {
                *psVar1 = sVar17 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (sVar17 == 1) {
              piVar2 = (int *)((long)local_118 + 0x1c);
              do {
                iVar14 = *piVar2;
                cVar8 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar13) {
                  *piVar2 = -1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (iVar14 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar15 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar15;
                local_150 = (undefined8 *)*puVar6;
                FUN_00c44438(lVar15 + 0x8040,&local_150);
              }
            }
            else if (sVar17 == 0) goto LAB_02b260c0;
          }
          (**(code **)(*plVar18 + 0x60))(plVar18);
        }
        if (local_48 != (long *)0x0) {
          lVar15 = local_48[6];
          psVar1 = (short *)(lVar15 + 0x1a);
          do {
            sVar17 = *psVar1;
            cVar8 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar13) {
              *psVar1 = sVar17 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (sVar17 == 1) {
            *(undefined8 *)(lVar15 + 0x10) = 0;
            (**(code **)(*local_48 + 0x50))();
          }
          else if (sVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
      }
      (**(code **)(*plVar16 + 0x60))(plVar16);
LAB_02b2609c:
      if (local_70 == (undefined8 *)0x0) goto LAB_02b25b50;
    }
LAB_02b260a0:
    puVar6 = local_70;
    psVar1 = (short *)(local_70 + 3);
    do {
      sVar17 = *psVar1;
      cVar8 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar13) {
        *psVar1 = sVar17 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar17 == 1) {
      piVar2 = (int *)((long)local_70 + 0x1c);
      do {
        iVar14 = *piVar2;
        cVar8 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar13) {
          *piVar2 = -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar14 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar15 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar15;
        local_120 = (undefined8 *)*puVar6;
        FUN_00c44438(lVar15 + 0x8040,&local_120);
      }
    }
    else if (sVar17 == 0) {
LAB_02b260c0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
LAB_02b25b50:
  if (local_1f8 != (code *)0x0) {
    (*local_1f8)(auStack_1e0);
  }
  return;
code_r0x02b25be0:
  sVar17 = sVar7;
  if (sVar7 == 0) goto LAB_02b2609c;
  goto LAB_02b25bb4;
}


