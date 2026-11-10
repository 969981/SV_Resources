/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ecce3c; name: FUN_01ecce3c
 */


void FUN_01ecce3c(long *param_1,long *param_2)

{
  short *psVar1;
  long *plVar2;
  long *plVar3;
  int *piVar4;
  byte bVar5;
  short sVar6;
  char cVar7;
  undefined8 *puVar8;
  char *pcVar9;
  undefined1 uVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  byte *pbVar17;
  bool bVar18;
  short sVar19;
  ulong uVar20;
  byte *pbVar21;
  long *local_f8;
  long *local_f0;
  undefined8 *local_e8;
  undefined8 uStack_e0;
  long local_d8;
  char *local_d0;
  undefined8 uStack_c8;
  long *local_c0;
  long *local_b8;
  long *local_b0;
  long *local_a8;
  long *local_a0;
  undefined2 local_94 [2];
  undefined2 *local_90;
  byte *local_88;
  size_t local_80;
  long *local_78;
  byte local_70 [16];
  
  lVar14 = *param_1;
  if ((lVar14 != 0) && (*(short *)(lVar14 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar14 + 0x1a);
    sVar19 = *(short *)(lVar14 + 0x1a);
    do {
      sVar6 = *psVar1;
      if (sVar6 == sVar19) {
        cVar7 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar18) {
          *psVar1 = sVar19 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 != '\0') goto LAB_01eccec0;
        bVar18 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01eccec0:
        bVar18 = false;
      }
      if (bVar18) {
        lVar14 = *(long *)(lVar14 + 0x10);
        if (lVar14 == 0) {
          return;
        }
        lVar12 = FUN_0104b474(lVar14 + 0xe0,&local_90);
        lVar15 = *(long *)(lVar14 + 8);
        psVar1 = (short *)(lVar15 + 0x1a);
        do {
          sVar19 = *psVar1;
          cVar7 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar18) {
            *psVar1 = sVar19 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar19 == 1) {
          *(undefined8 *)(lVar15 + 0x10) = 0;
          (**(code **)(*(long *)(lVar14 + -0x28) + 0x50))((long *)(lVar14 + -0x28));
        }
        else if (sVar19 == 0) goto LAB_01ecd50c;
        if (lVar12 == 0) {
          return;
        }
        lVar14 = FUN_0126a9c0();
        if (lVar14 == 0) {
          return;
        }
        if (*param_2 == 0) {
          return;
        }
        uVar20 = 0;
        pbVar21 = (byte *)((ulong)local_70 | 1);
        do {
          local_70[0] = 0;
          local_70[1] = 0;
          local_70[2] = 0;
          local_70[3] = 0;
          local_70[4] = 0;
          local_70[5] = 0;
          local_70[6] = 0;
          local_70[7] = 0;
          local_70[8] = 0;
          local_70[9] = 0;
          local_70[10] = 0;
          local_70[0xb] = 0;
          local_70[0xc] = 0;
          local_70[0xd] = 0;
          local_70[0xe] = 0;
          local_70[0xf] = 0;
          snprintf((char *)local_70,0x10,"T_serial_%02d",(int)uVar20);
          uVar13 = FUN_0196c63c(*param_2);
          local_80 = strlen((char *)local_70);
          local_90 = (undefined2 *)&DAT_cbf29ce484222645;
          if (local_70[0] != 0) {
            local_90 = (undefined2 *)&DAT_cbf29ce484222645;
            pbVar17 = pbVar21;
            bVar5 = local_70[0];
            do {
              local_90 = (undefined2 *)(((ulong)local_90 ^ (ulong)bVar5) * 0x100000001b3);
              bVar5 = *pbVar17;
              pbVar17 = pbVar17 + 1;
            } while (bVar5 != 0);
          }
          local_78 = (long *)0x0;
          local_88 = local_70;
          FUN_0104d570(&local_d8,lVar12,&local_90);
          if (local_78 != (long *)0x0) {
            (**(code **)(*local_78 + 0x20))();
          }
          if (local_d0 != (char *)0x0) {
            if ((*(short *)(local_d0 + 0x1a) != 0) && (local_d8 != 0)) {
              if (local_d0 == (char *)0x0) goto LAB_01ecd008;
              if (*(short *)(local_d0 + 0x1a) != 0) {
                psVar1 = (short *)(local_d0 + 0x1a);
                sVar19 = *(short *)(local_d0 + 0x1a);
LAB_01ecd484:
                sVar6 = *psVar1;
                if (sVar6 == sVar19) {
                  cVar7 = '\x01';
                  bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                  if (bVar18) {
                    *psVar1 = sVar19 + 1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                  if (cVar7 != '\0') goto LAB_01ecd4a8;
                  bVar18 = true;
                }
                else {
                  ClearExclusiveLocal();
LAB_01ecd4a8:
                  bVar18 = false;
                }
                if (!bVar18) goto code_r0x01ecd4b0;
                lVar15 = *(long *)(local_d0 + 0x10);
                if (lVar15 != 0) {
                  *(byte *)(local_d8 + 0x58) =
                       *(byte *)(local_d8 + 0x58) & 0xfe | uVar20 < (uVar13 & 0xffffffff);
                  lVar16 = *(long *)(lVar15 + 8);
                  psVar1 = (short *)(lVar16 + 0x1a);
                  do {
                    sVar19 = *psVar1;
                    cVar7 = '\x01';
                    bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                    if (bVar18) {
                      *psVar1 = sVar19 + -1;
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar7 != '\0');
                  if (sVar19 == 1) {
                    *(undefined8 *)(lVar16 + 0x10) = 0;
                    (**(code **)(*(long *)(lVar15 + -0x28) + 0x50))();
                  }
                  else if (sVar19 == 0) goto LAB_01ecd50c;
                }
              }
            }
LAB_01ecd1d0:
            pcVar9 = local_d0;
            if (local_d0 != (char *)0x0) {
              psVar1 = (short *)(local_d0 + 0x18);
              do {
                sVar19 = *psVar1;
                cVar7 = '\x01';
                bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar18) {
                  *psVar1 = sVar19 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (sVar19 == 1) {
                piVar4 = (int *)(local_d0 + 0x1c);
                do {
                  iVar11 = *piVar4;
                  cVar7 = '\x01';
                  bVar18 = (bool)ExclusiveMonitorPass(piVar4,0x10);
                  if (bVar18) {
                    *piVar4 = -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar11 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar15 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar15;
                  local_90 = *(undefined2 **)pcVar9;
                  FUN_00c44438(lVar15 + 0x8040,&local_90);
                }
              }
              else if (sVar19 == 0) goto LAB_01ecd5fc;
            }
          }
LAB_01ecd008:
          if (uVar20 < (uVar13 & 0xffffffff)) {
            lVar15 = FUN_0196c644(*param_2);
            local_94[0] = *(undefined2 *)(lVar15 + uVar20 * 2);
            local_90 = local_94;
            FUN_01a43ab4(&local_a0,lVar14,&local_90);
            FUN_00ea425c(&local_a8);
            plVar3 = local_a8;
            local_b0 = local_a0;
            if (local_a0 != (long *)0x0) {
              plVar2 = local_a0 + 5;
              do {
                lVar15 = *plVar2;
                cVar7 = '\x01';
                bVar18 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar18) {
                  *(int *)plVar2 = (int)lVar15 + 1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if ((int)lVar15 == -1) goto LAB_01ecd5ac;
            }
            uVar10 = FUN_0168d1c0();
            FUN_01ddaa3c(plVar3,0,&local_b0,uVar10);
            if (local_b0 != (long *)0x0) {
              plVar3 = local_b0 + 5;
              do {
                lVar15 = *plVar3;
                iVar11 = (int)lVar15 + -1;
                cVar7 = '\x01';
                bVar18 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar18) {
                  *(int *)plVar3 = iVar11;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (iVar11 == 0) {
                (**(code **)(*local_b0 + 0x10))();
              }
              else if ((int)lVar15 == 0) goto LAB_01ecd5d4;
            }
            local_78 = (long *)0x0;
            local_90 = (undefined2 *)0x2a587ac03253f2d6;
            local_c0 = (long *)0x0;
            local_88 = (byte *)0x3c03edd;
            local_80 = 7;
            local_d8 = 0x2d1005c0063615cd;
            local_d0 = "msg_o_mystery_cap_01";
            uStack_c8 = 0x14;
            FUN_00f11e84(&local_b8,&local_90,&local_d8);
            if (local_c0 != (long *)0x0) {
              (**(code **)(*local_c0 + 0x20))();
            }
            if (local_78 != (long *)0x0) {
              (**(code **)(*local_78 + 0x20))();
            }
            local_e8 = (undefined8 *)0x0;
            uStack_e0 = 0;
            FUN_00ca1a48(&local_e8,param_1);
            local_90 = (undefined2 *)&DAT_cbf29ce484222645;
            if (local_70[0] != 0) {
              local_90 = (undefined2 *)&DAT_cbf29ce484222645;
              pbVar17 = pbVar21;
              bVar5 = local_70[0];
              do {
                local_90 = (undefined2 *)(((ulong)local_90 ^ (ulong)bVar5) * 0x100000001b3);
                bVar5 = *pbVar17;
                pbVar17 = pbVar17 + 1;
              } while (bVar5 != 0);
            }
            local_80 = 0xf;
            local_78 = (long *)0x0;
            local_f8 = local_b8;
            if (local_b8 != (long *)0x0) {
              plVar3 = local_b8 + 5;
              do {
                lVar15 = *plVar3;
                cVar7 = '\x01';
                bVar18 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar18) {
                  *(int *)plVar3 = (int)lVar15 + 1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              local_88 = local_70;
              if ((int)lVar15 == -1) {
LAB_01ecd5ac:
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != 0","IncrementReferenceInternal",
                           "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                           ,0x53,"Reference counter overflows.");
              }
            }
            local_88 = local_70;
            FUN_01dbf208(&local_f0,local_a8,&local_f8);
            FUN_0111d018(&local_e8,&local_90,&local_f0);
            if (local_f0 != (long *)0x0) {
              plVar3 = local_f0 + 5;
              do {
                lVar15 = *plVar3;
                iVar11 = (int)lVar15 + -1;
                cVar7 = '\x01';
                bVar18 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar18) {
                  *(int *)plVar3 = iVar11;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (iVar11 == 0) {
                (**(code **)(*local_f0 + 0x10))();
              }
              else if ((int)lVar15 == 0) goto LAB_01ecd5d4;
            }
            if (local_f8 != (long *)0x0) {
              plVar3 = local_f8 + 5;
              do {
                lVar15 = *plVar3;
                iVar11 = (int)lVar15 + -1;
                cVar7 = '\x01';
                bVar18 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar18) {
                  *(int *)plVar3 = iVar11;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (iVar11 == 0) {
                (**(code **)(*local_f8 + 0x10))();
              }
              else if ((int)lVar15 == 0) goto LAB_01ecd5d4;
            }
            if (local_78 != (long *)0x0) {
              (**(code **)(*local_78 + 0x20))();
            }
            puVar8 = local_e8;
            if (local_e8 != (undefined8 *)0x0) {
              psVar1 = (short *)(local_e8 + 3);
              do {
                sVar19 = *psVar1;
                cVar7 = '\x01';
                bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar18) {
                  *psVar1 = sVar19 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (sVar19 == 1) {
                piVar4 = (int *)((long)local_e8 + 0x1c);
                do {
                  iVar11 = *piVar4;
                  cVar7 = '\x01';
                  bVar18 = (bool)ExclusiveMonitorPass(piVar4,0x10);
                  if (bVar18) {
                    *piVar4 = -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar11 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar15 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar15;
                  local_90 = (undefined2 *)*puVar8;
                  FUN_00c44438(lVar15 + 0x8040,&local_90);
                }
              }
              else if (sVar19 == 0) {
LAB_01ecd5fc:
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                           "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                           ,0x33,"Reference counter underflows.");
              }
            }
            if (local_b8 != (long *)0x0) {
              plVar3 = local_b8 + 5;
              do {
                lVar15 = *plVar3;
                iVar11 = (int)lVar15 + -1;
                cVar7 = '\x01';
                bVar18 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar18) {
                  *(int *)plVar3 = iVar11;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (iVar11 == 0) {
                (**(code **)(*local_b8 + 0x10))();
              }
              else if ((int)lVar15 == 0) goto LAB_01ecd5d4;
            }
            if (local_a8 != (long *)0x0) {
              lVar15 = local_a8[6];
              psVar1 = (short *)(lVar15 + 0x1a);
              do {
                sVar19 = *psVar1;
                cVar7 = '\x01';
                bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar18) {
                  *psVar1 = sVar19 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (sVar19 == 1) {
                *(undefined8 *)(lVar15 + 0x10) = 0;
                (**(code **)(*local_a8 + 0x50))();
              }
              else if (sVar19 == 0) {
LAB_01ecd50c:
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                           "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                           ,0x60,"Reference counter underflows.");
              }
            }
            if (local_a0 != (long *)0x0) {
              plVar3 = local_a0 + 5;
              do {
                lVar15 = *plVar3;
                iVar11 = (int)lVar15 + -1;
                cVar7 = '\x01';
                bVar18 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar18) {
                  *(int *)plVar3 = iVar11;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (iVar11 == 0) {
                (**(code **)(*local_a0 + 0x10))();
              }
              else if ((int)lVar15 == 0) {
LAB_01ecd5d4:
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint32_t>::max()",
                           "DecrementReferenceInternal",
                           "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                           ,0x58,"Reference counter underflows.");
              }
            }
          }
          uVar20 = uVar20 + 1;
          if (uVar20 == 0x10) {
            return;
          }
        } while( true );
      }
      sVar19 = sVar6;
    } while (sVar6 != 0);
  }
  return;
code_r0x01ecd4b0:
  sVar19 = sVar6;
  if (sVar6 == 0) goto LAB_01ecd1d0;
  goto LAB_01ecd484;
}


