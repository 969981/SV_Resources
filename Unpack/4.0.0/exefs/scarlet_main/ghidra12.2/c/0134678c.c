/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0134678c; name: FUN_0134678c
 */


/* WARNING: Removing unreachable block (ram,0x013489e4) */
/* WARNING: Removing unreachable block (ram,0x013489e8) */
/* WARNING: Removing unreachable block (ram,0x013489f0) */
/* WARNING: Removing unreachable block (ram,0x013489f8) */
/* WARNING: Removing unreachable block (ram,0x0134c8f0) */
/* WARNING: Removing unreachable block (ram,0x0134c8f8) */
/* WARNING: Removing unreachable block (ram,0x0134c8fc) */
/* WARNING: Removing unreachable block (ram,0x0134c904) */
/* WARNING: Removing unreachable block (ram,0x0134c90c) */
/* WARNING: Removing unreachable block (ram,0x01351d80) */
/* WARNING: Removing unreachable block (ram,0x01351d90) */
/* WARNING: Removing unreachable block (ram,0x0134c91c) */
/* WARNING: Removing unreachable block (ram,0x01348a00) */
/* WARNING: Removing unreachable block (ram,0x01348a04) */
/* WARNING: Removing unreachable block (ram,0x01348908) */
/* WARNING: Removing unreachable block (ram,0x0134890c) */
/* WARNING: Removing unreachable block (ram,0x01348914) */
/* WARNING: Removing unreachable block (ram,0x0134891c) */
/* WARNING: Removing unreachable block (ram,0x0134c710) */
/* WARNING: Removing unreachable block (ram,0x0134c718) */
/* WARNING: Removing unreachable block (ram,0x0134c71c) */
/* WARNING: Removing unreachable block (ram,0x0134c724) */
/* WARNING: Removing unreachable block (ram,0x0134c72c) */
/* WARNING: Removing unreachable block (ram,0x01351c54) */
/* WARNING: Removing unreachable block (ram,0x01351c64) */
/* WARNING: Removing unreachable block (ram,0x0134c73c) */
/* WARNING: Removing unreachable block (ram,0x01348924) */
/* WARNING: Removing unreachable block (ram,0x01348928) */
/* WARNING: Removing unreachable block (ram,0x0134c100) */
/* WARNING: Removing unreachable block (ram,0x0134c104) */
/* WARNING: Removing unreachable block (ram,0x0134c10c) */
/* WARNING: Removing unreachable block (ram,0x0134c114) */
/* WARNING: Removing unreachable block (ram,0x0134fbec) */
/* WARNING: Removing unreachable block (ram,0x0134fbf4) */
/* WARNING: Removing unreachable block (ram,0x0134fbf8) */
/* WARNING: Removing unreachable block (ram,0x0134fc00) */
/* WARNING: Removing unreachable block (ram,0x0134fc08) */
/* WARNING: Removing unreachable block (ram,0x01352f90) */
/* WARNING: Removing unreachable block (ram,0x01352fa0) */
/* WARNING: Removing unreachable block (ram,0x0134fc18) */
/* WARNING: Removing unreachable block (ram,0x0134c11c) */
/* WARNING: Removing unreachable block (ram,0x0134c120) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0134678c(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  short *psVar5;
  int *piVar6;
  char *pcVar7;
  short sVar8;
  char cVar9;
  bool bVar10;
  int iVar11;
  ulong uVar12;
  size_t sVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long **pplVar17;
  short sVar18;
  long *plVar19;
  code *pcVar20;
  long *plVar21;
  long lVar22;
  long *plVar23;
  char *__s;
  undefined8 *puVar24;
  long lVar25;
  byte *pbVar26;
  long *plVar27;
  long lVar28;
  long *plVar29;
  bool bVar30;
  long *local_1b8;
  long *local_1b0;
  long *local_1a8;
  long *local_1a0;
  long *local_198;
  long *local_190;
  long *local_188;
  undefined4 local_180;
  long *local_178;
  long local_170;
  long lStack_168;
  long local_160;
  long *local_158;
  undefined4 local_150;
  long *local_148;
  long *local_140;
  long *local_138;
  undefined8 uStack_130;
  long *local_128;
  long *local_120;
  undefined8 local_118;
  long *local_110;
  long *local_108;
  long *local_100;
  long *local_f8;
  long *local_f0;
  undefined8 local_e8;
  long *local_e0;
  long *local_d8;
  undefined8 local_d0;
  long *local_c8;
  long *plStack_c0;
  undefined8 local_b8;
  long *local_b0;
  long *local_a8;
  undefined8 local_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  long *local_70 [2];
  
  lVar22 = *(long *)(param_1 + 0x70);
  if (lVar22 == 0) {
    plVar29 = (long *)FUN_00da5204();
  }
  else {
    plVar29 = (long *)(lVar22 + 0x40);
  }
  local_178 = (long *)*plVar29;
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x18))();
  }
  local_170 = plVar29[1];
  lStack_168 = plVar29[2];
  local_160 = plVar29[3];
  local_158 = (long *)plVar29[4];
  if (local_158 != (long *)0x0) {
    (**(code **)(*local_158 + 0x18))();
  }
  local_150 = (undefined4)plVar29[5];
  plVar29 = *(long **)(lVar22 + 0x210);
  plVar27 = *(long **)(lVar22 + 0x218);
  if (plVar29 == plVar27) {
LAB_01349650:
    if ((*(long *)(param_1 + 0x3a8) != 0) &&
       (**(char **)(*(long *)(param_1 + 0x3a8) + 0x38) != '\0')) {
      FUN_011a6b30(&local_110,param_1 + 0x3a8);
      uVar12 = FUN_01357410(param_1 + 0x1e8,&local_110);
      if (((uVar12 & 1) != 0) && (plVar29 = *(long **)(param_1 + 0x208), plVar29 != (long *)0x0)) {
        lVar22 = plVar29[6];
        if (*(long *)(lVar22 + 0x10) == 0) {
LAB_01351b80:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar5 = (short *)(lVar22 + 0x1a);
        do {
          sVar18 = *psVar5;
          cVar9 = '\x01';
          bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
          if (bVar30) {
            *psVar5 = sVar18 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar18 == 0) {
          uVar15 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
          *(undefined8 *)(lVar22 + 8) = uVar15;
          *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
        }
        else if (sVar18 == -1) {
LAB_01349e44:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
        lVar22 = plVar29[6];
        psVar5 = (short *)(lVar22 + 0x1a);
        do {
          sVar18 = *psVar5;
          cVar9 = '\x01';
          bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
          if (bVar30) {
            *psVar5 = sVar18 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar18 == 1) {
          *(undefined8 *)(lVar22 + 0x10) = 0;
          (**(code **)(*plVar29 + 0x50))(plVar29);
        }
        else if (sVar18 == 0) {
LAB_013498f8:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      if (local_f0 != (long *)0x0) {
        (**(code **)(*local_f0 + 0x20))();
      }
      if (local_110 != (long *)0x0) {
        (**(code **)(*local_110 + 0x20))();
      }
    }
    if ((*(char *)(param_1 + 0x4b0) != '\0') &&
       (lVar22 = **(long **)(param_1 + 0x4b8), lVar22 != (*(long **)(param_1 + 0x4b8))[1])) {
      plVar29 = (long *)(PTR_DAT_047e2ff8 + 0x10);
      do {
        local_108 = (long *)0x0;
        local_e0 = (long *)0x0;
        local_d8 = (long *)0x0;
        local_f0 = (long *)0x0;
        local_e8 = 0;
        local_100 = (long *)0x0;
        local_f8 = (long *)0x0;
        local_110 = plVar29;
        FUN_013571b4(*(undefined8 *)(param_1 + 0x4d8),&local_110);
        FUN_00db239c(&local_110);
        lVar28 = *(long *)(*(long *)(param_1 + 0x4d8) + 8);
        FUN_00cbf4c0(&local_110,lVar22);
        uVar12 = FUN_00dc5c18(lVar28 + -0x40,1,&local_110,0,0);
        if (((uVar12 & 1) != 0) && (plVar27 = *(long **)(lVar28 + -0x20), plVar27 != (long *)0x0)) {
          lVar28 = plVar27[6];
          if (*(long *)(lVar28 + 0x10) == 0) goto LAB_01351b80;
          psVar5 = (short *)(lVar28 + 0x1a);
          do {
            sVar18 = *psVar5;
            cVar9 = '\x01';
            bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
            if (bVar30) {
              *psVar5 = sVar18 + 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (sVar18 == 0) {
            uVar15 = (**(code **)**(undefined8 **)(lVar28 + 0x10))();
            *(undefined8 *)(lVar28 + 8) = uVar15;
            *(undefined4 *)(lVar28 + 0x1c) = 0xfffffffe;
          }
          else if (sVar18 == -1) goto LAB_01349e44;
          lVar28 = plVar27[6];
          psVar5 = (short *)(lVar28 + 0x1a);
          do {
            sVar18 = *psVar5;
            cVar9 = '\x01';
            bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
            if (bVar30) {
              *psVar5 = sVar18 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (sVar18 == 1) {
            *(undefined8 *)(lVar28 + 0x10) = 0;
            (**(code **)(*plVar27 + 0x50))(plVar27);
          }
          else if (sVar18 == 0) goto LAB_013498f8;
        }
        if (local_f0 != (long *)0x0) {
          (**(code **)(*local_f0 + 0x20))();
        }
        if (local_110 != (long *)0x0) {
          (**(code **)(*local_110 + 0x20))();
        }
        lVar22 = lVar22 + 0x20;
      } while (lVar22 != *(long *)(*(long *)(param_1 + 0x4b8) + 8));
    }
    if (local_158 != (long *)0x0) {
      (**(code **)(*local_158 + 0x20))();
    }
    if (local_178 != (long *)0x0) {
      (**(code **)(*local_178 + 0x20))();
    }
    return;
  }
  plVar1 = (long *)(param_1 + 0x130);
  plVar2 = (long *)(param_1 + 0xb0);
  plVar3 = (long *)(param_1 + 0x170);
  pbVar26 = PTR_DAT_047d8c40;
  plVar19 = (long *)PTR_DAT_047d8c48;
LAB_01346884:
  lVar22 = *plVar29;
  if (lVar22 < 0x40a8a38d6d71a99) {
    if (-0x9663e01d7c0c7ac < lVar22) {
      if (lVar22 == -0x9663e01d7c0c7ab) {
        if (*(char *)(param_1 + 0x48) == '\0') {
          FUN_00f2b7b8(&local_110,&local_178,plVar29 + 4,&DAT_03c886bc);
          uVar12 = FUN_01355580(param_1 + 0xe8,&local_110);
          if (((uVar12 & 1) == 0) || (plVar23 = *(long **)(param_1 + 0x108), plVar23 == (long *)0x0)
             ) goto LAB_01346908;
          lVar22 = plVar23[6];
          if (*(long *)(lVar22 + 0x10) != 0) {
            psVar5 = (short *)(lVar22 + 0x1a);
            do {
              sVar18 = *psVar5;
              cVar9 = '\x01';
              bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
              if (bVar30) {
                *psVar5 = sVar18 + 1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (sVar18 == 0) {
              uVar15 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
              *(undefined8 *)(lVar22 + 8) = uVar15;
              *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
            }
            else if (sVar18 == -1) goto LAB_01349e44;
            lVar22 = plVar23[6];
            psVar5 = (short *)(lVar22 + 0x1a);
            do {
              sVar18 = *psVar5;
              cVar9 = '\x01';
              bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
              if (bVar30) {
                *psVar5 = sVar18 + -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            goto LAB_01346aa8;
          }
          goto LAB_01351b80;
        }
        FUN_00f2b7b8(&local_110,&local_178,plVar29 + 4,&DAT_03c886bc);
        uVar12 = FUN_01355580(param_1 + 0xe8,&local_110);
        if ((uVar12 & 1) == 0) {
          plVar23 = (long *)0x0;
        }
        else {
          plVar23 = *(long **)(param_1 + 0x108);
          if (plVar23 != (long *)0x0) {
            lVar22 = plVar23[6];
            if (*(long *)(lVar22 + 0x10) == 0) goto LAB_01351b80;
            psVar5 = (short *)(lVar22 + 0x1a);
            do {
              sVar18 = *psVar5;
              cVar9 = '\x01';
              bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
              if (bVar30) {
                *psVar5 = sVar18 + 1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (sVar18 == 0) {
              uVar15 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
              *(undefined8 *)(lVar22 + 8) = uVar15;
              *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
            }
            else if (sVar18 == -1) goto LAB_01349e44;
          }
        }
        local_1a8 = (long *)0x0;
        local_1a0 = (long *)0x0;
        FUN_00c43ef0(&local_1a8,param_1 + 0x30);
        local_b0 = (long *)0x0;
        local_a8 = (long *)0x0;
        if (local_1a8[2] == param_1 + 0x28) {
          do {
            plVar19 = local_1a0;
            cVar9 = '\x01';
            bVar30 = (bool)ExclusiveMonitorPass(&local_1a0,0x10);
            if (bVar30) {
              local_1a0 = (long *)0x0;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          uVar15 = *(undefined8 *)PTR_DAT_047d3910;
          *(undefined8 *)PTR_DAT_047d3918 = uVar15;
          FUN_00c44204(&local_c8,uVar15,plVar19);
          plVar14 = local_1a8;
          local_1a8 = (long *)0x0;
          if (plVar14 != (long *)0x0) {
            plVar21 = plVar14 + 3;
            do {
              sVar18 = (short)*plVar21;
              cVar9 = '\x01';
              bVar30 = (bool)ExclusiveMonitorPass(plVar21,0x10);
              if (bVar30) {
                *(short *)plVar21 = sVar18 + -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (sVar18 == 1) {
              piVar6 = (int *)((long)plVar14 + 0x1c);
              do {
                iVar11 = *piVar6;
                cVar9 = '\x01';
                bVar30 = (bool)ExclusiveMonitorPass(piVar6,0x10);
                if (bVar30) {
                  *piVar6 = -1;
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
              if (iVar11 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar22 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar22;
                local_98 = (long *)*plVar14;
                FUN_00c44438(lVar22 + 0x8040,&local_98);
              }
            }
            else if (sVar18 == 0) goto LAB_013497f0;
          }
          plVar14 = local_b0;
          if (local_c8 == (long *)0x0) {
            FUN_0135b410(&local_b0);
          }
          else {
            local_b0 = (long *)0x0;
            if (plVar14 != (long *)0x0) {
              plVar21 = plVar14 + 3;
              do {
                sVar18 = (short)*plVar21;
                cVar9 = '\x01';
                bVar30 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                if (bVar30) {
                  *(short *)plVar21 = sVar18 + -1;
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
              if (sVar18 == 1) {
                piVar6 = (int *)((long)plVar14 + 0x1c);
                do {
                  iVar11 = *piVar6;
                  cVar9 = '\x01';
                  bVar30 = (bool)ExclusiveMonitorPass(piVar6,0x10);
                  if (bVar30) {
                    *piVar6 = -1;
                    cVar9 = ExclusiveMonitorsStatus();
                  }
                } while (cVar9 != '\0');
                if (iVar11 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar22 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar22;
                  local_98 = (long *)*plVar14;
                  FUN_00c44438(lVar22 + 0x8040,&local_98);
                }
              }
              else if (sVar18 == 0) goto LAB_013497f0;
            }
            local_b0 = local_c8;
            local_c8 = (long *)0x0;
            local_a8 = plVar19;
          }
        }
        plVar19 = local_1a8;
        if (local_1a8 != (long *)0x0) {
          plVar14 = local_1a8 + 3;
          do {
            sVar18 = (short)*plVar14;
            cVar9 = '\x01';
            bVar30 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar30) {
              *(short *)plVar14 = sVar18 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (sVar18 == 1) {
            piVar6 = (int *)((long)local_1a8 + 0x1c);
            do {
              iVar11 = *piVar6;
              cVar9 = '\x01';
              bVar30 = (bool)ExclusiveMonitorPass(piVar6,0x10);
              if (bVar30) {
                *piVar6 = -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (iVar11 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar22 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar22;
              local_98 = (long *)*plVar19;
              FUN_00c44438(lVar22 + 0x8040,&local_98);
            }
          }
          else if (sVar18 == 0) goto LAB_013497f0;
        }
        if (((*PTR_DAT_047d8c58 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d8c58), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d9368,PTR_DAT_047d8c60,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d8c58);
        }
        uVar15 = *(undefined8 *)PTR_DAT_047d8c60;
        *(undefined8 *)PTR_DAT_047d8c68 = uVar15;
        FUN_00cbf5d4(&local_1b0,uVar15,plVar23[1]);
        local_98 = (long *)0x0;
        local_90 = (long *)0x0;
        FUN_01358ee8(&local_98,&local_b0);
        local_88 = local_1b0;
        if (local_1b0 != (long *)0x0) {
          lVar22 = local_1b0[6];
          if (*(long *)(lVar22 + 0x10) == 0) goto LAB_01351b80;
          psVar5 = (short *)(lVar22 + 0x1a);
          do {
            sVar18 = *psVar5;
            cVar9 = '\x01';
            bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
            if (bVar30) {
              *psVar5 = sVar18 + 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (sVar18 == 0) {
            uVar15 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
            *(undefined8 *)(lVar22 + 8) = uVar15;
            *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
          }
          else if (sVar18 == -1) goto LAB_01349e44;
        }
        plVar19 = (long *)0x0;
        if (local_1b0 != (long *)0x0) {
          plVar19 = local_1b0 + 0xb;
        }
        if ((*(byte *)((long)plVar23 + 0x6d) & 1) == 0) {
          if ((*(byte *)((long)plVar23 + 0x6c) & 1) == 0) {
            plVar14 = plVar23 + 0xf;
            lVar22 = nn::os::GetCurrentThread();
LAB_0134e604:
            if (*plVar14 == 0) goto code_r0x0134e60c;
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(plVar23 + 0x10));
            do {
              if (*plVar14 != 0) {
                do {
                  ClearExclusiveLocal();
                  nn::os::WaitLightEvent((LightEventType *)(plVar23 + 0x10));
                  while (*plVar14 == 0) {
                    cVar9 = '\x01';
                    bVar30 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                    if (bVar30) {
                      *plVar14 = lVar22;
                      cVar9 = ExclusiveMonitorsStatus();
                    }
                    if (cVar9 == '\0') goto LAB_0134e614;
                  }
                } while( true );
              }
              cVar9 = '\x01';
              bVar30 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar30) {
                *plVar14 = lVar22;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
LAB_0134e614:
            if ((*(byte *)((long)plVar23 + 0x6c) & 1) == 0) {
              local_1a8 = (long *)0x0;
              local_1a0 = (long *)0x0;
              FUN_029afd8c(&local_1a8,&local_98);
              local_198 = local_88;
              if (local_88 != (long *)0x0) {
                lVar22 = local_88[6];
                if (*(long *)(lVar22 + 0x10) == 0) goto LAB_01351b80;
                psVar5 = (short *)(lVar22 + 0x1a);
                do {
                  sVar18 = *psVar5;
                  cVar9 = '\x01';
                  bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
                  if (bVar30) {
                    *psVar5 = sVar18 + 1;
                    cVar9 = ExclusiveMonitorsStatus();
                  }
                } while (cVar9 != '\0');
                if (sVar18 == 0) {
                  uVar15 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
                  *(undefined8 *)(lVar22 + 8) = uVar15;
                  *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
                }
                else if (sVar18 == -1) goto LAB_01349e44;
              }
              local_190 = plVar19;
              FUN_029affec(plVar23 + 0x19,&local_1a8);
              if (local_198 != (long *)0x0) {
                lVar22 = local_198[6];
                psVar5 = (short *)(lVar22 + 0x1a);
                do {
                  sVar18 = *psVar5;
                  cVar9 = '\x01';
                  bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
                  if (bVar30) {
                    *psVar5 = sVar18 + -1;
                    cVar9 = ExclusiveMonitorsStatus();
                  }
                } while (cVar9 != '\0');
                if (sVar18 == 1) {
                  *(undefined8 *)(lVar22 + 0x10) = 0;
                  (**(code **)(*local_198 + 0x50))();
                }
                else if (sVar18 == 0) goto LAB_013498f8;
              }
              plVar19 = local_1a8;
              if (local_1a8 != (long *)0x0) {
                plVar14 = local_1a8 + 3;
                do {
                  sVar18 = (short)*plVar14;
                  cVar9 = '\x01';
                  bVar30 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                  if (bVar30) {
                    *(short *)plVar14 = sVar18 + -1;
                    cVar9 = ExclusiveMonitorsStatus();
                  }
                } while (cVar9 != '\0');
                if (sVar18 == 1) {
                  piVar6 = (int *)((long)local_1a8 + 0x1c);
                  do {
                    iVar11 = *piVar6;
                    cVar9 = '\x01';
                    bVar30 = (bool)ExclusiveMonitorPass(piVar6,0x10);
                    if (bVar30) {
                      *piVar6 = -1;
                      cVar9 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar9 != '\0');
                  if (iVar11 != -1) {
                    if (((*PTR_DAT_047d3908 & 1) == 0) &&
                       (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
                      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                      __cxa_guard_release(PTR_DAT_047d3908);
                    }
                    lVar22 = *(long *)PTR_DAT_047d3910;
                    *(long *)PTR_DAT_047d3918 = lVar22;
                    local_c8 = (long *)*plVar19;
                    FUN_00c44438(lVar22 + 0x8040,&local_c8);
                  }
                }
                else if (sVar18 == 0) goto LAB_013497f0;
              }
            }
            else {
              FUN_01358c30(&local_98);
            }
            plVar23[0xf] = 0;
            nn::os::SignalLightEvent((LightEventType *)(plVar23 + 0x10));
            goto LAB_0134b448;
          }
          FUN_01358c30(&local_98);
        }
LAB_0134b448:
        plVar19 = (long *)PTR_DAT_047d8c48;
        pbVar26 = PTR_DAT_047d8c40;
        if (local_88 != (long *)0x0) {
          lVar22 = local_88[6];
          psVar5 = (short *)(lVar22 + 0x1a);
          do {
            sVar18 = *psVar5;
            cVar9 = '\x01';
            bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
            if (bVar30) {
              *psVar5 = sVar18 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (sVar18 == 1) {
            *(undefined8 *)(lVar22 + 0x10) = 0;
            (**(code **)(*local_88 + 0x50))();
          }
          else if (sVar18 == 0) goto LAB_013498f8;
        }
        plVar14 = local_98;
        if (local_98 != (long *)0x0) {
          plVar21 = local_98 + 3;
          do {
            sVar18 = (short)*plVar21;
            cVar9 = '\x01';
            bVar30 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar30) {
              *(short *)plVar21 = sVar18 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (sVar18 == 1) {
            piVar6 = (int *)((long)local_98 + 0x1c);
            do {
              iVar11 = *piVar6;
              cVar9 = '\x01';
              bVar30 = (bool)ExclusiveMonitorPass(piVar6,0x10);
              if (bVar30) {
                *piVar6 = -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            pbVar26 = PTR_DAT_047d8c40;
            plVar19 = (long *)PTR_DAT_047d8c48;
            if (iVar11 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar22 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar22;
              local_1a8 = (long *)*plVar14;
              FUN_00c44438(lVar22 + 0x8040,&local_1a8);
              pbVar26 = PTR_DAT_047d8c40;
              plVar19 = (long *)PTR_DAT_047d8c48;
            }
          }
          else if (sVar18 == 0) goto LAB_013497f0;
        }
        if (local_1b0 != (long *)0x0) {
          lVar22 = local_1b0[6];
          psVar5 = (short *)(lVar22 + 0x1a);
          do {
            sVar18 = *psVar5;
            cVar9 = '\x01';
            bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
            if (bVar30) {
              *psVar5 = sVar18 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (sVar18 == 1) {
            *(undefined8 *)(lVar22 + 0x10) = 0;
            (**(code **)(*local_1b0 + 0x50))();
          }
          else if (sVar18 == 0) goto LAB_013498f8;
        }
        plVar14 = local_b0;
        if (local_b0 != (long *)0x0) {
          plVar21 = local_b0 + 3;
          do {
            sVar18 = (short)*plVar21;
            cVar9 = '\x01';
            bVar30 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar30) {
              *(short *)plVar21 = sVar18 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (sVar18 == 1) {
            piVar6 = (int *)((long)local_b0 + 0x1c);
            do {
              iVar11 = *piVar6;
              cVar9 = '\x01';
              bVar30 = (bool)ExclusiveMonitorPass(piVar6,0x10);
              if (bVar30) {
                *piVar6 = -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            pbVar26 = PTR_DAT_047d8c40;
            plVar19 = (long *)PTR_DAT_047d8c48;
            if (iVar11 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar22 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar22;
              local_1a8 = (long *)*plVar14;
              FUN_00c44438(lVar22 + 0x8040,&local_1a8);
              pbVar26 = PTR_DAT_047d8c40;
              plVar19 = (long *)PTR_DAT_047d8c48;
            }
          }
          else if (sVar18 == 0) goto LAB_013497f0;
        }
        lVar22 = plVar23[6];
        psVar5 = (short *)(lVar22 + 0x1a);
        do {
          sVar18 = *psVar5;
          cVar9 = '\x01';
          bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
          if (bVar30) {
            *psVar5 = sVar18 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar18 == 1) {
          *(undefined8 *)(lVar22 + 0x10) = 0;
          (**(code **)(*plVar23 + 0x50))(plVar23);
        }
        else if (sVar18 == 0) goto LAB_013498f8;
        if (local_f0 != (long *)0x0) {
          (**(code **)(*local_f0 + 0x20))();
        }
        if (local_110 != (long *)0x0) {
          (**(code **)(*local_110 + 0x20))();
        }
        plVar23 = *(long **)(*(long *)(param_1 + 0x50) + 0x30);
        if (plVar23 != (long *)0x0) {
LAB_01346c6c:
          __s = (char *)plVar23[3];
          sVar13 = strlen(__s);
          if (((((((sVar13 == 0) || (pcVar7 = __s + (sVar13 - 1), *pcVar7 != 'b' || pcVar7 == __s))
                 || (pcVar7[-1] != 'p')) || ((pcVar7 + -1 == __s || (pcVar7[-2] != 's')))) ||
               ((pcVar7 + -2 == __s || ((pcVar7[-3] != 'r' || (pcVar7 + -3 == __s)))))) ||
              (pcVar7[-4] != 't')) || ((pcVar7 + -4 == __s || (pcVar7[-5] != '.'))))
          goto LAB_01346c94;
          if (((*PTR_DAT_047d3e28 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3e28);
          }
          FUN_00f2b7b8(&local_110,&local_178,PTR_DAT_047d3e30,&DAT_03c886bc);
          FUN_013570f0(&local_98,param_1 + 0x60,plVar23 + 2);
          FUN_01467264(&local_1a8,&local_178,&local_98,&DAT_03c886bc);
          if (local_98 != (long *)0x0) {
            (**(code **)(*local_98 + 0x20))();
          }
          uVar12 = FUN_01359468(param_1 + 0x470,&local_1a8);
          if (((uVar12 & 1) == 0) || (plVar23 = *(long **)(param_1 + 0x490), plVar23 == (long *)0x0)
             ) goto LAB_0134c5cc;
          lVar22 = plVar23[6];
          if (*(long *)(lVar22 + 0x10) != 0) {
            psVar5 = (short *)(lVar22 + 0x1a);
            do {
              sVar18 = *psVar5;
              cVar9 = '\x01';
              bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
              if (bVar30) {
                *psVar5 = sVar18 + 1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (sVar18 == 0) {
              uVar15 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
              *(undefined8 *)(lVar22 + 8) = uVar15;
              *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
            }
            else if (sVar18 == -1) goto LAB_01349e44;
            lVar22 = plVar23[6];
            psVar5 = (short *)(lVar22 + 0x1a);
            do {
              sVar18 = *psVar5;
              cVar9 = '\x01';
              bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
              if (bVar30) {
                *psVar5 = sVar18 + -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (sVar18 == 1) {
              *(undefined8 *)(lVar22 + 0x10) = 0;
              (**(code **)(*plVar23 + 0x50))(plVar23);
            }
            else if (sVar18 == 0) goto LAB_013498f8;
LAB_0134c5cc:
            if (local_188 != (long *)0x0) {
              (**(code **)(*local_188 + 0x20))();
            }
            if (local_1a8 != (long *)0x0) {
              pcVar20 = *(code **)(*local_1a8 + 0x20);
              plVar23 = local_1a8;
              goto LAB_0134db38;
            }
            goto LAB_01346908;
          }
          goto LAB_01351b80;
        }
        goto LAB_013478dc;
      }
      if (lVar22 != -0x5a334c6b1605370) goto LAB_013478dc;
      FUN_00f2b7b8(&local_1a8,&local_178,plVar29 + 4,&DAT_03c886bc);
      if (((*pbVar26 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d8c40), iVar11 != 0)) {
        FUN_00100190(PTR_LAB_047d8e90,plVar19,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8c40);
      }
      lVar25 = *plVar19;
      plVar19 = (long *)(lVar25 + 0x2f0);
      *(long *)PTR_DAT_047d8c50 = lVar25;
      local_138 = *(long **)(lVar25 + 0x3a0);
      local_70[0] = (long *)0x0;
      lVar28 = *plVar19;
      lVar22 = nn::os::GetCurrentThread();
      if (lVar22 != lVar28) {
        lVar22 = nn::os::GetCurrentThread();
LAB_01347638:
        if (*plVar19 == 0) goto code_r0x01347640;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar25 + 0x2f8));
        do {
          if (*plVar19 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar25 + 0x2f8));
              while (*plVar19 == 0) {
                cVar9 = '\x01';
                bVar30 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                if (bVar30) {
                  *plVar19 = lVar22;
                  cVar9 = ExclusiveMonitorsStatus();
                }
                if (cVar9 == '\0') goto LAB_01347648;
              }
            } while( true );
          }
          cVar9 = '\x01';
          bVar30 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar30) {
            *plVar19 = lVar22;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
LAB_01347648:
        bVar30 = false;
        goto LAB_0134764c;
      }
      bVar30 = true;
LAB_0134764c:
      plVar19 = *(long **)(lVar25 + 0x290);
      if (((ulong)plVar19 & (long)plVar19 - 1U) == 0) {
        plVar23 = (long *)((long)plVar19 - 1U & (ulong)local_1a0);
      }
      else {
        plVar23 = local_1a0;
        if (plVar19 <= local_1a0) {
          uVar12 = 0;
          if (plVar19 != (long *)0x0) {
            uVar12 = (ulong)local_1a0 / (ulong)plVar19;
          }
          plVar23 = (long *)((long)local_1a0 - uVar12 * (long)plVar19);
        }
      }
      FUN_00d00258(&local_98,lVar25,plVar23,&local_1a8,local_138);
      if (local_98 != (long *)0x0) {
        lVar22 = local_98[9];
        if ((lVar22 != 0) && (*(short *)(lVar22 + 0x1a) != 0)) {
          psVar5 = (short *)(lVar22 + 0x1a);
          sVar18 = *(short *)(lVar22 + 0x1a);
          do {
            sVar8 = *psVar5;
            if (sVar8 == sVar18) {
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(psVar5,0x10);
              if (bVar10) {
                *psVar5 = sVar18 + 1;
                cVar9 = ExclusiveMonitorsStatus();
              }
              if (cVar9 != '\0') goto LAB_013508e0;
              bVar10 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_013508e0:
              bVar10 = false;
            }
            if (bVar10) {
              puVar24 = *(undefined8 **)(lVar22 + 0x10);
              if (puVar24 != (undefined8 *)0x0) {
                plVar19 = puVar24 + -5;
                puVar16 = (undefined8 *)(**(code **)*puVar24)(puVar24);
                if (((*PTR_DAT_047e3020 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(PTR_DAT_047e3020), iVar11 != 0)) {
                  uVar15 = FUN_00cf27f8();
                  *(undefined8 *)PTR_DAT_047e3028 = uVar15;
                  __cxa_guard_release(PTR_DAT_047e3020);
                }
                goto LAB_01350a24;
              }
              break;
            }
            sVar18 = sVar8;
          } while (sVar8 != 0);
        }
        goto LAB_0134768c;
      }
      plVar19 = (long *)FUN_01353e30(*(undefined8 *)(lVar25 + 0x3a0),&local_1a8,&local_138);
      if (plVar19 != (long *)0x0) {
        lVar22 = plVar19[6];
        if (*(long *)(lVar22 + 0x10) == 0) goto LAB_01351b80;
        psVar5 = (short *)(lVar22 + 0x1a);
        do {
          sVar18 = *psVar5;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(psVar5,0x10);
          if (bVar10) {
            *psVar5 = sVar18 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar18 == 0) {
          uVar15 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
          *(undefined8 *)(lVar22 + 8) = uVar15;
          *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
        }
        else if (sVar18 == -1) goto LAB_01349e44;
      }
      plVar14 = local_70[0];
      local_70[0] = (long *)0x0;
      if (plVar14 != (long *)0x0) {
        lVar22 = plVar14[6];
        psVar5 = (short *)(lVar22 + 0x1a);
        do {
          sVar18 = *psVar5;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(psVar5,0x10);
          if (bVar10) {
            *psVar5 = sVar18 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar18 == 1) {
          *(undefined8 *)(lVar22 + 0x10) = 0;
          (**(code **)(*plVar14 + 0x50))();
        }
        else if (sVar18 == 0) goto LAB_013498f8;
      }
      puVar24 = *(undefined8 **)(*(long *)(lVar25 + 0x288) + (long)plVar23 * 8);
      local_88 = *(long **)(lVar25 + 0x290);
      local_98 = (long *)0x0;
      if (puVar24 != (undefined8 *)0x0) {
        local_98 = (long *)*puVar24;
      }
      local_90 = plVar23;
      local_70[0] = plVar19;
      if (local_98 != (long *)0x0) {
        if (((ulong)local_88 & (long)local_88 - 1U) == 0) {
          do {
            plVar14 = (long *)PTR_DAT_047d8b70;
            if (local_98[2] != 0) {
              plVar14 = (long *)(local_98[2] + 0x30);
            }
            plVar21 = (long *)PTR_DAT_047d8b70;
            if (local_1a8 != (long *)0x0) {
              plVar21 = local_1a8 + 6;
            }
            if ((*plVar14 == *plVar21) &&
               ((local_98[9] == 0 || (*(short *)(local_98[9] + 0x1a) == 0)))) goto LAB_0134f000;
            local_98 = (long *)*local_98;
          } while ((local_98 != (long *)0x0) &&
                  ((long *)(local_98[1] & (long)local_88 - 1U) == plVar23));
        }
        else {
          do {
            plVar14 = (long *)PTR_DAT_047d8b70;
            if (local_98[2] != 0) {
              plVar14 = (long *)(local_98[2] + 0x30);
            }
            plVar21 = (long *)PTR_DAT_047d8b70;
            if (local_1a8 != (long *)0x0) {
              plVar21 = local_1a8 + 6;
            }
            if ((*plVar14 == *plVar21) &&
               ((local_98[9] == 0 || (*(short *)(local_98[9] + 0x1a) == 0)))) goto LAB_0134f000;
            local_98 = (long *)*local_98;
            if (local_98 == (long *)0x0) break;
            plVar14 = (long *)local_98[1];
            if (local_88 <= plVar14) {
              uVar12 = 0;
              if (local_88 != (long *)0x0) {
                uVar12 = (ulong)plVar14 / (ulong)local_88;
              }
              plVar14 = (long *)((long)plVar14 - uVar12 * (long)local_88);
            }
          } while (plVar14 == plVar23);
        }
      }
      local_98 = (long *)0x0;
      (**(code **)(*plVar19 + 0x18))(&local_110,plVar19);
      local_c8 = (long *)0x0;
      plStack_c0 = (long *)0x0;
      plVar23 = (long *)0x0;
      if (plVar19 != (long *)0x0) {
        plVar23 = plVar19 + 5;
      }
      if ((long *)local_110[2] == plVar23) {
        FUN_00d1f904(&local_c8,&local_110);
      }
      plVar19 = local_110;
      if (local_110 != (long *)0x0) {
        plVar23 = local_110 + 3;
        do {
          sVar18 = (short)*plVar23;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar10) {
            *(short *)plVar23 = sVar18 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar18 == 1) {
          piVar6 = (int *)((long)local_110 + 0x1c);
          do {
            iVar11 = *piVar6;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar10) {
              *piVar6 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar11 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar22 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar22;
            local_b0 = (long *)*plVar19;
            FUN_00c44438(lVar22 + 0x8040,&local_b0);
          }
        }
        else if (sVar18 == 0) goto LAB_013497f0;
      }
      local_b0 = local_138;
      local_a8 = (long *)0x0;
      local_a0 = 0;
      FUN_00dc7a68(&local_a8,&local_c8);
      local_110 = local_1a8;
      if (local_1a8 != (long *)0x0) {
        (**(code **)(*local_1a8 + 0x18))();
      }
      local_108 = local_1a0;
      local_100 = local_198;
      local_f8 = local_190;
      local_f0 = local_188;
      if (local_188 != (long *)0x0) {
        (**(code **)(*local_188 + 0x18))();
      }
      local_e8 = CONCAT44(local_e8._4_4_,local_180);
      local_e0 = local_b0;
      local_d8 = (long *)0x0;
      local_d0 = 0;
      FUN_00dc7a68(&local_d8,&local_a8);
      FUN_01354124(lVar25 + 0x288,&local_110);
      plVar19 = local_d8;
      if (local_d8 != (long *)0x0) {
        plVar23 = local_d8 + 3;
        do {
          sVar18 = (short)*plVar23;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar10) {
            *(short *)plVar23 = sVar18 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar18 == 1) {
          piVar6 = (int *)((long)local_d8 + 0x1c);
          do {
            iVar11 = *piVar6;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar10) {
              *piVar6 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar11 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar22 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar22;
            local_128 = (long *)*plVar19;
            FUN_00c44438(lVar22 + 0x8040,&local_128);
          }
        }
        else if (sVar18 == 0) goto LAB_013497f0;
      }
      if (local_f0 != (long *)0x0) {
        (**(code **)(*local_f0 + 0x20))();
      }
      if (local_110 != (long *)0x0) {
        (**(code **)(*local_110 + 0x20))();
      }
      plVar19 = local_a8;
      if (local_a8 != (long *)0x0) {
        plVar23 = local_a8 + 3;
        do {
          sVar18 = (short)*plVar23;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar10) {
            *(short *)plVar23 = sVar18 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar18 == 1) {
          piVar6 = (int *)((long)local_a8 + 0x1c);
          do {
            iVar11 = *piVar6;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar10) {
              *piVar6 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar11 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar22 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar22;
            local_128 = (long *)*plVar19;
            FUN_00c44438(lVar22 + 0x8040,&local_128);
          }
        }
        else if (sVar18 == 0) goto LAB_013497f0;
      }
      plVar19 = local_c8;
      if (local_c8 != (long *)0x0) {
        plVar23 = local_c8 + 3;
        do {
          sVar18 = (short)*plVar23;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar10) {
            *(short *)plVar23 = sVar18 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar18 == 1) {
          piVar6 = (int *)((long)local_c8 + 0x1c);
          do {
            iVar11 = *piVar6;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar10) {
              *piVar6 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar11 == -1) goto LAB_01347714;
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_128 = (long *)*plVar19;
          lVar22 = lVar22 + 0x8040;
          pplVar17 = &local_128;
          goto LAB_0134ce50;
        }
        goto LAB_01349320;
      }
      goto LAB_01347714;
    }
    if (lVar22 < -0x27f60163a842de0c) {
      if (lVar22 != -0x2e32c8025a5f9d0a) {
        if (lVar22 == -0x6ac30de171723188) {
          FUN_00f2b7b8(&local_110,&local_178,plVar29 + 4,&DAT_03c886bc);
          FUN_0135ad70(&local_1b8,param_1 + 0x368,&local_110);
          if (local_1b8 == (long *)0x0) goto LAB_01346908;
          lVar22 = local_1b8[6];
          psVar5 = (short *)(lVar22 + 0x1a);
          do {
            sVar18 = *psVar5;
            cVar9 = '\x01';
            bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
            if (bVar30) {
              *psVar5 = sVar18 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (sVar18 == 1) {
            *(undefined8 *)(lVar22 + 0x10) = 0;
            pcVar20 = *(code **)(*local_1b8 + 0x50);
            plVar23 = local_1b8;
            goto LAB_0134db38;
          }
          goto LAB_01346ab0;
        }
        goto LAB_013478dc;
      }
      FUN_00f2b7b8(&local_1a8,&local_178,plVar29 + 4,&DAT_03c886bc);
      if (((*pbVar26 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d8c40), iVar11 != 0)) {
        FUN_00100190(PTR_LAB_047d8e90,plVar19,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8c40);
      }
      lVar25 = *plVar19;
      plVar19 = (long *)(lVar25 + 0x2f0);
      *(long *)PTR_DAT_047d8c50 = lVar25;
      local_138 = *(long **)(lVar25 + 0x3a0);
      local_70[0] = (long *)0x0;
      lVar28 = *plVar19;
      lVar22 = nn::os::GetCurrentThread();
      if (lVar22 != lVar28) {
        lVar22 = nn::os::GetCurrentThread();
LAB_013472dc:
        if (*plVar19 == 0) goto code_r0x013472e4;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar25 + 0x2f8));
        do {
          if (*plVar19 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar25 + 0x2f8));
              while (*plVar19 == 0) {
                cVar9 = '\x01';
                bVar30 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                if (bVar30) {
                  *plVar19 = lVar22;
                  cVar9 = ExclusiveMonitorsStatus();
                }
                if (cVar9 == '\0') goto LAB_013472ec;
              }
            } while( true );
          }
          cVar9 = '\x01';
          bVar30 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar30) {
            *plVar19 = lVar22;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
LAB_013472ec:
        bVar30 = false;
        goto LAB_013472f0;
      }
      bVar30 = true;
LAB_013472f0:
      plVar19 = *(long **)(lVar25 + 0x290);
      if (((ulong)plVar19 & (long)plVar19 - 1U) == 0) {
        plVar23 = (long *)((long)plVar19 - 1U & (ulong)local_1a0);
      }
      else {
        plVar23 = local_1a0;
        if (plVar19 <= local_1a0) {
          uVar12 = 0;
          if (plVar19 != (long *)0x0) {
            uVar12 = (ulong)local_1a0 / (ulong)plVar19;
          }
          plVar23 = (long *)((long)local_1a0 - uVar12 * (long)plVar19);
        }
      }
      FUN_00d00258(&local_98,lVar25,plVar23,&local_1a8,local_138);
      if (local_98 != (long *)0x0) {
        lVar22 = local_98[9];
        if ((lVar22 != 0) && (*(short *)(lVar22 + 0x1a) != 0)) {
          psVar5 = (short *)(lVar22 + 0x1a);
          sVar18 = *(short *)(lVar22 + 0x1a);
          do {
            sVar8 = *psVar5;
            if (sVar8 == sVar18) {
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(psVar5,0x10);
              if (bVar10) {
                *psVar5 = sVar18 + 1;
                cVar9 = ExclusiveMonitorsStatus();
              }
              if (cVar9 != '\0') goto LAB_01350850;
              bVar10 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_01350850:
              bVar10 = false;
            }
            if (bVar10) {
              puVar24 = *(undefined8 **)(lVar22 + 0x10);
              if (puVar24 != (undefined8 *)0x0) {
                plVar19 = puVar24 + -5;
                puVar16 = (undefined8 *)(**(code **)*puVar24)(puVar24);
                if (((*PTR_DAT_047e3000 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(PTR_DAT_047e3000), iVar11 != 0)) {
                  uVar15 = FUN_00cf27f8();
                  *(undefined8 *)PTR_DAT_047e3008 = uVar15;
                  __cxa_guard_release(PTR_DAT_047e3000);
                }
                if (puVar16 != (undefined8 *)0x0) goto LAB_01350928;
                plVar23 = (long *)0x0;
                goto LAB_0135093c;
              }
              break;
            }
            sVar18 = sVar8;
          } while (sVar8 != 0);
        }
        goto LAB_01347330;
      }
      plVar19 = (long *)FUN_01353cc8(*(undefined8 *)(lVar25 + 0x3a0),&local_1a8,&local_138);
      if (plVar19 != (long *)0x0) {
        lVar22 = plVar19[6];
        if (*(long *)(lVar22 + 0x10) == 0) goto LAB_01351b80;
        psVar5 = (short *)(lVar22 + 0x1a);
        do {
          sVar18 = *psVar5;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(psVar5,0x10);
          if (bVar10) {
            *psVar5 = sVar18 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar18 == 0) {
          uVar15 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
          *(undefined8 *)(lVar22 + 8) = uVar15;
          *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
        }
        else if (sVar18 == -1) goto LAB_01349e44;
      }
      plVar14 = local_70[0];
      local_70[0] = (long *)0x0;
      if (plVar14 != (long *)0x0) {
        lVar22 = plVar14[6];
        psVar5 = (short *)(lVar22 + 0x1a);
        do {
          sVar18 = *psVar5;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(psVar5,0x10);
          if (bVar10) {
            *psVar5 = sVar18 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar18 == 1) {
          *(undefined8 *)(lVar22 + 0x10) = 0;
          (**(code **)(*plVar14 + 0x50))();
        }
        else if (sVar18 == 0) goto LAB_013498f8;
      }
      puVar24 = *(undefined8 **)(*(long *)(lVar25 + 0x288) + (long)plVar23 * 8);
      local_88 = *(long **)(lVar25 + 0x290);
      local_98 = (long *)0x0;
      if (puVar24 != (undefined8 *)0x0) {
        local_98 = (long *)*puVar24;
      }
      local_90 = plVar23;
      local_70[0] = plVar19;
      if (local_98 != (long *)0x0) {
        if (((ulong)local_88 & (long)local_88 - 1U) == 0) {
          do {
            plVar14 = (long *)PTR_DAT_047d8b70;
            if (local_98[2] != 0) {
              plVar14 = (long *)(local_98[2] + 0x30);
            }
            plVar21 = (long *)PTR_DAT_047d8b70;
            if (local_1a8 != (long *)0x0) {
              plVar21 = local_1a8 + 6;
            }
            if ((*plVar14 == *plVar21) &&
               ((local_98[9] == 0 || (*(short *)(local_98[9] + 0x1a) == 0)))) goto LAB_0134ea24;
            local_98 = (long *)*local_98;
          } while ((local_98 != (long *)0x0) &&
                  ((long *)(local_98[1] & (long)local_88 - 1U) == plVar23));
        }
        else {
          do {
            plVar14 = (long *)PTR_DAT_047d8b70;
            if (local_98[2] != 0) {
              plVar14 = (long *)(local_98[2] + 0x30);
            }
            plVar21 = (long *)PTR_DAT_047d8b70;
            if (local_1a8 != (long *)0x0) {
              plVar21 = local_1a8 + 6;
            }
            if ((*plVar14 == *plVar21) &&
               ((local_98[9] == 0 || (*(short *)(local_98[9] + 0x1a) == 0)))) goto LAB_0134ea24;
            local_98 = (long *)*local_98;
            if (local_98 == (long *)0x0) break;
            plVar14 = (long *)local_98[1];
            if (local_88 <= plVar14) {
              uVar12 = 0;
              if (local_88 != (long *)0x0) {
                uVar12 = (ulong)plVar14 / (ulong)local_88;
              }
              plVar14 = (long *)((long)plVar14 - uVar12 * (long)local_88);
            }
          } while (plVar14 == plVar23);
        }
      }
      local_98 = (long *)0x0;
      (**(code **)(*plVar19 + 0x18))(&local_110,plVar19);
      local_c8 = (long *)0x0;
      plStack_c0 = (long *)0x0;
      plVar23 = (long *)0x0;
      if (plVar19 != (long *)0x0) {
        plVar23 = plVar19 + 5;
      }
      if ((long *)local_110[2] == plVar23) {
        FUN_00d1f904(&local_c8,&local_110);
      }
      plVar19 = local_110;
      if (local_110 != (long *)0x0) {
        plVar23 = local_110 + 3;
        do {
          sVar18 = (short)*plVar23;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar10) {
            *(short *)plVar23 = sVar18 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar18 == 1) {
          piVar6 = (int *)((long)local_110 + 0x1c);
          do {
            iVar11 = *piVar6;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar10) {
              *piVar6 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar11 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar22 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar22;
            local_b0 = (long *)*plVar19;
            FUN_00c44438(lVar22 + 0x8040,&local_b0);
          }
        }
        else if (sVar18 == 0) goto LAB_013497f0;
      }
      local_b0 = local_138;
      local_a8 = (long *)0x0;
      local_a0 = 0;
      FUN_00dc7a68(&local_a8,&local_c8);
      local_110 = local_1a8;
      if (local_1a8 != (long *)0x0) {
        (**(code **)(*local_1a8 + 0x18))();
      }
      local_108 = local_1a0;
      local_100 = local_198;
      local_f8 = local_190;
      local_f0 = local_188;
      if (local_188 != (long *)0x0) {
        (**(code **)(*local_188 + 0x18))();
      }
      local_e8 = CONCAT44(local_e8._4_4_,local_180);
      local_e0 = local_b0;
      local_d8 = (long *)0x0;
      local_d0 = 0;
      FUN_00dc7a68(&local_d8,&local_a8);
      FUN_01354124(lVar25 + 0x288,&local_110);
      plVar19 = local_d8;
      if (local_d8 != (long *)0x0) {
        plVar23 = local_d8 + 3;
        do {
          sVar18 = (short)*plVar23;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar10) {
            *(short *)plVar23 = sVar18 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar18 == 1) {
          piVar6 = (int *)((long)local_d8 + 0x1c);
          do {
            iVar11 = *piVar6;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar10) {
              *piVar6 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar11 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar22 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar22;
            local_128 = (long *)*plVar19;
            FUN_00c44438(lVar22 + 0x8040,&local_128);
          }
        }
        else if (sVar18 == 0) goto LAB_013497f0;
      }
      if (local_f0 != (long *)0x0) {
        (**(code **)(*local_f0 + 0x20))();
      }
      if (local_110 != (long *)0x0) {
        (**(code **)(*local_110 + 0x20))();
      }
      plVar19 = local_a8;
      if (local_a8 != (long *)0x0) {
        plVar23 = local_a8 + 3;
        do {
          sVar18 = (short)*plVar23;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar10) {
            *(short *)plVar23 = sVar18 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar18 == 1) {
          piVar6 = (int *)((long)local_a8 + 0x1c);
          do {
            iVar11 = *piVar6;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar10) {
              *piVar6 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar11 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar22 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar22;
            local_128 = (long *)*plVar19;
            FUN_00c44438(lVar22 + 0x8040,&local_128);
          }
        }
        else if (sVar18 == 0) goto LAB_013497f0;
      }
      plVar19 = local_c8;
      if (local_c8 != (long *)0x0) {
        plVar23 = local_c8 + 3;
        do {
          sVar18 = (short)*plVar23;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar10) {
            *(short *)plVar23 = sVar18 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar18 == 1) {
          piVar6 = (int *)((long)local_c8 + 0x1c);
          do {
            iVar11 = *piVar6;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar10) {
              *piVar6 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar11 == -1) goto LAB_013473b8;
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_128 = (long *)*plVar19;
          lVar22 = lVar22 + 0x8040;
          pplVar17 = &local_128;
          goto LAB_0134ccd0;
        }
        goto LAB_01349290;
      }
      goto LAB_013473b8;
    }
    if (lVar22 != -0x1d553c030e6b22ae) {
      if (lVar22 != -0x27f60163a842de0c) goto LAB_013478dc;
      FUN_00f2b7b8(&local_1a8,&local_178,plVar29 + 4,&DAT_03c886bc);
      if (((*pbVar26 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d8c40), iVar11 != 0)) {
        FUN_00100190(PTR_LAB_047d8e90,plVar19,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8c40);
      }
      lVar25 = *plVar19;
      plVar19 = (long *)(lVar25 + 0x2f0);
      *(long *)PTR_DAT_047d8c50 = lVar25;
      local_138 = *(long **)(lVar25 + 0x3a0);
      local_70[0] = (long *)0x0;
      lVar28 = *plVar19;
      lVar22 = nn::os::GetCurrentThread();
      if (lVar22 != lVar28) {
        lVar22 = nn::os::GetCurrentThread();
LAB_0134723c:
        if (*plVar19 == 0) goto code_r0x01347244;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar25 + 0x2f8));
        do {
          if (*plVar19 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar25 + 0x2f8));
              while (*plVar19 == 0) {
                cVar9 = '\x01';
                bVar30 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                if (bVar30) {
                  *plVar19 = lVar22;
                  cVar9 = ExclusiveMonitorsStatus();
                }
                if (cVar9 == '\0') goto LAB_0134a2f8;
              }
            } while( true );
          }
          cVar9 = '\x01';
          bVar30 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar30) {
            *plVar19 = lVar22;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
LAB_0134a2f8:
        bVar30 = false;
        goto LAB_0134a2fc;
      }
      bVar30 = true;
LAB_0134a2fc:
      plVar19 = *(long **)(lVar25 + 0x290);
      if (((ulong)plVar19 & (long)plVar19 - 1U) == 0) {
        plVar23 = (long *)((long)plVar19 - 1U & (ulong)local_1a0);
      }
      else {
        plVar23 = local_1a0;
        if (plVar19 <= local_1a0) {
          uVar12 = 0;
          if (plVar19 != (long *)0x0) {
            uVar12 = (ulong)local_1a0 / (ulong)plVar19;
          }
          plVar23 = (long *)((long)local_1a0 - uVar12 * (long)plVar19);
        }
      }
      FUN_00d00258(&local_98,lVar25,plVar23,&local_1a8,local_138);
      if (local_98 != (long *)0x0) {
        lVar22 = local_98[9];
        if ((lVar22 != 0) && (*(short *)(lVar22 + 0x1a) != 0)) {
          psVar5 = (short *)(lVar22 + 0x1a);
          sVar18 = *(short *)(lVar22 + 0x1a);
          do {
            sVar8 = *psVar5;
            if (sVar8 == sVar18) {
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(psVar5,0x10);
              if (bVar10) {
                *psVar5 = sVar18 + 1;
                cVar9 = ExclusiveMonitorsStatus();
              }
              if (cVar9 != '\0') goto LAB_013515cc;
              bVar10 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_013515cc:
              bVar10 = false;
            }
            if (bVar10) {
              puVar24 = *(undefined8 **)(lVar22 + 0x10);
              if (puVar24 != (undefined8 *)0x0) {
                plVar19 = puVar24 + -5;
                puVar16 = (undefined8 *)(**(code **)*puVar24)(puVar24);
                if (((*PTR_DAT_047e3050 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(PTR_DAT_047e3050), iVar11 != 0)) {
                  uVar15 = FUN_00cf27f8();
                  *(undefined8 *)PTR_DAT_047e3058 = uVar15;
                  __cxa_guard_release(PTR_DAT_047e3050);
                }
                if (puVar16 != (undefined8 *)0x0) goto LAB_01351614;
                plVar23 = (long *)0x0;
                goto LAB_01351628;
              }
              break;
            }
            sVar18 = sVar8;
          } while (sVar8 != 0);
        }
        goto LAB_0134a33c;
      }
      plVar19 = (long *)FUN_01355418(*(undefined8 *)(lVar25 + 0x3a0),&local_1a8,&local_138);
      if (plVar19 != (long *)0x0) {
        lVar22 = plVar19[6];
        if (*(long *)(lVar22 + 0x10) == 0) goto LAB_01351b80;
        psVar5 = (short *)(lVar22 + 0x1a);
        do {
          sVar18 = *psVar5;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(psVar5,0x10);
          if (bVar10) {
            *psVar5 = sVar18 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar18 == 0) {
          uVar15 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
          *(undefined8 *)(lVar22 + 8) = uVar15;
          *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
        }
        else if (sVar18 == -1) goto LAB_01349e44;
      }
      plVar14 = local_70[0];
      local_70[0] = (long *)0x0;
      if (plVar14 != (long *)0x0) {
        lVar22 = plVar14[6];
        psVar5 = (short *)(lVar22 + 0x1a);
        do {
          sVar18 = *psVar5;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(psVar5,0x10);
          if (bVar10) {
            *psVar5 = sVar18 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar18 == 1) {
          *(undefined8 *)(lVar22 + 0x10) = 0;
          (**(code **)(*plVar14 + 0x50))();
        }
        else if (sVar18 == 0) goto LAB_013498f8;
      }
      puVar24 = *(undefined8 **)(*(long *)(lVar25 + 0x288) + (long)plVar23 * 8);
      local_88 = *(long **)(lVar25 + 0x290);
      local_98 = (long *)0x0;
      if (puVar24 != (undefined8 *)0x0) {
        local_98 = (long *)*puVar24;
      }
      local_90 = plVar23;
      local_70[0] = plVar19;
      if (local_98 != (long *)0x0) {
        if (((ulong)local_88 & (long)local_88 - 1U) == 0) {
          do {
            plVar14 = (long *)PTR_DAT_047d8b70;
            if (local_98[2] != 0) {
              plVar14 = (long *)(local_98[2] + 0x30);
            }
            plVar21 = (long *)PTR_DAT_047d8b70;
            if (local_1a8 != (long *)0x0) {
              plVar21 = local_1a8 + 6;
            }
            if ((*plVar14 == *plVar21) &&
               ((local_98[9] == 0 || (*(short *)(local_98[9] + 0x1a) == 0)))) goto LAB_0134f12c;
            local_98 = (long *)*local_98;
          } while ((local_98 != (long *)0x0) &&
                  ((long *)(local_98[1] & (long)local_88 - 1U) == plVar23));
        }
        else {
          do {
            plVar14 = (long *)PTR_DAT_047d8b70;
            if (local_98[2] != 0) {
              plVar14 = (long *)(local_98[2] + 0x30);
            }
            plVar21 = (long *)PTR_DAT_047d8b70;
            if (local_1a8 != (long *)0x0) {
              plVar21 = local_1a8 + 6;
            }
            if ((*plVar14 == *plVar21) &&
               ((local_98[9] == 0 || (*(short *)(local_98[9] + 0x1a) == 0)))) goto LAB_0134f12c;
            local_98 = (long *)*local_98;
            if (local_98 == (long *)0x0) break;
            plVar14 = (long *)local_98[1];
            if (local_88 <= plVar14) {
              uVar12 = 0;
              if (local_88 != (long *)0x0) {
                uVar12 = (ulong)plVar14 / (ulong)local_88;
              }
              plVar14 = (long *)((long)plVar14 - uVar12 * (long)local_88);
            }
          } while (plVar14 == plVar23);
        }
      }
      local_98 = (long *)0x0;
      (**(code **)(*plVar19 + 0x18))(&local_110,plVar19);
      local_c8 = (long *)0x0;
      plStack_c0 = (long *)0x0;
      plVar23 = (long *)0x0;
      if (plVar19 != (long *)0x0) {
        plVar23 = plVar19 + 5;
      }
      if ((long *)local_110[2] == plVar23) {
        FUN_00d1f904(&local_c8,&local_110);
      }
      plVar19 = local_110;
      if (local_110 != (long *)0x0) {
        plVar23 = local_110 + 3;
        do {
          sVar18 = (short)*plVar23;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar10) {
            *(short *)plVar23 = sVar18 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar18 == 1) {
          piVar6 = (int *)((long)local_110 + 0x1c);
          do {
            iVar11 = *piVar6;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar10) {
              *piVar6 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar11 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar22 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar22;
            local_b0 = (long *)*plVar19;
            FUN_00c44438(lVar22 + 0x8040,&local_b0);
          }
        }
        else if (sVar18 == 0) goto LAB_013497f0;
      }
      local_b0 = local_138;
      local_a8 = (long *)0x0;
      local_a0 = 0;
      FUN_00dc7a68(&local_a8,&local_c8);
      local_110 = local_1a8;
      if (local_1a8 != (long *)0x0) {
        (**(code **)(*local_1a8 + 0x18))();
      }
      local_108 = local_1a0;
      local_100 = local_198;
      local_f8 = local_190;
      local_f0 = local_188;
      if (local_188 != (long *)0x0) {
        (**(code **)(*local_188 + 0x18))();
      }
      local_e8 = CONCAT44(local_e8._4_4_,local_180);
      local_e0 = local_b0;
      local_d8 = (long *)0x0;
      local_d0 = 0;
      FUN_00dc7a68(&local_d8,&local_a8);
      FUN_01354124(lVar25 + 0x288,&local_110);
      plVar19 = local_d8;
      if (local_d8 != (long *)0x0) {
        plVar23 = local_d8 + 3;
        do {
          sVar18 = (short)*plVar23;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar10) {
            *(short *)plVar23 = sVar18 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar18 == 1) {
          piVar6 = (int *)((long)local_d8 + 0x1c);
          do {
            iVar11 = *piVar6;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar10) {
              *piVar6 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar11 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar22 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar22;
            local_128 = (long *)*plVar19;
            FUN_00c44438(lVar22 + 0x8040,&local_128);
          }
        }
        else if (sVar18 == 0) goto LAB_013497f0;
      }
      if (local_f0 != (long *)0x0) {
        (**(code **)(*local_f0 + 0x20))();
      }
      if (local_110 != (long *)0x0) {
        (**(code **)(*local_110 + 0x20))();
      }
      plVar19 = local_a8;
      if (local_a8 != (long *)0x0) {
        plVar23 = local_a8 + 3;
        do {
          sVar18 = (short)*plVar23;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar10) {
            *(short *)plVar23 = sVar18 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar18 == 1) {
          piVar6 = (int *)((long)local_a8 + 0x1c);
          do {
            iVar11 = *piVar6;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar10) {
              *piVar6 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar11 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar22 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar22;
            local_128 = (long *)*plVar19;
            FUN_00c44438(lVar22 + 0x8040,&local_128);
          }
        }
        else if (sVar18 == 0) goto LAB_013497f0;
      }
      plVar19 = local_c8;
      if (local_c8 != (long *)0x0) {
        plVar23 = local_c8 + 3;
        do {
          sVar18 = (short)*plVar23;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar10) {
            *(short *)plVar23 = sVar18 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar18 != 1) goto LAB_0134b2a8;
        piVar6 = (int *)((long)local_c8 + 0x1c);
        do {
          iVar11 = *piVar6;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar10) {
            *piVar6 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar11 == -1) goto LAB_0134a3c4;
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar22 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar22;
        local_128 = (long *)*plVar19;
        lVar22 = lVar22 + 0x8040;
        pplVar17 = &local_128;
        goto LAB_0134e3b4;
      }
      goto LAB_0134a3c4;
    }
    FUN_00f2b7b8(&local_1a8,&local_178,plVar29 + 4,&DAT_03c886bc);
    if (((*pbVar26 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d8c40), iVar11 != 0)) {
      FUN_00100190(PTR_LAB_047d8e90,plVar19,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c40);
    }
    lVar25 = *plVar19;
    plVar19 = (long *)(lVar25 + 0x2f0);
    *(long *)PTR_DAT_047d8c50 = lVar25;
    local_138 = *(long **)(lVar25 + 0x3a0);
    local_70[0] = (long *)0x0;
    lVar28 = *plVar19;
    lVar22 = nn::os::GetCurrentThread();
    if (lVar22 != lVar28) {
      lVar22 = nn::os::GetCurrentThread();
LAB_01347228:
      if (*plVar19 == 0) goto code_r0x01347230;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar25 + 0x2f8));
      do {
        if (*plVar19 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar25 + 0x2f8));
            while (*plVar19 == 0) {
              cVar9 = '\x01';
              bVar30 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar30) {
                *plVar19 = lVar22;
                cVar9 = ExclusiveMonitorsStatus();
              }
              if (cVar9 == '\0') goto LAB_01349ee8;
            }
          } while( true );
        }
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar30) {
          *plVar19 = lVar22;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
LAB_01349ee8:
      bVar30 = false;
      goto LAB_01349eec;
    }
    bVar30 = true;
LAB_01349eec:
    plVar19 = *(long **)(lVar25 + 0x290);
    if (((ulong)plVar19 & (long)plVar19 - 1U) == 0) {
      plVar23 = (long *)((long)plVar19 - 1U & (ulong)local_1a0);
    }
    else {
      plVar23 = local_1a0;
      if (plVar19 <= local_1a0) {
        uVar12 = 0;
        if (plVar19 != (long *)0x0) {
          uVar12 = (ulong)local_1a0 / (ulong)plVar19;
        }
        plVar23 = (long *)((long)local_1a0 - uVar12 * (long)plVar19);
      }
    }
    FUN_00d00258(&local_98,lVar25,plVar23,&local_1a8,local_138);
    if (local_98 != (long *)0x0) {
      lVar22 = local_98[9];
      if ((lVar22 != 0) && (*(short *)(lVar22 + 0x1a) != 0)) {
        psVar5 = (short *)(lVar22 + 0x1a);
        sVar18 = *(short *)(lVar22 + 0x1a);
        do {
          sVar8 = *psVar5;
          if (sVar8 == sVar18) {
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(psVar5,0x10);
            if (bVar10) {
              *psVar5 = sVar18 + 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
            if (cVar9 != '\0') goto LAB_01351694;
            bVar10 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01351694:
            bVar10 = false;
          }
          if (bVar10) {
            puVar24 = *(undefined8 **)(lVar22 + 0x10);
            if (puVar24 != (undefined8 *)0x0) {
              plVar19 = puVar24 + -5;
              puVar16 = (undefined8 *)(**(code **)*puVar24)(puVar24);
              if (((DAT_0486ad40 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(&DAT_0486ad40), iVar11 != 0)) {
                DAT_0486ad38 = FUN_00cf27f8();
                __cxa_guard_release(&DAT_0486ad40);
              }
              if (puVar16 != (undefined8 *)0x0) goto LAB_013516dc;
              plVar23 = (long *)0x0;
              goto LAB_013516f0;
            }
            break;
          }
          sVar18 = sVar8;
        } while (sVar8 != 0);
      }
      goto LAB_01349f2c;
    }
    plVar19 = (long *)FUN_013552b4(*(undefined8 *)(lVar25 + 0x3a0),&local_1a8,&local_138);
    if (plVar19 != (long *)0x0) {
      lVar22 = plVar19[6];
      if (*(long *)(lVar22 + 0x10) == 0) goto LAB_01351b80;
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar10) {
          *psVar5 = sVar18 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 0) {
        uVar15 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
        *(undefined8 *)(lVar22 + 8) = uVar15;
        *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
      }
      else if (sVar18 == -1) goto LAB_01349e44;
    }
    plVar14 = local_70[0];
    local_70[0] = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      lVar22 = plVar14[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar10) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*plVar14 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
    puVar24 = *(undefined8 **)(*(long *)(lVar25 + 0x288) + (long)plVar23 * 8);
    local_88 = *(long **)(lVar25 + 0x290);
    local_98 = (long *)0x0;
    if (puVar24 != (undefined8 *)0x0) {
      local_98 = (long *)*puVar24;
    }
    local_90 = plVar23;
    local_70[0] = plVar19;
    if (local_98 != (long *)0x0) {
      if (((ulong)local_88 & (long)local_88 - 1U) == 0) {
        do {
          plVar14 = (long *)PTR_DAT_047d8b70;
          if (local_98[2] != 0) {
            plVar14 = (long *)(local_98[2] + 0x30);
          }
          plVar21 = (long *)PTR_DAT_047d8b70;
          if (local_1a8 != (long *)0x0) {
            plVar21 = local_1a8 + 6;
          }
          if ((*plVar14 == *plVar21) &&
             ((local_98[9] == 0 || (*(short *)(local_98[9] + 0x1a) == 0)))) goto LAB_0134eed4;
          local_98 = (long *)*local_98;
        } while ((local_98 != (long *)0x0) &&
                ((long *)(local_98[1] & (long)local_88 - 1U) == plVar23));
      }
      else {
        do {
          plVar14 = (long *)PTR_DAT_047d8b70;
          if (local_98[2] != 0) {
            plVar14 = (long *)(local_98[2] + 0x30);
          }
          plVar21 = (long *)PTR_DAT_047d8b70;
          if (local_1a8 != (long *)0x0) {
            plVar21 = local_1a8 + 6;
          }
          if ((*plVar14 == *plVar21) &&
             ((local_98[9] == 0 || (*(short *)(local_98[9] + 0x1a) == 0)))) goto LAB_0134eed4;
          local_98 = (long *)*local_98;
          if (local_98 == (long *)0x0) break;
          plVar14 = (long *)local_98[1];
          if (local_88 <= plVar14) {
            uVar12 = 0;
            if (local_88 != (long *)0x0) {
              uVar12 = (ulong)plVar14 / (ulong)local_88;
            }
            plVar14 = (long *)((long)plVar14 - uVar12 * (long)local_88);
          }
        } while (plVar14 == plVar23);
      }
    }
    local_98 = (long *)0x0;
    (**(code **)(*plVar19 + 0x18))(&local_110,plVar19);
    local_c8 = (long *)0x0;
    plStack_c0 = (long *)0x0;
    plVar23 = (long *)0x0;
    if (plVar19 != (long *)0x0) {
      plVar23 = plVar19 + 5;
    }
    if ((long *)local_110[2] == plVar23) {
      FUN_00d1f904(&local_c8,&local_110);
    }
    plVar19 = local_110;
    if (local_110 != (long *)0x0) {
      plVar23 = local_110 + 3;
      do {
        sVar18 = (short)*plVar23;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar10) {
          *(short *)plVar23 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        piVar6 = (int *)((long)local_110 + 0x1c);
        do {
          iVar11 = *piVar6;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar10) {
            *piVar6 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_b0 = (long *)*plVar19;
          FUN_00c44438(lVar22 + 0x8040,&local_b0);
        }
      }
      else if (sVar18 == 0) goto LAB_013497f0;
    }
    local_b0 = local_138;
    local_a8 = (long *)0x0;
    local_a0 = 0;
    FUN_00dc7a68(&local_a8,&local_c8);
    local_110 = local_1a8;
    if (local_1a8 != (long *)0x0) {
      (**(code **)(*local_1a8 + 0x18))();
    }
    local_108 = local_1a0;
    local_100 = local_198;
    local_f8 = local_190;
    local_f0 = local_188;
    if (local_188 != (long *)0x0) {
      (**(code **)(*local_188 + 0x18))();
    }
    local_e8 = CONCAT44(local_e8._4_4_,local_180);
    local_e0 = local_b0;
    local_d8 = (long *)0x0;
    local_d0 = 0;
    FUN_00dc7a68(&local_d8,&local_a8);
    FUN_01354124(lVar25 + 0x288,&local_110);
    plVar19 = local_d8;
    if (local_d8 != (long *)0x0) {
      plVar23 = local_d8 + 3;
      do {
        sVar18 = (short)*plVar23;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar10) {
          *(short *)plVar23 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        piVar6 = (int *)((long)local_d8 + 0x1c);
        do {
          iVar11 = *piVar6;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar10) {
            *piVar6 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_128 = (long *)*plVar19;
          FUN_00c44438(lVar22 + 0x8040,&local_128);
        }
      }
      else if (sVar18 == 0) goto LAB_013497f0;
    }
    if (local_f0 != (long *)0x0) {
      (**(code **)(*local_f0 + 0x20))();
    }
    if (local_110 != (long *)0x0) {
      (**(code **)(*local_110 + 0x20))();
    }
    plVar19 = local_a8;
    if (local_a8 != (long *)0x0) {
      plVar23 = local_a8 + 3;
      do {
        sVar18 = (short)*plVar23;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar10) {
          *(short *)plVar23 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        piVar6 = (int *)((long)local_a8 + 0x1c);
        do {
          iVar11 = *piVar6;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar10) {
            *piVar6 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_128 = (long *)*plVar19;
          FUN_00c44438(lVar22 + 0x8040,&local_128);
        }
      }
      else if (sVar18 == 0) goto LAB_013497f0;
    }
    plVar19 = local_c8;
    if (local_c8 != (long *)0x0) {
      plVar23 = local_c8 + 3;
      do {
        sVar18 = (short)*plVar23;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar10) {
          *(short *)plVar23 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 != 1) goto LAB_0134b7d4;
      piVar6 = (int *)((long)local_c8 + 0x1c);
      do {
        iVar11 = *piVar6;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar10) {
          *piVar6 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar11 == -1) goto LAB_01349fb4;
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar22 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar22;
      local_128 = (long *)*plVar19;
      lVar22 = lVar22 + 0x8040;
      pplVar17 = &local_128;
      goto LAB_0134e8d8;
    }
    goto LAB_01349fb4;
  }
  if (0x3b4e42bec1dd3ab5 < lVar22) {
    if (lVar22 < 0x5c10906d5dddf0a9) {
      if (lVar22 != 0x3b4e42bec1dd3ab6) {
        if (lVar22 != 0x3e99144a1754416a) goto LAB_013478dc;
        FUN_00f2b7b8(&local_1a8,&local_178,plVar29 + 4,&DAT_03c886bc);
        if (((*pbVar26 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d8c40), iVar11 != 0))
        {
          FUN_00100190(PTR_LAB_047d8e90,plVar19,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d8c40);
        }
        lVar25 = *plVar19;
        plVar19 = (long *)(lVar25 + 0x2f0);
        *(long *)PTR_DAT_047d8c50 = lVar25;
        local_78 = *(long **)(lVar25 + 0x3a0);
        local_80 = (long *)0x0;
        lVar28 = *plVar19;
        lVar22 = nn::os::GetCurrentThread();
        if (lVar22 != lVar28) {
          lVar22 = nn::os::GetCurrentThread();
LAB_01348788:
          if (*plVar19 == 0) goto code_r0x01348790;
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar25 + 0x2f8));
          do {
            if (*plVar19 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(lVar25 + 0x2f8));
                while (*plVar19 == 0) {
                  cVar9 = '\x01';
                  bVar30 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                  if (bVar30) {
                    *plVar19 = lVar22;
                    cVar9 = ExclusiveMonitorsStatus();
                  }
                  if (cVar9 == '\0') goto LAB_013494fc;
                }
              } while( true );
            }
            cVar9 = '\x01';
            bVar30 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar30) {
              *plVar19 = lVar22;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
LAB_013494fc:
          bVar30 = false;
          goto LAB_01349500;
        }
        bVar30 = true;
LAB_01349500:
        plVar19 = *(long **)(lVar25 + 0x290);
        if (((ulong)plVar19 & (long)plVar19 - 1U) == 0) {
          plVar23 = (long *)((long)plVar19 - 1U & (ulong)local_1a0);
        }
        else {
          plVar23 = local_1a0;
          if (plVar19 <= local_1a0) {
            uVar12 = 0;
            if (plVar19 != (long *)0x0) {
              uVar12 = (ulong)local_1a0 / (ulong)plVar19;
            }
            plVar23 = (long *)((long)local_1a0 - uVar12 * (long)plVar19);
          }
        }
        FUN_00d00258(&local_98,lVar25,plVar23,&local_1a8,local_78);
        if (local_98 != (long *)0x0) {
          lVar22 = local_98[9];
          if ((lVar22 != 0) && (*(short *)(lVar22 + 0x1a) != 0)) {
            psVar5 = (short *)(lVar22 + 0x1a);
            sVar18 = *(short *)(lVar22 + 0x1a);
            do {
              sVar8 = *psVar5;
              if (sVar8 == sVar18) {
                cVar9 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(psVar5,0x10);
                if (bVar10) {
                  *psVar5 = sVar18 + 1;
                  cVar9 = ExclusiveMonitorsStatus();
                }
                if (cVar9 != '\0') goto LAB_01351904;
                bVar10 = true;
              }
              else {
                ClearExclusiveLocal();
LAB_01351904:
                bVar10 = false;
              }
              if (bVar10) {
                puVar24 = *(undefined8 **)(lVar22 + 0x10);
                if (puVar24 != (undefined8 *)0x0) {
                  plVar19 = puVar24 + -5;
                  puVar16 = (undefined8 *)(**(code **)*puVar24)(puVar24);
                  if (((*PTR_DAT_047e3070 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(PTR_DAT_047e3070), iVar11 != 0)) {
                    uVar15 = FUN_00cf27f8();
                    *(undefined8 *)PTR_DAT_047e3078 = uVar15;
                    __cxa_guard_release(PTR_DAT_047e3070);
                  }
                  if (puVar16 != (undefined8 *)0x0) goto LAB_013519cc;
                  plVar23 = (long *)0x0;
                  goto LAB_013519e0;
                }
                break;
              }
              sVar18 = sVar8;
            } while (sVar8 != 0);
          }
          goto LAB_01349540;
        }
        FUN_01356f68(&local_110,*(undefined8 *)(lVar25 + 0x3a0),&local_1a8,&local_78);
        FUN_01356e38(&local_80,&local_110);
        if (local_110 != (long *)0x0) {
          lVar22 = local_110[6];
          psVar5 = (short *)(lVar22 + 0x1a);
          do {
            sVar18 = *psVar5;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(psVar5,0x10);
            if (bVar10) {
              *psVar5 = sVar18 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (sVar18 == 1) {
            *(undefined8 *)(lVar22 + 0x10) = 0;
            (**(code **)(*local_110 + 0x50))();
          }
          else if (sVar18 == 0) goto LAB_013498f8;
        }
        puVar24 = *(undefined8 **)(*(long *)(lVar25 + 0x288) + (long)plVar23 * 8);
        local_b8 = *(undefined8 *)(lVar25 + 0x290);
        local_b0 = (long *)0x0;
        if (puVar24 != (undefined8 *)0x0) {
          local_b0 = (long *)*puVar24;
        }
        local_c8 = (long *)0x0;
        plStack_c0 = plVar23;
        local_a8 = plVar23;
        local_a0 = local_b8;
        FUN_01357210(&local_110,&local_b0,&local_c8,&local_1a8);
        plVar19 = local_80;
        local_98 = local_110;
        local_90 = local_108;
        local_88 = local_100;
        if (local_110 == (long *)0x0) {
          plVar14 = local_80 + 5;
          (**(code **)(*local_80 + 0x18))(&local_110,local_80);
          local_138 = (long *)0x0;
          uStack_130 = 0;
          plVar23 = (long *)0x0;
          if (plVar19 != (long *)0x0) {
            plVar23 = plVar14;
          }
          if ((long *)local_110[2] == plVar23) {
            FUN_00d1f904(&local_138,&local_110);
          }
          plVar19 = local_110;
          if (local_110 != (long *)0x0) {
            plVar23 = local_110 + 3;
            do {
              sVar18 = (short)*plVar23;
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
              if (bVar10) {
                *(short *)plVar23 = sVar18 + -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (sVar18 == 1) {
              piVar6 = (int *)((long)local_110 + 0x1c);
              do {
                iVar11 = *piVar6;
                cVar9 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
                if (bVar10) {
                  *piVar6 = -1;
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
              if (iVar11 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar22 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar22;
                local_128 = (long *)*plVar19;
                FUN_00c44438(lVar22 + 0x8040,&local_128);
              }
            }
            else if (sVar18 == 0) goto LAB_013497f0;
          }
          local_128 = local_78;
          local_120 = (long *)0x0;
          local_118 = 0;
          FUN_00dc7a68(&local_120,&local_138);
          local_110 = local_1a8;
          if (local_1a8 != (long *)0x0) {
            (**(code **)(*local_1a8 + 0x18))();
          }
          local_108 = local_1a0;
          local_100 = local_198;
          local_f8 = local_190;
          local_f0 = local_188;
          if (local_188 != (long *)0x0) {
            (**(code **)(*local_188 + 0x18))();
          }
          local_e8 = CONCAT44(local_e8._4_4_,local_180);
          local_e0 = local_128;
          local_d8 = (long *)0x0;
          local_d0 = 0;
          FUN_00dc7a68(&local_d8,&local_120);
          FUN_01354124(lVar25 + 0x288,&local_110);
          plVar19 = local_d8;
          if (local_d8 != (long *)0x0) {
            plVar23 = local_d8 + 3;
            do {
              sVar18 = (short)*plVar23;
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
              if (bVar10) {
                *(short *)plVar23 = sVar18 + -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (sVar18 == 1) {
              piVar6 = (int *)((long)local_d8 + 0x1c);
              do {
                iVar11 = *piVar6;
                cVar9 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
                if (bVar10) {
                  *piVar6 = -1;
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
              if (iVar11 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar22 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar22;
                local_70[0] = (long *)*plVar19;
                FUN_00c44438(lVar22 + 0x8040,local_70);
              }
            }
            else if (sVar18 == 0) goto LAB_013497f0;
          }
          if (local_f0 != (long *)0x0) {
            (**(code **)(*local_f0 + 0x20))();
          }
          if (local_110 != (long *)0x0) {
            (**(code **)(*local_110 + 0x20))();
          }
          plVar19 = local_120;
          if (local_120 != (long *)0x0) {
            plVar23 = local_120 + 3;
            do {
              sVar18 = (short)*plVar23;
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
              if (bVar10) {
                *(short *)plVar23 = sVar18 + -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (sVar18 == 1) {
              piVar6 = (int *)((long)local_120 + 0x1c);
              do {
                iVar11 = *piVar6;
                cVar9 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
                if (bVar10) {
                  *piVar6 = -1;
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
              if (iVar11 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar22 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar22;
                local_70[0] = (long *)*plVar19;
                FUN_00c44438(lVar22 + 0x8040,local_70);
              }
            }
            else if (sVar18 == 0) goto LAB_013497f0;
          }
          plVar19 = local_138;
          if (local_138 == (long *)0x0) goto LAB_013495cc;
          plVar23 = local_138 + 3;
          do {
            sVar18 = (short)*plVar23;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar10) {
              *(short *)plVar23 = sVar18 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (sVar18 != 1) goto LAB_0134bfa4;
          piVar6 = (int *)((long)local_138 + 0x1c);
          do {
            iVar11 = *piVar6;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar10) {
              *piVar6 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar11 == -1) goto LAB_013495cc;
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_70[0] = (long *)*plVar19;
          lVar22 = lVar22 + 0x8040;
          pplVar17 = local_70;
          goto LAB_0134f884;
        }
        plVar14 = local_80 + 5;
        (**(code **)(*local_80 + 0x18))(&local_128,local_80);
        local_138 = (long *)0x0;
        uStack_130 = 0;
        plVar23 = (long *)0x0;
        if (plVar19 != (long *)0x0) {
          plVar23 = plVar14;
        }
        if ((long *)local_128[2] == plVar23) {
          FUN_00d1f904(&local_138,&local_128);
        }
        plVar19 = local_128;
        if (local_128 != (long *)0x0) {
          plVar23 = local_128 + 3;
          do {
            sVar18 = (short)*plVar23;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar10) {
              *(short *)plVar23 = sVar18 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (sVar18 == 1) {
            piVar6 = (int *)((long)local_128 + 0x1c);
            do {
              iVar11 = *piVar6;
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
              if (bVar10) {
                *piVar6 = -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (iVar11 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar22 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar22;
              local_110 = (long *)*plVar19;
              FUN_00c44438(lVar22 + 0x8040,&local_110);
            }
          }
          else if (sVar18 == 0) goto LAB_013497f0;
        }
        local_100 = (long *)0x0;
        local_110 = local_78;
        local_108 = (long *)0x0;
        FUN_00dc7a68(&local_108,&local_138);
        local_98[8] = (long)local_110;
        FUN_00dc7a68(local_98 + 9,&local_108);
        plVar19 = local_108;
        if (local_108 != (long *)0x0) {
          plVar23 = local_108 + 3;
          do {
            sVar18 = (short)*plVar23;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar10) {
              *(short *)plVar23 = sVar18 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (sVar18 == 1) {
            piVar6 = (int *)((long)local_108 + 0x1c);
            do {
              iVar11 = *piVar6;
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
              if (bVar10) {
                *piVar6 = -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (iVar11 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar22 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar22;
              local_128 = (long *)*plVar19;
              FUN_00c44438(lVar22 + 0x8040,&local_128);
            }
          }
          else if (sVar18 == 0) goto LAB_013497f0;
        }
        plVar19 = local_138;
        if (local_138 != (long *)0x0) {
          plVar23 = local_138 + 3;
          do {
            sVar18 = (short)*plVar23;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar10) {
              *(short *)plVar23 = sVar18 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (sVar18 != 1) goto LAB_0134bfa4;
          piVar6 = (int *)((long)local_138 + 0x1c);
          do {
            iVar11 = *piVar6;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar10) {
              *piVar6 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar11 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar22 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar22;
            local_128 = (long *)*plVar19;
            lVar22 = lVar22 + 0x8040;
            pplVar17 = &local_128;
            goto LAB_0134f884;
          }
        }
        goto LAB_013495cc;
      }
      FUN_00f2b7b8(&local_1a8,&local_178,plVar29 + 4,&DAT_03c886bc);
      if (((*pbVar26 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d8c40), iVar11 != 0)) {
        FUN_00100190(PTR_LAB_047d8e90,plVar19,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8c40);
      }
      lVar25 = *plVar19;
      plVar19 = (long *)(lVar25 + 0x2f0);
      *(long *)PTR_DAT_047d8c50 = lVar25;
      local_138 = *(long **)(lVar25 + 0x3a0);
      local_70[0] = (long *)0x0;
      lVar28 = *plVar19;
      lVar22 = nn::os::GetCurrentThread();
      if (lVar22 != lVar28) {
        lVar22 = nn::os::GetCurrentThread();
LAB_01346dcc:
        if (*plVar19 == 0) goto code_r0x01346dd4;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar25 + 0x2f8));
        do {
          if (*plVar19 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar25 + 0x2f8));
              while (*plVar19 == 0) {
                cVar9 = '\x01';
                bVar30 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                if (bVar30) {
                  *plVar19 = lVar22;
                  cVar9 = ExclusiveMonitorsStatus();
                }
                if (cVar9 == '\0') goto LAB_01346ddc;
              }
            } while( true );
          }
          cVar9 = '\x01';
          bVar30 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar30) {
            *plVar19 = lVar22;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
LAB_01346ddc:
        bVar30 = false;
        goto LAB_01346de0;
      }
      bVar30 = true;
LAB_01346de0:
      plVar19 = *(long **)(lVar25 + 0x290);
      if (((ulong)plVar19 & (long)plVar19 - 1U) == 0) {
        plVar23 = (long *)((long)plVar19 - 1U & (ulong)local_1a0);
      }
      else {
        plVar23 = local_1a0;
        if (plVar19 <= local_1a0) {
          uVar12 = 0;
          if (plVar19 != (long *)0x0) {
            uVar12 = (ulong)local_1a0 / (ulong)plVar19;
          }
          plVar23 = (long *)((long)local_1a0 - uVar12 * (long)plVar19);
        }
      }
      FUN_00d00258(&local_98,lVar25,plVar23,&local_1a8,local_138);
      if (local_98 != (long *)0x0) {
        lVar22 = local_98[9];
        if ((lVar22 != 0) && (*(short *)(lVar22 + 0x1a) != 0)) {
          psVar5 = (short *)(lVar22 + 0x1a);
          sVar18 = *(short *)(lVar22 + 0x1a);
          do {
            sVar8 = *psVar5;
            if (sVar8 == sVar18) {
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(psVar5,0x10);
              if (bVar10) {
                *psVar5 = sVar18 + 1;
                cVar9 = ExclusiveMonitorsStatus();
              }
              if (cVar9 != '\0') goto LAB_01350898;
              bVar10 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_01350898:
              bVar10 = false;
            }
            if (bVar10) {
              puVar24 = *(undefined8 **)(lVar22 + 0x10);
              if (puVar24 != (undefined8 *)0x0) {
                plVar19 = puVar24 + -5;
                puVar16 = (undefined8 *)(**(code **)*puVar24)(puVar24);
                if (((*PTR_DAT_047e3010 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(PTR_DAT_047e3010), iVar11 != 0)) {
                  uVar15 = FUN_00cf27f8();
                  *(undefined8 *)PTR_DAT_047e3018 = uVar15;
                  __cxa_guard_release(PTR_DAT_047e3010);
                }
                if (puVar16 != (undefined8 *)0x0) goto LAB_013509a8;
                plVar23 = (long *)0x0;
                goto LAB_013509bc;
              }
              break;
            }
            sVar18 = sVar8;
          } while (sVar8 != 0);
        }
        goto LAB_01346e20;
      }
      plVar19 = (long *)FUN_01353f98(*(undefined8 *)(lVar25 + 0x3a0),&local_1a8,&local_138);
      if (plVar19 != (long *)0x0) {
        lVar22 = plVar19[6];
        if (*(long *)(lVar22 + 0x10) == 0) goto LAB_01351b80;
        psVar5 = (short *)(lVar22 + 0x1a);
        do {
          sVar18 = *psVar5;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(psVar5,0x10);
          if (bVar10) {
            *psVar5 = sVar18 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar18 == 0) {
          uVar15 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
          *(undefined8 *)(lVar22 + 8) = uVar15;
          *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
        }
        else if (sVar18 == -1) goto LAB_01349e44;
      }
      plVar14 = local_70[0];
      local_70[0] = (long *)0x0;
      if (plVar14 != (long *)0x0) {
        lVar22 = plVar14[6];
        psVar5 = (short *)(lVar22 + 0x1a);
        do {
          sVar18 = *psVar5;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(psVar5,0x10);
          if (bVar10) {
            *psVar5 = sVar18 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar18 == 1) {
          *(undefined8 *)(lVar22 + 0x10) = 0;
          (**(code **)(*plVar14 + 0x50))();
        }
        else if (sVar18 == 0) goto LAB_013498f8;
      }
      puVar24 = *(undefined8 **)(*(long *)(lVar25 + 0x288) + (long)plVar23 * 8);
      local_88 = *(long **)(lVar25 + 0x290);
      local_98 = (long *)0x0;
      if (puVar24 != (undefined8 *)0x0) {
        local_98 = (long *)*puVar24;
      }
      local_90 = plVar23;
      local_70[0] = plVar19;
      if (local_98 != (long *)0x0) {
        if (((ulong)local_88 & (long)local_88 - 1U) == 0) {
          do {
            plVar14 = (long *)PTR_DAT_047d8b70;
            if (local_98[2] != 0) {
              plVar14 = (long *)(local_98[2] + 0x30);
            }
            plVar21 = (long *)PTR_DAT_047d8b70;
            if (local_1a8 != (long *)0x0) {
              plVar21 = local_1a8 + 6;
            }
            if ((*plVar14 == *plVar21) &&
               ((local_98[9] == 0 || (*(short *)(local_98[9] + 0x1a) == 0)))) goto LAB_0134ec7c;
            local_98 = (long *)*local_98;
          } while ((local_98 != (long *)0x0) &&
                  ((long *)(local_98[1] & (long)local_88 - 1U) == plVar23));
        }
        else {
          do {
            plVar14 = (long *)PTR_DAT_047d8b70;
            if (local_98[2] != 0) {
              plVar14 = (long *)(local_98[2] + 0x30);
            }
            plVar21 = (long *)PTR_DAT_047d8b70;
            if (local_1a8 != (long *)0x0) {
              plVar21 = local_1a8 + 6;
            }
            if ((*plVar14 == *plVar21) &&
               ((local_98[9] == 0 || (*(short *)(local_98[9] + 0x1a) == 0)))) goto LAB_0134ec7c;
            local_98 = (long *)*local_98;
            if (local_98 == (long *)0x0) break;
            plVar14 = (long *)local_98[1];
            if (local_88 <= plVar14) {
              uVar12 = 0;
              if (local_88 != (long *)0x0) {
                uVar12 = (ulong)plVar14 / (ulong)local_88;
              }
              plVar14 = (long *)((long)plVar14 - uVar12 * (long)local_88);
            }
          } while (plVar14 == plVar23);
        }
      }
      local_98 = (long *)0x0;
      (**(code **)(*plVar19 + 0x18))(&local_110,plVar19);
      local_c8 = (long *)0x0;
      plStack_c0 = (long *)0x0;
      plVar23 = (long *)0x0;
      if (plVar19 != (long *)0x0) {
        plVar23 = plVar19 + 5;
      }
      if ((long *)local_110[2] == plVar23) {
        FUN_00d1f904(&local_c8,&local_110);
      }
      plVar19 = local_110;
      if (local_110 != (long *)0x0) {
        plVar23 = local_110 + 3;
        do {
          sVar18 = (short)*plVar23;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar10) {
            *(short *)plVar23 = sVar18 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar18 == 1) {
          piVar6 = (int *)((long)local_110 + 0x1c);
          do {
            iVar11 = *piVar6;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar10) {
              *piVar6 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar11 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar22 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar22;
            local_b0 = (long *)*plVar19;
            FUN_00c44438(lVar22 + 0x8040,&local_b0);
          }
        }
        else if (sVar18 == 0) goto LAB_013497f0;
      }
      local_b0 = local_138;
      local_a8 = (long *)0x0;
      local_a0 = 0;
      FUN_00dc7a68(&local_a8,&local_c8);
      local_110 = local_1a8;
      if (local_1a8 != (long *)0x0) {
        (**(code **)(*local_1a8 + 0x18))();
      }
      local_108 = local_1a0;
      local_100 = local_198;
      local_f8 = local_190;
      local_f0 = local_188;
      if (local_188 != (long *)0x0) {
        (**(code **)(*local_188 + 0x18))();
      }
      local_e8 = CONCAT44(local_e8._4_4_,local_180);
      local_e0 = local_b0;
      local_d8 = (long *)0x0;
      local_d0 = 0;
      FUN_00dc7a68(&local_d8,&local_a8);
      FUN_01354124(lVar25 + 0x288,&local_110);
      plVar19 = local_d8;
      if (local_d8 != (long *)0x0) {
        plVar23 = local_d8 + 3;
        do {
          sVar18 = (short)*plVar23;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar10) {
            *(short *)plVar23 = sVar18 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar18 == 1) {
          piVar6 = (int *)((long)local_d8 + 0x1c);
          do {
            iVar11 = *piVar6;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar10) {
              *piVar6 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar11 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar22 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar22;
            local_128 = (long *)*plVar19;
            FUN_00c44438(lVar22 + 0x8040,&local_128);
          }
        }
        else if (sVar18 == 0) goto LAB_013497f0;
      }
      if (local_f0 != (long *)0x0) {
        (**(code **)(*local_f0 + 0x20))();
      }
      if (local_110 != (long *)0x0) {
        (**(code **)(*local_110 + 0x20))();
      }
      plVar19 = local_a8;
      if (local_a8 != (long *)0x0) {
        plVar23 = local_a8 + 3;
        do {
          sVar18 = (short)*plVar23;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar10) {
            *(short *)plVar23 = sVar18 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar18 == 1) {
          piVar6 = (int *)((long)local_a8 + 0x1c);
          do {
            iVar11 = *piVar6;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar10) {
              *piVar6 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar11 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar22 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar22;
            local_128 = (long *)*plVar19;
            FUN_00c44438(lVar22 + 0x8040,&local_128);
          }
        }
        else if (sVar18 == 0) goto LAB_013497f0;
      }
      plVar19 = local_c8;
      if (local_c8 != (long *)0x0) {
        plVar23 = local_c8 + 3;
        do {
          sVar18 = (short)*plVar23;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar10) {
            *(short *)plVar23 = sVar18 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar18 == 1) {
          piVar6 = (int *)((long)local_c8 + 0x1c);
          do {
            iVar11 = *piVar6;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar10) {
              *piVar6 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar11 == -1) goto LAB_01346ea8;
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_128 = (long *)*plVar19;
          lVar22 = lVar22 + 0x8040;
          pplVar17 = &local_128;
          goto LAB_0134cd90;
        }
        goto LAB_013492d8;
      }
      goto LAB_01346ea8;
    }
    if (lVar22 != 0x6277176c3d00fa5e) {
      if (lVar22 == 0x6aab69291bbcf3bb) {
        if (*(char *)(param_1 + 0x48) != '\0') goto LAB_013478dc;
        FUN_00f2b7b8(&local_110,&local_178,plVar29 + 4,&DAT_03c886bc);
        uVar12 = FUN_01359468(param_1 + 0x470,&local_110);
        if (((uVar12 & 1) == 0) || (plVar23 = *(long **)(param_1 + 0x490), plVar23 == (long *)0x0))
        goto LAB_01346908;
        lVar22 = plVar23[6];
        if (*(long *)(lVar22 + 0x10) != 0) {
          psVar5 = (short *)(lVar22 + 0x1a);
          do {
            sVar18 = *psVar5;
            cVar9 = '\x01';
            bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
            if (bVar30) {
              *psVar5 = sVar18 + 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (sVar18 == 0) {
            uVar15 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
            *(undefined8 *)(lVar22 + 8) = uVar15;
            *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
          }
          else if (sVar18 == -1) goto LAB_01349e44;
          lVar22 = plVar23[6];
          psVar5 = (short *)(lVar22 + 0x1a);
          do {
            sVar18 = *psVar5;
            cVar9 = '\x01';
            bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
            if (bVar30) {
              *psVar5 = sVar18 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          goto LAB_01346aa8;
        }
        goto LAB_01351b80;
      }
      if (lVar22 != 0x5c10906d5dddf0a9) goto LAB_013478dc;
      FUN_00f2b7b8(&local_1a8,&local_178,plVar29 + 4,&DAT_03c886bc);
      if (((*pbVar26 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d8c40), iVar11 != 0)) {
        FUN_00100190(PTR_LAB_047d8e90,plVar19,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8c40);
      }
      lVar25 = *plVar19;
      plVar19 = (long *)(lVar25 + 0x2f0);
      *(long *)PTR_DAT_047d8c50 = lVar25;
      local_78 = *(long **)(lVar25 + 0x3a0);
      local_80 = (long *)0x0;
      lVar28 = *plVar19;
      lVar22 = nn::os::GetCurrentThread();
      if (lVar22 != lVar28) {
        lVar22 = nn::os::GetCurrentThread();
LAB_01348860:
        if (*plVar19 == 0) goto code_r0x01348868;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar25 + 0x2f8));
        do {
          if (*plVar19 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar25 + 0x2f8));
              while (*plVar19 == 0) {
                cVar9 = '\x01';
                bVar30 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                if (bVar30) {
                  *plVar19 = lVar22;
                  cVar9 = ExclusiveMonitorsStatus();
                }
                if (cVar9 == '\0') goto LAB_0134afa4;
              }
            } while( true );
          }
          cVar9 = '\x01';
          bVar30 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar30) {
            *plVar19 = lVar22;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
LAB_0134afa4:
        bVar30 = false;
        goto LAB_0134afa8;
      }
      bVar30 = true;
LAB_0134afa8:
      plVar19 = *(long **)(lVar25 + 0x290);
      if (((ulong)plVar19 & (long)plVar19 - 1U) == 0) {
        plVar23 = (long *)((long)plVar19 - 1U & (ulong)local_1a0);
      }
      else {
        plVar23 = local_1a0;
        if (plVar19 <= local_1a0) {
          uVar12 = 0;
          if (plVar19 != (long *)0x0) {
            uVar12 = (ulong)local_1a0 / (ulong)plVar19;
          }
          plVar23 = (long *)((long)local_1a0 - uVar12 * (long)plVar19);
        }
      }
      FUN_00d00258(&local_98,lVar25,plVar23,&local_1a8,local_78);
      if (local_98 != (long *)0x0) {
        lVar22 = local_98[9];
        if ((lVar22 != 0) && (*(short *)(lVar22 + 0x1a) != 0)) {
          psVar5 = (short *)(lVar22 + 0x1a);
          sVar18 = *(short *)(lVar22 + 0x1a);
          do {
            sVar8 = *psVar5;
            if (sVar8 == sVar18) {
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(psVar5,0x10);
              if (bVar10) {
                *psVar5 = sVar18 + 1;
                cVar9 = ExclusiveMonitorsStatus();
              }
              if (cVar9 != '\0') goto LAB_013518bc;
              bVar10 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_013518bc:
              bVar10 = false;
            }
            if (bVar10) {
              puVar24 = *(undefined8 **)(lVar22 + 0x10);
              if (puVar24 != (undefined8 *)0x0) {
                plVar19 = puVar24 + -5;
                puVar16 = (undefined8 *)(**(code **)*puVar24)(puVar24);
                if (((*PTR_DAT_047e3060 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(PTR_DAT_047e3060), iVar11 != 0)) {
                  uVar15 = FUN_00cf27f8();
                  *(undefined8 *)PTR_DAT_047e3068 = uVar15;
                  __cxa_guard_release(PTR_DAT_047e3060);
                }
                if (puVar16 != (undefined8 *)0x0) goto LAB_0135194c;
                plVar23 = (long *)0x0;
                goto LAB_01351960;
              }
              break;
            }
            sVar18 = sVar8;
          } while (sVar8 != 0);
        }
        goto LAB_0134afe8;
      }
      FUN_0135702c(&local_110,*(undefined8 *)(lVar25 + 0x3a0),&local_1a8,&local_78);
      FUN_01356ed0(&local_80,&local_110);
      if (local_110 != (long *)0x0) {
        lVar22 = local_110[6];
        psVar5 = (short *)(lVar22 + 0x1a);
        do {
          sVar18 = *psVar5;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(psVar5,0x10);
          if (bVar10) {
            *psVar5 = sVar18 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar18 == 1) {
          *(undefined8 *)(lVar22 + 0x10) = 0;
          (**(code **)(*local_110 + 0x50))();
        }
        else if (sVar18 == 0) goto LAB_013498f8;
      }
      puVar24 = *(undefined8 **)(*(long *)(lVar25 + 0x288) + (long)plVar23 * 8);
      local_b8 = *(undefined8 *)(lVar25 + 0x290);
      local_b0 = (long *)0x0;
      if (puVar24 != (undefined8 *)0x0) {
        local_b0 = (long *)*puVar24;
      }
      local_c8 = (long *)0x0;
      plStack_c0 = plVar23;
      local_a8 = plVar23;
      local_a0 = local_b8;
      FUN_01359390(&local_110,&local_b0,&local_c8,&local_1a8);
      plVar19 = local_80;
      local_98 = local_110;
      local_90 = local_108;
      local_88 = local_100;
      if (local_110 == (long *)0x0) {
        plVar14 = local_80 + 5;
        (**(code **)(*local_80 + 0x18))(&local_110,local_80);
        local_138 = (long *)0x0;
        uStack_130 = 0;
        plVar23 = (long *)0x0;
        if (plVar19 != (long *)0x0) {
          plVar23 = plVar14;
        }
        if ((long *)local_110[2] == plVar23) {
          FUN_00d1f904(&local_138,&local_110);
        }
        plVar19 = local_110;
        if (local_110 != (long *)0x0) {
          plVar23 = local_110 + 3;
          do {
            sVar18 = (short)*plVar23;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar10) {
              *(short *)plVar23 = sVar18 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (sVar18 == 1) {
            piVar6 = (int *)((long)local_110 + 0x1c);
            do {
              iVar11 = *piVar6;
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
              if (bVar10) {
                *piVar6 = -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (iVar11 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar22 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar22;
              local_128 = (long *)*plVar19;
              FUN_00c44438(lVar22 + 0x8040,&local_128);
            }
          }
          else if (sVar18 == 0) goto LAB_013497f0;
        }
        local_128 = local_78;
        local_120 = (long *)0x0;
        local_118 = 0;
        FUN_00dc7a68(&local_120,&local_138);
        local_110 = local_1a8;
        if (local_1a8 != (long *)0x0) {
          (**(code **)(*local_1a8 + 0x18))();
        }
        local_108 = local_1a0;
        local_100 = local_198;
        local_f8 = local_190;
        local_f0 = local_188;
        if (local_188 != (long *)0x0) {
          (**(code **)(*local_188 + 0x18))();
        }
        local_e8 = CONCAT44(local_e8._4_4_,local_180);
        local_e0 = local_128;
        local_d8 = (long *)0x0;
        local_d0 = 0;
        FUN_00dc7a68(&local_d8,&local_120);
        FUN_01354124(lVar25 + 0x288,&local_110);
        plVar19 = local_d8;
        if (local_d8 != (long *)0x0) {
          plVar23 = local_d8 + 3;
          do {
            sVar18 = (short)*plVar23;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar10) {
              *(short *)plVar23 = sVar18 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (sVar18 == 1) {
            piVar6 = (int *)((long)local_d8 + 0x1c);
            do {
              iVar11 = *piVar6;
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
              if (bVar10) {
                *piVar6 = -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (iVar11 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar22 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar22;
              local_70[0] = (long *)*plVar19;
              FUN_00c44438(lVar22 + 0x8040,local_70);
            }
          }
          else if (sVar18 == 0) goto LAB_013497f0;
        }
        if (local_f0 != (long *)0x0) {
          (**(code **)(*local_f0 + 0x20))();
        }
        if (local_110 != (long *)0x0) {
          (**(code **)(*local_110 + 0x20))();
        }
        plVar19 = local_120;
        if (local_120 != (long *)0x0) {
          plVar23 = local_120 + 3;
          do {
            sVar18 = (short)*plVar23;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar10) {
              *(short *)plVar23 = sVar18 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (sVar18 == 1) {
            piVar6 = (int *)((long)local_120 + 0x1c);
            do {
              iVar11 = *piVar6;
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
              if (bVar10) {
                *piVar6 = -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (iVar11 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar22 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar22;
              local_70[0] = (long *)*plVar19;
              FUN_00c44438(lVar22 + 0x8040,local_70);
            }
          }
          else if (sVar18 == 0) goto LAB_013497f0;
        }
        plVar19 = local_138;
        if (local_138 == (long *)0x0) goto LAB_0134b074;
        plVar23 = local_138 + 3;
        do {
          sVar18 = (short)*plVar23;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar10) {
            *(short *)plVar23 = sVar18 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar18 != 1) goto LAB_0134bf74;
        piVar6 = (int *)((long)local_138 + 0x1c);
        do {
          iVar11 = *piVar6;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar10) {
            *piVar6 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar11 == -1) goto LAB_0134b074;
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar22 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar22;
        local_70[0] = (long *)*plVar19;
        lVar22 = lVar22 + 0x8040;
        pplVar17 = local_70;
        goto LAB_0134f7c4;
      }
      plVar14 = local_80 + 5;
      (**(code **)(*local_80 + 0x18))(&local_128,local_80);
      local_138 = (long *)0x0;
      uStack_130 = 0;
      plVar23 = (long *)0x0;
      if (plVar19 != (long *)0x0) {
        plVar23 = plVar14;
      }
      if ((long *)local_128[2] == plVar23) {
        FUN_00d1f904(&local_138,&local_128);
      }
      plVar19 = local_128;
      if (local_128 != (long *)0x0) {
        plVar23 = local_128 + 3;
        do {
          sVar18 = (short)*plVar23;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar10) {
            *(short *)plVar23 = sVar18 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar18 == 1) {
          piVar6 = (int *)((long)local_128 + 0x1c);
          do {
            iVar11 = *piVar6;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar10) {
              *piVar6 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar11 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar22 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar22;
            local_110 = (long *)*plVar19;
            FUN_00c44438(lVar22 + 0x8040,&local_110);
          }
        }
        else if (sVar18 == 0) goto LAB_013497f0;
      }
      local_100 = (long *)0x0;
      local_110 = local_78;
      local_108 = (long *)0x0;
      FUN_00dc7a68(&local_108,&local_138);
      local_98[8] = (long)local_110;
      FUN_00dc7a68(local_98 + 9,&local_108);
      plVar19 = local_108;
      if (local_108 != (long *)0x0) {
        plVar23 = local_108 + 3;
        do {
          sVar18 = (short)*plVar23;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar10) {
            *(short *)plVar23 = sVar18 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar18 == 1) {
          piVar6 = (int *)((long)local_108 + 0x1c);
          do {
            iVar11 = *piVar6;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar10) {
              *piVar6 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar11 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar22 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar22;
            local_128 = (long *)*plVar19;
            FUN_00c44438(lVar22 + 0x8040,&local_128);
          }
        }
        else if (sVar18 == 0) goto LAB_013497f0;
      }
      plVar19 = local_138;
      if (local_138 != (long *)0x0) {
        plVar23 = local_138 + 3;
        do {
          sVar18 = (short)*plVar23;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar10) {
            *(short *)plVar23 = sVar18 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar18 != 1) goto LAB_0134bf74;
        piVar6 = (int *)((long)local_138 + 0x1c);
        do {
          iVar11 = *piVar6;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar10) {
            *piVar6 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_128 = (long *)*plVar19;
          lVar22 = lVar22 + 0x8040;
          pplVar17 = &local_128;
          goto LAB_0134f7c4;
        }
      }
      goto LAB_0134b074;
    }
    FUN_00f2b7b8(&local_1a8,&local_178,plVar29 + 4,&DAT_03c886bc);
    if (((*pbVar26 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d8c40), iVar11 != 0)) {
      FUN_00100190(PTR_LAB_047d8e90,plVar19,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c40);
    }
    lVar25 = *plVar19;
    plVar19 = (long *)(lVar25 + 0x2f0);
    *(long *)PTR_DAT_047d8c50 = lVar25;
    local_138 = *(long **)(lVar25 + 0x3a0);
    local_70[0] = (long *)0x0;
    lVar28 = *plVar19;
    lVar22 = nn::os::GetCurrentThread();
    if (lVar22 != lVar28) {
      lVar22 = nn::os::GetCurrentThread();
LAB_013479f8:
      if (*plVar19 == 0) goto code_r0x01347a00;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar25 + 0x2f8));
      do {
        if (*plVar19 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar25 + 0x2f8));
            while (*plVar19 == 0) {
              cVar9 = '\x01';
              bVar30 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar30) {
                *plVar19 = lVar22;
                cVar9 = ExclusiveMonitorsStatus();
              }
              if (cVar9 == '\0') goto LAB_01347a08;
            }
          } while( true );
        }
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar30) {
          *plVar19 = lVar22;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
LAB_01347a08:
      bVar30 = false;
      goto LAB_01347a0c;
    }
    bVar30 = true;
LAB_01347a0c:
    plVar19 = *(long **)(lVar25 + 0x290);
    if (((ulong)plVar19 & (long)plVar19 - 1U) == 0) {
      plVar23 = (long *)((long)plVar19 - 1U & (ulong)local_1a0);
    }
    else {
      plVar23 = local_1a0;
      if (plVar19 <= local_1a0) {
        uVar12 = 0;
        if (plVar19 != (long *)0x0) {
          uVar12 = (ulong)local_1a0 / (ulong)plVar19;
        }
        plVar23 = (long *)((long)local_1a0 - uVar12 * (long)plVar19);
      }
    }
    FUN_00d00258(&local_98,lVar25,plVar23,&local_1a8,local_138);
    if (local_98 != (long *)0x0) {
      lVar22 = local_98[9];
      if ((lVar22 != 0) && (*(short *)(lVar22 + 0x1a) != 0)) {
        psVar5 = (short *)(lVar22 + 0x1a);
        sVar18 = *(short *)(lVar22 + 0x1a);
        do {
          sVar8 = *psVar5;
          if (sVar8 == sVar18) {
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(psVar5,0x10);
            if (bVar10) {
              *psVar5 = sVar18 + 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
            if (cVar9 != '\0') goto LAB_01350aa8;
            bVar10 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01350aa8:
            bVar10 = false;
          }
          if (bVar10) {
            puVar24 = *(undefined8 **)(lVar22 + 0x10);
            if (puVar24 != (undefined8 *)0x0) {
              plVar19 = puVar24 + -5;
              puVar16 = (undefined8 *)(**(code **)*puVar24)(puVar24);
              if (((*PTR_DAT_047e3030 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_047e3030), iVar11 != 0)) {
                uVar15 = FUN_00cf27f8();
                *(undefined8 *)PTR_DAT_047e3038 = uVar15;
                __cxa_guard_release(PTR_DAT_047e3030);
              }
              if (puVar16 != (undefined8 *)0x0) goto LAB_01350af0;
              plVar23 = (long *)0x0;
              goto LAB_01350b04;
            }
            break;
          }
          sVar18 = sVar8;
        } while (sVar8 != 0);
      }
      goto LAB_01347a4c;
    }
    plVar19 = (long *)FUN_0135470c(*(undefined8 *)(lVar25 + 0x3a0),&local_1a8,&local_138);
    if (plVar19 != (long *)0x0) {
      lVar22 = plVar19[6];
      if (*(long *)(lVar22 + 0x10) == 0) goto LAB_01351b80;
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar10) {
          *psVar5 = sVar18 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 0) {
        uVar15 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
        *(undefined8 *)(lVar22 + 8) = uVar15;
        *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
      }
      else if (sVar18 == -1) goto LAB_01349e44;
    }
    plVar14 = local_70[0];
    local_70[0] = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      lVar22 = plVar14[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar10) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*plVar14 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
    puVar24 = *(undefined8 **)(*(long *)(lVar25 + 0x288) + (long)plVar23 * 8);
    local_88 = *(long **)(lVar25 + 0x290);
    local_98 = (long *)0x0;
    if (puVar24 != (undefined8 *)0x0) {
      local_98 = (long *)*puVar24;
    }
    local_90 = plVar23;
    local_70[0] = plVar19;
    if (local_98 != (long *)0x0) {
      if (((ulong)local_88 & (long)local_88 - 1U) == 0) {
        do {
          plVar14 = (long *)PTR_DAT_047d8b70;
          if (local_98[2] != 0) {
            plVar14 = (long *)(local_98[2] + 0x30);
          }
          plVar21 = (long *)PTR_DAT_047d8b70;
          if (local_1a8 != (long *)0x0) {
            plVar21 = local_1a8 + 6;
          }
          if ((*plVar14 == *plVar21) &&
             ((local_98[9] == 0 || (*(short *)(local_98[9] + 0x1a) == 0)))) goto LAB_0134eda8;
          local_98 = (long *)*local_98;
        } while ((local_98 != (long *)0x0) &&
                ((long *)(local_98[1] & (long)local_88 - 1U) == plVar23));
      }
      else {
        do {
          plVar14 = (long *)PTR_DAT_047d8b70;
          if (local_98[2] != 0) {
            plVar14 = (long *)(local_98[2] + 0x30);
          }
          plVar21 = (long *)PTR_DAT_047d8b70;
          if (local_1a8 != (long *)0x0) {
            plVar21 = local_1a8 + 6;
          }
          if ((*plVar14 == *plVar21) &&
             ((local_98[9] == 0 || (*(short *)(local_98[9] + 0x1a) == 0)))) goto LAB_0134eda8;
          local_98 = (long *)*local_98;
          if (local_98 == (long *)0x0) break;
          plVar14 = (long *)local_98[1];
          if (local_88 <= plVar14) {
            uVar12 = 0;
            if (local_88 != (long *)0x0) {
              uVar12 = (ulong)plVar14 / (ulong)local_88;
            }
            plVar14 = (long *)((long)plVar14 - uVar12 * (long)local_88);
          }
        } while (plVar14 == plVar23);
      }
    }
    local_98 = (long *)0x0;
    (**(code **)(*plVar19 + 0x18))(&local_110,plVar19);
    local_c8 = (long *)0x0;
    plStack_c0 = (long *)0x0;
    plVar23 = (long *)0x0;
    if (plVar19 != (long *)0x0) {
      plVar23 = plVar19 + 5;
    }
    if ((long *)local_110[2] == plVar23) {
      FUN_00d1f904(&local_c8,&local_110);
    }
    plVar19 = local_110;
    if (local_110 != (long *)0x0) {
      plVar23 = local_110 + 3;
      do {
        sVar18 = (short)*plVar23;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar10) {
          *(short *)plVar23 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        piVar6 = (int *)((long)local_110 + 0x1c);
        do {
          iVar11 = *piVar6;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar10) {
            *piVar6 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_b0 = (long *)*plVar19;
          FUN_00c44438(lVar22 + 0x8040,&local_b0);
        }
      }
      else if (sVar18 == 0) goto LAB_013497f0;
    }
    local_b0 = local_138;
    local_a8 = (long *)0x0;
    local_a0 = 0;
    FUN_00dc7a68(&local_a8,&local_c8);
    local_110 = local_1a8;
    if (local_1a8 != (long *)0x0) {
      (**(code **)(*local_1a8 + 0x18))();
    }
    local_108 = local_1a0;
    local_100 = local_198;
    local_f8 = local_190;
    local_f0 = local_188;
    if (local_188 != (long *)0x0) {
      (**(code **)(*local_188 + 0x18))();
    }
    local_e8 = CONCAT44(local_e8._4_4_,local_180);
    local_e0 = local_b0;
    local_d8 = (long *)0x0;
    local_d0 = 0;
    FUN_00dc7a68(&local_d8,&local_a8);
    FUN_01354124(lVar25 + 0x288,&local_110);
    plVar19 = local_d8;
    if (local_d8 != (long *)0x0) {
      plVar23 = local_d8 + 3;
      do {
        sVar18 = (short)*plVar23;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar10) {
          *(short *)plVar23 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        piVar6 = (int *)((long)local_d8 + 0x1c);
        do {
          iVar11 = *piVar6;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar10) {
            *piVar6 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_128 = (long *)*plVar19;
          FUN_00c44438(lVar22 + 0x8040,&local_128);
        }
      }
      else if (sVar18 == 0) goto LAB_013497f0;
    }
    if (local_f0 != (long *)0x0) {
      (**(code **)(*local_f0 + 0x20))();
    }
    if (local_110 != (long *)0x0) {
      (**(code **)(*local_110 + 0x20))();
    }
    plVar19 = local_a8;
    if (local_a8 != (long *)0x0) {
      plVar23 = local_a8 + 3;
      do {
        sVar18 = (short)*plVar23;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar10) {
          *(short *)plVar23 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        piVar6 = (int *)((long)local_a8 + 0x1c);
        do {
          iVar11 = *piVar6;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar10) {
            *piVar6 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_128 = (long *)*plVar19;
          FUN_00c44438(lVar22 + 0x8040,&local_128);
        }
      }
      else if (sVar18 == 0) goto LAB_013497f0;
    }
    plVar19 = local_c8;
    if (local_c8 != (long *)0x0) {
      plVar23 = local_c8 + 3;
      do {
        sVar18 = (short)*plVar23;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar10) {
          *(short *)plVar23 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 != 1) goto LAB_013490e0;
      piVar6 = (int *)((long)local_c8 + 0x1c);
      do {
        iVar11 = *piVar6;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar10) {
          *piVar6 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar11 == -1) goto LAB_01347ad4;
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar22 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar22;
      local_128 = (long *)*plVar19;
      lVar22 = lVar22 + 0x8040;
      pplVar17 = &local_128;
      goto LAB_01349884;
    }
    goto LAB_01347ad4;
  }
  if (lVar22 == 0x2e3b6866119b9e2e) {
    FUN_00f2b7b8(&local_110,&local_178,plVar29 + 4,&DAT_03c886bc);
    uVar12 = FUN_00dc5c18(param_1 + 0x2a8,1,&local_110,0,0);
    if (((uVar12 & 1) != 0) && (plVar23 = *(long **)(param_1 + 0x2c8), plVar23 != (long *)0x0)) {
      lVar22 = plVar23[6];
      if (*(long *)(lVar22 + 0x10) == 0) goto LAB_01351b80;
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 0) {
        uVar15 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
        *(undefined8 *)(lVar22 + 8) = uVar15;
        *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
      }
      else if (sVar18 == -1) goto LAB_01349e44;
      lVar22 = plVar23[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
LAB_01346aa8:
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        pcVar20 = *(code **)(*plVar23 + 0x50);
LAB_0134db38:
        (*pcVar20)(plVar23);
      }
      else {
LAB_01346ab0:
        if (sVar18 == 0) goto LAB_013498f8;
      }
    }
LAB_01346908:
    if (local_f0 != (long *)0x0) {
      (**(code **)(*local_f0 + 0x20))();
    }
    plVar23 = local_110;
    if (local_110 == (long *)0x0) goto LAB_013478dc;
    goto LAB_01347eb0;
  }
  if (lVar22 == 0x40a8a38d6d71a99) {
    FUN_00f2b7b8(&local_1a8,&local_178,plVar29 + 4,&DAT_03c886bc);
    if (((*pbVar26 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d8c40), iVar11 != 0)) {
      FUN_00100190(PTR_LAB_047d8e90,plVar19,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c40);
    }
    lVar25 = *plVar19;
    plVar19 = (long *)(lVar25 + 0x2f0);
    *(long *)PTR_DAT_047d8c50 = lVar25;
    local_138 = *(long **)(lVar25 + 0x3a0);
    local_70[0] = (long *)0x0;
    lVar28 = *plVar19;
    lVar22 = nn::os::GetCurrentThread();
    if (lVar22 != lVar28) {
      lVar22 = nn::os::GetCurrentThread();
LAB_0134813c:
      if (*plVar19 == 0) goto code_r0x01348144;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar25 + 0x2f8));
      do {
        if (*plVar19 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar25 + 0x2f8));
            while (*plVar19 == 0) {
              cVar9 = '\x01';
              bVar30 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar30) {
                *plVar19 = lVar22;
                cVar9 = ExclusiveMonitorsStatus();
              }
              if (cVar9 == '\0') goto LAB_0134814c;
            }
          } while( true );
        }
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar30) {
          *plVar19 = lVar22;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
LAB_0134814c:
      bVar30 = false;
      goto LAB_01348150;
    }
    bVar30 = true;
LAB_01348150:
    plVar19 = *(long **)(lVar25 + 0x290);
    if (((ulong)plVar19 & (long)plVar19 - 1U) == 0) {
      plVar23 = (long *)((long)plVar19 - 1U & (ulong)local_1a0);
    }
    else {
      plVar23 = local_1a0;
      if (plVar19 <= local_1a0) {
        uVar12 = 0;
        if (plVar19 != (long *)0x0) {
          uVar12 = (ulong)local_1a0 / (ulong)plVar19;
        }
        plVar23 = (long *)((long)local_1a0 - uVar12 * (long)plVar19);
      }
    }
    FUN_00d00258(&local_98,lVar25,plVar23,&local_1a8,local_138);
    if (local_98 != (long *)0x0) {
      lVar22 = local_98[9];
      if ((lVar22 != 0) && (*(short *)(lVar22 + 0x1a) != 0)) {
        psVar5 = (short *)(lVar22 + 0x1a);
        sVar18 = *(short *)(lVar22 + 0x1a);
        do {
          sVar8 = *psVar5;
          if (sVar8 == sVar18) {
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(psVar5,0x10);
            if (bVar10) {
              *psVar5 = sVar18 + 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
            if (cVar9 != '\0') goto LAB_013512d4;
            bVar10 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_013512d4:
            bVar10 = false;
          }
          if (bVar10) {
            puVar24 = *(undefined8 **)(lVar22 + 0x10);
            if (puVar24 != (undefined8 *)0x0) {
              plVar19 = puVar24 + -5;
              puVar16 = (undefined8 *)(**(code **)*puVar24)(puVar24);
              if (((*PTR_DAT_047e3040 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_047e3040), iVar11 != 0)) {
                uVar15 = FUN_00cf27f8();
                *(undefined8 *)PTR_DAT_047e3048 = uVar15;
                __cxa_guard_release(PTR_DAT_047e3040);
              }
              if (puVar16 != (undefined8 *)0x0) goto LAB_0135131c;
              plVar23 = (long *)0x0;
              goto LAB_01351330;
            }
            break;
          }
          sVar18 = sVar8;
        } while (sVar8 != 0);
      }
      goto LAB_01348190;
    }
    plVar19 = (long *)FUN_0135514c(*(undefined8 *)(lVar25 + 0x3a0),&local_1a8,&local_138);
    if (plVar19 != (long *)0x0) {
      lVar22 = plVar19[6];
      if (*(long *)(lVar22 + 0x10) == 0) goto LAB_01351b80;
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar10) {
          *psVar5 = sVar18 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 0) {
        uVar15 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
        *(undefined8 *)(lVar22 + 8) = uVar15;
        *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
      }
      else if (sVar18 == -1) goto LAB_01349e44;
    }
    plVar14 = local_70[0];
    local_70[0] = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      lVar22 = plVar14[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar10) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*plVar14 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
    puVar24 = *(undefined8 **)(*(long *)(lVar25 + 0x288) + (long)plVar23 * 8);
    local_88 = *(long **)(lVar25 + 0x290);
    local_98 = (long *)0x0;
    if (puVar24 != (undefined8 *)0x0) {
      local_98 = (long *)*puVar24;
    }
    local_90 = plVar23;
    local_70[0] = plVar19;
    if (local_98 != (long *)0x0) {
      if (((ulong)local_88 & (long)local_88 - 1U) == 0) {
        do {
          plVar14 = (long *)PTR_DAT_047d8b70;
          if (local_98[2] != 0) {
            plVar14 = (long *)(local_98[2] + 0x30);
          }
          plVar21 = (long *)PTR_DAT_047d8b70;
          if (local_1a8 != (long *)0x0) {
            plVar21 = local_1a8 + 6;
          }
          if ((*plVar14 == *plVar21) &&
             ((local_98[9] == 0 || (*(short *)(local_98[9] + 0x1a) == 0)))) goto LAB_0134eb50;
          local_98 = (long *)*local_98;
        } while ((local_98 != (long *)0x0) &&
                ((long *)(local_98[1] & (long)local_88 - 1U) == plVar23));
      }
      else {
        do {
          plVar14 = (long *)PTR_DAT_047d8b70;
          if (local_98[2] != 0) {
            plVar14 = (long *)(local_98[2] + 0x30);
          }
          plVar21 = (long *)PTR_DAT_047d8b70;
          if (local_1a8 != (long *)0x0) {
            plVar21 = local_1a8 + 6;
          }
          if ((*plVar14 == *plVar21) &&
             ((local_98[9] == 0 || (*(short *)(local_98[9] + 0x1a) == 0)))) goto LAB_0134eb50;
          local_98 = (long *)*local_98;
          if (local_98 == (long *)0x0) break;
          plVar14 = (long *)local_98[1];
          if (local_88 <= plVar14) {
            uVar12 = 0;
            if (local_88 != (long *)0x0) {
              uVar12 = (ulong)plVar14 / (ulong)local_88;
            }
            plVar14 = (long *)((long)plVar14 - uVar12 * (long)local_88);
          }
        } while (plVar14 == plVar23);
      }
    }
    local_98 = (long *)0x0;
    (**(code **)(*plVar19 + 0x18))(&local_110,plVar19);
    local_c8 = (long *)0x0;
    plStack_c0 = (long *)0x0;
    plVar23 = (long *)0x0;
    if (plVar19 != (long *)0x0) {
      plVar23 = plVar19 + 5;
    }
    if ((long *)local_110[2] == plVar23) {
      FUN_00d1f904(&local_c8,&local_110);
    }
    plVar19 = local_110;
    if (local_110 != (long *)0x0) {
      plVar23 = local_110 + 3;
      do {
        sVar18 = (short)*plVar23;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar10) {
          *(short *)plVar23 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        piVar6 = (int *)((long)local_110 + 0x1c);
        do {
          iVar11 = *piVar6;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar10) {
            *piVar6 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_b0 = (long *)*plVar19;
          FUN_00c44438(lVar22 + 0x8040,&local_b0);
        }
      }
      else if (sVar18 == 0) goto LAB_013497f0;
    }
    local_b0 = local_138;
    local_a8 = (long *)0x0;
    local_a0 = 0;
    FUN_00dc7a68(&local_a8,&local_c8);
    local_110 = local_1a8;
    if (local_1a8 != (long *)0x0) {
      (**(code **)(*local_1a8 + 0x18))();
    }
    local_108 = local_1a0;
    local_100 = local_198;
    local_f8 = local_190;
    local_f0 = local_188;
    if (local_188 != (long *)0x0) {
      (**(code **)(*local_188 + 0x18))();
    }
    local_e8 = CONCAT44(local_e8._4_4_,local_180);
    local_e0 = local_b0;
    local_d8 = (long *)0x0;
    local_d0 = 0;
    FUN_00dc7a68(&local_d8,&local_a8);
    FUN_01354124(lVar25 + 0x288,&local_110);
    plVar19 = local_d8;
    if (local_d8 != (long *)0x0) {
      plVar23 = local_d8 + 3;
      do {
        sVar18 = (short)*plVar23;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar10) {
          *(short *)plVar23 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        piVar6 = (int *)((long)local_d8 + 0x1c);
        do {
          iVar11 = *piVar6;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar10) {
            *piVar6 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_128 = (long *)*plVar19;
          FUN_00c44438(lVar22 + 0x8040,&local_128);
        }
      }
      else if (sVar18 == 0) goto LAB_013497f0;
    }
    if (local_f0 != (long *)0x0) {
      (**(code **)(*local_f0 + 0x20))();
    }
    if (local_110 != (long *)0x0) {
      (**(code **)(*local_110 + 0x20))();
    }
    plVar19 = local_a8;
    if (local_a8 != (long *)0x0) {
      plVar23 = local_a8 + 3;
      do {
        sVar18 = (short)*plVar23;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar10) {
          *(short *)plVar23 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        piVar6 = (int *)((long)local_a8 + 0x1c);
        do {
          iVar11 = *piVar6;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar10) {
            *piVar6 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_128 = (long *)*plVar19;
          FUN_00c44438(lVar22 + 0x8040,&local_128);
        }
      }
      else if (sVar18 == 0) goto LAB_013497f0;
    }
    plVar19 = local_c8;
    if (local_c8 != (long *)0x0) {
      plVar23 = local_c8 + 3;
      do {
        sVar18 = (short)*plVar23;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar10) {
          *(short *)plVar23 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        piVar6 = (int *)((long)local_c8 + 0x1c);
        do {
          iVar11 = *piVar6;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar10) {
            *piVar6 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar11 == -1) goto LAB_01348218;
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar22 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar22;
        local_128 = (long *)*plVar19;
        lVar22 = lVar22 + 0x8040;
        pplVar17 = &local_128;
        goto LAB_0134d71c;
      }
      goto LAB_0134a194;
    }
    goto LAB_01348218;
  }
  if ((lVar22 == 0x90466d7675d531d) &&
     ((*(long *)(param_1 + 0x3a8) == 0 || (**(char **)(*(long *)(param_1 + 0x3a8) + 0x38) == '\0')))
     ) {
    FUN_00f2b7b8(&local_110,&local_178,plVar29 + 4,&DAT_03c886bc);
    uVar12 = FUN_01357410(param_1 + 0x1e8,&local_110);
    if (((uVar12 & 1) != 0) && (plVar19 = *(long **)(param_1 + 0x208), plVar19 != (long *)0x0)) {
      lVar22 = plVar19[6];
      if (*(long *)(lVar22 + 0x10) == 0) goto LAB_01351b80;
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 0) {
        uVar15 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
        *(undefined8 *)(lVar22 + 8) = uVar15;
        *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
      }
      else if (sVar18 == -1) goto LAB_01349e44;
      lVar22 = plVar19[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*plVar19 + 0x50))(plVar19);
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
    if (local_f0 != (long *)0x0) {
      (**(code **)(*local_f0 + 0x20))();
    }
    if (local_110 != (long *)0x0) {
      (**(code **)(*local_110 + 0x20))();
    }
    pbVar26 = PTR_DAT_047d8c40;
    plVar19 = (long *)PTR_DAT_047d8c48;
  }
  goto LAB_013478dc;
code_r0x0134e60c:
  cVar9 = '\x01';
  bVar30 = (bool)ExclusiveMonitorPass(plVar14,0x10);
  if (bVar30) {
    *plVar14 = lVar22;
    cVar9 = ExclusiveMonitorsStatus();
  }
  if (cVar9 == '\0') goto LAB_0134e614;
  goto LAB_0134e604;
LAB_01346c94:
  plVar23 = (long *)*plVar23;
  if (plVar23 == (long *)0x0) goto LAB_013478dc;
  goto LAB_01346c6c;
code_r0x01347640:
  cVar9 = '\x01';
  bVar30 = (bool)ExclusiveMonitorPass(plVar19,0x10);
  if (bVar30) {
    *plVar19 = lVar22;
    cVar9 = ExclusiveMonitorsStatus();
  }
  if (cVar9 == '\0') goto LAB_01347648;
  goto LAB_01347638;
LAB_01350a24:
  if (puVar16 == (undefined8 *)0x0) goto LAB_01353008;
  if (puVar16 == (undefined8 *)PTR_DAT_047e3028) {
    plVar23 = plVar19;
    goto LAB_01350a3c;
  }
  puVar16 = (undefined8 *)*puVar16;
  goto LAB_01350a24;
LAB_01353008:
  plVar23 = (long *)0x0;
LAB_01350a3c:
  FUN_01db74ec(local_70,plVar23);
  plVar23 = local_70[0];
  lVar22 = puVar24[1];
  psVar5 = (short *)(lVar22 + 0x1a);
  do {
    sVar18 = *psVar5;
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(psVar5,0x10);
    if (bVar10) {
      *psVar5 = sVar18 + -1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  if (sVar18 == 1) {
    *(undefined8 *)(lVar22 + 0x10) = 0;
    (**(code **)(*plVar19 + 0x50))(plVar19);
  }
  else if (sVar18 == 0) goto LAB_013498f8;
  if (plVar23 == (long *)0x0) {
LAB_0134768c:
    plVar19 = (long *)FUN_01353e30(*(undefined8 *)(lVar25 + 0x3a0),&local_1a8,&local_138);
    if (plVar19 != (long *)0x0) {
      lVar22 = plVar19[6];
      if (*(long *)(lVar22 + 0x10) == 0) goto LAB_01351b80;
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar10) {
          *psVar5 = sVar18 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 0) {
        uVar15 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
        *(undefined8 *)(lVar22 + 8) = uVar15;
        *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
      }
      else if (sVar18 == -1) goto LAB_01349e44;
    }
    plVar23 = local_70[0];
    local_70[0] = (long *)0x0;
    if (plVar23 != (long *)0x0) {
      lVar22 = plVar23[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar10) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*plVar23 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
    local_70[0] = plVar19;
    (**(code **)(*plVar19 + 0x18))(&local_110,plVar19);
    local_b0 = (long *)0x0;
    local_a8 = (long *)0x0;
    plVar23 = (long *)0x0;
    if (plVar19 != (long *)0x0) {
      plVar23 = plVar19 + 5;
    }
    if ((long *)local_110[2] == plVar23) {
      FUN_00d1f904(&local_b0,&local_110);
    }
    plVar19 = local_110;
    if (local_110 != (long *)0x0) {
      plVar23 = local_110 + 3;
      do {
        sVar18 = (short)*plVar23;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar10) {
          *(short *)plVar23 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        piVar6 = (int *)((long)local_110 + 0x1c);
        do {
          iVar11 = *piVar6;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar10) {
            *piVar6 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_c8 = (long *)*plVar19;
          FUN_00c44438(lVar22 + 0x8040,&local_c8);
        }
      }
      else if (sVar18 == 0) goto LAB_013497f0;
    }
    FUN_00dc7a68(local_98 + 9,&local_b0);
    plVar19 = local_b0;
    if (local_b0 != (long *)0x0) {
      plVar23 = local_b0 + 3;
      do {
        sVar18 = (short)*plVar23;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar10) {
          *(short *)plVar23 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 != 1) goto LAB_01349320;
      piVar6 = (int *)((long)local_b0 + 0x1c);
      do {
        iVar11 = *piVar6;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar10) {
          *piVar6 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar22 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar22;
        local_110 = (long *)*plVar19;
        lVar22 = lVar22 + 0x8040;
        pplVar17 = &local_110;
        goto LAB_0134ce50;
      }
    }
  }
LAB_01347714:
  if (!bVar30) {
    *(undefined8 *)(lVar25 + 0x2f0) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar25 + 0x2f8));
  }
  FUN_00d005f8(*(undefined8 *)(lVar25 + 0x308),local_70[0],0);
  plVar23 = local_70[0];
  plVar19 = (long *)PTR_DAT_047d8c48;
  pbVar26 = PTR_DAT_047d8c40;
  if (local_70[0] != (long *)0x0) {
    lVar22 = local_70[0][6];
    if (*(long *)(lVar22 + 0x10) == 0) goto LAB_01351b80;
    psVar5 = (short *)(lVar22 + 0x1a);
    do {
      sVar18 = *psVar5;
      cVar9 = '\x01';
      bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
      if (bVar30) {
        *psVar5 = sVar18 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar18 == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
      *(undefined8 *)(lVar22 + 8) = uVar15;
      *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
    }
    else if (sVar18 == -1) goto LAB_01349e44;
    if (local_70[0] != (long *)0x0) {
      lVar22 = local_70[0][6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_70[0] + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
  }
  plVar14 = (long *)*plVar2;
  *plVar2 = 0;
  if (plVar14 != (long *)0x0) {
    lVar22 = plVar14[6];
    psVar5 = (short *)(lVar22 + 0x1a);
    do {
      sVar18 = *psVar5;
      cVar9 = '\x01';
      bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
      if (bVar30) {
        *psVar5 = sVar18 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar18 == 1) {
      *(undefined8 *)(lVar22 + 0x10) = 0;
      (**(code **)(*plVar14 + 0x50))();
    }
    else if (sVar18 == 0) goto LAB_013498f8;
  }
  *plVar2 = (long)plVar23;
  lVar22 = 0;
  if (plVar23 != (long *)0x0) {
    local_110 = (long *)0x0;
    local_108 = (long *)0x0;
    FUN_00c43ef0(&local_110,plVar23 + 6);
    if ((long *)local_110[2] == plVar23 + 5) {
      do {
        plVar23 = local_108;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(&local_108,0x10);
        if (bVar30) {
          local_108 = (long *)0x0;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      uVar15 = *(undefined8 *)PTR_DAT_047d3910;
      *(undefined8 *)PTR_DAT_047d3918 = uVar15;
      FUN_00c44204(&local_b0,uVar15,plVar23);
      plVar23 = local_110;
      local_110 = (long *)0x0;
      if (plVar23 != (long *)0x0) {
        plVar14 = plVar23 + 3;
        do {
          sVar18 = (short)*plVar14;
          cVar9 = '\x01';
          bVar30 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar30) {
            *(short *)plVar14 = sVar18 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar18 == 1) {
          piVar6 = (int *)((long)plVar23 + 0x1c);
          do {
            iVar11 = *piVar6;
            cVar9 = '\x01';
            bVar30 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar30) {
              *piVar6 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar11 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar22 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar22;
            local_98 = (long *)*plVar23;
            FUN_00c44438(lVar22 + 0x8040,&local_98);
          }
        }
        else if (sVar18 == 0) goto LAB_013497f0;
      }
      plVar23 = local_b0;
      if (local_b0 != (long *)0x0) {
        local_b0 = (long *)0x0;
      }
    }
    else {
      plVar23 = (long *)0x0;
    }
    plVar14 = local_110;
    if (local_110 != (long *)0x0) {
      plVar21 = local_110 + 3;
      do {
        sVar18 = (short)*plVar21;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar30) {
          *(short *)plVar21 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        piVar6 = (int *)((long)local_110 + 0x1c);
        do {
          iVar11 = *piVar6;
          cVar9 = '\x01';
          bVar30 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar30) {
            *piVar6 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_98 = (long *)*plVar14;
          FUN_00c44438(lVar22 + 0x8040,&local_98);
        }
      }
      else if (sVar18 == 0) goto LAB_013497f0;
    }
    if (plVar23 == (long *)0x0) {
      *(undefined8 *)(param_1 + 0xb8) = 0;
    }
    else {
      plVar14 = plVar23 + 3;
      *(long *)(param_1 + 0xb8) = *plVar23;
      do {
        sVar18 = (short)*plVar14;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar30) {
          *(short *)plVar14 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        piVar6 = (int *)((long)plVar23 + 0x1c);
        do {
          iVar11 = *piVar6;
          cVar9 = '\x01';
          bVar30 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar30) {
            *piVar6 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_110 = (long *)*plVar23;
          FUN_00c44438(lVar22 + 0x8040,&local_110);
        }
      }
      else if (sVar18 == 0) goto LAB_013497f0;
    }
    lVar22 = *plVar2;
  }
  if (lVar22 != 0) {
    FUN_0135440c(&local_110);
    FUN_00cfe35c(local_110,param_1 + 0xc0,1);
    if (((*pbVar26 & 1) == 0) && (iVar11 = __cxa_guard_acquire(pbVar26), iVar11 != 0)) {
      FUN_00100190(PTR_LAB_047d8e90,plVar19,&PTR_LOOP_04483000);
      __cxa_guard_release(pbVar26);
    }
    uVar15 = *plVar19;
    *(undefined8 *)PTR_DAT_047d8c50 = uVar15;
    FUN_00cfc3c0(&local_98,uVar15,local_110);
    local_78 = local_98;
    local_98 = (long *)0x0;
    FUN_00cfbe68(param_1 + 200,&local_78);
    if (local_78 != (long *)0x0) {
      lVar22 = local_78[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_78 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
    local_80 = local_90;
    local_90 = (long *)0x0;
    FUN_00cfc114(param_1 + 0xd8,&local_80);
    if (local_80 != (long *)0x0) {
      lVar22 = local_80[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_80 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
    if (local_90 != (long *)0x0) {
      lVar22 = local_90[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_90 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
    if (local_98 != (long *)0x0) {
      lVar22 = local_98[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_98 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
    if (local_110 != (long *)0x0) {
      lVar22 = local_110[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_110 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
    plVar23 = *(long **)(param_1 + 200);
    if (plVar23 == (long *)0x0) goto LAB_013478cc;
    lVar22 = plVar23[6];
    if (*(long *)(lVar22 + 0x10) == 0) goto LAB_01351b80;
    psVar5 = (short *)(lVar22 + 0x1a);
    do {
      sVar18 = *psVar5;
      cVar9 = '\x01';
      bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
      if (bVar30) {
        *psVar5 = sVar18 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar18 == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
      *(undefined8 *)(lVar22 + 8) = uVar15;
      *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
    }
    else if (sVar18 == -1) goto LAB_01349e44;
    lVar22 = plVar23[6];
    psVar5 = (short *)(lVar22 + 0x1a);
    do {
      sVar18 = *psVar5;
      cVar9 = '\x01';
      bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
      if (bVar30) {
        *psVar5 = sVar18 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    goto LAB_01347218;
  }
  goto LAB_013478cc;
LAB_0134f000:
  (**(code **)(*plVar19 + 0x18))(&local_b0,plVar19);
  local_c8 = (long *)0x0;
  plStack_c0 = (long *)0x0;
  plVar23 = (long *)0x0;
  if (plVar19 != (long *)0x0) {
    plVar23 = plVar19 + 5;
  }
  if ((long *)local_b0[2] == plVar23) {
    FUN_00d1f904(&local_c8,&local_b0);
  }
  plVar19 = local_b0;
  if (local_b0 != (long *)0x0) {
    plVar23 = local_b0 + 3;
    do {
      sVar18 = (short)*plVar23;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar10) {
        *(short *)plVar23 = sVar18 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar18 == 1) {
      piVar6 = (int *)((long)local_b0 + 0x1c);
      do {
        iVar11 = *piVar6;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar10) {
          *piVar6 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar22 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar22;
        local_110 = (long *)*plVar19;
        FUN_00c44438(lVar22 + 0x8040,&local_110);
      }
    }
    else if (sVar18 == 0) goto LAB_013497f0;
  }
  local_100 = (long *)0x0;
  local_110 = local_138;
  local_108 = (long *)0x0;
  FUN_00dc7a68(&local_108,&local_c8);
  local_98[8] = (long)local_110;
  FUN_00dc7a68(local_98 + 9,&local_108);
  plVar19 = local_108;
  if (local_108 != (long *)0x0) {
    plVar23 = local_108 + 3;
    do {
      sVar18 = (short)*plVar23;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar10) {
        *(short *)plVar23 = sVar18 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar18 == 1) {
      piVar6 = (int *)((long)local_108 + 0x1c);
      do {
        iVar11 = *piVar6;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar10) {
          *piVar6 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar22 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar22;
        local_b0 = (long *)*plVar19;
        FUN_00c44438(lVar22 + 0x8040,&local_b0);
      }
    }
    else if (sVar18 == 0) goto LAB_013497f0;
  }
  plVar19 = local_c8;
  if (local_c8 != (long *)0x0) {
    plVar23 = local_c8 + 3;
    do {
      sVar18 = (short)*plVar23;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar10) {
        *(short *)plVar23 = sVar18 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar18 == 1) {
      piVar6 = (int *)((long)local_c8 + 0x1c);
      do {
        iVar11 = *piVar6;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar10) {
          *piVar6 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar22 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar22;
        local_b0 = (long *)*plVar19;
        lVar22 = lVar22 + 0x8040;
        pplVar17 = &local_b0;
LAB_0134ce50:
        FUN_00c44438(lVar22,pplVar17);
      }
    }
    else {
LAB_01349320:
      if (sVar18 == 0) goto LAB_013497f0;
    }
  }
  goto LAB_01347714;
code_r0x013472e4:
  cVar9 = '\x01';
  bVar30 = (bool)ExclusiveMonitorPass(plVar19,0x10);
  if (bVar30) {
    *plVar19 = lVar22;
    cVar9 = ExclusiveMonitorsStatus();
  }
  if (cVar9 == '\0') goto LAB_013472ec;
  goto LAB_013472dc;
  while( true ) {
    puVar16 = (undefined8 *)*puVar16;
    plVar23 = (long *)0x0;
    if (puVar16 == (undefined8 *)0x0) break;
LAB_01350928:
    if (puVar16 == (undefined8 *)PTR_DAT_047e3008) {
      plVar23 = plVar19;
      break;
    }
  }
LAB_0135093c:
  FUN_01db74ec(local_70,plVar23);
  plVar23 = local_70[0];
  lVar22 = puVar24[1];
  psVar5 = (short *)(lVar22 + 0x1a);
  do {
    sVar18 = *psVar5;
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(psVar5,0x10);
    if (bVar10) {
      *psVar5 = sVar18 + -1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  if (sVar18 == 1) {
    *(undefined8 *)(lVar22 + 0x10) = 0;
    (**(code **)(*plVar19 + 0x50))(plVar19);
  }
  else if (sVar18 == 0) goto LAB_013498f8;
  if (plVar23 == (long *)0x0) {
LAB_01347330:
    plVar19 = (long *)FUN_01353cc8(*(undefined8 *)(lVar25 + 0x3a0),&local_1a8,&local_138);
    if (plVar19 != (long *)0x0) {
      lVar22 = plVar19[6];
      if (*(long *)(lVar22 + 0x10) == 0) goto LAB_01351b80;
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar10) {
          *psVar5 = sVar18 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 0) {
        uVar15 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
        *(undefined8 *)(lVar22 + 8) = uVar15;
        *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
      }
      else if (sVar18 == -1) goto LAB_01349e44;
    }
    plVar23 = local_70[0];
    local_70[0] = (long *)0x0;
    if (plVar23 != (long *)0x0) {
      lVar22 = plVar23[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar10) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*plVar23 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
    local_70[0] = plVar19;
    (**(code **)(*plVar19 + 0x18))(&local_110,plVar19);
    local_b0 = (long *)0x0;
    local_a8 = (long *)0x0;
    plVar23 = (long *)0x0;
    if (plVar19 != (long *)0x0) {
      plVar23 = plVar19 + 5;
    }
    if ((long *)local_110[2] == plVar23) {
      FUN_00d1f904(&local_b0,&local_110);
    }
    plVar19 = local_110;
    if (local_110 != (long *)0x0) {
      plVar23 = local_110 + 3;
      do {
        sVar18 = (short)*plVar23;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar10) {
          *(short *)plVar23 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        piVar6 = (int *)((long)local_110 + 0x1c);
        do {
          iVar11 = *piVar6;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar10) {
            *piVar6 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_c8 = (long *)*plVar19;
          FUN_00c44438(lVar22 + 0x8040,&local_c8);
        }
      }
      else if (sVar18 == 0) goto LAB_013497f0;
    }
    FUN_00dc7a68(local_98 + 9,&local_b0);
    plVar19 = local_b0;
    if (local_b0 != (long *)0x0) {
      plVar23 = local_b0 + 3;
      do {
        sVar18 = (short)*plVar23;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar10) {
          *(short *)plVar23 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 != 1) goto LAB_01349290;
      piVar6 = (int *)((long)local_b0 + 0x1c);
      do {
        iVar11 = *piVar6;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar10) {
          *piVar6 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar22 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar22;
        local_110 = (long *)*plVar19;
        lVar22 = lVar22 + 0x8040;
        pplVar17 = &local_110;
        goto LAB_0134ccd0;
      }
    }
  }
LAB_013473b8:
  if (!bVar30) {
    *(undefined8 *)(lVar25 + 0x2f0) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar25 + 0x2f8));
  }
  FUN_00d005f8(*(undefined8 *)(lVar25 + 0x308),local_70[0],0);
  plVar23 = local_70[0];
  plVar19 = (long *)PTR_DAT_047d8c48;
  pbVar26 = PTR_DAT_047d8c40;
  if (local_70[0] != (long *)0x0) {
    lVar22 = local_70[0][6];
    if (*(long *)(lVar22 + 0x10) == 0) goto LAB_01351b80;
    psVar5 = (short *)(lVar22 + 0x1a);
    do {
      sVar18 = *psVar5;
      cVar9 = '\x01';
      bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
      if (bVar30) {
        *psVar5 = sVar18 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar18 == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
      *(undefined8 *)(lVar22 + 8) = uVar15;
      *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
    }
    else if (sVar18 == -1) goto LAB_01349e44;
    if (local_70[0] != (long *)0x0) {
      lVar22 = local_70[0][6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_70[0] + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
  }
  plVar14 = (long *)*plVar3;
  *plVar3 = 0;
  if (plVar14 != (long *)0x0) {
    lVar22 = plVar14[6];
    psVar5 = (short *)(lVar22 + 0x1a);
    do {
      sVar18 = *psVar5;
      cVar9 = '\x01';
      bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
      if (bVar30) {
        *psVar5 = sVar18 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar18 == 1) {
      *(undefined8 *)(lVar22 + 0x10) = 0;
      (**(code **)(*plVar14 + 0x50))();
    }
    else if (sVar18 == 0) goto LAB_013498f8;
  }
  *plVar3 = (long)plVar23;
  lVar22 = 0;
  if (plVar23 != (long *)0x0) {
    local_110 = (long *)0x0;
    local_108 = (long *)0x0;
    FUN_00c43ef0(&local_110,plVar23 + 6);
    local_98 = (long *)0x0;
    local_90 = (long *)0x0;
    if ((long *)local_110[2] == plVar23 + 5) {
      do {
        plVar23 = local_108;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(&local_108,0x10);
        if (bVar30) {
          local_108 = (long *)0x0;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      uVar15 = *(undefined8 *)PTR_DAT_047d3910;
      *(undefined8 *)PTR_DAT_047d3918 = uVar15;
      FUN_00c44204(&local_c8,uVar15,plVar23);
      plVar14 = local_110;
      local_110 = (long *)0x0;
      if (plVar14 != (long *)0x0) {
        plVar21 = plVar14 + 3;
        do {
          sVar18 = (short)*plVar21;
          cVar9 = '\x01';
          bVar30 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar30) {
            *(short *)plVar21 = sVar18 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar18 == 1) {
          piVar6 = (int *)((long)plVar14 + 0x1c);
          do {
            iVar11 = *piVar6;
            cVar9 = '\x01';
            bVar30 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar30) {
              *piVar6 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar11 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar22 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar22;
            local_b0 = (long *)*plVar14;
            FUN_00c44438(lVar22 + 0x8040,&local_b0);
          }
        }
        else if (sVar18 == 0) goto LAB_013497f0;
      }
      plVar14 = local_98;
      if (local_c8 == (long *)0x0) {
        FUN_013572e8(&local_98);
      }
      else {
        local_98 = (long *)0x0;
        if (plVar14 != (long *)0x0) {
          plVar21 = plVar14 + 3;
          do {
            sVar18 = (short)*plVar21;
            cVar9 = '\x01';
            bVar30 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar30) {
              *(short *)plVar21 = sVar18 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (sVar18 == 1) {
            piVar6 = (int *)((long)plVar14 + 0x1c);
            do {
              iVar11 = *piVar6;
              cVar9 = '\x01';
              bVar30 = (bool)ExclusiveMonitorPass(piVar6,0x10);
              if (bVar30) {
                *piVar6 = -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (iVar11 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar22 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar22;
              local_b0 = (long *)*plVar14;
              FUN_00c44438(lVar22 + 0x8040,&local_b0);
            }
          }
          else if (sVar18 == 0) goto LAB_013497f0;
        }
        local_98 = local_c8;
        local_c8 = (long *)0x0;
        local_90 = plVar23;
      }
    }
    plVar23 = local_110;
    if (local_110 != (long *)0x0) {
      plVar14 = local_110 + 3;
      do {
        sVar18 = (short)*plVar14;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar30) {
          *(short *)plVar14 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        piVar6 = (int *)((long)local_110 + 0x1c);
        do {
          iVar11 = *piVar6;
          cVar9 = '\x01';
          bVar30 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar30) {
            *piVar6 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_b0 = (long *)*plVar23;
          FUN_00c44438(lVar22 + 0x8040,&local_b0);
        }
      }
      else if (sVar18 == 0) goto LAB_013497f0;
    }
    plVar23 = local_98;
    lVar22 = 0;
    if (local_98 != (long *)0x0) {
      lVar22 = *local_98;
    }
    *(long *)(param_1 + 0x178) = lVar22;
    if (local_98 != (long *)0x0) {
      plVar14 = local_98 + 3;
      do {
        sVar18 = (short)*plVar14;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar30) {
          *(short *)plVar14 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        piVar6 = (int *)((long)local_98 + 0x1c);
        do {
          iVar11 = *piVar6;
          cVar9 = '\x01';
          bVar30 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar30) {
            *piVar6 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_110 = (long *)*plVar23;
          FUN_00c44438(lVar22 + 0x8040,&local_110);
        }
      }
      else if (sVar18 == 0) goto LAB_013497f0;
    }
    lVar22 = *plVar3;
  }
  if (lVar22 != 0) {
    FUN_01354874(&local_110,plVar3);
    FUN_00cfe35c(local_110,param_1 + 0x180,1);
    if (((*pbVar26 & 1) == 0) && (iVar11 = __cxa_guard_acquire(pbVar26), iVar11 != 0)) {
      FUN_00100190(PTR_LAB_047d8e90,plVar19,&PTR_LOOP_04483000);
      __cxa_guard_release(pbVar26);
    }
    uVar15 = *plVar19;
    *(undefined8 *)PTR_DAT_047d8c50 = uVar15;
    FUN_00cfc3c0(&local_98,uVar15,local_110);
    local_78 = local_98;
    local_98 = (long *)0x0;
    FUN_00cfbe68(param_1 + 0x188,&local_78);
    if (local_78 != (long *)0x0) {
      lVar22 = local_78[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_78 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
    local_80 = local_90;
    local_90 = (long *)0x0;
    FUN_00cfc114(param_1 + 0x198,&local_80);
    if (local_80 != (long *)0x0) {
      lVar22 = local_80[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_80 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
    if (local_90 != (long *)0x0) {
      lVar22 = local_90[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_90 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
    if (local_98 != (long *)0x0) {
      lVar22 = local_98[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_98 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
    if (local_110 != (long *)0x0) {
      lVar22 = local_110[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_110 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
    plVar23 = *(long **)(param_1 + 0x188);
    if (plVar23 == (long *)0x0) goto LAB_013478cc;
    lVar22 = plVar23[6];
    if (*(long *)(lVar22 + 0x10) == 0) goto LAB_01351b80;
    psVar5 = (short *)(lVar22 + 0x1a);
    do {
      sVar18 = *psVar5;
      cVar9 = '\x01';
      bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
      if (bVar30) {
        *psVar5 = sVar18 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar18 == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
      *(undefined8 *)(lVar22 + 8) = uVar15;
      *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
    }
    else if (sVar18 == -1) goto LAB_01349e44;
    lVar22 = plVar23[6];
    psVar5 = (short *)(lVar22 + 0x1a);
    do {
      sVar18 = *psVar5;
      cVar9 = '\x01';
      bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
      if (bVar30) {
        *psVar5 = sVar18 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    goto LAB_01347218;
  }
  goto LAB_013478cc;
LAB_0134ea24:
  (**(code **)(*plVar19 + 0x18))(&local_b0,plVar19);
  local_c8 = (long *)0x0;
  plStack_c0 = (long *)0x0;
  plVar23 = (long *)0x0;
  if (plVar19 != (long *)0x0) {
    plVar23 = plVar19 + 5;
  }
  if ((long *)local_b0[2] == plVar23) {
    FUN_00d1f904(&local_c8,&local_b0);
  }
  plVar19 = local_b0;
  if (local_b0 != (long *)0x0) {
    plVar23 = local_b0 + 3;
    do {
      sVar18 = (short)*plVar23;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar10) {
        *(short *)plVar23 = sVar18 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar18 == 1) {
      piVar6 = (int *)((long)local_b0 + 0x1c);
      do {
        iVar11 = *piVar6;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar10) {
          *piVar6 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar22 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar22;
        local_110 = (long *)*plVar19;
        FUN_00c44438(lVar22 + 0x8040,&local_110);
      }
    }
    else if (sVar18 == 0) goto LAB_013497f0;
  }
  local_100 = (long *)0x0;
  local_110 = local_138;
  local_108 = (long *)0x0;
  FUN_00dc7a68(&local_108,&local_c8);
  local_98[8] = (long)local_110;
  FUN_00dc7a68(local_98 + 9,&local_108);
  plVar19 = local_108;
  if (local_108 != (long *)0x0) {
    plVar23 = local_108 + 3;
    do {
      sVar18 = (short)*plVar23;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar10) {
        *(short *)plVar23 = sVar18 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar18 == 1) {
      piVar6 = (int *)((long)local_108 + 0x1c);
      do {
        iVar11 = *piVar6;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar10) {
          *piVar6 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar22 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar22;
        local_b0 = (long *)*plVar19;
        FUN_00c44438(lVar22 + 0x8040,&local_b0);
      }
    }
    else if (sVar18 == 0) goto LAB_013497f0;
  }
  plVar19 = local_c8;
  if (local_c8 != (long *)0x0) {
    plVar23 = local_c8 + 3;
    do {
      sVar18 = (short)*plVar23;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar10) {
        *(short *)plVar23 = sVar18 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar18 == 1) {
      piVar6 = (int *)((long)local_c8 + 0x1c);
      do {
        iVar11 = *piVar6;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar10) {
          *piVar6 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar22 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar22;
        local_b0 = (long *)*plVar19;
        lVar22 = lVar22 + 0x8040;
        pplVar17 = &local_b0;
LAB_0134ccd0:
        FUN_00c44438(lVar22,pplVar17);
      }
    }
    else {
LAB_01349290:
      if (sVar18 == 0) goto LAB_013497f0;
    }
  }
  goto LAB_013473b8;
code_r0x01347244:
  cVar9 = '\x01';
  bVar30 = (bool)ExclusiveMonitorPass(plVar19,0x10);
  if (bVar30) {
    *plVar19 = lVar22;
    cVar9 = ExclusiveMonitorsStatus();
  }
  if (cVar9 == '\0') goto LAB_0134a2f8;
  goto LAB_0134723c;
  while( true ) {
    puVar16 = (undefined8 *)*puVar16;
    plVar23 = (long *)0x0;
    if (puVar16 == (undefined8 *)0x0) break;
LAB_01351614:
    if (puVar16 == (undefined8 *)PTR_DAT_047e3058) {
      plVar23 = plVar19;
      break;
    }
  }
LAB_01351628:
  FUN_01db74ec(local_70,plVar23);
  plVar23 = local_70[0];
  lVar22 = puVar24[1];
  psVar5 = (short *)(lVar22 + 0x1a);
  do {
    sVar18 = *psVar5;
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(psVar5,0x10);
    if (bVar10) {
      *psVar5 = sVar18 + -1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  if (sVar18 == 1) {
    *(undefined8 *)(lVar22 + 0x10) = 0;
    (**(code **)(*plVar19 + 0x50))(plVar19);
  }
  else if (sVar18 == 0) goto LAB_013498f8;
  if (plVar23 == (long *)0x0) {
LAB_0134a33c:
    plVar19 = (long *)FUN_01355418(*(undefined8 *)(lVar25 + 0x3a0),&local_1a8,&local_138);
    if (plVar19 != (long *)0x0) {
      lVar22 = plVar19[6];
      if (*(long *)(lVar22 + 0x10) == 0) goto LAB_01351b80;
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar10) {
          *psVar5 = sVar18 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 0) {
        uVar15 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
        *(undefined8 *)(lVar22 + 8) = uVar15;
        *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
      }
      else if (sVar18 == -1) goto LAB_01349e44;
    }
    plVar23 = local_70[0];
    local_70[0] = (long *)0x0;
    if (plVar23 != (long *)0x0) {
      lVar22 = plVar23[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar10) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*plVar23 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
    local_70[0] = plVar19;
    (**(code **)(*plVar19 + 0x18))(&local_110,plVar19);
    local_b0 = (long *)0x0;
    local_a8 = (long *)0x0;
    plVar23 = (long *)0x0;
    if (plVar19 != (long *)0x0) {
      plVar23 = plVar19 + 5;
    }
    if ((long *)local_110[2] == plVar23) {
      FUN_00d1f904(&local_b0,&local_110);
    }
    plVar19 = local_110;
    if (local_110 != (long *)0x0) {
      plVar23 = local_110 + 3;
      do {
        sVar18 = (short)*plVar23;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar10) {
          *(short *)plVar23 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        piVar6 = (int *)((long)local_110 + 0x1c);
        do {
          iVar11 = *piVar6;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar10) {
            *piVar6 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_c8 = (long *)*plVar19;
          FUN_00c44438(lVar22 + 0x8040,&local_c8);
        }
      }
      else if (sVar18 == 0) goto LAB_013497f0;
    }
    FUN_00dc7a68(local_98 + 9,&local_b0);
    plVar19 = local_b0;
    if (local_b0 != (long *)0x0) {
      plVar23 = local_b0 + 3;
      do {
        sVar18 = (short)*plVar23;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar10) {
          *(short *)plVar23 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 != 1) goto LAB_0134b2a8;
      piVar6 = (int *)((long)local_b0 + 0x1c);
      do {
        iVar11 = *piVar6;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar10) {
          *piVar6 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar22 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar22;
        local_110 = (long *)*plVar19;
        lVar22 = lVar22 + 0x8040;
        pplVar17 = &local_110;
        goto LAB_0134e3b4;
      }
    }
  }
LAB_0134a3c4:
  if (!bVar30) {
    *(undefined8 *)(lVar25 + 0x2f0) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar25 + 0x2f8));
  }
  FUN_00d005f8(*(undefined8 *)(lVar25 + 0x308),local_70[0],0);
  plVar23 = local_70[0];
  plVar19 = (long *)PTR_DAT_047d8c48;
  pbVar26 = PTR_DAT_047d8c40;
  if (local_70[0] != (long *)0x0) {
    lVar22 = local_70[0][6];
    if (*(long *)(lVar22 + 0x10) == 0) goto LAB_01351b80;
    psVar5 = (short *)(lVar22 + 0x1a);
    do {
      sVar18 = *psVar5;
      cVar9 = '\x01';
      bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
      if (bVar30) {
        *psVar5 = sVar18 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar18 == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
      *(undefined8 *)(lVar22 + 8) = uVar15;
      *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
    }
    else if (sVar18 == -1) goto LAB_01349e44;
    if (local_70[0] != (long *)0x0) {
      lVar22 = local_70[0][6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_70[0] + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
  }
  plVar14 = *(long **)(param_1 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  if (plVar14 != (long *)0x0) {
    lVar22 = plVar14[6];
    psVar5 = (short *)(lVar22 + 0x1a);
    do {
      sVar18 = *psVar5;
      cVar9 = '\x01';
      bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
      if (bVar30) {
        *psVar5 = sVar18 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar18 == 1) {
      *(undefined8 *)(lVar22 + 0x10) = 0;
      (**(code **)(*plVar14 + 0x50))();
    }
    else if (sVar18 == 0) goto LAB_013498f8;
  }
  plVar14 = (long *)(param_1 + 0x1b0);
  *plVar14 = (long)plVar23;
  lVar22 = 0;
  if (plVar23 != (long *)0x0) {
    local_110 = (long *)0x0;
    local_108 = (long *)0x0;
    FUN_00c43ef0(&local_110,plVar23 + 6);
    if ((long *)local_110[2] == plVar23 + 5) {
      do {
        plVar23 = local_108;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(&local_108,0x10);
        if (bVar30) {
          local_108 = (long *)0x0;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      uVar15 = *(undefined8 *)PTR_DAT_047d3910;
      *(undefined8 *)PTR_DAT_047d3918 = uVar15;
      FUN_00c44204(&local_b0,uVar15,plVar23);
      plVar23 = local_110;
      local_110 = (long *)0x0;
      if (plVar23 != (long *)0x0) {
        plVar21 = plVar23 + 3;
        do {
          sVar18 = (short)*plVar21;
          cVar9 = '\x01';
          bVar30 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar30) {
            *(short *)plVar21 = sVar18 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar18 == 1) {
          piVar6 = (int *)((long)plVar23 + 0x1c);
          do {
            iVar11 = *piVar6;
            cVar9 = '\x01';
            bVar30 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar30) {
              *piVar6 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar11 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar22 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar22;
            local_98 = (long *)*plVar23;
            FUN_00c44438(lVar22 + 0x8040,&local_98);
          }
        }
        else if (sVar18 == 0) goto LAB_013497f0;
      }
      plVar23 = local_b0;
      if (local_b0 != (long *)0x0) {
        local_b0 = (long *)0x0;
      }
    }
    else {
      plVar23 = (long *)0x0;
    }
    plVar21 = local_110;
    if (local_110 != (long *)0x0) {
      plVar4 = local_110 + 3;
      do {
        sVar18 = (short)*plVar4;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar30) {
          *(short *)plVar4 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        piVar6 = (int *)((long)local_110 + 0x1c);
        do {
          iVar11 = *piVar6;
          cVar9 = '\x01';
          bVar30 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar30) {
            *piVar6 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_98 = (long *)*plVar21;
          FUN_00c44438(lVar22 + 0x8040,&local_98);
        }
      }
      else if (sVar18 == 0) goto LAB_013497f0;
    }
    if (plVar23 == (long *)0x0) {
      *(undefined8 *)(param_1 + 0x1b8) = 0;
    }
    else {
      plVar21 = plVar23 + 3;
      *(long *)(param_1 + 0x1b8) = *plVar23;
      do {
        sVar18 = (short)*plVar21;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar30) {
          *(short *)plVar21 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        piVar6 = (int *)((long)plVar23 + 0x1c);
        do {
          iVar11 = *piVar6;
          cVar9 = '\x01';
          bVar30 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar30) {
            *piVar6 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_110 = (long *)*plVar23;
          FUN_00c44438(lVar22 + 0x8040,&local_110);
        }
      }
      else if (sVar18 == 0) goto LAB_013497f0;
    }
    lVar22 = *plVar14;
  }
  if (lVar22 != 0) {
    FUN_01128a60(&local_110,plVar14);
    FUN_00cfe35c(local_110,param_1 + 0x1c0,1);
    if (((*pbVar26 & 1) == 0) && (iVar11 = __cxa_guard_acquire(pbVar26), iVar11 != 0)) {
      FUN_00100190(PTR_LAB_047d8e90,plVar19,&PTR_LOOP_04483000);
      __cxa_guard_release(pbVar26);
    }
    uVar15 = *plVar19;
    *(undefined8 *)PTR_DAT_047d8c50 = uVar15;
    FUN_00cfc3c0(&local_98,uVar15,local_110);
    local_78 = local_98;
    local_98 = (long *)0x0;
    FUN_00cfbe68(param_1 + 0x1c8,&local_78);
    if (local_78 != (long *)0x0) {
      lVar22 = local_78[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_78 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
    local_80 = local_90;
    local_90 = (long *)0x0;
    FUN_00cfc114(param_1 + 0x1d8,&local_80);
    if (local_80 != (long *)0x0) {
      lVar22 = local_80[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_80 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
    if (local_90 != (long *)0x0) {
      lVar22 = local_90[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_90 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
    if (local_98 != (long *)0x0) {
      lVar22 = local_98[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_98 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
    if (local_110 != (long *)0x0) {
      lVar22 = local_110[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_110 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
    plVar23 = *(long **)(param_1 + 0x1c8);
    if (plVar23 == (long *)0x0) goto LAB_013478cc;
    lVar22 = plVar23[6];
    if (*(long *)(lVar22 + 0x10) == 0) goto LAB_01351b80;
    psVar5 = (short *)(lVar22 + 0x1a);
    do {
      sVar18 = *psVar5;
      cVar9 = '\x01';
      bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
      if (bVar30) {
        *psVar5 = sVar18 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar18 == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
      *(undefined8 *)(lVar22 + 8) = uVar15;
      *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
    }
    else if (sVar18 == -1) goto LAB_01349e44;
    lVar22 = plVar23[6];
    psVar5 = (short *)(lVar22 + 0x1a);
    do {
      sVar18 = *psVar5;
      cVar9 = '\x01';
      bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
      if (bVar30) {
        *psVar5 = sVar18 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    goto LAB_01347218;
  }
  goto LAB_013478cc;
LAB_0134f12c:
  (**(code **)(*plVar19 + 0x18))(&local_b0,plVar19);
  local_c8 = (long *)0x0;
  plStack_c0 = (long *)0x0;
  plVar23 = (long *)0x0;
  if (plVar19 != (long *)0x0) {
    plVar23 = plVar19 + 5;
  }
  if ((long *)local_b0[2] == plVar23) {
    FUN_00d1f904(&local_c8,&local_b0);
  }
  plVar19 = local_b0;
  if (local_b0 != (long *)0x0) {
    plVar23 = local_b0 + 3;
    do {
      sVar18 = (short)*plVar23;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar10) {
        *(short *)plVar23 = sVar18 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar18 == 1) {
      piVar6 = (int *)((long)local_b0 + 0x1c);
      do {
        iVar11 = *piVar6;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar10) {
          *piVar6 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar22 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar22;
        local_110 = (long *)*plVar19;
        FUN_00c44438(lVar22 + 0x8040,&local_110);
      }
    }
    else if (sVar18 == 0) goto LAB_013497f0;
  }
  local_100 = (long *)0x0;
  local_110 = local_138;
  local_108 = (long *)0x0;
  FUN_00dc7a68(&local_108,&local_c8);
  local_98[8] = (long)local_110;
  FUN_00dc7a68(local_98 + 9,&local_108);
  plVar19 = local_108;
  if (local_108 != (long *)0x0) {
    plVar23 = local_108 + 3;
    do {
      sVar18 = (short)*plVar23;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar10) {
        *(short *)plVar23 = sVar18 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar18 == 1) {
      piVar6 = (int *)((long)local_108 + 0x1c);
      do {
        iVar11 = *piVar6;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar10) {
          *piVar6 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar22 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar22;
        local_b0 = (long *)*plVar19;
        FUN_00c44438(lVar22 + 0x8040,&local_b0);
      }
    }
    else if (sVar18 == 0) goto LAB_013497f0;
  }
  plVar19 = local_c8;
  if (local_c8 != (long *)0x0) {
    plVar23 = local_c8 + 3;
    do {
      sVar18 = (short)*plVar23;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar10) {
        *(short *)plVar23 = sVar18 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar18 == 1) {
      piVar6 = (int *)((long)local_c8 + 0x1c);
      do {
        iVar11 = *piVar6;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar10) {
          *piVar6 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar22 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar22;
        local_b0 = (long *)*plVar19;
        lVar22 = lVar22 + 0x8040;
        pplVar17 = &local_b0;
LAB_0134e3b4:
        FUN_00c44438(lVar22,pplVar17);
      }
    }
    else {
LAB_0134b2a8:
      if (sVar18 == 0) goto LAB_013497f0;
    }
  }
  goto LAB_0134a3c4;
code_r0x01347230:
  cVar9 = '\x01';
  bVar30 = (bool)ExclusiveMonitorPass(plVar19,0x10);
  if (bVar30) {
    *plVar19 = lVar22;
    cVar9 = ExclusiveMonitorsStatus();
  }
  if (cVar9 == '\0') goto LAB_01349ee8;
  goto LAB_01347228;
  while( true ) {
    puVar16 = (undefined8 *)*puVar16;
    plVar23 = (long *)0x0;
    if (puVar16 == (undefined8 *)0x0) break;
LAB_013516dc:
    if (puVar16 == &DAT_0486ad38) {
      plVar23 = plVar19;
      break;
    }
  }
LAB_013516f0:
  FUN_01db74ec(local_70,plVar23);
  plVar23 = local_70[0];
  lVar22 = puVar24[1];
  psVar5 = (short *)(lVar22 + 0x1a);
  do {
    sVar18 = *psVar5;
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(psVar5,0x10);
    if (bVar10) {
      *psVar5 = sVar18 + -1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  if (sVar18 == 1) {
    *(undefined8 *)(lVar22 + 0x10) = 0;
    (**(code **)(*plVar19 + 0x50))(plVar19);
  }
  else if (sVar18 == 0) goto LAB_013498f8;
  if (plVar23 == (long *)0x0) {
LAB_01349f2c:
    plVar19 = (long *)FUN_013552b4(*(undefined8 *)(lVar25 + 0x3a0),&local_1a8,&local_138);
    if (plVar19 != (long *)0x0) {
      lVar22 = plVar19[6];
      if (*(long *)(lVar22 + 0x10) == 0) goto LAB_01351b80;
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar10) {
          *psVar5 = sVar18 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 0) {
        uVar15 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
        *(undefined8 *)(lVar22 + 8) = uVar15;
        *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
      }
      else if (sVar18 == -1) goto LAB_01349e44;
    }
    plVar23 = local_70[0];
    local_70[0] = (long *)0x0;
    if (plVar23 != (long *)0x0) {
      lVar22 = plVar23[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar10) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*plVar23 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
    local_70[0] = plVar19;
    (**(code **)(*plVar19 + 0x18))(&local_110,plVar19);
    local_b0 = (long *)0x0;
    local_a8 = (long *)0x0;
    plVar23 = (long *)0x0;
    if (plVar19 != (long *)0x0) {
      plVar23 = plVar19 + 5;
    }
    if ((long *)local_110[2] == plVar23) {
      FUN_00d1f904(&local_b0,&local_110);
    }
    plVar19 = local_110;
    if (local_110 != (long *)0x0) {
      plVar23 = local_110 + 3;
      do {
        sVar18 = (short)*plVar23;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar10) {
          *(short *)plVar23 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        piVar6 = (int *)((long)local_110 + 0x1c);
        do {
          iVar11 = *piVar6;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar10) {
            *piVar6 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_c8 = (long *)*plVar19;
          FUN_00c44438(lVar22 + 0x8040,&local_c8);
        }
      }
      else if (sVar18 == 0) goto LAB_013497f0;
    }
    FUN_00dc7a68(local_98 + 9,&local_b0);
    plVar19 = local_b0;
    if (local_b0 != (long *)0x0) {
      plVar23 = local_b0 + 3;
      do {
        sVar18 = (short)*plVar23;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar10) {
          *(short *)plVar23 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 != 1) goto LAB_0134b7d4;
      piVar6 = (int *)((long)local_b0 + 0x1c);
      do {
        iVar11 = *piVar6;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar10) {
          *piVar6 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar22 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar22;
        local_110 = (long *)*plVar19;
        lVar22 = lVar22 + 0x8040;
        pplVar17 = &local_110;
        goto LAB_0134e8d8;
      }
    }
  }
LAB_01349fb4:
  if (!bVar30) {
    *(undefined8 *)(lVar25 + 0x2f0) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar25 + 0x2f8));
  }
  FUN_00d005f8(*(undefined8 *)(lVar25 + 0x308),local_70[0],0);
  plVar23 = local_70[0];
  plVar19 = (long *)PTR_DAT_047d8c48;
  pbVar26 = PTR_DAT_047d8c40;
  if (local_70[0] != (long *)0x0) {
    lVar22 = local_70[0][6];
    if (*(long *)(lVar22 + 0x10) == 0) goto LAB_01351b80;
    psVar5 = (short *)(lVar22 + 0x1a);
    do {
      sVar18 = *psVar5;
      cVar9 = '\x01';
      bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
      if (bVar30) {
        *psVar5 = sVar18 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar18 == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
      *(undefined8 *)(lVar22 + 8) = uVar15;
      *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
    }
    else if (sVar18 == -1) goto LAB_01349e44;
    if (local_70[0] != (long *)0x0) {
      lVar22 = local_70[0][6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_70[0] + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
  }
  plVar14 = *(long **)(param_1 + 0x270);
  *(undefined8 *)(param_1 + 0x270) = 0;
  if (plVar14 != (long *)0x0) {
    lVar22 = plVar14[6];
    psVar5 = (short *)(lVar22 + 0x1a);
    do {
      sVar18 = *psVar5;
      cVar9 = '\x01';
      bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
      if (bVar30) {
        *psVar5 = sVar18 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar18 == 1) {
      *(undefined8 *)(lVar22 + 0x10) = 0;
      (**(code **)(*plVar14 + 0x50))();
    }
    else if (sVar18 == 0) goto LAB_013498f8;
  }
  plVar14 = (long *)(param_1 + 0x270);
  *plVar14 = (long)plVar23;
  lVar22 = 0;
  if (plVar23 != (long *)0x0) {
    local_110 = (long *)0x0;
    local_108 = (long *)0x0;
    FUN_00c43ef0(&local_110,plVar23 + 6);
    if ((long *)local_110[2] == plVar23 + 5) {
      do {
        plVar23 = local_108;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(&local_108,0x10);
        if (bVar30) {
          local_108 = (long *)0x0;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      uVar15 = *(undefined8 *)PTR_DAT_047d3910;
      *(undefined8 *)PTR_DAT_047d3918 = uVar15;
      FUN_00c44204(&local_b0,uVar15,plVar23);
      plVar23 = local_110;
      local_110 = (long *)0x0;
      if (plVar23 != (long *)0x0) {
        plVar21 = plVar23 + 3;
        do {
          sVar18 = (short)*plVar21;
          cVar9 = '\x01';
          bVar30 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar30) {
            *(short *)plVar21 = sVar18 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar18 == 1) {
          piVar6 = (int *)((long)plVar23 + 0x1c);
          do {
            iVar11 = *piVar6;
            cVar9 = '\x01';
            bVar30 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar30) {
              *piVar6 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar11 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar22 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar22;
            local_98 = (long *)*plVar23;
            FUN_00c44438(lVar22 + 0x8040,&local_98);
          }
        }
        else if (sVar18 == 0) goto LAB_013497f0;
      }
      plVar23 = local_b0;
      if (local_b0 != (long *)0x0) {
        local_b0 = (long *)0x0;
      }
    }
    else {
      plVar23 = (long *)0x0;
    }
    plVar21 = local_110;
    if (local_110 != (long *)0x0) {
      plVar4 = local_110 + 3;
      do {
        sVar18 = (short)*plVar4;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar30) {
          *(short *)plVar4 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        piVar6 = (int *)((long)local_110 + 0x1c);
        do {
          iVar11 = *piVar6;
          cVar9 = '\x01';
          bVar30 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar30) {
            *piVar6 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_98 = (long *)*plVar21;
          FUN_00c44438(lVar22 + 0x8040,&local_98);
        }
      }
      else if (sVar18 == 0) goto LAB_013497f0;
    }
    if (plVar23 == (long *)0x0) {
      *(undefined8 *)(param_1 + 0x278) = 0;
    }
    else {
      plVar21 = plVar23 + 3;
      *(long *)(param_1 + 0x278) = *plVar23;
      do {
        sVar18 = (short)*plVar21;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar30) {
          *(short *)plVar21 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        piVar6 = (int *)((long)plVar23 + 0x1c);
        do {
          iVar11 = *piVar6;
          cVar9 = '\x01';
          bVar30 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar30) {
            *piVar6 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_110 = (long *)*plVar23;
          FUN_00c44438(lVar22 + 0x8040,&local_110);
        }
      }
      else if (sVar18 == 0) goto LAB_013497f0;
    }
    lVar22 = *plVar14;
  }
  if (lVar22 != 0) {
    FUN_011282e8(&local_110,plVar14);
    FUN_00cfe35c(local_110,param_1 + 0x280,1);
    if (((*pbVar26 & 1) == 0) && (iVar11 = __cxa_guard_acquire(pbVar26), iVar11 != 0)) {
      FUN_00100190(PTR_LAB_047d8e90,plVar19,&PTR_LOOP_04483000);
      __cxa_guard_release(pbVar26);
    }
    uVar15 = *plVar19;
    *(undefined8 *)PTR_DAT_047d8c50 = uVar15;
    FUN_00cfc3c0(&local_98,uVar15,local_110);
    local_78 = local_98;
    local_98 = (long *)0x0;
    FUN_00cfbe68(param_1 + 0x288,&local_78);
    if (local_78 != (long *)0x0) {
      lVar22 = local_78[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_78 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
    local_80 = local_90;
    local_90 = (long *)0x0;
    FUN_00cfc114(param_1 + 0x298,&local_80);
    if (local_80 != (long *)0x0) {
      lVar22 = local_80[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_80 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
    if (local_90 != (long *)0x0) {
      lVar22 = local_90[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_90 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
    if (local_98 != (long *)0x0) {
      lVar22 = local_98[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_98 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
    if (local_110 != (long *)0x0) {
      lVar22 = local_110[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_110 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
    plVar23 = *(long **)(param_1 + 0x288);
    if (plVar23 == (long *)0x0) goto LAB_013478cc;
    lVar22 = plVar23[6];
    if (*(long *)(lVar22 + 0x10) == 0) goto LAB_01351b80;
    psVar5 = (short *)(lVar22 + 0x1a);
    do {
      sVar18 = *psVar5;
      cVar9 = '\x01';
      bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
      if (bVar30) {
        *psVar5 = sVar18 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar18 == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
      *(undefined8 *)(lVar22 + 8) = uVar15;
      *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
    }
    else if (sVar18 == -1) goto LAB_01349e44;
    lVar22 = plVar23[6];
    psVar5 = (short *)(lVar22 + 0x1a);
    do {
      sVar18 = *psVar5;
      cVar9 = '\x01';
      bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
      if (bVar30) {
        *psVar5 = sVar18 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    goto LAB_01347218;
  }
  goto LAB_013478cc;
LAB_0134eed4:
  (**(code **)(*plVar19 + 0x18))(&local_b0,plVar19);
  local_c8 = (long *)0x0;
  plStack_c0 = (long *)0x0;
  plVar23 = (long *)0x0;
  if (plVar19 != (long *)0x0) {
    plVar23 = plVar19 + 5;
  }
  if ((long *)local_b0[2] == plVar23) {
    FUN_00d1f904(&local_c8,&local_b0);
  }
  plVar19 = local_b0;
  if (local_b0 != (long *)0x0) {
    plVar23 = local_b0 + 3;
    do {
      sVar18 = (short)*plVar23;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar10) {
        *(short *)plVar23 = sVar18 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar18 == 1) {
      piVar6 = (int *)((long)local_b0 + 0x1c);
      do {
        iVar11 = *piVar6;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar10) {
          *piVar6 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar22 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar22;
        local_110 = (long *)*plVar19;
        FUN_00c44438(lVar22 + 0x8040,&local_110);
      }
    }
    else if (sVar18 == 0) goto LAB_013497f0;
  }
  local_100 = (long *)0x0;
  local_110 = local_138;
  local_108 = (long *)0x0;
  FUN_00dc7a68(&local_108,&local_c8);
  local_98[8] = (long)local_110;
  FUN_00dc7a68(local_98 + 9,&local_108);
  plVar19 = local_108;
  if (local_108 != (long *)0x0) {
    plVar23 = local_108 + 3;
    do {
      sVar18 = (short)*plVar23;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar10) {
        *(short *)plVar23 = sVar18 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar18 == 1) {
      piVar6 = (int *)((long)local_108 + 0x1c);
      do {
        iVar11 = *piVar6;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar10) {
          *piVar6 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar22 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar22;
        local_b0 = (long *)*plVar19;
        FUN_00c44438(lVar22 + 0x8040,&local_b0);
      }
    }
    else if (sVar18 == 0) goto LAB_013497f0;
  }
  plVar19 = local_c8;
  if (local_c8 != (long *)0x0) {
    plVar23 = local_c8 + 3;
    do {
      sVar18 = (short)*plVar23;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar10) {
        *(short *)plVar23 = sVar18 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar18 == 1) {
      piVar6 = (int *)((long)local_c8 + 0x1c);
      do {
        iVar11 = *piVar6;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar10) {
          *piVar6 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar22 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar22;
        local_b0 = (long *)*plVar19;
        lVar22 = lVar22 + 0x8040;
        pplVar17 = &local_b0;
LAB_0134e8d8:
        FUN_00c44438(lVar22,pplVar17);
      }
    }
    else {
LAB_0134b7d4:
      if (sVar18 == 0) goto LAB_013497f0;
    }
  }
  goto LAB_01349fb4;
code_r0x01348790:
  cVar9 = '\x01';
  bVar30 = (bool)ExclusiveMonitorPass(plVar19,0x10);
  if (bVar30) {
    *plVar19 = lVar22;
    cVar9 = ExclusiveMonitorsStatus();
  }
  if (cVar9 == '\0') goto LAB_013494fc;
  goto LAB_01348788;
  while( true ) {
    puVar16 = (undefined8 *)*puVar16;
    plVar23 = (long *)0x0;
    if (puVar16 == (undefined8 *)0x0) break;
LAB_013519cc:
    if (puVar16 == (undefined8 *)PTR_DAT_047e3078) {
      plVar23 = plVar19;
      break;
    }
  }
LAB_013519e0:
  FUN_01db74ec(&local_80,plVar23);
  plVar23 = local_80;
  lVar22 = puVar24[1];
  psVar5 = (short *)(lVar22 + 0x1a);
  do {
    sVar18 = *psVar5;
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(psVar5,0x10);
    if (bVar10) {
      *psVar5 = sVar18 + -1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  if (sVar18 == 1) {
    *(undefined8 *)(lVar22 + 0x10) = 0;
    (**(code **)(*plVar19 + 0x50))(plVar19);
  }
  else if (sVar18 == 0) goto LAB_013498f8;
  if (plVar23 == (long *)0x0) {
LAB_01349540:
    FUN_01356f68(&local_110,*(undefined8 *)(lVar25 + 0x3a0),&local_1a8,&local_78);
    FUN_01356e38(&local_80,&local_110);
    if (local_110 != (long *)0x0) {
      lVar22 = local_110[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar10) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_110 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
    plVar23 = local_80;
    plVar14 = local_80 + 5;
    (**(code **)(*local_80 + 0x18))(&local_110,local_80);
    local_b0 = (long *)0x0;
    local_a8 = (long *)0x0;
    plVar19 = (long *)0x0;
    if (plVar23 != (long *)0x0) {
      plVar19 = plVar14;
    }
    if ((long *)local_110[2] == plVar19) {
      FUN_00d1f904(&local_b0,&local_110);
    }
    plVar19 = local_110;
    if (local_110 != (long *)0x0) {
      plVar23 = local_110 + 3;
      do {
        sVar18 = (short)*plVar23;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar10) {
          *(short *)plVar23 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        piVar6 = (int *)((long)local_110 + 0x1c);
        do {
          iVar11 = *piVar6;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar10) {
            *piVar6 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_c8 = (long *)*plVar19;
          FUN_00c44438(lVar22 + 0x8040,&local_c8);
        }
      }
      else if (sVar18 == 0) goto LAB_013497f0;
    }
    FUN_00dc7a68(local_98 + 9,&local_b0);
    plVar19 = local_b0;
    if (local_b0 != (long *)0x0) {
      plVar23 = local_b0 + 3;
      do {
        sVar18 = (short)*plVar23;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar10) {
          *(short *)plVar23 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        piVar6 = (int *)((long)local_b0 + 0x1c);
        do {
          iVar11 = *piVar6;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar10) {
            *piVar6 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_110 = (long *)*plVar19;
          lVar22 = lVar22 + 0x8040;
          pplVar17 = &local_110;
LAB_0134f884:
          FUN_00c44438(lVar22,pplVar17);
        }
      }
      else {
LAB_0134bfa4:
        if (sVar18 == 0) goto LAB_013497f0;
      }
    }
  }
LAB_013495cc:
  if (!bVar30) {
    *(undefined8 *)(lVar25 + 0x2f0) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar25 + 0x2f8));
  }
  FUN_00d005f8(*(undefined8 *)(lVar25 + 0x308),local_80,0);
  plVar23 = local_80;
  plVar19 = (long *)PTR_DAT_047d8c48;
  pbVar26 = PTR_DAT_047d8c40;
  if (local_80 != (long *)0x0) {
    lVar22 = local_80[6];
    if (*(long *)(lVar22 + 0x10) == 0) goto LAB_01351b80;
    psVar5 = (short *)(lVar22 + 0x1a);
    do {
      sVar18 = *psVar5;
      cVar9 = '\x01';
      bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
      if (bVar30) {
        *psVar5 = sVar18 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar18 == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
      *(undefined8 *)(lVar22 + 8) = uVar15;
      *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
    }
    else if (sVar18 == -1) goto LAB_01349e44;
    if (local_80 != (long *)0x0) {
      lVar22 = local_80[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_80 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
  }
  plVar14 = *(long **)(param_1 + 0x330);
  *(undefined8 *)(param_1 + 0x330) = 0;
  if (plVar14 != (long *)0x0) {
    lVar22 = plVar14[6];
    psVar5 = (short *)(lVar22 + 0x1a);
    do {
      sVar18 = *psVar5;
      cVar9 = '\x01';
      bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
      if (bVar30) {
        *psVar5 = sVar18 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar18 == 1) {
      *(undefined8 *)(lVar22 + 0x10) = 0;
      (**(code **)(*plVar14 + 0x50))();
    }
    else if (sVar18 == 0) goto LAB_013498f8;
  }
  plVar14 = (long *)(param_1 + 0x330);
  *plVar14 = (long)plVar23;
  lVar22 = 0;
  if (plVar23 != (long *)0x0) {
    local_110 = (long *)0x0;
    local_108 = (long *)0x0;
    FUN_00c43ef0(&local_110,plVar23 + 6);
    if ((long *)local_110[2] == plVar23 + 5) {
      do {
        plVar23 = local_108;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(&local_108,0x10);
        if (bVar30) {
          local_108 = (long *)0x0;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      uVar15 = *(undefined8 *)PTR_DAT_047d3910;
      *(undefined8 *)PTR_DAT_047d3918 = uVar15;
      FUN_00c44204(&local_b0,uVar15,plVar23);
      plVar23 = local_110;
      local_110 = (long *)0x0;
      if (plVar23 != (long *)0x0) {
        plVar21 = plVar23 + 3;
        do {
          sVar18 = (short)*plVar21;
          cVar9 = '\x01';
          bVar30 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar30) {
            *(short *)plVar21 = sVar18 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar18 == 1) {
          piVar6 = (int *)((long)plVar23 + 0x1c);
          do {
            iVar11 = *piVar6;
            cVar9 = '\x01';
            bVar30 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar30) {
              *piVar6 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar11 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar22 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar22;
            local_98 = (long *)*plVar23;
            FUN_00c44438(lVar22 + 0x8040,&local_98);
            pbVar26 = PTR_DAT_047d8c40;
            plVar19 = (long *)PTR_DAT_047d8c48;
          }
        }
        else if (sVar18 == 0) goto LAB_013497f0;
      }
      plVar23 = local_b0;
      if (local_b0 != (long *)0x0) {
        local_b0 = (long *)0x0;
      }
    }
    else {
      plVar23 = (long *)0x0;
    }
    plVar21 = local_110;
    if (local_110 != (long *)0x0) {
      plVar4 = local_110 + 3;
      do {
        sVar18 = (short)*plVar4;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar30) {
          *(short *)plVar4 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        piVar6 = (int *)((long)local_110 + 0x1c);
        do {
          iVar11 = *piVar6;
          cVar9 = '\x01';
          bVar30 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar30) {
            *piVar6 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_98 = (long *)*plVar21;
          FUN_00c44438(lVar22 + 0x8040,&local_98);
          pbVar26 = PTR_DAT_047d8c40;
          plVar19 = (long *)PTR_DAT_047d8c48;
        }
      }
      else if (sVar18 == 0) goto LAB_013497f0;
    }
    if (plVar23 == (long *)0x0) {
      *(undefined8 *)(param_1 + 0x338) = 0;
    }
    else {
      plVar21 = plVar23 + 3;
      *(long *)(param_1 + 0x338) = *plVar23;
      do {
        sVar18 = (short)*plVar21;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar30) {
          *(short *)plVar21 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        piVar6 = (int *)((long)plVar23 + 0x1c);
        do {
          iVar11 = *piVar6;
          cVar9 = '\x01';
          bVar30 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar30) {
            *piVar6 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_110 = (long *)*plVar23;
          FUN_00c44438(lVar22 + 0x8040,&local_110);
        }
      }
      else if (sVar18 == 0) goto LAB_013497f0;
    }
    lVar22 = *plVar14;
  }
  if (lVar22 != 0) {
    FUN_011273d0(&local_110,plVar14);
    FUN_00cfe35c(local_110,param_1 + 0x340,1);
    if (((*pbVar26 & 1) == 0) && (iVar11 = __cxa_guard_acquire(pbVar26), iVar11 != 0)) {
      FUN_00100190(PTR_LAB_047d8e90,plVar19,&PTR_LOOP_04483000);
      __cxa_guard_release(pbVar26);
    }
    lVar22 = *plVar19;
    *(long *)PTR_DAT_047d8c50 = lVar22;
    FUN_00cfc3c0(&local_98,lVar22,local_110);
    local_140 = local_98;
    local_98 = (long *)0x0;
    FUN_00cfbe68(param_1 + 0x348,&local_140);
    if (local_140 != (long *)0x0) {
      lVar22 = local_140[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_140 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
    local_148 = local_90;
    local_90 = (long *)0x0;
    FUN_00cfc114(param_1 + 0x358,&local_148);
    if (local_148 != (long *)0x0) {
      lVar22 = local_148[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_148 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
    if (local_90 != (long *)0x0) {
      lVar22 = local_90[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_90 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
    if (local_98 != (long *)0x0) {
      lVar22 = local_98[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_98 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
    if (local_110 != (long *)0x0) {
      lVar22 = local_110[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_110 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
    plVar23 = *(long **)(param_1 + 0x348);
    if (plVar23 != (long *)0x0) {
      lVar22 = plVar23[6];
      if (*(long *)(lVar22 + 0x10) == 0) goto LAB_01351b80;
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 0) {
        uVar15 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
        *(undefined8 *)(lVar22 + 8) = uVar15;
        *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
      }
      else if (sVar18 == -1) goto LAB_01349e44;
      lVar22 = plVar23[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      goto LAB_01347218;
    }
  }
  goto LAB_013478cc;
code_r0x01346dd4:
  cVar9 = '\x01';
  bVar30 = (bool)ExclusiveMonitorPass(plVar19,0x10);
  if (bVar30) {
    *plVar19 = lVar22;
    cVar9 = ExclusiveMonitorsStatus();
  }
  if (cVar9 == '\0') goto LAB_01346ddc;
  goto LAB_01346dcc;
  while( true ) {
    puVar16 = (undefined8 *)*puVar16;
    plVar23 = (long *)0x0;
    if (puVar16 == (undefined8 *)0x0) break;
LAB_013509a8:
    if (puVar16 == (undefined8 *)PTR_DAT_047e3018) {
      plVar23 = plVar19;
      break;
    }
  }
LAB_013509bc:
  FUN_01db74ec(local_70,plVar23);
  plVar23 = local_70[0];
  lVar22 = puVar24[1];
  psVar5 = (short *)(lVar22 + 0x1a);
  do {
    sVar18 = *psVar5;
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(psVar5,0x10);
    if (bVar10) {
      *psVar5 = sVar18 + -1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  if (sVar18 == 1) {
    *(undefined8 *)(lVar22 + 0x10) = 0;
    (**(code **)(*plVar19 + 0x50))(plVar19);
  }
  else if (sVar18 == 0) goto LAB_013498f8;
  if (plVar23 == (long *)0x0) {
LAB_01346e20:
    plVar19 = (long *)FUN_01353f98(*(undefined8 *)(lVar25 + 0x3a0),&local_1a8,&local_138);
    if (plVar19 != (long *)0x0) {
      lVar22 = plVar19[6];
      if (*(long *)(lVar22 + 0x10) == 0) goto LAB_01351b80;
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar10) {
          *psVar5 = sVar18 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 0) {
        uVar15 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
        *(undefined8 *)(lVar22 + 8) = uVar15;
        *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
      }
      else if (sVar18 == -1) goto LAB_01349e44;
    }
    plVar23 = local_70[0];
    local_70[0] = (long *)0x0;
    if (plVar23 != (long *)0x0) {
      lVar22 = plVar23[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar10) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*plVar23 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
    local_70[0] = plVar19;
    (**(code **)(*plVar19 + 0x18))(&local_110,plVar19);
    local_b0 = (long *)0x0;
    local_a8 = (long *)0x0;
    plVar23 = (long *)0x0;
    if (plVar19 != (long *)0x0) {
      plVar23 = plVar19 + 5;
    }
    if ((long *)local_110[2] == plVar23) {
      FUN_00d1f904(&local_b0,&local_110);
    }
    plVar19 = local_110;
    if (local_110 != (long *)0x0) {
      plVar23 = local_110 + 3;
      do {
        sVar18 = (short)*plVar23;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar10) {
          *(short *)plVar23 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        piVar6 = (int *)((long)local_110 + 0x1c);
        do {
          iVar11 = *piVar6;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar10) {
            *piVar6 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_c8 = (long *)*plVar19;
          FUN_00c44438(lVar22 + 0x8040,&local_c8);
        }
      }
      else if (sVar18 == 0) goto LAB_013497f0;
    }
    FUN_00dc7a68(local_98 + 9,&local_b0);
    plVar19 = local_b0;
    if (local_b0 != (long *)0x0) {
      plVar23 = local_b0 + 3;
      do {
        sVar18 = (short)*plVar23;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar10) {
          *(short *)plVar23 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 != 1) goto LAB_013492d8;
      piVar6 = (int *)((long)local_b0 + 0x1c);
      do {
        iVar11 = *piVar6;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar10) {
          *piVar6 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar22 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar22;
        local_110 = (long *)*plVar19;
        lVar22 = lVar22 + 0x8040;
        pplVar17 = &local_110;
        goto LAB_0134cd90;
      }
    }
  }
LAB_01346ea8:
  if (!bVar30) {
    *(undefined8 *)(lVar25 + 0x2f0) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar25 + 0x2f8));
  }
  FUN_00d005f8(*(undefined8 *)(lVar25 + 0x308),local_70[0],0);
  plVar23 = local_70[0];
  plVar19 = (long *)PTR_DAT_047d8c48;
  pbVar26 = PTR_DAT_047d8c40;
  if (local_70[0] != (long *)0x0) {
    lVar22 = local_70[0][6];
    if (*(long *)(lVar22 + 0x10) == 0) goto LAB_01351b80;
    psVar5 = (short *)(lVar22 + 0x1a);
    do {
      sVar18 = *psVar5;
      cVar9 = '\x01';
      bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
      if (bVar30) {
        *psVar5 = sVar18 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar18 == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
      *(undefined8 *)(lVar22 + 8) = uVar15;
      *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
    }
    else if (sVar18 == -1) goto LAB_01349e44;
    if (local_70[0] != (long *)0x0) {
      lVar22 = local_70[0][6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_70[0] + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
  }
  plVar14 = (long *)*plVar1;
  *plVar1 = 0;
  if (plVar14 != (long *)0x0) {
    lVar22 = plVar14[6];
    psVar5 = (short *)(lVar22 + 0x1a);
    do {
      sVar18 = *psVar5;
      cVar9 = '\x01';
      bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
      if (bVar30) {
        *psVar5 = sVar18 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar18 == 1) {
      *(undefined8 *)(lVar22 + 0x10) = 0;
      (**(code **)(*plVar14 + 0x50))();
    }
    else if (sVar18 == 0) goto LAB_013498f8;
  }
  *plVar1 = (long)plVar23;
  lVar22 = 0;
  if (plVar23 != (long *)0x0) {
    local_110 = (long *)0x0;
    local_108 = (long *)0x0;
    FUN_00c43ef0(&local_110,plVar23 + 6);
    local_98 = (long *)0x0;
    local_90 = (long *)0x0;
    if ((long *)local_110[2] == plVar23 + 5) {
      do {
        plVar23 = local_108;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(&local_108,0x10);
        if (bVar30) {
          local_108 = (long *)0x0;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      uVar15 = *(undefined8 *)PTR_DAT_047d3910;
      *(undefined8 *)PTR_DAT_047d3918 = uVar15;
      FUN_00c44204(&local_c8,uVar15,plVar23);
      plVar14 = local_110;
      local_110 = (long *)0x0;
      if (plVar14 != (long *)0x0) {
        plVar21 = plVar14 + 3;
        do {
          sVar18 = (short)*plVar21;
          cVar9 = '\x01';
          bVar30 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar30) {
            *(short *)plVar21 = sVar18 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar18 == 1) {
          piVar6 = (int *)((long)plVar14 + 0x1c);
          do {
            iVar11 = *piVar6;
            cVar9 = '\x01';
            bVar30 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar30) {
              *piVar6 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar11 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar22 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar22;
            local_b0 = (long *)*plVar14;
            FUN_00c44438(lVar22 + 0x8040,&local_b0);
          }
        }
        else if (sVar18 == 0) goto LAB_013497f0;
      }
      plVar14 = local_98;
      if (local_c8 == (long *)0x0) {
        FUN_01358b08(&local_98);
      }
      else {
        local_98 = (long *)0x0;
        if (plVar14 != (long *)0x0) {
          plVar21 = plVar14 + 3;
          do {
            sVar18 = (short)*plVar21;
            cVar9 = '\x01';
            bVar30 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar30) {
              *(short *)plVar21 = sVar18 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (sVar18 == 1) {
            piVar6 = (int *)((long)plVar14 + 0x1c);
            do {
              iVar11 = *piVar6;
              cVar9 = '\x01';
              bVar30 = (bool)ExclusiveMonitorPass(piVar6,0x10);
              if (bVar30) {
                *piVar6 = -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (iVar11 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar22 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar22;
              local_b0 = (long *)*plVar14;
              FUN_00c44438(lVar22 + 0x8040,&local_b0);
            }
          }
          else if (sVar18 == 0) goto LAB_013497f0;
        }
        local_98 = local_c8;
        local_c8 = (long *)0x0;
        local_90 = plVar23;
      }
    }
    plVar23 = local_110;
    if (local_110 != (long *)0x0) {
      plVar14 = local_110 + 3;
      do {
        sVar18 = (short)*plVar14;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar30) {
          *(short *)plVar14 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        piVar6 = (int *)((long)local_110 + 0x1c);
        do {
          iVar11 = *piVar6;
          cVar9 = '\x01';
          bVar30 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar30) {
            *piVar6 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_b0 = (long *)*plVar23;
          FUN_00c44438(lVar22 + 0x8040,&local_b0);
        }
      }
      else if (sVar18 == 0) goto LAB_013497f0;
    }
    plVar23 = local_98;
    lVar22 = 0;
    if (local_98 != (long *)0x0) {
      lVar22 = *local_98;
    }
    *(long *)(param_1 + 0x138) = lVar22;
    if (local_98 != (long *)0x0) {
      plVar14 = local_98 + 3;
      do {
        sVar18 = (short)*plVar14;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar30) {
          *(short *)plVar14 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        piVar6 = (int *)((long)local_98 + 0x1c);
        do {
          iVar11 = *piVar6;
          cVar9 = '\x01';
          bVar30 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar30) {
            *piVar6 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_110 = (long *)*plVar23;
          FUN_00c44438(lVar22 + 0x8040,&local_110);
        }
      }
      else if (sVar18 == 0) goto LAB_013497f0;
    }
    lVar22 = *plVar1;
  }
  if (lVar22 != 0) {
    FUN_01354cc4(&local_110);
    FUN_00cfe35c(local_110,param_1 + 0x140,1);
    if (((*pbVar26 & 1) == 0) && (iVar11 = __cxa_guard_acquire(pbVar26), iVar11 != 0)) {
      FUN_00100190(PTR_LAB_047d8e90,plVar19,&PTR_LOOP_04483000);
      __cxa_guard_release(pbVar26);
    }
    uVar15 = *plVar19;
    *(undefined8 *)PTR_DAT_047d8c50 = uVar15;
    FUN_00cfc3c0(&local_98,uVar15,local_110);
    local_78 = local_98;
    local_98 = (long *)0x0;
    FUN_00cfbe68(param_1 + 0x148,&local_78);
    if (local_78 != (long *)0x0) {
      lVar22 = local_78[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_78 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
    local_80 = local_90;
    local_90 = (long *)0x0;
    FUN_00cfc114(param_1 + 0x158,&local_80);
    if (local_80 != (long *)0x0) {
      lVar22 = local_80[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_80 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
    if (local_90 != (long *)0x0) {
      lVar22 = local_90[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_90 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
    if (local_98 != (long *)0x0) {
      lVar22 = local_98[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_98 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
    if (local_110 != (long *)0x0) {
      lVar22 = local_110[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_110 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
    plVar23 = *(long **)(param_1 + 0x148);
    if (plVar23 == (long *)0x0) goto LAB_013478cc;
    lVar22 = plVar23[6];
    if (*(long *)(lVar22 + 0x10) == 0) goto LAB_01351b80;
    psVar5 = (short *)(lVar22 + 0x1a);
    do {
      sVar18 = *psVar5;
      cVar9 = '\x01';
      bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
      if (bVar30) {
        *psVar5 = sVar18 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar18 == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
      *(undefined8 *)(lVar22 + 8) = uVar15;
      *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
    }
    else if (sVar18 == -1) goto LAB_01349e44;
    lVar22 = plVar23[6];
    psVar5 = (short *)(lVar22 + 0x1a);
    do {
      sVar18 = *psVar5;
      cVar9 = '\x01';
      bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
      if (bVar30) {
        *psVar5 = sVar18 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    goto LAB_01347218;
  }
  goto LAB_013478cc;
LAB_0134ec7c:
  (**(code **)(*plVar19 + 0x18))(&local_b0,plVar19);
  local_c8 = (long *)0x0;
  plStack_c0 = (long *)0x0;
  plVar23 = (long *)0x0;
  if (plVar19 != (long *)0x0) {
    plVar23 = plVar19 + 5;
  }
  if ((long *)local_b0[2] == plVar23) {
    FUN_00d1f904(&local_c8,&local_b0);
  }
  plVar19 = local_b0;
  if (local_b0 != (long *)0x0) {
    plVar23 = local_b0 + 3;
    do {
      sVar18 = (short)*plVar23;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar10) {
        *(short *)plVar23 = sVar18 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar18 == 1) {
      piVar6 = (int *)((long)local_b0 + 0x1c);
      do {
        iVar11 = *piVar6;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar10) {
          *piVar6 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar22 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar22;
        local_110 = (long *)*plVar19;
        FUN_00c44438(lVar22 + 0x8040,&local_110);
      }
    }
    else if (sVar18 == 0) goto LAB_013497f0;
  }
  local_100 = (long *)0x0;
  local_110 = local_138;
  local_108 = (long *)0x0;
  FUN_00dc7a68(&local_108,&local_c8);
  local_98[8] = (long)local_110;
  FUN_00dc7a68(local_98 + 9,&local_108);
  plVar19 = local_108;
  if (local_108 != (long *)0x0) {
    plVar23 = local_108 + 3;
    do {
      sVar18 = (short)*plVar23;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar10) {
        *(short *)plVar23 = sVar18 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar18 == 1) {
      piVar6 = (int *)((long)local_108 + 0x1c);
      do {
        iVar11 = *piVar6;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar10) {
          *piVar6 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar22 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar22;
        local_b0 = (long *)*plVar19;
        FUN_00c44438(lVar22 + 0x8040,&local_b0);
      }
    }
    else if (sVar18 == 0) goto LAB_013497f0;
  }
  plVar19 = local_c8;
  if (local_c8 != (long *)0x0) {
    plVar23 = local_c8 + 3;
    do {
      sVar18 = (short)*plVar23;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar10) {
        *(short *)plVar23 = sVar18 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar18 == 1) {
      piVar6 = (int *)((long)local_c8 + 0x1c);
      do {
        iVar11 = *piVar6;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar10) {
          *piVar6 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar22 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar22;
        local_b0 = (long *)*plVar19;
        lVar22 = lVar22 + 0x8040;
        pplVar17 = &local_b0;
LAB_0134cd90:
        FUN_00c44438(lVar22,pplVar17);
      }
    }
    else {
LAB_013492d8:
      if (sVar18 == 0) goto LAB_013497f0;
    }
  }
  goto LAB_01346ea8;
code_r0x01348868:
  cVar9 = '\x01';
  bVar30 = (bool)ExclusiveMonitorPass(plVar19,0x10);
  if (bVar30) {
    *plVar19 = lVar22;
    cVar9 = ExclusiveMonitorsStatus();
  }
  if (cVar9 == '\0') goto LAB_0134afa4;
  goto LAB_01348860;
  while( true ) {
    puVar16 = (undefined8 *)*puVar16;
    plVar23 = (long *)0x0;
    if (puVar16 == (undefined8 *)0x0) break;
LAB_0135194c:
    if (puVar16 == (undefined8 *)PTR_DAT_047e3068) {
      plVar23 = plVar19;
      break;
    }
  }
LAB_01351960:
  FUN_01db74ec(&local_80,plVar23);
  plVar23 = local_80;
  lVar22 = puVar24[1];
  psVar5 = (short *)(lVar22 + 0x1a);
  do {
    sVar18 = *psVar5;
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(psVar5,0x10);
    if (bVar10) {
      *psVar5 = sVar18 + -1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  if (sVar18 == 1) {
    *(undefined8 *)(lVar22 + 0x10) = 0;
    (**(code **)(*plVar19 + 0x50))(plVar19);
  }
  else if (sVar18 == 0) goto LAB_013498f8;
  if (plVar23 == (long *)0x0) {
LAB_0134afe8:
    FUN_0135702c(&local_110,*(undefined8 *)(lVar25 + 0x3a0),&local_1a8,&local_78);
    FUN_01356ed0(&local_80,&local_110);
    if (local_110 != (long *)0x0) {
      lVar22 = local_110[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar10) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_110 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
    plVar23 = local_80;
    plVar14 = local_80 + 5;
    (**(code **)(*local_80 + 0x18))(&local_110,local_80);
    local_b0 = (long *)0x0;
    local_a8 = (long *)0x0;
    plVar19 = (long *)0x0;
    if (plVar23 != (long *)0x0) {
      plVar19 = plVar14;
    }
    if ((long *)local_110[2] == plVar19) {
      FUN_00d1f904(&local_b0,&local_110);
    }
    plVar19 = local_110;
    if (local_110 != (long *)0x0) {
      plVar23 = local_110 + 3;
      do {
        sVar18 = (short)*plVar23;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar10) {
          *(short *)plVar23 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        piVar6 = (int *)((long)local_110 + 0x1c);
        do {
          iVar11 = *piVar6;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar10) {
            *piVar6 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_c8 = (long *)*plVar19;
          FUN_00c44438(lVar22 + 0x8040,&local_c8);
        }
      }
      else if (sVar18 == 0) goto LAB_013497f0;
    }
    FUN_00dc7a68(local_98 + 9,&local_b0);
    plVar19 = local_b0;
    if (local_b0 != (long *)0x0) {
      plVar23 = local_b0 + 3;
      do {
        sVar18 = (short)*plVar23;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar10) {
          *(short *)plVar23 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        piVar6 = (int *)((long)local_b0 + 0x1c);
        do {
          iVar11 = *piVar6;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar10) {
            *piVar6 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_110 = (long *)*plVar19;
          lVar22 = lVar22 + 0x8040;
          pplVar17 = &local_110;
LAB_0134f7c4:
          FUN_00c44438(lVar22,pplVar17);
        }
      }
      else {
LAB_0134bf74:
        if (sVar18 == 0) goto LAB_013497f0;
      }
    }
  }
LAB_0134b074:
  if (!bVar30) {
    *(undefined8 *)(lVar25 + 0x2f0) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar25 + 0x2f8));
  }
  FUN_00d005f8(*(undefined8 *)(lVar25 + 0x308),local_80,0);
  plVar23 = local_80;
  plVar19 = (long *)PTR_DAT_047d8c48;
  pbVar26 = PTR_DAT_047d8c40;
  if (local_80 != (long *)0x0) {
    lVar22 = local_80[6];
    if (*(long *)(lVar22 + 0x10) == 0) goto LAB_01351b80;
    psVar5 = (short *)(lVar22 + 0x1a);
    do {
      sVar18 = *psVar5;
      cVar9 = '\x01';
      bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
      if (bVar30) {
        *psVar5 = sVar18 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar18 == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
      *(undefined8 *)(lVar22 + 8) = uVar15;
      *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
    }
    else if (sVar18 == -1) goto LAB_01349e44;
    if (local_80 != (long *)0x0) {
      lVar22 = local_80[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_80 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
  }
  plVar14 = *(long **)(param_1 + 0x2f0);
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  if (plVar14 != (long *)0x0) {
    lVar22 = plVar14[6];
    psVar5 = (short *)(lVar22 + 0x1a);
    do {
      sVar18 = *psVar5;
      cVar9 = '\x01';
      bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
      if (bVar30) {
        *psVar5 = sVar18 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar18 == 1) {
      *(undefined8 *)(lVar22 + 0x10) = 0;
      (**(code **)(*plVar14 + 0x50))();
    }
    else if (sVar18 == 0) goto LAB_013498f8;
  }
  plVar14 = (long *)(param_1 + 0x2f0);
  *plVar14 = (long)plVar23;
  lVar22 = 0;
  if (plVar23 != (long *)0x0) {
    local_110 = (long *)0x0;
    local_108 = (long *)0x0;
    FUN_00c43ef0(&local_110,plVar23 + 6);
    if ((long *)local_110[2] == plVar23 + 5) {
      do {
        plVar23 = local_108;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(&local_108,0x10);
        if (bVar30) {
          local_108 = (long *)0x0;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      uVar15 = *(undefined8 *)PTR_DAT_047d3910;
      *(undefined8 *)PTR_DAT_047d3918 = uVar15;
      FUN_00c44204(&local_b0,uVar15,plVar23);
      plVar23 = local_110;
      local_110 = (long *)0x0;
      if (plVar23 != (long *)0x0) {
        plVar21 = plVar23 + 3;
        do {
          sVar18 = (short)*plVar21;
          cVar9 = '\x01';
          bVar30 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar30) {
            *(short *)plVar21 = sVar18 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar18 == 1) {
          piVar6 = (int *)((long)plVar23 + 0x1c);
          do {
            iVar11 = *piVar6;
            cVar9 = '\x01';
            bVar30 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar30) {
              *piVar6 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          pbVar26 = PTR_DAT_047d8c40;
          plVar19 = (long *)PTR_DAT_047d8c48;
          if (iVar11 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar22 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar22;
            local_98 = (long *)*plVar23;
            FUN_00c44438(lVar22 + 0x8040,&local_98);
            pbVar26 = PTR_DAT_047d8c40;
            plVar19 = (long *)PTR_DAT_047d8c48;
          }
        }
        else if (sVar18 == 0) goto LAB_013497f0;
      }
      plVar23 = local_b0;
      if (local_b0 != (long *)0x0) {
        local_b0 = (long *)0x0;
      }
    }
    else {
      plVar23 = (long *)0x0;
    }
    plVar21 = local_110;
    if (local_110 != (long *)0x0) {
      plVar4 = local_110 + 3;
      do {
        sVar18 = (short)*plVar4;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar30) {
          *(short *)plVar4 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        piVar6 = (int *)((long)local_110 + 0x1c);
        do {
          iVar11 = *piVar6;
          cVar9 = '\x01';
          bVar30 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar30) {
            *piVar6 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        pbVar26 = PTR_DAT_047d8c40;
        plVar19 = (long *)PTR_DAT_047d8c48;
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_98 = (long *)*plVar21;
          FUN_00c44438(lVar22 + 0x8040,&local_98);
          pbVar26 = PTR_DAT_047d8c40;
          plVar19 = (long *)PTR_DAT_047d8c48;
        }
      }
      else if (sVar18 == 0) goto LAB_013497f0;
    }
    if (plVar23 == (long *)0x0) {
      *(undefined8 *)(param_1 + 0x2f8) = 0;
    }
    else {
      plVar21 = plVar23 + 3;
      *(long *)(param_1 + 0x2f8) = *plVar23;
      do {
        sVar18 = (short)*plVar21;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar30) {
          *(short *)plVar21 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        piVar6 = (int *)((long)plVar23 + 0x1c);
        do {
          iVar11 = *piVar6;
          cVar9 = '\x01';
          bVar30 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar30) {
            *piVar6 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_110 = (long *)*plVar23;
          FUN_00c44438(lVar22 + 0x8040,&local_110);
        }
      }
      else if (sVar18 == 0) goto LAB_013497f0;
    }
    lVar22 = *plVar14;
  }
  if (lVar22 == 0) goto LAB_013478cc;
  FUN_01127b5c(&local_110,plVar14);
  FUN_00cfe35c(local_110,param_1 + 0x300,1);
  if (((*pbVar26 & 1) == 0) && (iVar11 = __cxa_guard_acquire(pbVar26), iVar11 != 0)) {
    FUN_00100190(PTR_LAB_047d8e90,plVar19,&PTR_LOOP_04483000);
    __cxa_guard_release(pbVar26);
  }
  lVar22 = *plVar19;
  *(long *)PTR_DAT_047d8c50 = lVar22;
  FUN_00cfc3c0(&local_98,lVar22,local_110);
  local_140 = local_98;
  local_98 = (long *)0x0;
  FUN_00cfbe68(param_1 + 0x308,&local_140);
  if (local_140 != (long *)0x0) {
    lVar22 = local_140[6];
    psVar5 = (short *)(lVar22 + 0x1a);
    do {
      sVar18 = *psVar5;
      cVar9 = '\x01';
      bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
      if (bVar30) {
        *psVar5 = sVar18 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar18 == 1) {
      *(undefined8 *)(lVar22 + 0x10) = 0;
      (**(code **)(*local_140 + 0x50))();
    }
    else if (sVar18 == 0) goto LAB_013498f8;
  }
  local_148 = local_90;
  local_90 = (long *)0x0;
  FUN_00cfc114(param_1 + 0x318,&local_148);
  if (local_148 != (long *)0x0) {
    lVar22 = local_148[6];
    psVar5 = (short *)(lVar22 + 0x1a);
    do {
      sVar18 = *psVar5;
      cVar9 = '\x01';
      bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
      if (bVar30) {
        *psVar5 = sVar18 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar18 == 1) {
      *(undefined8 *)(lVar22 + 0x10) = 0;
      (**(code **)(*local_148 + 0x50))();
    }
    else if (sVar18 == 0) goto LAB_013498f8;
  }
  if (local_90 != (long *)0x0) {
    lVar22 = local_90[6];
    psVar5 = (short *)(lVar22 + 0x1a);
    do {
      sVar18 = *psVar5;
      cVar9 = '\x01';
      bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
      if (bVar30) {
        *psVar5 = sVar18 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar18 == 1) {
      *(undefined8 *)(lVar22 + 0x10) = 0;
      (**(code **)(*local_90 + 0x50))();
    }
    else if (sVar18 == 0) goto LAB_013498f8;
  }
  if (local_98 != (long *)0x0) {
    lVar22 = local_98[6];
    psVar5 = (short *)(lVar22 + 0x1a);
    do {
      sVar18 = *psVar5;
      cVar9 = '\x01';
      bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
      if (bVar30) {
        *psVar5 = sVar18 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar18 == 1) {
      *(undefined8 *)(lVar22 + 0x10) = 0;
      (**(code **)(*local_98 + 0x50))();
    }
    else if (sVar18 == 0) goto LAB_013498f8;
  }
  if (local_110 != (long *)0x0) {
    lVar22 = local_110[6];
    psVar5 = (short *)(lVar22 + 0x1a);
    do {
      sVar18 = *psVar5;
      cVar9 = '\x01';
      bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
      if (bVar30) {
        *psVar5 = sVar18 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar18 == 1) {
      *(undefined8 *)(lVar22 + 0x10) = 0;
      (**(code **)(*local_110 + 0x50))();
    }
    else if (sVar18 == 0) goto LAB_013498f8;
  }
  plVar23 = *(long **)(param_1 + 0x308);
  if (plVar23 == (long *)0x0) goto LAB_013478cc;
  lVar22 = plVar23[6];
  if (*(long *)(lVar22 + 0x10) == 0) goto LAB_01351b80;
  psVar5 = (short *)(lVar22 + 0x1a);
  do {
    sVar18 = *psVar5;
    cVar9 = '\x01';
    bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
    if (bVar30) {
      *psVar5 = sVar18 + 1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  if (sVar18 == 0) {
    uVar15 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
    *(undefined8 *)(lVar22 + 8) = uVar15;
    *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
  }
  else if (sVar18 == -1) goto LAB_01349e44;
  lVar22 = plVar23[6];
  psVar5 = (short *)(lVar22 + 0x1a);
  do {
    sVar18 = *psVar5;
    cVar9 = '\x01';
    bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
    if (bVar30) {
      *psVar5 = sVar18 + -1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  goto LAB_01347218;
code_r0x01347a00:
  cVar9 = '\x01';
  bVar30 = (bool)ExclusiveMonitorPass(plVar19,0x10);
  if (bVar30) {
    *plVar19 = lVar22;
    cVar9 = ExclusiveMonitorsStatus();
  }
  if (cVar9 == '\0') goto LAB_01347a08;
  goto LAB_013479f8;
  while( true ) {
    puVar16 = (undefined8 *)*puVar16;
    plVar23 = (long *)0x0;
    if (puVar16 == (undefined8 *)0x0) break;
LAB_01350af0:
    if (puVar16 == (undefined8 *)PTR_DAT_047e3038) {
      plVar23 = plVar19;
      break;
    }
  }
LAB_01350b04:
  FUN_01db74ec(local_70,plVar23);
  plVar23 = local_70[0];
  lVar22 = puVar24[1];
  psVar5 = (short *)(lVar22 + 0x1a);
  do {
    sVar18 = *psVar5;
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(psVar5,0x10);
    if (bVar10) {
      *psVar5 = sVar18 + -1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  if (sVar18 == 1) {
    *(undefined8 *)(lVar22 + 0x10) = 0;
    (**(code **)(*plVar19 + 0x50))(plVar19);
  }
  else if (sVar18 == 0) goto LAB_013498f8;
  if (plVar23 == (long *)0x0) {
LAB_01347a4c:
    plVar19 = (long *)FUN_0135470c(*(undefined8 *)(lVar25 + 0x3a0),&local_1a8,&local_138);
    if (plVar19 != (long *)0x0) {
      lVar22 = plVar19[6];
      if (*(long *)(lVar22 + 0x10) == 0) goto LAB_01351b80;
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar10) {
          *psVar5 = sVar18 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 0) {
        uVar15 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
        *(undefined8 *)(lVar22 + 8) = uVar15;
        *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
      }
      else if (sVar18 == -1) goto LAB_01349e44;
    }
    plVar23 = local_70[0];
    local_70[0] = (long *)0x0;
    if (plVar23 != (long *)0x0) {
      lVar22 = plVar23[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar10) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*plVar23 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
    local_70[0] = plVar19;
    (**(code **)(*plVar19 + 0x18))(&local_110,plVar19);
    local_b0 = (long *)0x0;
    local_a8 = (long *)0x0;
    plVar23 = (long *)0x0;
    if (plVar19 != (long *)0x0) {
      plVar23 = plVar19 + 5;
    }
    if ((long *)local_110[2] == plVar23) {
      FUN_00d1f904(&local_b0,&local_110);
    }
    plVar19 = local_110;
    if (local_110 != (long *)0x0) {
      plVar23 = local_110 + 3;
      do {
        sVar18 = (short)*plVar23;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar10) {
          *(short *)plVar23 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        piVar6 = (int *)((long)local_110 + 0x1c);
        do {
          iVar11 = *piVar6;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar10) {
            *piVar6 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_c8 = (long *)*plVar19;
          FUN_00c44438(lVar22 + 0x8040,&local_c8);
        }
      }
      else if (sVar18 == 0) goto LAB_013497f0;
    }
    FUN_00dc7a68(local_98 + 9,&local_b0);
    plVar19 = local_b0;
    if (local_b0 != (long *)0x0) {
      plVar23 = local_b0 + 3;
      do {
        sVar18 = (short)*plVar23;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar10) {
          *(short *)plVar23 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 != 1) goto LAB_013490e0;
      piVar6 = (int *)((long)local_b0 + 0x1c);
      do {
        iVar11 = *piVar6;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar10) {
          *piVar6 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar22 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar22;
        local_110 = (long *)*plVar19;
        lVar22 = lVar22 + 0x8040;
        pplVar17 = &local_110;
        goto LAB_01349884;
      }
    }
  }
LAB_01347ad4:
  if (!bVar30) {
    *(undefined8 *)(lVar25 + 0x2f0) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar25 + 0x2f8));
  }
  FUN_00d005f8(*(undefined8 *)(lVar25 + 0x308),local_70[0],0);
  plVar23 = local_70[0];
  plVar19 = (long *)PTR_DAT_047d8c48;
  pbVar26 = PTR_DAT_047d8c40;
  if (local_70[0] != (long *)0x0) {
    lVar22 = local_70[0][6];
    if (*(long *)(lVar22 + 0x10) == 0) goto LAB_01351b80;
    psVar5 = (short *)(lVar22 + 0x1a);
    do {
      sVar18 = *psVar5;
      cVar9 = '\x01';
      bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
      if (bVar30) {
        *psVar5 = sVar18 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar18 == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
      *(undefined8 *)(lVar22 + 8) = uVar15;
      *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
    }
    else if (sVar18 == -1) goto LAB_01349e44;
    if (local_70[0] != (long *)0x0) {
      lVar22 = local_70[0][6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_70[0] + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
  }
  plVar14 = *(long **)(param_1 + 0x230);
  *(undefined8 *)(param_1 + 0x230) = 0;
  if (plVar14 != (long *)0x0) {
    lVar22 = plVar14[6];
    psVar5 = (short *)(lVar22 + 0x1a);
    do {
      sVar18 = *psVar5;
      cVar9 = '\x01';
      bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
      if (bVar30) {
        *psVar5 = sVar18 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar18 == 1) {
      *(undefined8 *)(lVar22 + 0x10) = 0;
      (**(code **)(*plVar14 + 0x50))();
    }
    else if (sVar18 == 0) goto LAB_013498f8;
  }
  plVar14 = (long *)(param_1 + 0x230);
  *plVar14 = (long)plVar23;
  lVar22 = 0;
  if (plVar23 != (long *)0x0) {
    local_110 = (long *)0x0;
    local_108 = (long *)0x0;
    FUN_00c43ef0(&local_110,plVar23 + 6);
    if ((long *)local_110[2] == plVar23 + 5) {
      do {
        plVar23 = local_108;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(&local_108,0x10);
        if (bVar30) {
          local_108 = (long *)0x0;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      uVar15 = *(undefined8 *)PTR_DAT_047d3910;
      *(undefined8 *)PTR_DAT_047d3918 = uVar15;
      FUN_00c44204(&local_b0,uVar15,plVar23);
      plVar23 = local_110;
      local_110 = (long *)0x0;
      if (plVar23 != (long *)0x0) {
        plVar21 = plVar23 + 3;
        do {
          sVar18 = (short)*plVar21;
          cVar9 = '\x01';
          bVar30 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar30) {
            *(short *)plVar21 = sVar18 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar18 == 1) {
          piVar6 = (int *)((long)plVar23 + 0x1c);
          do {
            iVar11 = *piVar6;
            cVar9 = '\x01';
            bVar30 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar30) {
              *piVar6 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar11 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar22 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar22;
            local_98 = (long *)*plVar23;
            FUN_00c44438(lVar22 + 0x8040,&local_98);
          }
        }
        else if (sVar18 == 0) goto LAB_013497f0;
      }
      plVar23 = local_b0;
      if (local_b0 != (long *)0x0) {
        local_b0 = (long *)0x0;
      }
    }
    else {
      plVar23 = (long *)0x0;
    }
    plVar21 = local_110;
    if (local_110 != (long *)0x0) {
      plVar4 = local_110 + 3;
      do {
        sVar18 = (short)*plVar4;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar30) {
          *(short *)plVar4 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        piVar6 = (int *)((long)local_110 + 0x1c);
        do {
          iVar11 = *piVar6;
          cVar9 = '\x01';
          bVar30 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar30) {
            *piVar6 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_98 = (long *)*plVar21;
          FUN_00c44438(lVar22 + 0x8040,&local_98);
        }
      }
      else if (sVar18 == 0) goto LAB_013497f0;
    }
    if (plVar23 == (long *)0x0) {
      *(undefined8 *)(param_1 + 0x238) = 0;
    }
    else {
      plVar21 = plVar23 + 3;
      *(long *)(param_1 + 0x238) = *plVar23;
      do {
        sVar18 = (short)*plVar21;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar30) {
          *(short *)plVar21 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        piVar6 = (int *)((long)plVar23 + 0x1c);
        do {
          iVar11 = *piVar6;
          cVar9 = '\x01';
          bVar30 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar30) {
            *piVar6 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_110 = (long *)*plVar23;
          FUN_00c44438(lVar22 + 0x8040,&local_110);
        }
      }
      else if (sVar18 == 0) goto LAB_013497f0;
    }
    lVar22 = *plVar14;
  }
  if (lVar22 != 0) {
    FUN_01125268(&local_110,plVar14);
    FUN_00cfe35c(local_110,param_1 + 0x240,1);
    if (((*pbVar26 & 1) == 0) && (iVar11 = __cxa_guard_acquire(pbVar26), iVar11 != 0)) {
      FUN_00100190(PTR_LAB_047d8e90,plVar19,&PTR_LOOP_04483000);
      __cxa_guard_release(pbVar26);
    }
    uVar15 = *plVar19;
    *(undefined8 *)PTR_DAT_047d8c50 = uVar15;
    FUN_00cfc3c0(&local_98,uVar15,local_110);
    local_78 = local_98;
    local_98 = (long *)0x0;
    FUN_00cfbe68(param_1 + 0x248,&local_78);
    if (local_78 != (long *)0x0) {
      lVar22 = local_78[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_78 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
    local_80 = local_90;
    local_90 = (long *)0x0;
    FUN_00cfc114(param_1 + 600,&local_80);
    if (local_80 != (long *)0x0) {
      lVar22 = local_80[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_80 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
    if (local_90 != (long *)0x0) {
      lVar22 = local_90[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_90 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
    if (local_98 != (long *)0x0) {
      lVar22 = local_98[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_98 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
    if (local_110 != (long *)0x0) {
      lVar22 = local_110[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_110 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
    plVar23 = *(long **)(param_1 + 0x248);
    if (plVar23 == (long *)0x0) goto LAB_013478cc;
    lVar22 = plVar23[6];
    if (*(long *)(lVar22 + 0x10) == 0) goto LAB_01351b80;
    psVar5 = (short *)(lVar22 + 0x1a);
    do {
      sVar18 = *psVar5;
      cVar9 = '\x01';
      bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
      if (bVar30) {
        *psVar5 = sVar18 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar18 == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
      *(undefined8 *)(lVar22 + 8) = uVar15;
      *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
    }
    else if (sVar18 == -1) goto LAB_01349e44;
    lVar22 = plVar23[6];
    psVar5 = (short *)(lVar22 + 0x1a);
    do {
      sVar18 = *psVar5;
      cVar9 = '\x01';
      bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
      if (bVar30) {
        *psVar5 = sVar18 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    goto LAB_01347218;
  }
  goto LAB_013478cc;
LAB_0134eda8:
  (**(code **)(*plVar19 + 0x18))(&local_b0,plVar19);
  local_c8 = (long *)0x0;
  plStack_c0 = (long *)0x0;
  plVar23 = (long *)0x0;
  if (plVar19 != (long *)0x0) {
    plVar23 = plVar19 + 5;
  }
  if ((long *)local_b0[2] == plVar23) {
    FUN_00d1f904(&local_c8,&local_b0);
  }
  plVar19 = local_b0;
  if (local_b0 != (long *)0x0) {
    plVar23 = local_b0 + 3;
    do {
      sVar18 = (short)*plVar23;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar10) {
        *(short *)plVar23 = sVar18 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar18 == 1) {
      piVar6 = (int *)((long)local_b0 + 0x1c);
      do {
        iVar11 = *piVar6;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar10) {
          *piVar6 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar22 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar22;
        local_110 = (long *)*plVar19;
        FUN_00c44438(lVar22 + 0x8040,&local_110);
      }
    }
    else if (sVar18 == 0) goto LAB_013497f0;
  }
  local_100 = (long *)0x0;
  local_110 = local_138;
  local_108 = (long *)0x0;
  FUN_00dc7a68(&local_108,&local_c8);
  local_98[8] = (long)local_110;
  FUN_00dc7a68(local_98 + 9,&local_108);
  plVar19 = local_108;
  if (local_108 != (long *)0x0) {
    plVar23 = local_108 + 3;
    do {
      sVar18 = (short)*plVar23;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar10) {
        *(short *)plVar23 = sVar18 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar18 == 1) {
      piVar6 = (int *)((long)local_108 + 0x1c);
      do {
        iVar11 = *piVar6;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar10) {
          *piVar6 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar22 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar22;
        local_b0 = (long *)*plVar19;
        FUN_00c44438(lVar22 + 0x8040,&local_b0);
      }
    }
    else if (sVar18 == 0) goto LAB_013497f0;
  }
  plVar19 = local_c8;
  if (local_c8 != (long *)0x0) {
    plVar23 = local_c8 + 3;
    do {
      sVar18 = (short)*plVar23;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar10) {
        *(short *)plVar23 = sVar18 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar18 == 1) {
      piVar6 = (int *)((long)local_c8 + 0x1c);
      do {
        iVar11 = *piVar6;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar10) {
          *piVar6 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar22 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar22;
        local_b0 = (long *)*plVar19;
        lVar22 = lVar22 + 0x8040;
        pplVar17 = &local_b0;
LAB_01349884:
        FUN_00c44438(lVar22,pplVar17);
      }
    }
    else {
LAB_013490e0:
      if (sVar18 == 0) goto LAB_013497f0;
    }
  }
  goto LAB_01347ad4;
code_r0x01348144:
  cVar9 = '\x01';
  bVar30 = (bool)ExclusiveMonitorPass(plVar19,0x10);
  if (bVar30) {
    *plVar19 = lVar22;
    cVar9 = ExclusiveMonitorsStatus();
  }
  if (cVar9 == '\0') goto LAB_0134814c;
  goto LAB_0134813c;
  while( true ) {
    puVar16 = (undefined8 *)*puVar16;
    plVar23 = (long *)0x0;
    if (puVar16 == (undefined8 *)0x0) break;
LAB_0135131c:
    if (puVar16 == (undefined8 *)PTR_DAT_047e3048) {
      plVar23 = plVar19;
      break;
    }
  }
LAB_01351330:
  FUN_01db74ec(local_70,plVar23);
  plVar23 = local_70[0];
  lVar22 = puVar24[1];
  psVar5 = (short *)(lVar22 + 0x1a);
  do {
    sVar18 = *psVar5;
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(psVar5,0x10);
    if (bVar10) {
      *psVar5 = sVar18 + -1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  if (sVar18 == 1) {
    *(undefined8 *)(lVar22 + 0x10) = 0;
    (**(code **)(*plVar19 + 0x50))(plVar19);
  }
  else if (sVar18 == 0) goto LAB_013498f8;
  if (plVar23 == (long *)0x0) {
LAB_01348190:
    plVar19 = (long *)FUN_0135514c(*(undefined8 *)(lVar25 + 0x3a0),&local_1a8,&local_138);
    if (plVar19 != (long *)0x0) {
      lVar22 = plVar19[6];
      if (*(long *)(lVar22 + 0x10) == 0) goto LAB_01351b80;
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar10) {
          *psVar5 = sVar18 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 0) {
        uVar15 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
        *(undefined8 *)(lVar22 + 8) = uVar15;
        *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
      }
      else if (sVar18 == -1) goto LAB_01349e44;
    }
    plVar23 = local_70[0];
    local_70[0] = (long *)0x0;
    if (plVar23 != (long *)0x0) {
      lVar22 = plVar23[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar10) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*plVar23 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
    local_70[0] = plVar19;
    (**(code **)(*plVar19 + 0x18))(&local_110,plVar19);
    local_b0 = (long *)0x0;
    local_a8 = (long *)0x0;
    plVar23 = (long *)0x0;
    if (plVar19 != (long *)0x0) {
      plVar23 = plVar19 + 5;
    }
    if ((long *)local_110[2] == plVar23) {
      FUN_00d1f904(&local_b0,&local_110);
    }
    plVar19 = local_110;
    if (local_110 != (long *)0x0) {
      plVar23 = local_110 + 3;
      do {
        sVar18 = (short)*plVar23;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar10) {
          *(short *)plVar23 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        piVar6 = (int *)((long)local_110 + 0x1c);
        do {
          iVar11 = *piVar6;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar10) {
            *piVar6 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_c8 = (long *)*plVar19;
          FUN_00c44438(lVar22 + 0x8040,&local_c8);
        }
      }
      else if (sVar18 == 0) goto LAB_013497f0;
    }
    FUN_00dc7a68(local_98 + 9,&local_b0);
    plVar19 = local_b0;
    if (local_b0 != (long *)0x0) {
      plVar23 = local_b0 + 3;
      do {
        sVar18 = (short)*plVar23;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar10) {
          *(short *)plVar23 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 != 1) goto LAB_0134a194;
      piVar6 = (int *)((long)local_b0 + 0x1c);
      do {
        iVar11 = *piVar6;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar10) {
          *piVar6 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar22 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar22;
        local_110 = (long *)*plVar19;
        lVar22 = lVar22 + 0x8040;
        pplVar17 = &local_110;
        goto LAB_0134d71c;
      }
    }
  }
LAB_01348218:
  if (!bVar30) {
    *(undefined8 *)(lVar25 + 0x2f0) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar25 + 0x2f8));
  }
  FUN_00d005f8(*(undefined8 *)(lVar25 + 0x308),local_70[0],0);
  plVar23 = local_70[0];
  plVar19 = (long *)PTR_DAT_047d8c48;
  pbVar26 = PTR_DAT_047d8c40;
  if (local_70[0] != (long *)0x0) {
    lVar22 = local_70[0][6];
    if (*(long *)(lVar22 + 0x10) == 0) goto LAB_01351b80;
    psVar5 = (short *)(lVar22 + 0x1a);
    do {
      sVar18 = *psVar5;
      cVar9 = '\x01';
      bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
      if (bVar30) {
        *psVar5 = sVar18 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar18 == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
      *(undefined8 *)(lVar22 + 8) = uVar15;
      *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
    }
    else if (sVar18 == -1) goto LAB_01349e44;
    if (local_70[0] != (long *)0x0) {
      lVar22 = local_70[0][6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_70[0] + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
  }
  plVar14 = *(long **)(param_1 + 0x438);
  *(undefined8 *)(param_1 + 0x438) = 0;
  if (plVar14 != (long *)0x0) {
    lVar22 = plVar14[6];
    psVar5 = (short *)(lVar22 + 0x1a);
    do {
      sVar18 = *psVar5;
      cVar9 = '\x01';
      bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
      if (bVar30) {
        *psVar5 = sVar18 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar18 == 1) {
      *(undefined8 *)(lVar22 + 0x10) = 0;
      (**(code **)(*plVar14 + 0x50))();
    }
    else if (sVar18 == 0) goto LAB_013498f8;
  }
  plVar14 = (long *)(param_1 + 0x438);
  *plVar14 = (long)plVar23;
  lVar22 = 0;
  if (plVar23 != (long *)0x0) {
    local_110 = (long *)0x0;
    local_108 = (long *)0x0;
    FUN_00c43ef0(&local_110,plVar23 + 6);
    if ((long *)local_110[2] == plVar23 + 5) {
      do {
        plVar23 = local_108;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(&local_108,0x10);
        if (bVar30) {
          local_108 = (long *)0x0;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      uVar15 = *(undefined8 *)PTR_DAT_047d3910;
      *(undefined8 *)PTR_DAT_047d3918 = uVar15;
      FUN_00c44204(&local_b0,uVar15,plVar23);
      plVar23 = local_110;
      local_110 = (long *)0x0;
      if (plVar23 != (long *)0x0) {
        plVar21 = plVar23 + 3;
        do {
          sVar18 = (short)*plVar21;
          cVar9 = '\x01';
          bVar30 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar30) {
            *(short *)plVar21 = sVar18 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar18 == 1) {
          piVar6 = (int *)((long)plVar23 + 0x1c);
          do {
            iVar11 = *piVar6;
            cVar9 = '\x01';
            bVar30 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar30) {
              *piVar6 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar11 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar22 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar22;
            local_98 = (long *)*plVar23;
            FUN_00c44438(lVar22 + 0x8040,&local_98);
          }
        }
        else if (sVar18 == 0) goto LAB_013497f0;
      }
      plVar23 = local_b0;
      if (local_b0 != (long *)0x0) {
        local_b0 = (long *)0x0;
      }
    }
    else {
      plVar23 = (long *)0x0;
    }
    plVar21 = local_110;
    if (local_110 != (long *)0x0) {
      plVar4 = local_110 + 3;
      do {
        sVar18 = (short)*plVar4;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar30) {
          *(short *)plVar4 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        piVar6 = (int *)((long)local_110 + 0x1c);
        do {
          iVar11 = *piVar6;
          cVar9 = '\x01';
          bVar30 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar30) {
            *piVar6 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_98 = (long *)*plVar21;
          FUN_00c44438(lVar22 + 0x8040,&local_98);
        }
      }
      else if (sVar18 == 0) goto LAB_013497f0;
    }
    if (plVar23 == (long *)0x0) {
      *(undefined8 *)(param_1 + 0x440) = 0;
    }
    else {
      plVar21 = plVar23 + 3;
      *(long *)(param_1 + 0x440) = *plVar23;
      do {
        sVar18 = (short)*plVar21;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar30) {
          *(short *)plVar21 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        piVar6 = (int *)((long)plVar23 + 0x1c);
        do {
          iVar11 = *piVar6;
          cVar9 = '\x01';
          bVar30 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar30) {
            *piVar6 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_110 = (long *)*plVar23;
          FUN_00c44438(lVar22 + 0x8040,&local_110);
        }
      }
      else if (sVar18 == 0) {
LAB_013497f0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    lVar22 = *plVar14;
  }
  if (lVar22 != 0) {
    FUN_01126cc0(&local_110,plVar14);
    FUN_00cfe35c(local_110,param_1 + 0x448,1);
    if (((*pbVar26 & 1) == 0) && (iVar11 = __cxa_guard_acquire(pbVar26), iVar11 != 0)) {
      FUN_00100190(PTR_LAB_047d8e90,plVar19,&PTR_LOOP_04483000);
      __cxa_guard_release(pbVar26);
    }
    uVar15 = *plVar19;
    *(undefined8 *)PTR_DAT_047d8c50 = uVar15;
    FUN_00cfc3c0(&local_98,uVar15,local_110);
    local_78 = local_98;
    local_98 = (long *)0x0;
    FUN_00cfbe68(param_1 + 0x450,&local_78);
    if (local_78 != (long *)0x0) {
      lVar22 = local_78[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_78 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
    local_80 = local_90;
    local_90 = (long *)0x0;
    FUN_00cfc114(param_1 + 0x460,&local_80);
    if (local_80 != (long *)0x0) {
      lVar22 = local_80[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_80 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
    if (local_90 != (long *)0x0) {
      lVar22 = local_90[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_90 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
    if (local_98 != (long *)0x0) {
      lVar22 = local_98[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_98 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
    if (local_110 != (long *)0x0) {
      lVar22 = local_110[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_110 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
    plVar23 = *(long **)(param_1 + 0x450);
    if (plVar23 != (long *)0x0) {
      lVar22 = plVar23[6];
      if (*(long *)(lVar22 + 0x10) == 0) goto LAB_01351b80;
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar18 == 0) {
        uVar15 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
        *(undefined8 *)(lVar22 + 8) = uVar15;
        *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
      }
      else if (sVar18 == -1) goto LAB_01349e44;
      lVar22 = plVar23[6];
      psVar5 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar5;
        cVar9 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar30) {
          *psVar5 = sVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
LAB_01347218:
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*plVar23 + 0x50))(plVar23);
      }
      else if (sVar18 == 0) goto LAB_013498f8;
    }
  }
LAB_013478cc:
  if (local_188 != (long *)0x0) {
    (**(code **)(*local_188 + 0x20))();
  }
  plVar23 = local_1a8;
  if (local_1a8 != (long *)0x0) {
LAB_01347eb0:
    (**(code **)(*plVar23 + 0x20))();
  }
LAB_013478dc:
  plVar29 = plVar29 + 8;
  if (plVar29 == plVar27) goto LAB_01349650;
  goto LAB_01346884;
LAB_0134eb50:
  (**(code **)(*plVar19 + 0x18))(&local_b0,plVar19);
  local_c8 = (long *)0x0;
  plStack_c0 = (long *)0x0;
  plVar23 = (long *)0x0;
  if (plVar19 != (long *)0x0) {
    plVar23 = plVar19 + 5;
  }
  if ((long *)local_b0[2] == plVar23) {
    FUN_00d1f904(&local_c8,&local_b0);
  }
  plVar19 = local_b0;
  if (local_b0 != (long *)0x0) {
    plVar23 = local_b0 + 3;
    do {
      sVar18 = (short)*plVar23;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar10) {
        *(short *)plVar23 = sVar18 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar18 == 1) {
      piVar6 = (int *)((long)local_b0 + 0x1c);
      do {
        iVar11 = *piVar6;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar10) {
          *piVar6 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar22 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar22;
        local_110 = (long *)*plVar19;
        FUN_00c44438(lVar22 + 0x8040,&local_110);
      }
    }
    else if (sVar18 == 0) goto LAB_013497f0;
  }
  local_100 = (long *)0x0;
  local_110 = local_138;
  local_108 = (long *)0x0;
  FUN_00dc7a68(&local_108,&local_c8);
  local_98[8] = (long)local_110;
  FUN_00dc7a68(local_98 + 9,&local_108);
  plVar19 = local_108;
  if (local_108 != (long *)0x0) {
    plVar23 = local_108 + 3;
    do {
      sVar18 = (short)*plVar23;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar10) {
        *(short *)plVar23 = sVar18 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar18 == 1) {
      piVar6 = (int *)((long)local_108 + 0x1c);
      do {
        iVar11 = *piVar6;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar10) {
          *piVar6 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar22 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar22;
        local_b0 = (long *)*plVar19;
        FUN_00c44438(lVar22 + 0x8040,&local_b0);
      }
    }
    else if (sVar18 == 0) goto LAB_013497f0;
  }
  plVar19 = local_c8;
  if (local_c8 != (long *)0x0) {
    plVar23 = local_c8 + 3;
    do {
      sVar18 = (short)*plVar23;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar10) {
        *(short *)plVar23 = sVar18 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar18 == 1) {
      piVar6 = (int *)((long)local_c8 + 0x1c);
      do {
        iVar11 = *piVar6;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar10) {
          *piVar6 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar22 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar22;
        local_b0 = (long *)*plVar19;
        lVar22 = lVar22 + 0x8040;
        pplVar17 = &local_b0;
LAB_0134d71c:
        FUN_00c44438(lVar22,pplVar17);
      }
    }
    else {
LAB_0134a194:
      if (sVar18 == 0) goto LAB_013497f0;
    }
  }
  goto LAB_01348218;
}


