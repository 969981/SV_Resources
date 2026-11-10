/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00de2584; name: FUN_00de2584
 */


void FUN_00de2584(long param_1,long param_2)

{
  int *piVar1;
  short *psVar2;
  undefined1 uVar3;
  short sVar4;
  char cVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  char *pcVar11;
  undefined8 uVar12;
  long **pplVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  short sVar17;
  long lVar18;
  bool bVar19;
  byte *pbVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  long *plVar25;
  undefined8 *local_3c8;
  undefined8 uStack_3c0;
  undefined8 *local_3b8;
  undefined8 uStack_3b0;
  undefined8 *local_3a8;
  undefined8 uStack_3a0;
  undefined8 *local_398;
  undefined8 uStack_390;
  undefined8 *local_388;
  undefined8 uStack_380;
  undefined8 *local_378;
  undefined8 uStack_370;
  undefined8 *local_368;
  undefined8 uStack_360;
  undefined8 *local_358;
  undefined8 uStack_350;
  undefined8 *local_348;
  undefined8 uStack_340;
  undefined8 *local_338;
  undefined8 uStack_330;
  undefined8 *local_328;
  undefined8 uStack_320;
  undefined8 *local_318;
  undefined8 uStack_310;
  long *local_308;
  char *pcStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 *local_2e8;
  undefined8 uStack_2e0;
  long *local_2d8;
  undefined8 uStack_2d0;
  long *local_2c8;
  undefined8 uStack_2c0;
  long *local_2b8;
  undefined8 uStack_2b0;
  long *local_2a8;
  undefined8 uStack_2a0;
  undefined8 *local_298;
  undefined8 uStack_290;
  undefined8 *local_288;
  undefined8 uStack_280;
  undefined8 *local_278;
  undefined8 uStack_270;
  undefined8 *local_268;
  undefined8 uStack_260;
  undefined8 *local_258;
  undefined8 uStack_250;
  undefined8 *local_248;
  undefined8 uStack_240;
  long *local_238;
  undefined8 uStack_230;
  long *local_228;
  undefined8 uStack_220;
  long *local_218;
  undefined8 uStack_210;
  long *local_208;
  undefined8 uStack_200;
  undefined8 *local_1f8;
  undefined8 uStack_1f0;
  long *local_1e8;
  undefined8 uStack_1e0;
  long *local_1d8;
  undefined8 uStack_1d0;
  long *local_1c8;
  undefined8 local_1c0;
  long *local_1b8;
  undefined8 local_1b0;
  undefined8 *local_1a8;
  undefined8 local_1a0;
  undefined8 *local_198;
  undefined8 local_190;
  undefined8 *local_188;
  undefined8 local_180;
  undefined8 *local_178;
  undefined8 local_170;
  undefined8 *local_168 [2];
  undefined8 *local_158;
  undefined8 uStack_150;
  undefined8 *local_148;
  undefined8 uStack_140;
  long *local_138;
  undefined8 uStack_130;
  undefined8 *local_128;
  undefined8 uStack_120;
  undefined8 *local_118;
  undefined8 uStack_110;
  undefined8 *local_108;
  undefined8 uStack_100;
  undefined8 *local_f8 [2];
  long *local_e8;
  undefined8 uStack_e0;
  long *local_d8;
  undefined8 uStack_d0;
  long *local_c8;
  undefined8 uStack_c0;
  long *local_b8 [2];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98 [4];
  long *local_90;
  undefined4 local_88;
  undefined2 uStack_84;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined1 uStack_80;
  undefined2 uStack_7f;
  undefined5 uStack_7d;
  long *local_78;
  long local_70 [2];
  
  *(undefined1 *)(param_2 + 0x102) = 1;
  lVar18 = *(long *)(param_2 + 0x28);
  if (lVar18 != 0) {
    if (*(short *)(lVar18 + 0x1a) != 0) {
      psVar2 = (short *)(lVar18 + 0x1a);
      sVar17 = *(short *)(lVar18 + 0x1a);
LAB_00de65b4:
      sVar4 = *psVar2;
      if (sVar4 == sVar17) {
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar19) {
          *psVar2 = sVar17 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_00de65d8;
        bVar19 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00de65d8:
        bVar19 = false;
      }
      if (!bVar19) goto code_r0x00de65e0;
      lVar18 = *(long *)(lVar18 + 0x10);
      if (lVar18 != 0) {
        plVar21 = (long *)(lVar18 + -0x28);
        lVar9 = FUN_012a08f4(plVar21,*(undefined8 *)(lVar18 + -0x20));
        plVar22 = *(long **)(param_2 + 8);
        if (plVar22 == (long *)0x0) {
          *(uint *)(lVar9 + 0x120) = (uint)*(ushort *)(param_2 + 0x10);
          *(undefined8 *)(lVar9 + 300) = 0xa00000000;
        }
        else {
          plVar10 = plVar22 + 5;
          do {
            lVar24 = *plVar10;
            cVar5 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar19) {
              *(int *)plVar10 = (int)lVar24 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          local_90 = plVar22;
          if ((int)lVar24 == -1) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","IncrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                       ,0x53,"Reference counter overflows.");
          }
          FUN_02a2e308(lVar9,&local_90);
          if (local_90 != (long *)0x0) {
            plVar22 = local_90 + 5;
            do {
              lVar9 = *plVar22;
              iVar8 = (int)lVar9 + -1;
              cVar5 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(plVar22,0x10);
              if (bVar19) {
                *(int *)plVar22 = iVar8;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar8 == 0) {
              (**(code **)(*local_90 + 0x10))();
            }
            else if ((int)lVar9 == 0) {
              pcVar11 = "count != std::numeric_limits<uint32_t>::max()";
              pcVar14 = "DecrementReferenceInternal";
              pcVar15 = 
              "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
              ;
              pcVar16 = "Reference counter underflows.";
              goto LAB_00de8e04;
            }
          }
        }
        lVar18 = *(long *)(lVar18 + 8);
        psVar2 = (short *)(lVar18 + 0x1a);
        do {
          sVar17 = *psVar2;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar19) {
            *psVar2 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar17 == 1) {
          *(undefined8 *)(lVar18 + 0x10) = 0;
          (**(code **)(*plVar21 + 0x50))(plVar21);
        }
        else if (sVar17 == 0) goto LAB_00de3f38;
      }
    }
LAB_00de667c:
    lVar18 = *(long *)(param_2 + 0x28);
    if (lVar18 != 0) {
      if (*(short *)(lVar18 + 0x1a) != 0) {
        psVar2 = (short *)(lVar18 + 0x1a);
        sVar17 = *(short *)(lVar18 + 0x1a);
LAB_00de6694:
        sVar4 = *psVar2;
        if (sVar4 == sVar17) {
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar19) {
            *psVar2 = sVar17 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_00de66b8;
          bVar19 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00de66b8:
          bVar19 = false;
        }
        if (!bVar19) goto code_r0x00de66c0;
        lVar18 = *(long *)(lVar18 + 0x10);
        if (lVar18 != 0) {
          plVar22 = *(long **)(lVar18 + -0x20);
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar9 = nn::os::GetTlsValue(DAT_04865a30);
          if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_00de9148;
          *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar22;
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
          plVar21 = (long *)(**(code **)(*plVar22 + 0x10))(plVar22,0x150,8);
          if (plVar21 == (long *)0x0) goto LAB_00de8f04;
          FUN_00d1a240(plVar21,0x80047f80);
          puVar6 = PTR_DAT_047d94c8;
          *plVar21 = (long)(PTR_DAT_047d94c8 + 0x10);
          plVar21[1] = (long)plVar22;
          plVar22 = plVar21 + 4;
          *plVar22 = (long)(puVar6 + 0x150);
          plVar21[2] = (long)plVar21;
          plVar21[0x28] = 0;
          plVar21[0x29] = 0;
          plVar21[7] = (long)(puVar6 + 0x2f8);
          *(undefined4 *)(plVar21 + 3) = 0x80150;
          plVar21[5] = (long)(puVar6 + 0x278);
          plVar21[6] = (long)(puVar6 + 0x2d0);
          plVar21[0x24] = 0;
          plVar21[0x25] = 0;
          plVar21[0x26] = 0;
          plVar21[0x27] = 0;
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
          lVar9 = plVar21[0x13];
          if (*(long *)(lVar9 + 0x10) != 0) {
            plVar10 = (long *)(lVar18 + -0x28);
            psVar2 = (short *)(lVar9 + 0x1a);
            do {
              sVar17 = *psVar2;
              cVar5 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar19) {
                *psVar2 = sVar17 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar17 == 0) {
              uVar12 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
              *(undefined8 *)(lVar9 + 8) = uVar12;
              *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
            }
            else if (sVar17 == -1) goto LAB_00de9104;
            (**(code **)(plVar21[4] + 0xe8))(plVar22,plVar10);
            (**(code **)(plVar21[4] + 0x68))(plVar22);
            local_90 = plVar21;
            FUN_00df8c30(lVar18 + 0xe0,&local_90);
            if (local_90 != (long *)0x0) {
              lVar9 = local_90[0x13];
              psVar2 = (short *)(lVar9 + 0x1a);
              do {
                sVar17 = *psVar2;
                cVar5 = '\x01';
                bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                if (bVar19) {
                  *psVar2 = sVar17 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (sVar17 == 1) {
                *(undefined8 *)(lVar9 + 0x10) = 0;
                (**(code **)(*local_90 + 0x50))();
              }
              else if (sVar17 == 0) goto LAB_00de3f38;
            }
            (**(code **)(*(long *)(lVar18 + -0x28) + 0x100))(plVar10,plVar22);
            plVar21 = (long *)(lVar18 + 0x418);
            lVar24 = *plVar21;
            lVar9 = nn::os::GetCurrentThread();
            if (lVar9 == lVar24) {
              plVar21 = (long *)0x0;
              bVar19 = true;
            }
            else {
              lVar9 = nn::os::GetCurrentThread();
              do {
                if (*plVar21 != 0) {
                  ClearExclusiveLocal();
                  do {
                    nn::os::WaitLightEvent((LightEventType *)(lVar18 + 0x420));
                    while (*plVar21 == 0) {
                      cVar5 = '\x01';
                      bVar19 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                      if (bVar19) {
                        *plVar21 = lVar9;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                      if (cVar5 == '\0') goto LAB_00de8bec;
                    }
                    ClearExclusiveLocal();
                  } while( true );
                }
                cVar5 = '\x01';
                bVar19 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                if (bVar19) {
                  *plVar21 = lVar9;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
LAB_00de8bec:
              bVar19 = false;
            }
            if ((*(byte *)(lVar18 + 0x430) >> 2 & 1) == 0) {
              FUN_00d37964(plVar10,0,0);
            }
            else {
              (**(code **)(*plVar22 + 0xf8))(plVar22);
            }
            if (!bVar19) {
              *plVar21 = 0;
              nn::os::SignalLightEvent((LightEventType *)(plVar21 + 1));
            }
            lVar18 = *(long *)(lVar18 + 8);
            psVar2 = (short *)(lVar18 + 0x1a);
            do {
              sVar17 = *psVar2;
              cVar5 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar19) {
                *psVar2 = sVar17 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar17 == 1) {
              *(undefined8 *)(lVar18 + 0x10) = 0;
              (**(code **)(*plVar10 + 0x50))(plVar10);
            }
            else if (sVar17 == 0) goto LAB_00de3f38;
            goto LAB_00de8c3c;
          }
          goto LAB_00de9128;
        }
      }
LAB_00de8c3c:
      lVar18 = *(long *)(param_2 + 0x28);
      if ((lVar18 != 0) && (*(short *)(lVar18 + 0x1a) != 0)) {
        psVar2 = (short *)(lVar18 + 0x1a);
        sVar17 = *(short *)(lVar18 + 0x1a);
LAB_00de8c54:
        sVar4 = *psVar2;
        if (sVar4 == sVar17) {
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar19) {
            *psVar2 = sVar17 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_00de8c78;
          bVar19 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00de8c78:
          bVar19 = false;
        }
        if (!bVar19) goto code_r0x00de8c80;
        lVar18 = *(long *)(lVar18 + 0x10);
        if (lVar18 != 0) {
          plVar21 = (long *)(lVar18 + -0x28);
          if ((*(short *)(param_2 + 0x10) != 0x3f3) || ((*(ushort *)(param_2 + 0x12) & 0xfffc) != 4)
             ) {
            FUN_010f5c50(plVar21,*(undefined8 *)(lVar18 + -0x20));
            goto LAB_00de92b8;
          }
          local_88 = (undefined4)DAT_04838340;
          uStack_84 = (undefined2)((ulong)DAT_04838340 >> 0x20);
          uStack_82 = (undefined1)((ulong)DAT_04838340 >> 0x30);
          uStack_81 = (undefined1)((ulong)DAT_04838340 >> 0x38);
          uStack_80 = (undefined1)DAT_04838348;
          uStack_7f = (undefined2)((ulong)DAT_04838348 >> 8);
          uStack_7d = (undefined5)((ulong)DAT_04838348 >> 0x18);
          plVar22 = *(long **)(lVar18 + -0x20);
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar9 = nn::os::GetTlsValue(DAT_04865a30);
          if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_00de9148;
          *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar22;
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
          plVar10 = (long *)(**(code **)(*plVar22 + 0x10))(plVar22,0x270,0x10);
          if (plVar10 != (long *)0x0) {
            FUN_010f5fdc();
            *(undefined1 *)(plVar10 + 0x3c) = 1;
            *(undefined1 *)((long)plVar10 + 0x1e3) = local_a8._2_1_;
            *(undefined2 *)((long)plVar10 + 0x1e1) = (undefined2)local_a8;
            *(undefined4 *)((long)plVar10 + 0x1e4) = 0x40000000;
            plVar10[0x3d] = (long)local_90;
            plVar10[0x3e] = CONCAT17(uStack_81,CONCAT16(uStack_82,CONCAT24(uStack_84,local_88)));
            plVar10[0x3f] = CONCAT53(uStack_7d,CONCAT21(uStack_7f,uStack_80));
            *(undefined4 *)(plVar10 + 3) = 0x100270;
            plVar10[1] = (long)plVar22;
            plVar10[2] = (long)plVar10;
            *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
            lVar9 = plVar10[0x13];
            if (*(long *)(lVar9 + 0x10) != 0) {
              psVar2 = (short *)(lVar9 + 0x1a);
              do {
                sVar17 = *psVar2;
                cVar5 = '\x01';
                bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                if (bVar19) {
                  *psVar2 = sVar17 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (sVar17 == 0) {
                uVar12 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
                *(undefined8 *)(lVar9 + 8) = uVar12;
                *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
              }
              else if (sVar17 == -1) goto LAB_00de9104;
              plVar22 = plVar10 + 4;
              (**(code **)(*plVar22 + 0xe8))(plVar22,plVar21);
              (**(code **)(*plVar22 + 0x68))(plVar22);
              local_308 = plVar10;
              FUN_00df8c30(lVar18 + 0xe0,&local_308);
              if (local_308 != (long *)0x0) {
                lVar9 = local_308[0x13];
                psVar2 = (short *)(lVar9 + 0x1a);
                do {
                  sVar17 = *psVar2;
                  cVar5 = '\x01';
                  bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                  if (bVar19) {
                    *psVar2 = sVar17 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (sVar17 == 1) {
                  *(undefined8 *)(lVar9 + 0x10) = 0;
                  (**(code **)(*local_308 + 0x50))();
                }
                else if (sVar17 == 0) goto LAB_00de3f38;
              }
              (**(code **)(*(long *)(lVar18 + -0x28) + 0x100))(plVar21,plVar22);
              plVar10 = (long *)(lVar18 + 0x418);
              lVar24 = *plVar10;
              lVar9 = nn::os::GetCurrentThread();
              if (lVar9 == lVar24) {
                plVar10 = (long *)0x0;
                bVar19 = true;
              }
              else {
                lVar9 = nn::os::GetCurrentThread();
                do {
                  if (*plVar10 != 0) {
                    ClearExclusiveLocal();
                    do {
                      nn::os::WaitLightEvent((LightEventType *)(lVar18 + 0x420));
                      while (*plVar10 == 0) {
                        cVar5 = '\x01';
                        bVar19 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                        if (bVar19) {
                          *plVar10 = lVar9;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                        if (cVar5 == '\0') goto LAB_00de9240;
                      }
                      ClearExclusiveLocal();
                    } while( true );
                  }
                  cVar5 = '\x01';
                  bVar19 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                  if (bVar19) {
                    *plVar10 = lVar9;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
LAB_00de9240:
                bVar19 = false;
              }
              if ((*(byte *)(lVar18 + 0x430) >> 2 & 1) == 0) {
                FUN_00d37964(plVar21,0,0);
              }
              else {
                (**(code **)(*plVar22 + 0xf8))(plVar22);
              }
              if (!bVar19) {
                *plVar10 = 0;
                nn::os::SignalLightEvent((LightEventType *)(plVar10 + 1));
              }
LAB_00de92b8:
              lVar18 = *(long *)(lVar18 + 8);
              psVar2 = (short *)(lVar18 + 0x1a);
              do {
                sVar17 = *psVar2;
                cVar5 = '\x01';
                bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                if (bVar19) {
                  *psVar2 = sVar17 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (sVar17 == 1) {
                *(undefined8 *)(lVar18 + 0x10) = 0;
                (**(code **)(*plVar21 + 0x50))(plVar21);
              }
              else if (sVar17 == 0) goto LAB_00de3f38;
              goto LAB_00de25bc;
            }
            goto LAB_00de9128;
          }
          lVar18 = *plVar22;
          goto LAB_00de8f18;
        }
      }
    }
  }
LAB_00de25bc:
  switch(*(undefined4 *)(param_2 + 4)) {
  case 0:
    local_90 = (long *)CONCAT71(local_90._1_7_,3);
    lVar18 = *(long *)(param_2 + 0x28);
    if ((lVar18 != 0) && (*(short *)(lVar18 + 0x1a) != 0)) {
      psVar2 = (short *)(lVar18 + 0x1a);
      sVar17 = *(short *)(lVar18 + 0x1a);
LAB_00de68f8:
      sVar4 = *psVar2;
      if (sVar4 == sVar17) {
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar19) {
          *psVar2 = sVar17 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_00de691c;
        bVar19 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00de691c:
        bVar19 = false;
      }
      if (!bVar19) goto code_r0x00de6924;
      lVar18 = *(long *)(lVar18 + 0x10);
      if (lVar18 != 0) {
        plVar22 = (long *)(lVar18 + -0x28);
        FUN_01e2df14(plVar22,*(undefined8 *)(lVar18 + -0x20),&local_90);
        lVar18 = *(long *)(lVar18 + 8);
        psVar2 = (short *)(lVar18 + 0x1a);
        do {
          sVar17 = *psVar2;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar19) {
            *psVar2 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar17 == 1) {
          *(undefined8 *)(lVar18 + 0x10) = 0;
          (**(code **)(*plVar22 + 0x50))(plVar22);
        }
        else if (sVar17 == 0) goto LAB_00de3f38;
      }
    }
LAB_00de25f0:
    cVar5 = *(char *)(param_2 + 0x100);
    FUN_00aa1bc4(param_2);
    FUN_0186ad1c(param_2,"main.field.behaviour.FieldPokemonBehavior");
    if (cVar5 == '\0') {
      lVar18 = param_2 + 0x28;
      local_108 = (undefined8 *)0x0;
      uStack_100 = 0;
      FUN_00ca1a48(&local_108,lVar18);
      puVar6 = PTR_DAT_047d3e28;
      local_90 = (long *)&DAT_a8bd1e5eb87a9f71;
      local_88 = 0x3c56b26;
      uStack_84 = 0;
      uStack_82 = 0;
      uStack_81 = 0;
      uStack_80 = 0x13;
      uStack_7f = 0;
      uStack_7d = 0;
      local_78 = (long *)0x0;
      if (((*PTR_DAT_047d3e28 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0)) {
        FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3e28);
      }
      FUN_019a4bf0(&local_308,&local_108,&local_90,PTR_DAT_047d3e30,0);
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x20))();
      }
      puVar7 = local_108;
      if (local_108 != (undefined8 *)0x0) {
        psVar2 = (short *)(local_108 + 3);
        do {
          sVar17 = *psVar2;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar19) {
            *psVar2 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar17 == 1) {
          piVar1 = (int *)((long)local_108 + 0x1c);
          do {
            iVar8 = *piVar1;
            cVar5 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar19) {
              *piVar1 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar9 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar9;
            local_90 = (long *)*puVar7;
            FUN_00c44438(lVar9 + 0x8040,&local_90);
          }
        }
        else if (sVar17 == 0) goto LAB_00de3a24;
      }
      local_118 = (undefined8 *)0x0;
      uStack_110 = 0;
      FUN_00ca1a48(&local_118,&local_308);
      FUN_01495548(param_2,1,&local_118);
      puVar7 = local_118;
      if (local_118 != (undefined8 *)0x0) {
        psVar2 = (short *)(local_118 + 3);
        do {
          sVar17 = *psVar2;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar19) {
            *psVar2 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar17 == 1) {
          piVar1 = (int *)((long)local_118 + 0x1c);
          do {
            iVar8 = *piVar1;
            cVar5 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar19) {
              *piVar1 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar9 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar9;
            local_90 = (long *)*puVar7;
            FUN_00c44438(lVar9 + 0x8040,&local_90);
          }
        }
        else if (sVar17 == 0) goto LAB_00de3a24;
      }
      local_128 = (undefined8 *)0x0;
      uStack_120 = 0;
      FUN_00ca1a48(&local_128,&local_308);
      FUN_01e2b730(&local_128);
      puVar7 = local_128;
      if (local_128 != (undefined8 *)0x0) {
        psVar2 = (short *)(local_128 + 3);
        do {
          sVar17 = *psVar2;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar19) {
            *psVar2 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar17 == 1) {
          piVar1 = (int *)((long)local_128 + 0x1c);
          do {
            iVar8 = *piVar1;
            cVar5 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar19) {
              *piVar1 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar9 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar9;
            local_90 = (long *)*puVar7;
            FUN_00c44438(lVar9 + 0x8040,&local_90);
          }
        }
        else if (sVar17 == 0) goto LAB_00de3a24;
      }
      local_138 = (long *)0x0;
      uStack_130 = 0;
      FUN_00ca1a48(&local_138,lVar18);
      local_90 = (long *)0xe2d08bf23a6c738a;
      local_88 = 0x3c42a49;
      uStack_84 = 0;
      uStack_82 = 0;
      uStack_81 = 0;
      uStack_80 = 0x1d;
      uStack_7f = 0;
      uStack_7d = 0;
      local_78 = (long *)0x0;
      if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0)) {
        FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3e28);
      }
      FUN_019a4bf0(&local_a8,&local_138,&local_90,PTR_DAT_047d3e30,0);
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x20))();
      }
      plVar22 = local_138;
      if (local_138 != (long *)0x0) {
        plVar21 = local_138 + 3;
        do {
          sVar17 = (short)*plVar21;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar19) {
            *(short *)plVar21 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar17 == 1) {
          piVar1 = (int *)((long)local_138 + 0x1c);
          do {
            iVar8 = *piVar1;
            cVar5 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar19) {
              *piVar1 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar9 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar9;
            local_90 = (long *)*plVar22;
            FUN_00c44438(lVar9 + 0x8040,&local_90);
          }
        }
        else if (sVar17 == 0) goto LAB_00de3a24;
      }
      plVar22 = local_a8;
      if (local_a8 != (long *)0x0) {
        plVar21 = local_a8 + 3;
        do {
          sVar17 = (short)*plVar21;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar19) {
            *(short *)plVar21 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar17 == 1) {
          piVar1 = (int *)((long)local_a8 + 0x1c);
          do {
            iVar8 = *piVar1;
            cVar5 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar19) {
              *piVar1 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar9 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar9;
            local_90 = (long *)*plVar22;
            FUN_00c44438(lVar9 + 0x8040,&local_90);
          }
        }
        else if (sVar17 == 0) goto LAB_00de3a24;
      }
      plVar22 = local_308;
      if (local_308 != (long *)0x0) {
        plVar21 = local_308 + 3;
        do {
          sVar17 = (short)*plVar21;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar19) {
            *(short *)plVar21 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar17 == 1) {
          piVar1 = (int *)((long)local_308 + 0x1c);
          do {
            iVar8 = *piVar1;
            cVar5 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar19) {
              *piVar1 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar9 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar9;
            local_90 = (long *)*plVar22;
            FUN_00c44438(lVar9 + 0x8040,&local_90);
          }
        }
        else if (sVar17 == 0) goto LAB_00de3a24;
      }
      local_148 = (undefined8 *)0x0;
      uStack_140 = 0;
      FUN_00ca1a48(&local_148,lVar18);
      local_90 = (long *)&DAT_4932f30f47404b80;
      local_88 = 0x3c989c6;
      uStack_84 = 0;
      uStack_82 = 0;
      uStack_81 = 0;
      uStack_80 = 0x10;
      uStack_7f = 0;
      uStack_7d = 0;
      local_78 = (long *)0x0;
      if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0)) {
        FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3e28);
      }
      FUN_019a4bf0(&local_308,&local_148,&local_90,PTR_DAT_047d3e30,0);
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x20))();
      }
      puVar7 = local_148;
      if (local_148 != (undefined8 *)0x0) {
        psVar2 = (short *)(local_148 + 3);
        do {
          sVar17 = *psVar2;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar19) {
            *psVar2 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar17 == 1) {
          piVar1 = (int *)((long)local_148 + 0x1c);
          do {
            iVar8 = *piVar1;
            cVar5 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar19) {
              *piVar1 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar9 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar9;
            local_90 = (long *)*puVar7;
            FUN_00c44438(lVar9 + 0x8040,&local_90);
          }
        }
        else if (sVar17 == 0) goto LAB_00de3a24;
      }
      local_158 = (undefined8 *)0x0;
      uStack_150 = 0;
      FUN_00ca1a48(&local_158,&local_308);
      FUN_01e2bdf4(&local_158);
      puVar7 = local_158;
      if (local_158 != (undefined8 *)0x0) {
        psVar2 = (short *)(local_158 + 3);
        do {
          sVar17 = *psVar2;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar19) {
            *psVar2 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar17 == 1) {
          piVar1 = (int *)((long)local_158 + 0x1c);
          do {
            iVar8 = *piVar1;
            cVar5 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar19) {
              *piVar1 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar9 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar9;
            local_90 = (long *)*puVar7;
            FUN_00c44438(lVar9 + 0x8040,&local_90);
          }
        }
        else if (sVar17 == 0) goto LAB_00de3a24;
      }
      plVar22 = local_308;
      if (local_308 != (long *)0x0) {
        plVar21 = local_308 + 3;
        do {
          sVar17 = (short)*plVar21;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar19) {
            *(short *)plVar21 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar17 == 1) {
          piVar1 = (int *)((long)local_308 + 0x1c);
          do {
            iVar8 = *piVar1;
            cVar5 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar19) {
              *piVar1 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar9 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar9;
            local_90 = (long *)*plVar22;
            FUN_00c44438(lVar9 + 0x8040,&local_90);
          }
        }
        else if (sVar17 == 0) goto LAB_00de3a24;
      }
      FUN_01e2c458(param_2);
      lVar9 = *(long *)(param_2 + 0x28);
      if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
        psVar2 = (short *)(lVar9 + 0x1a);
        sVar17 = *(short *)(lVar9 + 0x1a);
LAB_00de6b6c:
        sVar4 = *psVar2;
        if (sVar4 == sVar17) {
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar19) {
            *psVar2 = sVar17 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_00de6b90;
          bVar19 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00de6b90:
          bVar19 = false;
        }
        if (!bVar19) goto code_r0x00de6b98;
        local_a8 = (long *)(*(long *)(lVar9 + 0x10) + -0x28);
        if (*(long *)(lVar9 + 0x10) != 0) {
          local_90 = (long *)0xa652669cfa6021eb;
          local_88 = 0x3c42a95;
          uStack_84 = 0;
          uStack_82 = 0;
          uStack_81 = 0;
          uStack_80 = 0xb;
          uStack_7f = 0;
          uStack_7d = 0;
          local_78 = (long *)0x0;
          FUN_01dfa7d8(&local_308,&local_a8,0,&local_90);
          if (local_78 != (long *)0x0) {
            (**(code **)(*local_78 + 0x20))();
          }
          if (local_a8 != (long *)0x0) {
            lVar9 = local_a8[6];
            psVar2 = (short *)(lVar9 + 0x1a);
            do {
              sVar17 = *psVar2;
              cVar5 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar19) {
                *psVar2 = sVar17 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar17 == 1) {
              *(undefined8 *)(lVar9 + 0x10) = 0;
              (**(code **)(*local_a8 + 0x50))();
            }
            else if (sVar17 == 0) goto LAB_00de3f38;
          }
          goto LAB_00de3d30;
        }
      }
LAB_00de3d2c:
      local_a8 = (long *)0x0;
      local_308 = (long *)0x0;
      pcStack_300 = (char *)0x0;
LAB_00de3d30:
      FUN_0186af18(param_2,0,&local_308);
      plVar22 = local_308;
      if (local_308 != (long *)0x0) {
        plVar21 = local_308 + 3;
        do {
          sVar17 = (short)*plVar21;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar19) {
            *(short *)plVar21 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar17 == 1) {
          piVar1 = (int *)((long)local_308 + 0x1c);
          do {
            iVar8 = *piVar1;
            cVar5 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar19) {
              *piVar1 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar9 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar9;
            local_90 = (long *)*plVar22;
            FUN_00c44438(lVar9 + 0x8040,&local_90);
          }
        }
        else if (sVar17 == 0) goto LAB_00de3a24;
      }
      FUN_01411484(param_2,1);
      lVar9 = *(long *)(param_2 + 0x28);
      if ((lVar9 == 0) || (*(short *)(lVar9 + 0x1a) == 0)) {
        plVar22 = (long *)0x0;
      }
      else {
        psVar2 = (short *)(lVar9 + 0x1a);
        sVar17 = *(short *)(lVar9 + 0x1a);
        do {
          sVar4 = *psVar2;
          if (sVar4 == sVar17) {
            cVar5 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar19) {
              *psVar2 = sVar17 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 != '\0') goto LAB_00de6bd8;
            bVar19 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00de6bd8:
            bVar19 = false;
          }
          if (bVar19) {
            plVar22 = (long *)0x0;
            if (*(long *)(lVar9 + 0x10) != 0) {
              plVar22 = (long *)(*(long *)(lVar9 + 0x10) + -0x28);
            }
            break;
          }
          plVar22 = (long *)0x0;
          sVar17 = sVar4;
        } while (sVar4 != 0);
      }
      local_98[0] = 2;
      lVar9 = FUN_011457ac(plVar22,plVar22[1],local_98);
      local_308 = (long *)0x0;
      pcStack_300 = (char *)0x0;
      FUN_013dbad8(&local_308,lVar18);
      plVar21 = (long *)(**(code **)(**(long **)(lVar9 + 0x148) + 0x10))
                                  (*(long **)(lVar9 + 0x148),0x40,8);
      if (plVar21 == (long *)0x0) {
        (**(code **)(**(long **)(lVar9 + 0x148) + 0xe8))();
      }
      *plVar21 = 0;
      FUN_010bb1c4((undefined8 *)(lVar9 + 0x148),plVar21 + 2,&local_308);
      plVar10 = local_308;
      plVar21[1] = lVar9 + 0x130;
      lVar18 = *(long *)(lVar9 + 0x130);
      *plVar21 = lVar18;
      *(long **)(lVar18 + 8) = plVar21;
      *(long **)(lVar9 + 0x130) = plVar21;
      *(long *)(lVar9 + 0x140) = *(long *)(lVar9 + 0x140) + 1;
      if (local_308 != (long *)0x0) {
        plVar21 = local_308 + 3;
        do {
          sVar17 = (short)*plVar21;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar19) {
            *(short *)plVar21 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar17 == 1) {
          piVar1 = (int *)((long)local_308 + 0x1c);
          do {
            iVar8 = *piVar1;
            cVar5 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar19) {
              *piVar1 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar18 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar18;
            local_90 = (long *)*plVar10;
            FUN_00c44438(lVar18 + 0x8040,&local_90);
          }
        }
        else if (sVar17 == 0) goto LAB_00de3a24;
      }
      uStack_80 = 0x13;
      uStack_7f = 0;
      uStack_7d = 0;
      local_78 = (long *)0x0;
      local_90 = (long *)&DAT_a8bd1e5eb87a9f71;
      local_88 = 0x3c56b26;
      uStack_84 = 0;
      uStack_82 = 0;
      uStack_81 = 0;
      FUN_00fe3ff4(local_b8,plVar22,&local_90);
      local_a8 = (long *)0x0;
      uStack_a0 = 0;
      FUN_011453dc(&local_a8,local_b8);
      plVar21 = (long *)(**(code **)(**(long **)(lVar9 + 0x180) + 0x10))
                                  (*(long **)(lVar9 + 0x180),0x78,8);
      if (plVar21 == (long *)0x0) {
        (**(code **)(**(long **)(lVar9 + 0x180) + 0xe8))();
      }
      *plVar21 = 0;
      FUN_0109ee3c((undefined8 *)(lVar9 + 0x180),plVar21 + 2,&local_a8);
      plVar10 = local_a8;
      plVar21[1] = lVar9 + 0x168;
      lVar18 = *(long *)(lVar9 + 0x168);
      *plVar21 = lVar18;
      *(long **)(lVar18 + 8) = plVar21;
      *(long **)(lVar9 + 0x168) = plVar21;
      *(long *)(lVar9 + 0x178) = *(long *)(lVar9 + 0x178) + 1;
      if (local_a8 != (long *)0x0) {
        plVar21 = local_a8 + 3;
        do {
          sVar17 = (short)*plVar21;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar19) {
            *(short *)plVar21 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar17 == 1) {
          piVar1 = (int *)((long)local_a8 + 0x1c);
          do {
            iVar8 = *piVar1;
            cVar5 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar19) {
              *piVar1 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar18 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar18;
            local_70[0] = *plVar10;
            FUN_00c44438(lVar18 + 0x8040,local_70);
          }
        }
        else if (sVar17 == 0) goto LAB_00de3a24;
      }
      plVar21 = local_b8[0];
      if (local_b8[0] != (long *)0x0) {
        plVar10 = local_b8[0] + 3;
        do {
          sVar17 = (short)*plVar10;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar19) {
            *(short *)plVar10 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar17 == 1) {
          piVar1 = (int *)((long)local_b8[0] + 0x1c);
          do {
            iVar8 = *piVar1;
            cVar5 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar19) {
              *piVar1 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar18 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar18;
            local_70[0] = *plVar21;
            FUN_00c44438(lVar18 + 0x8040,local_70);
          }
        }
        else if (sVar17 == 0) goto LAB_00de3a24;
      }
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x20))();
      }
      if (plVar22 != (long *)0x0) {
        lVar18 = plVar22[6];
        psVar2 = (short *)(lVar18 + 0x1a);
        do {
          sVar17 = *psVar2;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar19) {
            *psVar2 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar17 == 1) {
          *(undefined8 *)(lVar18 + 0x10) = 0;
          (**(code **)(*plVar22 + 0x50))(plVar22);
        }
        else if (sVar17 == 0) goto LAB_00de3f38;
      }
      goto LAB_00de4488;
    }
    local_c8 = (long *)0x0;
    uStack_c0 = 0;
    FUN_00ca1a48(&local_c8,param_2 + 0x28);
    local_90 = (long *)&DAT_a8bd1e5eb87a9f71;
    local_88 = 0x3c56b26;
    uStack_84 = 0;
    uStack_82 = 0;
    uStack_81 = 0;
    uStack_80 = 0x13;
    uStack_7f = 0;
    uStack_7d = 0;
    local_78 = (long *)0x0;
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    FUN_019a4bf0(&local_308,&local_c8,&local_90,PTR_DAT_047d3e30,0);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    plVar22 = local_c8;
    if (local_c8 != (long *)0x0) {
      plVar21 = local_c8 + 3;
      do {
        sVar17 = (short)*plVar21;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar19) {
          *(short *)plVar21 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar1 = (int *)((long)local_c8 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar18 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar18;
          local_90 = (long *)*plVar22;
          FUN_00c44438(lVar18 + 0x8040,&local_90);
        }
      }
      else if (sVar17 == 0) goto LAB_00de3a24;
    }
    local_d8 = (long *)0x0;
    uStack_d0 = 0;
    FUN_00ca1a48(&local_d8,&local_308);
    FUN_01e2b21c(param_2,&local_d8);
    plVar22 = local_d8;
    if (local_d8 != (long *)0x0) {
      plVar21 = local_d8 + 3;
      do {
        sVar17 = (short)*plVar21;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar19) {
          *(short *)plVar21 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar1 = (int *)((long)local_d8 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar18 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar18;
          local_90 = (long *)*plVar22;
          FUN_00c44438(lVar18 + 0x8040,&local_90);
        }
      }
      else if (sVar17 == 0) goto LAB_00de3a24;
    }
    local_e8 = (long *)0x0;
    uStack_e0 = 0;
    FUN_00ca1a48(&local_e8,&local_308);
    FUN_01e2b730(&local_e8);
    plVar22 = local_e8;
    if (local_e8 != (long *)0x0) {
      plVar21 = local_e8 + 3;
      do {
        sVar17 = (short)*plVar21;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar19) {
          *(short *)plVar21 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar1 = (int *)((long)local_e8 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar18 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar18;
          local_90 = (long *)*plVar22;
          FUN_00c44438(lVar18 + 0x8040,&local_90);
        }
      }
      else if (sVar17 == 0) goto LAB_00de3a24;
    }
    plVar22 = local_308;
    if (local_308 != (long *)0x0) {
      plVar21 = local_308 + 3;
      do {
        sVar17 = (short)*plVar21;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar19) {
          *(short *)plVar21 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar1 = (int *)((long)local_308 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar18 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar18;
          local_90 = (long *)*plVar22;
          FUN_00c44438(lVar18 + 0x8040,&local_90);
        }
      }
      else if (sVar17 == 0) goto LAB_00de3a24;
    }
    FUN_01411484(param_2,1);
    local_90 = (long *)0x0;
    local_88 = 0;
    uStack_84 = 0;
    uStack_82 = 0;
    uStack_81 = 0;
    FUN_013dbad8(&local_90,param_2 + 0x28);
    FUN_013df364(local_f8,&local_90,1);
    if (local_f8[0] != (undefined8 *)0x0) {
      psVar2 = (short *)(local_f8[0] + 3);
      do {
        sVar17 = *psVar2;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar19) {
          *psVar2 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar1 = (int *)((long)local_f8[0] + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar18 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar18;
          local_308 = (long *)*local_f8[0];
          FUN_00c44438(lVar18 + 0x8040,&local_308);
        }
      }
      else if (sVar17 == 0) goto LAB_00de3a24;
    }
    plVar22 = local_90;
    if (local_90 == (long *)0x0) {
      return;
    }
    plVar21 = local_90 + 3;
    do {
      sVar17 = (short)*plVar21;
      cVar5 = '\x01';
      bVar19 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar19) {
        *(short *)plVar21 = sVar17 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar17 == 1) {
      piVar1 = (int *)((long)local_90 + 0x1c);
      do {
        iVar8 = *piVar1;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar19) {
          *piVar1 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 == -1) {
        return;
      }
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      pplVar13 = &local_308;
      lVar18 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar18;
      local_308 = (long *)*plVar22;
      goto LAB_00de50d4;
    }
    goto LAB_00de3a20;
  case 1:
    cVar5 = *(char *)(param_2 + 0x100);
    FUN_00aa1bc4(param_2);
    if (cVar5 != '\0') {
      FUN_0186ad1c(param_2,"main.playables.network.NetFieldPartnerPokemon");
      FUN_01411484(param_2,1);
      plVar21 = (long *)(param_2 + 0x28);
      local_90 = (long *)0x0;
      local_88 = 0;
      uStack_84 = 0;
      uStack_82 = 0;
      uStack_81 = 0;
      FUN_013dbad8(&local_90,plVar21);
      FUN_013df364(local_168,&local_90,1);
      if (local_168[0] != (undefined8 *)0x0) {
        psVar2 = (short *)(local_168[0] + 3);
        do {
          sVar17 = *psVar2;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar19) {
            *psVar2 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar17 == 1) {
          piVar1 = (int *)((long)local_168[0] + 0x1c);
          do {
            iVar8 = *piVar1;
            cVar5 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar19) {
              *piVar1 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar18 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar18;
            local_308 = (long *)*local_168[0];
            FUN_00c44438(lVar18 + 0x8040,&local_308);
          }
        }
        else if (sVar17 == 0) goto LAB_00de3a24;
      }
      plVar22 = local_90;
      if (local_90 != (long *)0x0) {
        plVar10 = local_90 + 3;
        do {
          sVar17 = (short)*plVar10;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar19) {
            *(short *)plVar10 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar17 == 1) {
          piVar1 = (int *)((long)local_90 + 0x1c);
          do {
            iVar8 = *piVar1;
            cVar5 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar19) {
              *piVar1 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar18 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar18;
            local_308 = (long *)*plVar22;
            FUN_00c44438(lVar18 + 0x8040,&local_308);
          }
        }
        else if (sVar17 == 0) goto LAB_00de3a24;
      }
      uVar12 = *(undefined8 *)(param_2 + 0xf8);
      local_90 = (long *)0x0;
      local_88 = 0;
      uStack_84 = 0;
      uStack_82 = 0;
      uStack_81 = 0;
      FUN_00ca1a48(&local_90,plVar21);
      FUN_00aa5334(uVar12,&local_90);
      plVar22 = local_90;
      if (local_90 != (long *)0x0) {
        plVar10 = local_90 + 3;
        do {
          sVar17 = (short)*plVar10;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar19) {
            *(short *)plVar10 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar17 == 1) {
          piVar1 = (int *)((long)local_90 + 0x1c);
          do {
            iVar8 = *piVar1;
            cVar5 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar19) {
              *piVar1 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar18 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar18;
            local_308 = (long *)*plVar22;
            FUN_00c44438(lVar18 + 0x8040,&local_308);
          }
        }
        else if (sVar17 == 0) goto LAB_00de3a24;
      }
      lVar18 = *plVar21;
      if ((lVar18 == 0) || (*(short *)(lVar18 + 0x1a) == 0)) {
        plVar22 = (long *)0x0;
      }
      else {
        psVar2 = (short *)(lVar18 + 0x1a);
        sVar17 = *(short *)(lVar18 + 0x1a);
        do {
          sVar4 = *psVar2;
          if (sVar4 == sVar17) {
            cVar5 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar19) {
              *psVar2 = sVar17 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 != '\0') goto LAB_00de6ae8;
            bVar19 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00de6ae8:
            bVar19 = false;
          }
          if (bVar19) {
            plVar22 = (long *)0x0;
            if (*(long *)(lVar18 + 0x10) != 0) {
              plVar22 = (long *)(*(long *)(lVar18 + 0x10) + -0x28);
            }
            break;
          }
          plVar22 = (long *)0x0;
          sVar17 = sVar4;
        } while (sVar4 != 0);
      }
      local_b8[0] = (long *)CONCAT62(local_b8[0]._2_6_,9);
      lVar18 = FUN_011457ac(plVar22,plVar22[1],local_b8);
      local_90 = (long *)0x0;
      local_88 = 0;
      uStack_84 = 0;
      uStack_82 = 0;
      uStack_81 = 0;
      FUN_013dbad8(&local_90,plVar21);
      plVar10 = (long *)(**(code **)(**(long **)(lVar18 + 0x148) + 0x10))
                                  (*(long **)(lVar18 + 0x148),0x40,8);
      if (plVar10 == (long *)0x0) {
        (**(code **)(**(long **)(lVar18 + 0x148) + 0xe8))();
      }
      *plVar10 = 0;
      FUN_010bb1c4((undefined8 *)(lVar18 + 0x148),plVar10 + 2,&local_90);
      plVar25 = local_90;
      plVar10[1] = lVar18 + 0x130;
      lVar9 = *(long *)(lVar18 + 0x130);
      *plVar10 = lVar9;
      *(long **)(lVar9 + 8) = plVar10;
      *(long **)(lVar18 + 0x130) = plVar10;
      *(long *)(lVar18 + 0x140) = *(long *)(lVar18 + 0x140) + 1;
      if (local_90 != (long *)0x0) {
        plVar10 = local_90 + 3;
        do {
          sVar17 = (short)*plVar10;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar19) {
            *(short *)plVar10 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar17 == 1) {
          piVar1 = (int *)((long)local_90 + 0x1c);
          do {
            iVar8 = *piVar1;
            cVar5 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar19) {
              *piVar1 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar9 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar9;
            local_308 = (long *)*plVar25;
            FUN_00c44438(lVar9 + 0x8040,&local_308);
          }
        }
        else if (sVar17 == 0) goto LAB_00de3a24;
      }
      local_308 = (long *)0x0;
      pcStack_300 = (char *)0x0;
      FUN_013dbad8(&local_308,plVar21);
      plVar21 = (long *)(**(code **)(**(long **)(lVar18 + 0x180) + 0x10))
                                  (*(long **)(lVar18 + 0x180),0x78,8);
      if (plVar21 == (long *)0x0) {
        (**(code **)(**(long **)(lVar18 + 0x180) + 0xe8))();
      }
      *plVar21 = 0;
      FUN_0109ee3c((undefined8 *)(lVar18 + 0x180),plVar21 + 2,&local_308);
      plVar10 = local_308;
      plVar21[1] = lVar18 + 0x168;
      lVar9 = *(long *)(lVar18 + 0x168);
      *plVar21 = lVar9;
      *(long **)(lVar9 + 8) = plVar21;
      *(long **)(lVar18 + 0x168) = plVar21;
      *(long *)(lVar18 + 0x178) = *(long *)(lVar18 + 0x178) + 1;
      if (local_308 != (long *)0x0) {
        plVar21 = local_308 + 3;
        do {
          sVar17 = (short)*plVar21;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar19) {
            *(short *)plVar21 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar17 == 1) {
          piVar1 = (int *)((long)local_308 + 0x1c);
          do {
            iVar8 = *piVar1;
            cVar5 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar19) {
              *piVar1 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar18 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar18;
            local_a8 = (long *)*plVar10;
            FUN_00c44438(lVar18 + 0x8040,&local_a8);
          }
        }
        else if (sVar17 == 0) goto LAB_00de3a24;
      }
      if (plVar22 == (long *)0x0) {
        return;
      }
      lVar18 = plVar22[6];
      psVar2 = (short *)(lVar18 + 0x1a);
      do {
        sVar17 = *psVar2;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar19) {
          *psVar2 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_00de2e14:
      if (sVar17 == 1) {
        *(undefined8 *)(lVar18 + 0x10) = 0;
        (**(code **)(*plVar22 + 0x50))(plVar22);
        return;
      }
      if (sVar17 != 0) {
        return;
      }
LAB_00de3f38:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
    FUN_0186ad1c(param_2,"main.field.behaviour.FieldPartnerPokemon");
    lVar18 = param_2 + 0x28;
    local_178 = (undefined8 *)0x0;
    local_170 = 0;
    FUN_00ca1a48(&local_178,lVar18);
    puVar6 = PTR_DAT_047d3e28;
    local_90 = (long *)0x9ed15e43ff06cc17;
    local_88 = 0x3bdb7b9;
    uStack_84 = 0;
    uStack_82 = 0;
    uStack_81 = 0;
    uStack_80 = 0x15;
    uStack_7f = 0;
    uStack_7d = 0;
    local_78 = (long *)0x0;
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    FUN_019a4bf0(&local_308,&local_178,&local_90,PTR_DAT_047d3e30,0);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    puVar7 = local_178;
    if (local_178 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_178 + 3);
      do {
        sVar17 = *psVar2;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar19) {
          *psVar2 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar1 = (int *)((long)local_178 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_90 = (long *)*puVar7;
          FUN_00c44438(lVar9 + 0x8040,&local_90);
        }
      }
      else if (sVar17 == 0) goto LAB_00de3a24;
    }
    local_180 = 0;
    local_188 = (undefined8 *)0x0;
    FUN_00ca1a48(&local_188,&local_308);
    FUN_01e2c984(param_2,&local_188);
    puVar7 = local_188;
    if (local_188 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_188 + 3);
      do {
        sVar17 = *psVar2;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar19) {
          *psVar2 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar1 = (int *)((long)local_188 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_90 = (long *)*puVar7;
          FUN_00c44438(lVar9 + 0x8040,&local_90);
        }
      }
      else if (sVar17 == 0) goto LAB_00de3a24;
    }
    local_198 = (undefined8 *)0x0;
    local_190 = 0;
    FUN_00ca1a48(&local_198,lVar18);
    local_90 = (long *)0x803e956a23db6bc5;
    local_88 = 0x3c63bc8;
    uStack_84 = 0;
    uStack_82 = 0;
    uStack_81 = 0;
    uStack_80 = 0x10;
    uStack_7f = 0;
    uStack_7d = 0;
    local_78 = (long *)0x0;
    if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    FUN_019a4bf0(&local_a8,&local_198,&local_90,PTR_DAT_047d3e30,0);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    puVar7 = local_198;
    if (local_198 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_198 + 3);
      do {
        sVar17 = *psVar2;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar19) {
          *psVar2 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar1 = (int *)((long)local_198 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_90 = (long *)*puVar7;
          FUN_00c44438(lVar9 + 0x8040,&local_90);
        }
      }
      else if (sVar17 == 0) goto LAB_00de3a24;
    }
    local_1a0 = 0;
    local_1a8 = (undefined8 *)0x0;
    FUN_00ca1a48(&local_1a8,&local_a8);
    FUN_01e2cb98(&local_1a8,param_2 + 0x78,0);
    puVar7 = local_1a8;
    if (local_1a8 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_1a8 + 3);
      do {
        sVar17 = *psVar2;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar19) {
          *psVar2 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar1 = (int *)((long)local_1a8 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_90 = (long *)*puVar7;
          FUN_00c44438(lVar9 + 0x8040,&local_90);
        }
      }
      else if (sVar17 == 0) goto LAB_00de3a24;
    }
    local_1b8 = (long *)0x0;
    local_1b0 = 0;
    FUN_00ca1a48(&local_1b8,lVar18);
    local_90 = (long *)&DAT_fe081e60b123f873;
    local_88 = 0x3c6a314;
    uStack_84 = 0;
    uStack_82 = 0;
    uStack_81 = 0;
    uStack_80 = 0xe;
    uStack_7f = 0;
    uStack_7d = 0;
    local_78 = (long *)0x0;
    if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    FUN_019a4bf0(local_b8,&local_1b8,&local_90,PTR_DAT_047d3e30,0);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    plVar22 = local_1b8;
    if (local_1b8 != (long *)0x0) {
      plVar21 = local_1b8 + 3;
      do {
        sVar17 = (short)*plVar21;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar19) {
          *(short *)plVar21 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar1 = (int *)((long)local_1b8 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_90 = (long *)*plVar22;
          FUN_00c44438(lVar9 + 0x8040,&local_90);
        }
      }
      else if (sVar17 == 0) goto LAB_00de3a24;
    }
    local_1c0 = 0;
    local_1c8 = (long *)0x0;
    FUN_00ca1a48(&local_1c8,local_b8);
    FUN_01e2cb98(&local_1c8,param_2 + 0xb8,0);
    plVar22 = local_1c8;
    if (local_1c8 != (long *)0x0) {
      plVar21 = local_1c8 + 3;
      do {
        sVar17 = (short)*plVar21;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar19) {
          *(short *)plVar21 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar1 = (int *)((long)local_1c8 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_90 = (long *)*plVar22;
          FUN_00c44438(lVar9 + 0x8040,&local_90);
        }
      }
      else if (sVar17 == 0) goto LAB_00de3a24;
    }
    plVar22 = local_b8[0];
    if (local_b8[0] != (long *)0x0) {
      plVar21 = local_b8[0] + 3;
      do {
        sVar17 = (short)*plVar21;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar19) {
          *(short *)plVar21 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar1 = (int *)((long)local_b8[0] + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_90 = (long *)*plVar22;
          FUN_00c44438(lVar9 + 0x8040,&local_90);
        }
      }
      else if (sVar17 == 0) goto LAB_00de3a24;
    }
    plVar22 = local_a8;
    if (local_a8 != (long *)0x0) {
      plVar21 = local_a8 + 3;
      do {
        sVar17 = (short)*plVar21;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar19) {
          *(short *)plVar21 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar1 = (int *)((long)local_a8 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_90 = (long *)*plVar22;
          FUN_00c44438(lVar9 + 0x8040,&local_90);
        }
      }
      else if (sVar17 == 0) goto LAB_00de3a24;
    }
    plVar22 = local_308;
    if (local_308 != (long *)0x0) {
      plVar21 = local_308 + 3;
      do {
        sVar17 = (short)*plVar21;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar19) {
          *(short *)plVar21 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar1 = (int *)((long)local_308 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_90 = (long *)*plVar22;
          FUN_00c44438(lVar9 + 0x8040,&local_90);
        }
      }
      else if (sVar17 == 0) goto LAB_00de3a24;
    }
    local_1d8 = (long *)0x0;
    uStack_1d0 = 0;
    FUN_00ca1a48(&local_1d8,lVar18);
    local_90 = (long *)&DAT_4932f30f47404b80;
    local_88 = 0x3c989c6;
    uStack_84 = 0;
    uStack_82 = 0;
    uStack_81 = 0;
    uStack_80 = 0x10;
    uStack_7f = 0;
    uStack_7d = 0;
    local_78 = (long *)0x0;
    if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    FUN_019a4bf0(&local_308,&local_1d8,&local_90,PTR_DAT_047d3e30,0);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    plVar22 = local_1d8;
    if (local_1d8 != (long *)0x0) {
      plVar21 = local_1d8 + 3;
      do {
        sVar17 = (short)*plVar21;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar19) {
          *(short *)plVar21 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar1 = (int *)((long)local_1d8 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar18 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar18;
          local_90 = (long *)*plVar22;
          FUN_00c44438(lVar18 + 0x8040,&local_90);
        }
      }
      else if (sVar17 == 0) goto LAB_00de3a24;
    }
    local_1e8 = (long *)0x0;
    uStack_1e0 = 0;
    FUN_00ca1a48(&local_1e8,&local_308);
    FUN_01e2bdf4(&local_1e8);
    plVar22 = local_1e8;
    if (local_1e8 != (long *)0x0) {
      plVar21 = local_1e8 + 3;
      do {
        sVar17 = (short)*plVar21;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar19) {
          *(short *)plVar21 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar1 = (int *)((long)local_1e8 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar18 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar18;
          local_90 = (long *)*plVar22;
          FUN_00c44438(lVar18 + 0x8040,&local_90);
        }
      }
      else if (sVar17 == 0) goto LAB_00de3a24;
    }
    plVar22 = local_308;
    if (local_308 != (long *)0x0) {
      plVar21 = local_308 + 3;
      do {
        sVar17 = (short)*plVar21;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar19) {
          *(short *)plVar21 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar1 = (int *)((long)local_308 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar18 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar18;
          local_90 = (long *)*plVar22;
          FUN_00c44438(lVar18 + 0x8040,&local_90);
        }
      }
      else if (sVar17 == 0) goto LAB_00de3a24;
    }
    FUN_01e2c458(param_2);
    local_90 = (long *)0x0;
    local_88 = 0;
    uStack_84 = 0;
    uStack_82 = 0;
    uStack_81 = 0;
    FUN_0186af18(param_2,1,&local_90);
    plVar22 = local_90;
    if (local_90 != (long *)0x0) {
      plVar21 = local_90 + 3;
      do {
        sVar17 = (short)*plVar21;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar19) {
          *(short *)plVar21 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar1 = (int *)((long)local_90 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar18 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar18;
          local_308 = (long *)*plVar22;
          FUN_00c44438(lVar18 + 0x8040,&local_308);
        }
      }
      else if (sVar17 == 0) goto LAB_00de3a24;
    }
    local_90 = (long *)CONCAT71(local_90._1_7_,4);
    lVar18 = *(long *)(param_2 + 0x28);
    if ((lVar18 != 0) && (*(short *)(lVar18 + 0x1a) != 0)) {
      psVar2 = (short *)(lVar18 + 0x1a);
      sVar17 = *(short *)(lVar18 + 0x1a);
LAB_00de6c98:
      sVar4 = *psVar2;
      if (sVar4 == sVar17) {
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar19) {
          *psVar2 = sVar17 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_00de6cbc;
        bVar19 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00de6cbc:
        bVar19 = false;
      }
      if (!bVar19) goto code_r0x00de6cc4;
      lVar18 = *(long *)(lVar18 + 0x10);
      if (lVar18 != 0) {
        plVar22 = (long *)(lVar18 + -0x28);
        FUN_01e2df14(plVar22,*(undefined8 *)(lVar18 + -0x20),&local_90);
        lVar18 = *(long *)(lVar18 + 8);
        psVar2 = (short *)(lVar18 + 0x1a);
        do {
          sVar17 = *psVar2;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar19) {
            *psVar2 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar17 == 1) {
          *(undefined8 *)(lVar18 + 0x10) = 0;
          (**(code **)(*plVar22 + 0x50))(plVar22);
        }
        else if (sVar17 == 0) goto LAB_00de3f38;
      }
    }
LAB_00de43bc:
    FUN_01e2cf28(param_2,0x100);
    FUN_01411484(param_2,1);
    FUN_01e2d13c(param_2);
    goto LAB_00de4488;
  case 2:
    FUN_00aa1bc4(param_2);
    FUN_0186ad1c(param_2,"main.field.behaviour.DanPartnerPokemon");
    local_1f8 = (undefined8 *)0x0;
    uStack_1f0 = 0;
    FUN_01495548(param_2,0,&local_1f8);
    puVar7 = local_1f8;
    if (local_1f8 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_1f8 + 3);
      do {
        sVar17 = *psVar2;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar19) {
          *psVar2 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar1 = (int *)((long)local_1f8 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar18 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar18;
          local_90 = (long *)*puVar7;
          FUN_00c44438(lVar18 + 0x8040,&local_90);
        }
      }
      else if (sVar17 == 0) goto LAB_00de3a24;
    }
    local_208 = (long *)0x0;
    uStack_200 = 0;
    FUN_00ca1a48(&local_208,param_2 + 0x28);
    puVar6 = PTR_DAT_047d3e28;
    local_90 = (long *)0x803e956a23db6bc5;
    local_88 = 0x3c63bc8;
    uStack_84 = 0;
    uStack_82 = 0;
    uStack_81 = 0;
    uStack_80 = 0x10;
    uStack_7f = 0;
    uStack_7d = 0;
    local_78 = (long *)0x0;
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    FUN_019a4bf0(&local_308,&local_208,&local_90,PTR_DAT_047d3e30,0);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    plVar22 = local_208;
    if (local_208 != (long *)0x0) {
      plVar21 = local_208 + 3;
      do {
        sVar17 = (short)*plVar21;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar19) {
          *(short *)plVar21 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar1 = (int *)((long)local_208 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar18 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar18;
          local_90 = (long *)*plVar22;
          FUN_00c44438(lVar18 + 0x8040,&local_90);
        }
      }
      else if (sVar17 == 0) goto LAB_00de3a24;
    }
    local_218 = (long *)0x0;
    uStack_210 = 0;
    FUN_00ca1a48(&local_218,&local_308);
    FUN_01e2cb98(&local_218,param_2 + 0x78,*(undefined1 *)(param_2 + 0x101));
    plVar22 = local_218;
    if (local_218 != (long *)0x0) {
      plVar21 = local_218 + 3;
      do {
        sVar17 = (short)*plVar21;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar19) {
          *(short *)plVar21 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar1 = (int *)((long)local_218 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar18 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar18;
          local_90 = (long *)*plVar22;
          FUN_00c44438(lVar18 + 0x8040,&local_90);
        }
      }
      else if (sVar17 == 0) goto LAB_00de3a24;
    }
    plVar22 = local_308;
    if (local_308 != (long *)0x0) {
      plVar21 = local_308 + 3;
      do {
        sVar17 = (short)*plVar21;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar19) {
          *(short *)plVar21 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar1 = (int *)((long)local_308 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar18 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar18;
          local_90 = (long *)*plVar22;
          FUN_00c44438(lVar18 + 0x8040,&local_90);
        }
      }
      else if (sVar17 == 0) goto LAB_00de3a24;
    }
    local_228 = (long *)0x0;
    uStack_220 = 0;
    FUN_00ca1a48(&local_228,param_2 + 0x28);
    local_90 = (long *)&DAT_4932f30f47404b80;
    local_88 = 0x3c989c6;
    uStack_84 = 0;
    uStack_82 = 0;
    uStack_81 = 0;
    uStack_80 = 0x10;
    uStack_7f = 0;
    uStack_7d = 0;
    local_78 = (long *)0x0;
    if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    FUN_019a4bf0(&local_308,&local_228,&local_90,PTR_DAT_047d3e30,0);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    plVar22 = local_228;
    if (local_228 != (long *)0x0) {
      plVar21 = local_228 + 3;
      do {
        sVar17 = (short)*plVar21;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar19) {
          *(short *)plVar21 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar1 = (int *)((long)local_228 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar18 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar18;
          local_90 = (long *)*plVar22;
          FUN_00c44438(lVar18 + 0x8040,&local_90);
        }
      }
      else if (sVar17 == 0) goto LAB_00de3a24;
    }
    local_238 = (long *)0x0;
    uStack_230 = 0;
    FUN_00ca1a48(&local_238,&local_308);
    FUN_01e2bdf4(&local_238);
    plVar22 = local_238;
    if (local_238 != (long *)0x0) {
      plVar21 = local_238 + 3;
      do {
        sVar17 = (short)*plVar21;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar19) {
          *(short *)plVar21 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar1 = (int *)((long)local_238 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar18 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar18;
          local_90 = (long *)*plVar22;
          FUN_00c44438(lVar18 + 0x8040,&local_90);
        }
      }
      else if (sVar17 == 0) goto LAB_00de3a24;
    }
    plVar22 = local_308;
    if (local_308 != (long *)0x0) {
      plVar21 = local_308 + 3;
      do {
        sVar17 = (short)*plVar21;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar19) {
          *(short *)plVar21 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar1 = (int *)((long)local_308 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar18 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar18;
          local_90 = (long *)*plVar22;
          FUN_00c44438(lVar18 + 0x8040,&local_90);
        }
      }
      else if (sVar17 == 0) goto LAB_00de3a24;
    }
    FUN_01e2c458(param_2);
    local_90 = (long *)0x0;
    local_88 = 0;
    uStack_84 = 0;
    uStack_82 = 0;
    uStack_81 = 0;
    FUN_0186af18(param_2,1,&local_90);
    plVar22 = local_90;
    if (local_90 != (long *)0x0) {
      plVar21 = local_90 + 3;
      do {
        sVar17 = (short)*plVar21;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar19) {
          *(short *)plVar21 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar1 = (int *)((long)local_90 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar18 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar18;
          local_308 = (long *)*plVar22;
          FUN_00c44438(lVar18 + 0x8040,&local_308);
        }
      }
      else if (sVar17 == 0) goto LAB_00de3a24;
    }
    local_90 = (long *)CONCAT71(local_90._1_7_,4);
    lVar18 = *(long *)(param_2 + 0x28);
    if ((lVar18 != 0) && (*(short *)(lVar18 + 0x1a) != 0)) {
      psVar2 = (short *)(lVar18 + 0x1a);
      sVar17 = *(short *)(lVar18 + 0x1a);
LAB_00de2ac8:
      sVar4 = *psVar2;
      if (sVar4 == sVar17) {
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar19) {
          *psVar2 = sVar17 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_00de2aec;
        bVar19 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00de2aec:
        bVar19 = false;
      }
      if (!bVar19) goto code_r0x00de2af4;
      lVar18 = *(long *)(lVar18 + 0x10);
      if (lVar18 != 0) {
        plVar22 = (long *)(lVar18 + -0x28);
        FUN_01e2df14(plVar22,*(undefined8 *)(lVar18 + -0x20),&local_90);
        lVar18 = *(long *)(lVar18 + 8);
        psVar2 = (short *)(lVar18 + 0x1a);
        do {
          sVar17 = *psVar2;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar19) {
            *psVar2 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
LAB_00de6aa4:
        if (sVar17 == 1) {
          *(undefined8 *)(lVar18 + 0x10) = 0;
          (**(code **)(*plVar22 + 0x50))(plVar22);
        }
        else if (sVar17 == 0) goto LAB_00de3f38;
      }
    }
    goto LAB_00de37d8;
  case 3:
    cVar5 = *(char *)(param_2 + 0x100);
    FUN_00aa1bc4(param_2);
    FUN_0186ad1c(param_2,"main.field.behaviour.PokePicnicPokemon");
    if (cVar5 == '\0') {
      local_278 = (undefined8 *)0x0;
      uStack_270 = 0;
      FUN_01495548(param_2,0,&local_278);
      puVar7 = local_278;
      if (local_278 != (undefined8 *)0x0) {
        psVar2 = (short *)(local_278 + 3);
        do {
          sVar17 = *psVar2;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar19) {
            *psVar2 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar17 == 1) {
          piVar1 = (int *)((long)local_278 + 0x1c);
          do {
            iVar8 = *piVar1;
            cVar5 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar19) {
              *piVar1 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar18 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar18;
            local_90 = (long *)*puVar7;
            FUN_00c44438(lVar18 + 0x8040,&local_90);
          }
        }
        else if (sVar17 == 0) goto LAB_00de3a24;
      }
      FUN_01e2c458(param_2);
      local_90 = (long *)0x0;
      local_88 = 0;
      uStack_84 = 0;
      uStack_82 = 0;
      uStack_81 = 0;
      FUN_0186af18(param_2,1,&local_90);
      plVar22 = local_90;
      if (local_90 != (long *)0x0) {
        plVar21 = local_90 + 3;
        do {
          sVar17 = (short)*plVar21;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar19) {
            *(short *)plVar21 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar17 == 1) {
          piVar1 = (int *)((long)local_90 + 0x1c);
          do {
            iVar8 = *piVar1;
            cVar5 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar19) {
              *piVar1 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar18 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar18;
            local_308 = (long *)*plVar22;
            FUN_00c44438(lVar18 + 0x8040,&local_308);
          }
        }
        else if (sVar17 == 0) goto LAB_00de3a24;
      }
      local_90 = (long *)CONCAT71(local_90._1_7_,5);
      lVar18 = *(long *)(param_2 + 0x28);
      if ((lVar18 != 0) && (*(short *)(lVar18 + 0x1a) != 0)) {
        psVar2 = (short *)(lVar18 + 0x1a);
        sVar17 = *(short *)(lVar18 + 0x1a);
LAB_00de6b24:
        sVar4 = *psVar2;
        if (sVar4 == sVar17) {
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar19) {
            *psVar2 = sVar17 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_00de6b48;
          bVar19 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00de6b48:
          bVar19 = false;
        }
        if (!bVar19) goto code_r0x00de6b50;
        lVar18 = *(long *)(lVar18 + 0x10);
        if (lVar18 != 0) {
          plVar22 = (long *)(lVar18 + -0x28);
          FUN_01e2df14(plVar22,*(undefined8 *)(lVar18 + -0x20),&local_90);
          lVar18 = *(long *)(lVar18 + 8);
          psVar2 = (short *)(lVar18 + 0x1a);
          do {
            sVar17 = *psVar2;
            cVar5 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar19) {
              *psVar2 = sVar17 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar17 == 1) {
            *(undefined8 *)(lVar18 + 0x10) = 0;
            (**(code **)(*plVar22 + 0x50))(plVar22);
          }
          else if (sVar17 == 0) goto LAB_00de3f38;
        }
      }
LAB_00de4470:
      FUN_01e2cf28(param_2,0x80);
      goto LAB_00de447c;
    }
    local_248 = (undefined8 *)0x0;
    uStack_240 = 0;
    FUN_00ca1a48(&local_248,param_2 + 0x28);
    local_90 = (long *)0x7aa8e0a6e5508be5;
    local_88 = 0x3c03bdb;
    uStack_84 = 0;
    uStack_82 = 0;
    uStack_81 = 0;
    uStack_80 = 0x14;
    uStack_7f = 0;
    uStack_7d = 0;
    local_78 = (long *)0x0;
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    FUN_019a4bf0(&local_308,&local_248,&local_90,PTR_DAT_047d3e30,0);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    puVar7 = local_248;
    if (local_248 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_248 + 3);
      do {
        sVar17 = *psVar2;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar19) {
          *psVar2 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar1 = (int *)((long)local_248 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar18 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar18;
          local_90 = (long *)*puVar7;
          FUN_00c44438(lVar18 + 0x8040,&local_90);
        }
      }
      else if (sVar17 == 0) goto LAB_00de3a24;
    }
    local_258 = (undefined8 *)0x0;
    uStack_250 = 0;
    FUN_00ca1a48(&local_258,&local_308);
    FUN_01e2d628(param_2,&local_258);
    puVar7 = local_258;
    if (local_258 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_258 + 3);
      do {
        sVar17 = *psVar2;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar19) {
          *psVar2 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar1 = (int *)((long)local_258 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar18 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar18;
          local_90 = (long *)*puVar7;
          FUN_00c44438(lVar18 + 0x8040,&local_90);
        }
      }
      else if (sVar17 == 0) goto LAB_00de3a24;
    }
    local_268 = (undefined8 *)0x0;
    uStack_260 = 0;
    FUN_00ca1a48(&local_268,&local_308);
    FUN_01e2b730(&local_268);
    puVar7 = local_268;
    if (local_268 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_268 + 3);
      do {
        sVar17 = *psVar2;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar19) {
          *psVar2 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar1 = (int *)((long)local_268 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar18 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar18;
          local_90 = (long *)*puVar7;
          FUN_00c44438(lVar18 + 0x8040,&local_90);
        }
      }
      else if (sVar17 == 0) goto LAB_00de3a24;
    }
    if (local_308 == (long *)0x0) {
      return;
    }
    plVar22 = local_308 + 3;
    do {
      sVar17 = (short)*plVar22;
      cVar5 = '\x01';
      bVar19 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar19) {
        *(short *)plVar22 = sVar17 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar17 == 1) {
      piVar1 = (int *)((long)local_308 + 0x1c);
      do {
        iVar8 = *piVar1;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar19) {
          *piVar1 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        plVar22 = local_308;
      } while (cVar5 != '\0');
      goto LAB_00de5098;
    }
    goto LAB_00de3a20;
  case 4:
    FUN_00aa1bc4(param_2);
    local_288 = (undefined8 *)0x0;
    uStack_280 = 0;
    FUN_01495548(param_2,0,&local_288);
    puVar7 = local_288;
    if (local_288 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_288 + 3);
      do {
        sVar17 = *psVar2;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar19) {
          *psVar2 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar1 = (int *)((long)local_288 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar18 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar18;
          local_90 = (long *)*puVar7;
          FUN_00c44438(lVar18 + 0x8040,&local_90);
        }
      }
      else if (sVar17 == 0) goto LAB_00de3a24;
    }
    goto LAB_00de37d8;
  case 5:
    FUN_00aa1bc4(param_2);
    FUN_0186ad1c(param_2,"main.field.behaviour.DanPokemonBehavior");
    local_298 = (undefined8 *)0x0;
    uStack_290 = 0;
    FUN_01495548(param_2,0,&local_298);
    puVar7 = local_298;
    if (local_298 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_298 + 3);
      do {
        sVar17 = *psVar2;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar19) {
          *psVar2 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar1 = (int *)((long)local_298 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar18 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar18;
          local_90 = (long *)*puVar7;
          FUN_00c44438(lVar18 + 0x8040,&local_90);
        }
      }
      else if (sVar17 == 0) goto LAB_00de3a24;
    }
    FUN_01e2c458(param_2);
    FUN_01411484(param_2,1);
    local_90 = (long *)CONCAT71(local_90._1_7_,3);
    lVar18 = *(long *)(param_2 + 0x28);
    if ((lVar18 != 0) && (*(short *)(lVar18 + 0x1a) != 0)) {
      psVar2 = (short *)(lVar18 + 0x1a);
      sVar17 = *(short *)(lVar18 + 0x1a);
LAB_00de2b88:
      sVar4 = *psVar2;
      if (sVar4 == sVar17) {
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar19) {
          *psVar2 = sVar17 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_00de2bac;
        bVar19 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00de2bac:
        bVar19 = false;
      }
      if (!bVar19) goto code_r0x00de2bb4;
      lVar18 = *(long *)(lVar18 + 0x10);
      if (lVar18 == 0) {
        return;
      }
      plVar22 = (long *)(lVar18 + -0x28);
      FUN_01e2df14(plVar22,*(undefined8 *)(lVar18 + -0x20),&local_90);
      lVar18 = *(long *)(lVar18 + 8);
      psVar2 = (short *)(lVar18 + 0x1a);
      do {
        sVar17 = *psVar2;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar19) {
          *psVar2 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      goto LAB_00de2e14;
    }
    break;
  case 6:
    FUN_018fd6d4(param_2);
    FUN_00aa1bc4(param_2);
    FUN_01411484(param_2,0);
    FUN_0186ad1c(param_2,"main.field.behaviour.FieldTrafficNpcPokemon");
    local_90 = (long *)0xd15bf3542b12509a;
    local_88 = 0x3c50418;
    uStack_84 = 0;
    uStack_82 = 0;
    uStack_81 = 0;
    uStack_80 = 0xb;
    uStack_7f = 0;
    uStack_7d = 0;
    local_78 = (long *)0x0;
    FUN_019a48c4(param_2,&local_90,param_1 + 0x108);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    FUN_01e2db3c(param_2);
    break;
  case 8:
    FUN_00aa1bc4(param_2);
    FUN_0186ad1c(param_2,"main.field.behaviour.event.event_partner.EventPartnerPokemon");
    local_2a8 = (long *)0x0;
    uStack_2a0 = 0;
    FUN_00ca1a48(&local_2a8,param_2 + 0x28);
    puVar6 = PTR_DAT_047d3e28;
    local_90 = (long *)0x9ed15e43ff06cc17;
    local_88 = 0x3bdb7b9;
    uStack_84 = 0;
    uStack_82 = 0;
    uStack_81 = 0;
    uStack_80 = 0x15;
    uStack_7f = 0;
    uStack_7d = 0;
    local_78 = (long *)0x0;
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    FUN_019a4bf0(&local_308,&local_2a8,&local_90,PTR_DAT_047d3e30,0);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    plVar22 = local_2a8;
    if (local_2a8 != (long *)0x0) {
      plVar21 = local_2a8 + 3;
      do {
        sVar17 = (short)*plVar21;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar19) {
          *(short *)plVar21 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar1 = (int *)((long)local_2a8 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar18 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar18;
          local_90 = (long *)*plVar22;
          FUN_00c44438(lVar18 + 0x8040,&local_90);
        }
      }
      else if (sVar17 == 0) goto LAB_00de3a24;
    }
    local_2b8 = (long *)0x0;
    uStack_2b0 = 0;
    FUN_00ca1a48(&local_2b8,&local_308);
    FUN_01e2c984(param_2,&local_2b8);
    plVar22 = local_2b8;
    if (local_2b8 != (long *)0x0) {
      plVar21 = local_2b8 + 3;
      do {
        sVar17 = (short)*plVar21;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar19) {
          *(short *)plVar21 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar1 = (int *)((long)local_2b8 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar18 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar18;
          local_90 = (long *)*plVar22;
          FUN_00c44438(lVar18 + 0x8040,&local_90);
        }
      }
      else if (sVar17 == 0) goto LAB_00de3a24;
    }
    plVar22 = local_308;
    if (local_308 != (long *)0x0) {
      plVar21 = local_308 + 3;
      do {
        sVar17 = (short)*plVar21;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar19) {
          *(short *)plVar21 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar1 = (int *)((long)local_308 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar18 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar18;
          local_90 = (long *)*plVar22;
          FUN_00c44438(lVar18 + 0x8040,&local_90);
        }
      }
      else if (sVar17 == 0) goto LAB_00de3a24;
    }
    local_2c8 = (long *)0x0;
    uStack_2c0 = 0;
    FUN_00ca1a48(&local_2c8,param_2 + 0x28);
    local_90 = (long *)&DAT_4932f30f47404b80;
    local_88 = 0x3c989c6;
    uStack_84 = 0;
    uStack_82 = 0;
    uStack_81 = 0;
    uStack_80 = 0x10;
    uStack_7f = 0;
    uStack_7d = 0;
    local_78 = (long *)0x0;
    if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    FUN_019a4bf0(&local_308,&local_2c8,&local_90,PTR_DAT_047d3e30,0);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    plVar22 = local_2c8;
    if (local_2c8 != (long *)0x0) {
      plVar21 = local_2c8 + 3;
      do {
        sVar17 = (short)*plVar21;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar19) {
          *(short *)plVar21 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar1 = (int *)((long)local_2c8 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar18 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar18;
          local_90 = (long *)*plVar22;
          FUN_00c44438(lVar18 + 0x8040,&local_90);
        }
      }
      else if (sVar17 == 0) goto LAB_00de3a24;
    }
    local_2d8 = (long *)0x0;
    uStack_2d0 = 0;
    FUN_00ca1a48(&local_2d8,&local_308);
    FUN_01e2bdf4(&local_2d8);
    plVar22 = local_2d8;
    if (local_2d8 != (long *)0x0) {
      plVar21 = local_2d8 + 3;
      do {
        sVar17 = (short)*plVar21;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar19) {
          *(short *)plVar21 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar1 = (int *)((long)local_2d8 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar18 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar18;
          local_90 = (long *)*plVar22;
          FUN_00c44438(lVar18 + 0x8040,&local_90);
        }
      }
      else if (sVar17 == 0) goto LAB_00de3a24;
    }
    plVar22 = local_308;
    if (local_308 != (long *)0x0) {
      plVar21 = local_308 + 3;
      do {
        sVar17 = (short)*plVar21;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar19) {
          *(short *)plVar21 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar1 = (int *)((long)local_308 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar18 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar18;
          local_90 = (long *)*plVar22;
          FUN_00c44438(lVar18 + 0x8040,&local_90);
        }
      }
      else if (sVar17 == 0) goto LAB_00de3a24;
    }
    FUN_01e2c458(param_2);
    local_90 = (long *)0x0;
    local_88 = 0;
    uStack_84 = 0;
    uStack_82 = 0;
    uStack_81 = 0;
    FUN_0186af18(param_2,1,&local_90);
    plVar22 = local_90;
    if (local_90 != (long *)0x0) {
      plVar21 = local_90 + 3;
      do {
        sVar17 = (short)*plVar21;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar19) {
          *(short *)plVar21 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar1 = (int *)((long)local_90 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar18 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar18;
          local_308 = (long *)*plVar22;
          FUN_00c44438(lVar18 + 0x8040,&local_308);
        }
      }
      else if (sVar17 == 0) goto LAB_00de3a24;
    }
    local_90 = (long *)CONCAT71(local_90._1_7_,4);
    lVar18 = *(long *)(param_2 + 0x28);
    if ((lVar18 != 0) && (*(short *)(lVar18 + 0x1a) != 0)) {
      psVar2 = (short *)(lVar18 + 0x1a);
      sVar17 = *(short *)(lVar18 + 0x1a);
LAB_00de3104:
      sVar4 = *psVar2;
      if (sVar4 == sVar17) {
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar19) {
          *psVar2 = sVar17 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_00de3128;
        bVar19 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00de3128:
        bVar19 = false;
      }
      if (!bVar19) goto code_r0x00de3130;
      lVar18 = *(long *)(lVar18 + 0x10);
      if (lVar18 != 0) {
        plVar22 = (long *)(lVar18 + -0x28);
        FUN_01e2df14(plVar22,*(undefined8 *)(lVar18 + -0x20),&local_90);
        lVar18 = *(long *)(lVar18 + 8);
        psVar2 = (short *)(lVar18 + 0x1a);
        do {
          sVar17 = *psVar2;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar19) {
            *psVar2 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar17 == 1) {
          *(undefined8 *)(lVar18 + 0x10) = 0;
          (**(code **)(*plVar22 + 0x50))(plVar22);
        }
        else if (sVar17 == 0) goto LAB_00de3f38;
      }
    }
LAB_00de447c:
    FUN_01411484(param_2,1);
LAB_00de4488:
    FUN_00aa21ac(param_2);
    break;
  case 9:
    FUN_00aa1bc4(param_2);
    FUN_0186ad1c(param_2,"main.field.behaviour.network.ActOjamaPokemonBehavior");
    local_2e8 = (undefined8 *)0x0;
    uStack_2e0 = 0;
    FUN_00ca1a48(&local_2e8,param_2 + 0x28);
    local_90 = (long *)0x5bc21efff4c02916;
    local_88 = 0x3c19031;
    uStack_84 = 0;
    uStack_82 = 0;
    uStack_81 = 0;
    uStack_80 = 0x12;
    uStack_7f = 0;
    uStack_7d = 0;
    local_78 = (long *)0x0;
    local_308 = (long *)0x6f5ddcfde5287686;
    pcStack_300 = "eff_overhead01";
    local_2f8 = 0xe;
    uStack_2f0 = 0;
    FUN_019a4bf0(&local_a8,&local_2e8,&local_90,&local_308,0);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    puVar7 = local_2e8;
    if (local_2e8 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_2e8 + 3);
      do {
        sVar17 = *psVar2;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar19) {
          *psVar2 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar1 = (int *)((long)local_2e8 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar18 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar18;
          local_90 = (long *)*puVar7;
          FUN_00c44438(lVar18 + 0x8040,&local_90);
        }
      }
      else if (sVar17 == 0) goto LAB_00de3a24;
    }
    local_318 = (undefined8 *)0x0;
    uStack_310 = 0;
    FUN_00ca1a48(&local_318,&local_a8);
    FUN_01e2cb98(&local_318,param_2 + 0x78,0);
    puVar7 = local_318;
    if (local_318 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_318 + 3);
      do {
        sVar17 = *psVar2;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar19) {
          *psVar2 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar1 = (int *)((long)local_318 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar18 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar18;
          local_90 = (long *)*puVar7;
          FUN_00c44438(lVar18 + 0x8040,&local_90);
        }
      }
      else if (sVar17 == 0) goto LAB_00de3a24;
    }
    local_328 = (undefined8 *)0x0;
    uStack_320 = 0;
    FUN_00ca1a48(&local_328,param_2 + 0x28);
    local_90 = (long *)0x645351eee379afc7;
    local_88 = 0x3c3bb5c;
    uStack_84 = 0;
    uStack_82 = 0;
    uStack_81 = 0;
    uStack_80 = 0xf;
    uStack_7f = 0;
    uStack_7d = 0;
    local_78 = (long *)0x0;
    local_308 = (long *)0xa652669cfa6021eb;
    pcStack_300 = "eff_mouth01";
    local_2f8 = 0xb;
    uStack_2f0 = 0;
    FUN_019a4bf0(local_b8,&local_328,&local_90,&local_308,0);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    puVar7 = local_328;
    if (local_328 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_328 + 3);
      do {
        sVar17 = *psVar2;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar19) {
          *psVar2 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar1 = (int *)((long)local_328 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar18 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar18;
          local_90 = (long *)*puVar7;
          FUN_00c44438(lVar18 + 0x8040,&local_90);
        }
      }
      else if (sVar17 == 0) goto LAB_00de3a24;
    }
    local_338 = (undefined8 *)0x0;
    uStack_330 = 0;
    FUN_00ca1a48(&local_338,local_b8);
    FUN_01e2cb98(&local_338,param_2 + 0xb8,0);
    puVar7 = local_338;
    if (local_338 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_338 + 3);
      do {
        sVar17 = *psVar2;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar19) {
          *psVar2 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar1 = (int *)((long)local_338 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar18 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar18;
          local_90 = (long *)*puVar7;
          FUN_00c44438(lVar18 + 0x8040,&local_90);
        }
      }
      else if (sVar17 == 0) goto LAB_00de3a24;
    }
    plVar22 = local_b8[0];
    if (local_b8[0] != (long *)0x0) {
      plVar21 = local_b8[0] + 3;
      do {
        sVar17 = (short)*plVar21;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar19) {
          *(short *)plVar21 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar1 = (int *)((long)local_b8[0] + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar18 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar18;
          local_90 = (long *)*plVar22;
          FUN_00c44438(lVar18 + 0x8040,&local_90);
        }
      }
      else if (sVar17 == 0) goto LAB_00de3a24;
    }
    if (local_a8 == (long *)0x0) {
      return;
    }
    plVar22 = local_a8 + 3;
    do {
      sVar17 = (short)*plVar22;
      cVar5 = '\x01';
      bVar19 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar19) {
        *(short *)plVar22 = sVar17 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar17 == 1) {
      piVar1 = (int *)((long)local_a8 + 0x1c);
      do {
        iVar8 = *piVar1;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar19) {
          *piVar1 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        plVar22 = local_a8;
      } while (cVar5 != '\0');
LAB_00de5098:
      if (iVar8 == -1) {
        return;
      }
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      pplVar13 = &local_90;
      lVar18 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar18;
      local_90 = (long *)*plVar22;
LAB_00de50d4:
      FUN_00c44438(lVar18 + 0x8040,pplVar13);
      return;
    }
LAB_00de3a20:
    if (sVar17 == 0) {
LAB_00de3a24:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
    break;
  case 0xb:
    FUN_00aa1bc4(param_2);
    FUN_0186ad1c(param_2,"main.field.behaviour.network.ActSynchroPokemonBehavior");
    pbVar20 = PTR_DAT_047d3e28;
    if (*(char *)(param_2 + 0x100) == '\0') {
      local_348 = (undefined8 *)0x0;
      uStack_340 = 0;
      FUN_00ca1a48(&local_348,param_2 + 0x28);
      local_90 = (long *)0x86b1c62221497f37;
      local_88 = 0x3c7df64;
      uStack_84 = 0;
      uStack_82 = 0;
      uStack_81 = 0;
      uStack_80 = 0x15;
      uStack_7f = 0;
      uStack_7d = 0;
      local_78 = (long *)0x0;
      if (((*pbVar20 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0)) {
        FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3e28);
      }
      FUN_019a4bf0(&local_a8,&local_348,&local_90,PTR_DAT_047d3e30,1);
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x20))();
      }
      puVar7 = local_348;
      if (local_348 != (undefined8 *)0x0) {
        psVar2 = (short *)(local_348 + 3);
        do {
          sVar17 = *psVar2;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar19) {
            *psVar2 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar17 == 1) {
          piVar1 = (int *)((long)local_348 + 0x1c);
          do {
            iVar8 = *piVar1;
            cVar5 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar19) {
              *piVar1 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar18 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar18;
            local_90 = (long *)*puVar7;
            FUN_00c44438(lVar18 + 0x8040,&local_90);
          }
        }
        else if (sVar17 == 0) goto LAB_00de3a24;
      }
      local_358 = (undefined8 *)0x0;
      uStack_350 = 0;
      FUN_00ca1a48(&local_358,&local_a8);
      if (local_358 != (undefined8 *)0x0) {
        if (*(short *)((long)local_358 + 0x1a) != 0) {
          psVar2 = (short *)((long)local_358 + 0x1a);
          sVar17 = *(short *)((long)local_358 + 0x1a);
LAB_00de6c04:
          sVar4 = *psVar2;
          if (sVar4 == sVar17) {
            cVar5 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar19) {
              *psVar2 = sVar17 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 != '\0') goto LAB_00de6c28;
            bVar19 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00de6c28:
            bVar19 = false;
          }
          if (!bVar19) goto code_r0x00de6c30;
          lVar18 = local_358[2];
          if (lVar18 != 0) {
            uVar12 = *(undefined8 *)(param_2 + 0xf8);
            local_308 = (long *)0x0;
            pcStack_300 = (char *)0x0;
            FUN_00ca1a48(&local_308,&local_358);
            FUN_00aa5d30(uVar12,&local_308);
            plVar22 = local_308;
            if (local_308 != (long *)0x0) {
              plVar21 = local_308 + 3;
              do {
                sVar17 = (short)*plVar21;
                cVar5 = '\x01';
                bVar19 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                if (bVar19) {
                  *(short *)plVar21 = sVar17 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (sVar17 == 1) {
                piVar1 = (int *)((long)local_308 + 0x1c);
                do {
                  iVar8 = *piVar1;
                  cVar5 = '\x01';
                  bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar19) {
                    *piVar1 = -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar8 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar9 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar9;
                  local_90 = (long *)*plVar22;
                  FUN_00c44438(lVar9 + 0x8040,&local_90);
                }
              }
              else if (sVar17 == 0) goto LAB_00de3a24;
            }
            plVar22 = (long *)(lVar18 + 0xe8);
            lVar24 = *plVar22;
            lVar9 = nn::os::GetCurrentThread();
            if (lVar9 == lVar24) {
              bVar19 = true;
            }
            else {
              lVar9 = nn::os::GetCurrentThread();
              do {
                if (*plVar22 != 0) {
                  ClearExclusiveLocal();
                  do {
                    nn::os::WaitLightEvent((LightEventType *)(lVar18 + 0xf0));
                    while (*plVar22 == 0) {
                      cVar5 = '\x01';
                      bVar19 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                      if (bVar19) {
                        *plVar22 = lVar9;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                      if (cVar5 == '\0') goto LAB_00de6e2c;
                    }
                    ClearExclusiveLocal();
                  } while( true );
                }
                cVar5 = '\x01';
                bVar19 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                if (bVar19) {
                  *plVar22 = lVar9;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
LAB_00de6e2c:
              bVar19 = false;
            }
            plVar22 = (long *)FUN_01e2bce0(*(undefined8 *)(lVar18 + 0x100),
                                           *(undefined8 *)(lVar18 + 0x108));
            if ((*(long **)(lVar18 + 0x108) == plVar22) || (*plVar22 == 0)) {
              plVar22 = (long *)FUN_01e2bce0(*(undefined8 *)(lVar18 + 0x138),
                                             *(undefined8 *)(lVar18 + 0x140));
              if (*(long **)(lVar18 + 0x140) == plVar22) {
                plVar21 = (long *)0x0;
              }
              else {
                plVar21 = (long *)0x0;
                if (*plVar22 != 0) {
                  plVar21 = (long *)(*plVar22 + -0x20);
                }
              }
            }
            else {
              plVar21 = (long *)(*plVar22 + -0x20);
            }
            if (!bVar19) {
              *(undefined8 *)(lVar18 + 0xe8) = 0;
              nn::os::SignalLightEvent((LightEventType *)(lVar18 + 0xf0));
            }
            if (plVar21 != (long *)0x0) {
              lVar9 = plVar21[0x13];
              if (*(long *)(lVar9 + 0x10) == 0) goto LAB_00de9128;
              psVar2 = (short *)(lVar9 + 0x1a);
              do {
                sVar17 = *psVar2;
                cVar5 = '\x01';
                bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                if (bVar19) {
                  *psVar2 = sVar17 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (sVar17 == 0) {
                uVar12 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
                *(undefined8 *)(lVar9 + 8) = uVar12;
                *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
              }
              else if (sVar17 == -1) goto LAB_00de9104;
            }
            plVar22 = *(long **)(lVar18 + -0x20);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar9 = nn::os::GetTlsValue(DAT_04865a30);
            if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_00de9148;
            *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar22;
            *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
            plVar10 = (long *)(**(code **)(*plVar22 + 0x10))(plVar22,0x180,8);
            if (plVar10 == (long *)0x0) {
LAB_00de8f04:
              lVar18 = *plVar22;
              goto LAB_00de8f18;
            }
            local_90 = (long *)0x86b1c62221497f37;
            local_88 = 0x3c7df64;
            uStack_84 = 0;
            uStack_82 = 0;
            uStack_81 = 0;
            uStack_80 = 0x15;
            uStack_7f = 0;
            uStack_7d = 0;
            local_78 = (long *)0x0;
            local_b8[0] = plVar21;
            FUN_013d2548(plVar10,local_b8,&local_90,8,0);
            if (local_78 != (long *)0x0) {
              (**(code **)(*local_78 + 0x20))();
            }
            if (local_b8[0] != (long *)0x0) {
              lVar24 = local_b8[0][0x13];
              psVar2 = (short *)(lVar24 + 0x1a);
              do {
                sVar17 = *psVar2;
                cVar5 = '\x01';
                bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                if (bVar19) {
                  *psVar2 = sVar17 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (sVar17 == 1) {
                *(undefined8 *)(lVar24 + 0x10) = 0;
                (**(code **)(*local_b8[0] + 0x50))();
              }
              else if (sVar17 == 0) goto LAB_00de3f38;
            }
            *(undefined4 *)(plVar10 + 3) = 0x80180;
            plVar10[1] = (long)plVar22;
            plVar10[2] = (long)plVar10;
            *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
            lVar9 = plVar10[0x13];
            if (*(long *)(lVar9 + 0x10) == 0) goto LAB_00de9128;
            plVar22 = (long *)(lVar18 + -0x28);
            psVar2 = (short *)(lVar9 + 0x1a);
            do {
              sVar17 = *psVar2;
              cVar5 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar19) {
                *psVar2 = sVar17 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar17 == 0) {
              uVar12 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
              *(undefined8 *)(lVar9 + 8) = uVar12;
              *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
            }
            else if (sVar17 == -1) goto LAB_00de9104;
            plVar21 = plVar10 + 4;
            (**(code **)(*plVar21 + 0xe8))(plVar21,plVar22);
            (**(code **)(*plVar21 + 0x68))(plVar21);
            local_90 = plVar10;
            FUN_00df8c30(lVar18 + 0xe0,&local_90);
            if (local_90 != (long *)0x0) {
              lVar9 = local_90[0x13];
              psVar2 = (short *)(lVar9 + 0x1a);
              do {
                sVar17 = *psVar2;
                cVar5 = '\x01';
                bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                if (bVar19) {
                  *psVar2 = sVar17 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (sVar17 == 1) {
                *(undefined8 *)(lVar9 + 0x10) = 0;
                (**(code **)(*local_90 + 0x50))();
              }
              else if (sVar17 == 0) goto LAB_00de3f38;
            }
            (**(code **)(*(long *)(lVar18 + -0x28) + 0x100))(plVar22,plVar21);
            plVar10 = (long *)(lVar18 + 0x418);
            lVar24 = *plVar10;
            lVar9 = nn::os::GetCurrentThread();
            if (lVar9 == lVar24) {
              plVar10 = (long *)0x0;
              bVar19 = true;
            }
            else {
              lVar9 = nn::os::GetCurrentThread();
              do {
                if (*plVar10 != 0) {
                  ClearExclusiveLocal();
                  do {
                    nn::os::WaitLightEvent((LightEventType *)(lVar18 + 0x420));
                    while (*plVar10 == 0) {
                      cVar5 = '\x01';
                      bVar19 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                      if (bVar19) {
                        *plVar10 = lVar9;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                      if (cVar5 == '\0') goto LAB_00de72e0;
                    }
                    ClearExclusiveLocal();
                  } while( true );
                }
                cVar5 = '\x01';
                bVar19 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                if (bVar19) {
                  *plVar10 = lVar9;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
LAB_00de72e0:
              bVar19 = false;
            }
            if ((*(byte *)(lVar18 + 0x430) >> 2 & 1) == 0) {
              FUN_00d37964(plVar22,0,0);
            }
            else {
              (**(code **)(*plVar21 + 0xf8))(plVar21);
            }
            if (!bVar19) {
              *plVar10 = 0;
              nn::os::SignalLightEvent((LightEventType *)(plVar10 + 1));
            }
            uStack_7f = 0;
            uStack_80 = 0x37;
            uStack_81 = 0x32;
            uStack_82 = 0x33;
            uStack_84 = 0x3643;
            local_88 = 0x35434437;
            local_90 = (long *)0x3137433836423343;
            lVar9 = FUN_01329e04(plVar22,*(undefined8 *)(lVar18 + -0x20),&local_90);
            FUN_01293f20(lVar9,0);
            FUN_012a3740(0,lVar9);
            plVar21 = (long *)(lVar9 + 0x148);
            lVar23 = *plVar21;
            lVar24 = nn::os::GetCurrentThread();
            if (lVar24 == lVar23) {
              *(undefined1 *)(lVar9 + 0x140) = 0;
              *(undefined1 *)(lVar9 + 0x163) = 1;
            }
            else {
              lVar24 = nn::os::GetCurrentThread();
              do {
                if (*plVar21 != 0) {
                  ClearExclusiveLocal();
                  do {
                    nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x150));
                    while (*plVar21 == 0) {
                      cVar5 = '\x01';
                      bVar19 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                      if (bVar19) {
                        *plVar21 = lVar24;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                      if (cVar5 == '\0') goto LAB_00de73f8;
                    }
                    ClearExclusiveLocal();
                  } while( true );
                }
                cVar5 = '\x01';
                bVar19 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                if (bVar19) {
                  *plVar21 = lVar24;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
LAB_00de73f8:
              *(undefined1 *)(lVar9 + 0x163) = 1;
              *(undefined1 *)(lVar9 + 0x140) = 0;
              *(undefined8 *)(lVar9 + 0x148) = 0;
              nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0x150));
            }
            lVar18 = *(long *)(lVar18 + 8);
            psVar2 = (short *)(lVar18 + 0x1a);
            do {
              sVar17 = *psVar2;
              cVar5 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar19) {
                *psVar2 = sVar17 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar17 == 1) {
              *(undefined8 *)(lVar18 + 0x10) = 0;
              (**(code **)(*plVar22 + 0x50))(plVar22);
            }
            else if (sVar17 == 0) goto LAB_00de3f38;
          }
        }
LAB_00de7438:
        puVar7 = local_358;
        pbVar20 = PTR_DAT_047d3e28;
        if (local_358 != (undefined8 *)0x0) {
          psVar2 = (short *)(local_358 + 3);
          do {
            sVar17 = *psVar2;
            cVar5 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar19) {
              *psVar2 = sVar17 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar17 == 1) {
            piVar1 = (int *)((long)local_358 + 0x1c);
            do {
              iVar8 = *piVar1;
              cVar5 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar19) {
                *piVar1 = -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            pbVar20 = PTR_DAT_047d3e28;
            if (iVar8 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar18 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar18;
              local_90 = (long *)*puVar7;
              FUN_00c44438(lVar18 + 0x8040,&local_90);
              pbVar20 = PTR_DAT_047d3e28;
            }
          }
          else {
            pbVar20 = PTR_DAT_047d3e28;
            if (sVar17 == 0) goto LAB_00de3a24;
          }
        }
      }
      local_368 = (undefined8 *)0x0;
      uStack_360 = 0;
      FUN_00ca1a48(&local_368,param_2 + 0x28);
      if (local_368 != (undefined8 *)0x0) {
        if (*(short *)((long)local_368 + 0x1a) != 0) {
          psVar2 = (short *)((long)local_368 + 0x1a);
          sVar17 = *(short *)((long)local_368 + 0x1a);
LAB_00de6c50:
          sVar4 = *psVar2;
          if (sVar4 == sVar17) {
            cVar5 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar19) {
              *psVar2 = sVar17 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 != '\0') goto LAB_00de6c74;
            bVar19 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00de6c74:
            bVar19 = false;
          }
          if (!bVar19) goto code_r0x00de6c7c;
          lVar18 = local_368[2];
          if (lVar18 != 0) {
            plVar22 = *(long **)(lVar18 + -0x20);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar9 = nn::os::GetTlsValue(DAT_04865a30);
            if (0xf < *(ulong *)(lVar9 + 0x80)) {
LAB_00de9148:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar22;
            *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
            plVar21 = (long *)(**(code **)(*plVar22 + 0x10))(plVar22,0x150,8);
            if (plVar21 == (long *)0x0) {
              lVar18 = *plVar22;
LAB_00de8f18:
              (**(code **)(lVar18 + 0xe8))(plVar22);
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("ptr","Create",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
                         ,0x40);
            }
            FUN_029a5100();
            *(undefined4 *)(plVar21 + 3) = 0x80150;
            plVar21[1] = (long)plVar22;
            plVar21[2] = (long)plVar21;
            *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
            lVar9 = plVar21[0x13];
            if (*(long *)(lVar9 + 0x10) == 0) {
LAB_00de9128:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("m_object != nullptr","AddReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x3d);
            }
            plVar22 = (long *)(lVar18 + -0x28);
            psVar2 = (short *)(lVar9 + 0x1a);
            do {
              sVar17 = *psVar2;
              cVar5 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar19) {
                *psVar2 = sVar17 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar17 == 0) {
              uVar12 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
              *(undefined8 *)(lVar9 + 8) = uVar12;
              *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
            }
            else if (sVar17 == -1) {
LAB_00de9104:
              pcVar11 = "count != 0";
              pcVar14 = "AddReference";
              pcVar15 = 
              "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
              ;
              pcVar16 = "Reference counter overflows.";
LAB_00de8e04:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl(pcVar11,pcVar14,pcVar15,0x58,pcVar16);
            }
            plVar10 = plVar21 + 4;
            (**(code **)(*plVar10 + 0xe8))(plVar10,plVar22);
            (**(code **)(*plVar10 + 0x68))(plVar10);
            local_90 = plVar21;
            FUN_00df8c30(lVar18 + 0xe0,&local_90);
            if (local_90 != (long *)0x0) {
              lVar9 = local_90[0x13];
              psVar2 = (short *)(lVar9 + 0x1a);
              do {
                sVar17 = *psVar2;
                cVar5 = '\x01';
                bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                if (bVar19) {
                  *psVar2 = sVar17 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (sVar17 == 1) {
                *(undefined8 *)(lVar9 + 0x10) = 0;
                (**(code **)(*local_90 + 0x50))();
              }
              else if (sVar17 == 0) goto LAB_00de3f38;
            }
            (**(code **)(*(long *)(lVar18 + -0x28) + 0x100))(plVar22,plVar10);
            plVar25 = (long *)(lVar18 + 0x418);
            lVar24 = *plVar25;
            lVar9 = nn::os::GetCurrentThread();
            if (lVar9 == lVar24) {
              plVar25 = (long *)0x0;
              bVar19 = true;
            }
            else {
              lVar9 = nn::os::GetCurrentThread();
              do {
                if (*plVar25 != 0) {
                  ClearExclusiveLocal();
                  do {
                    nn::os::WaitLightEvent((LightEventType *)(lVar18 + 0x420));
                    while (*plVar25 == 0) {
                      cVar5 = '\x01';
                      bVar19 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                      if (bVar19) {
                        *plVar25 = lVar9;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                      if (cVar5 == '\0') goto LAB_00de6f9c;
                    }
                    ClearExclusiveLocal();
                  } while( true );
                }
                cVar5 = '\x01';
                bVar19 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                if (bVar19) {
                  *plVar25 = lVar9;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
LAB_00de6f9c:
              bVar19 = false;
            }
            if ((*(byte *)(lVar18 + 0x430) >> 2 & 1) == 0) {
              FUN_00d37964(plVar22,0,0);
            }
            else {
              (**(code **)(*plVar10 + 0xf8))(plVar10);
            }
            if (!bVar19) {
              *plVar25 = 0;
              nn::os::SignalLightEvent((LightEventType *)(plVar25 + 1));
            }
            FUN_029a53a4(plVar21);
            lVar18 = *(long *)(lVar18 + 8);
            psVar2 = (short *)(lVar18 + 0x1a);
            do {
              sVar17 = *psVar2;
              cVar5 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar19) {
                *psVar2 = sVar17 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar17 == 1) {
              *(undefined8 *)(lVar18 + 0x10) = 0;
              (**(code **)(*plVar22 + 0x50))(plVar22);
            }
            else if (sVar17 == 0) goto LAB_00de3f38;
          }
        }
LAB_00de70bc:
        puVar7 = local_368;
        if (local_368 != (undefined8 *)0x0) {
          psVar2 = (short *)(local_368 + 3);
          do {
            sVar17 = *psVar2;
            cVar5 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar19) {
              *psVar2 = sVar17 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar17 == 1) {
            piVar1 = (int *)((long)local_368 + 0x1c);
            do {
              iVar8 = *piVar1;
              cVar5 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar19) {
                *piVar1 = -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar8 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar18 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar18;
              local_90 = (long *)*puVar7;
              FUN_00c44438(lVar18 + 0x8040,&local_90);
            }
          }
          else if (sVar17 == 0) goto LAB_00de3a24;
        }
      }
      plVar22 = local_a8;
      if (local_a8 != (long *)0x0) {
        plVar21 = local_a8 + 3;
        do {
          sVar17 = (short)*plVar21;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar19) {
            *(short *)plVar21 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar17 == 1) {
          piVar1 = (int *)((long)local_a8 + 0x1c);
          do {
            iVar8 = *piVar1;
            cVar5 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar19) {
              *piVar1 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar18 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar18;
            local_90 = (long *)*plVar22;
            FUN_00c44438(lVar18 + 0x8040,&local_90);
          }
        }
        else if (sVar17 == 0) goto LAB_00de3a24;
      }
    }
    lVar18 = param_2 + 0x28;
    local_378 = (undefined8 *)0x0;
    uStack_370 = 0;
    FUN_00ca1a48(&local_378,lVar18);
    local_90 = (long *)0x803e956a23db6bc5;
    local_88 = 0x3c63bc8;
    uStack_84 = 0;
    uStack_82 = 0;
    uStack_81 = 0;
    uStack_80 = 0x10;
    uStack_7f = 0;
    uStack_7d = 0;
    local_78 = (long *)0x0;
    if (((*pbVar20 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    FUN_019a4bf0(&local_308,&local_378,&local_90,PTR_DAT_047d3e30,0);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    puVar7 = local_378;
    if (local_378 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_378 + 3);
      do {
        sVar17 = *psVar2;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar19) {
          *psVar2 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar1 = (int *)((long)local_378 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_90 = (long *)*puVar7;
          FUN_00c44438(lVar9 + 0x8040,&local_90);
        }
      }
      else if (sVar17 == 0) goto LAB_00de3a24;
    }
    local_388 = (undefined8 *)0x0;
    uStack_380 = 0;
    FUN_00ca1a48(&local_388,&local_308);
    FUN_01e2cb98(&local_388,param_2 + 0x78,0);
    puVar7 = local_388;
    if (local_388 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_388 + 3);
      do {
        sVar17 = *psVar2;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar19) {
          *psVar2 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar1 = (int *)((long)local_388 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_90 = (long *)*puVar7;
          FUN_00c44438(lVar9 + 0x8040,&local_90);
        }
      }
      else if (sVar17 == 0) goto LAB_00de3a24;
    }
    local_398 = (undefined8 *)0x0;
    uStack_390 = 0;
    FUN_00ca1a48(&local_398,lVar18);
    local_90 = (long *)&DAT_fe081e60b123f873;
    local_88 = 0x3c6a314;
    uStack_84 = 0;
    uStack_82 = 0;
    uStack_81 = 0;
    uStack_80 = 0xe;
    uStack_7f = 0;
    uStack_7d = 0;
    local_78 = (long *)0x0;
    if (((*pbVar20 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    FUN_019a4bf0(&local_a8,&local_398,&local_90,PTR_DAT_047d3e30,0);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    puVar7 = local_398;
    if (local_398 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_398 + 3);
      do {
        sVar17 = *psVar2;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar19) {
          *psVar2 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar1 = (int *)((long)local_398 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_90 = (long *)*puVar7;
          FUN_00c44438(lVar9 + 0x8040,&local_90);
        }
      }
      else if (sVar17 == 0) goto LAB_00de3a24;
    }
    local_3a8 = (undefined8 *)0x0;
    uStack_3a0 = 0;
    FUN_00ca1a48(&local_3a8,&local_a8);
    FUN_01e2cb98(&local_3a8,param_2 + 0xb8,0);
    puVar7 = local_3a8;
    if (local_3a8 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_3a8 + 3);
      do {
        sVar17 = *psVar2;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar19) {
          *psVar2 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar1 = (int *)((long)local_3a8 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_90 = (long *)*puVar7;
          FUN_00c44438(lVar9 + 0x8040,&local_90);
        }
      }
      else if (sVar17 == 0) goto LAB_00de3a24;
    }
    if (*(char *)(param_2 + 0x100) == '\0') {
      local_3b8 = (undefined8 *)0x0;
      uStack_3b0 = 0;
      FUN_00ca1a48(&local_3b8,lVar18);
      local_90 = (long *)0x16e1f5155aa44723;
      local_88 = 0x3c0adb4;
      uStack_84 = 0;
      uStack_82 = 0;
      uStack_81 = 0;
      uStack_80 = 0x15;
      uStack_7f = 0;
      uStack_7d = 0;
      local_78 = (long *)0x0;
      if (((*pbVar20 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0)) {
        FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3e28);
      }
      FUN_019a4bf0(local_b8,&local_3b8,&local_90,PTR_DAT_047d3e30,1);
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x20))();
      }
      puVar7 = local_3b8;
      if (local_3b8 != (undefined8 *)0x0) {
        psVar2 = (short *)(local_3b8 + 3);
        do {
          sVar17 = *psVar2;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar19) {
            *psVar2 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar17 == 1) {
          piVar1 = (int *)((long)local_3b8 + 0x1c);
          do {
            iVar8 = *piVar1;
            cVar5 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar19) {
              *piVar1 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar9 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar9;
            local_90 = (long *)*puVar7;
            FUN_00c44438(lVar9 + 0x8040,&local_90);
          }
        }
        else if (sVar17 == 0) goto LAB_00de3a24;
      }
      local_3c8 = (undefined8 *)0x0;
      uStack_3c0 = 0;
      FUN_00ca1a48(&local_3c8,local_b8);
      uVar3 = *(undefined1 *)(param_2 + 0x100);
      uVar12 = *(undefined8 *)(param_2 + 0xf8);
      local_90 = (long *)0x0;
      local_88 = 0;
      uStack_84 = 0;
      uStack_82 = 0;
      uStack_81 = 0;
      FUN_00ca1a48(&local_90,&local_3c8);
      FUN_00aa5a68(uVar12,&local_90,uVar3);
      plVar22 = local_90;
      if (local_90 != (long *)0x0) {
        plVar21 = local_90 + 3;
        do {
          sVar17 = (short)*plVar21;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar19) {
            *(short *)plVar21 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar17 == 1) {
          piVar1 = (int *)((long)local_90 + 0x1c);
          do {
            iVar8 = *piVar1;
            cVar5 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar19) {
              *piVar1 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar9 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar9;
            local_70[0] = *plVar22;
            FUN_00c44438(lVar9 + 0x8040,local_70);
          }
        }
        else if (sVar17 == 0) goto LAB_00de3a24;
      }
      puVar7 = local_3c8;
      if (local_3c8 != (undefined8 *)0x0) {
        psVar2 = (short *)(local_3c8 + 3);
        do {
          sVar17 = *psVar2;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar19) {
            *psVar2 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar17 == 1) {
          piVar1 = (int *)((long)local_3c8 + 0x1c);
          do {
            iVar8 = *piVar1;
            cVar5 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar19) {
              *piVar1 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar9 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar9;
            local_90 = (long *)*puVar7;
            FUN_00c44438(lVar9 + 0x8040,&local_90);
          }
        }
        else if (sVar17 == 0) goto LAB_00de3a24;
      }
      plVar22 = local_b8[0];
      if (local_b8[0] != (long *)0x0) {
        plVar21 = local_b8[0] + 3;
        do {
          sVar17 = (short)*plVar21;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar19) {
            *(short *)plVar21 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar17 == 1) {
          piVar1 = (int *)((long)local_b8[0] + 0x1c);
          do {
            iVar8 = *piVar1;
            cVar5 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar19) {
              *piVar1 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar9 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar9;
            local_90 = (long *)*plVar22;
            FUN_00c44438(lVar9 + 0x8040,&local_90);
          }
        }
        else if (sVar17 == 0) goto LAB_00de3a24;
      }
    }
    plVar22 = local_a8;
    if (local_a8 != (long *)0x0) {
      plVar21 = local_a8 + 3;
      do {
        sVar17 = (short)*plVar21;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar19) {
          *(short *)plVar21 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar1 = (int *)((long)local_a8 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_90 = (long *)*plVar22;
          FUN_00c44438(lVar9 + 0x8040,&local_90);
        }
      }
      else if (sVar17 == 0) goto LAB_00de3a24;
    }
    plVar22 = local_308;
    if (local_308 != (long *)0x0) {
      plVar21 = local_308 + 3;
      do {
        sVar17 = (short)*plVar21;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar19) {
          *(short *)plVar21 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar1 = (int *)((long)local_308 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_90 = (long *)*plVar22;
          FUN_00c44438(lVar9 + 0x8040,&local_90);
        }
      }
      else if (sVar17 == 0) goto LAB_00de3a24;
    }
    uVar3 = *(undefined1 *)(param_2 + 0x100);
    uVar12 = *(undefined8 *)(param_2 + 0xf8);
    local_90 = (long *)0x0;
    local_88 = 0;
    uStack_84 = 0;
    uStack_82 = 0;
    uStack_81 = 0;
    FUN_00ca1a48(&local_90,lVar18);
    FUN_00aa55f4(uVar12,&local_90,uVar3);
    plVar22 = local_90;
    if (local_90 != (long *)0x0) {
      plVar21 = local_90 + 3;
      do {
        sVar17 = (short)*plVar21;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar19) {
          *(short *)plVar21 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar1 = (int *)((long)local_90 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar18 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar18;
          local_308 = (long *)*plVar22;
          FUN_00c44438(lVar18 + 0x8040,&local_308);
        }
      }
      else if (sVar17 == 0) goto LAB_00de3a24;
    }
    FUN_01e2c458(param_2);
    local_90 = (long *)0x0;
    local_88 = 0;
    uStack_84 = 0;
    uStack_82 = 0;
    uStack_81 = 0;
    FUN_0186af18(param_2,1,&local_90);
    plVar22 = local_90;
    if (local_90 != (long *)0x0) {
      plVar21 = local_90 + 3;
      do {
        sVar17 = (short)*plVar21;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar19) {
          *(short *)plVar21 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar1 = (int *)((long)local_90 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar18 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar18;
          local_308 = (long *)*plVar22;
          FUN_00c44438(lVar18 + 0x8040,&local_308);
        }
      }
      else if (sVar17 == 0) goto LAB_00de3a24;
    }
    local_90 = (long *)CONCAT71(local_90._1_7_,4);
    lVar18 = *(long *)(param_2 + 0x28);
    if ((lVar18 != 0) && (*(short *)(lVar18 + 0x1a) != 0)) {
      psVar2 = (short *)(lVar18 + 0x1a);
      sVar17 = *(short *)(lVar18 + 0x1a);
LAB_00de6940:
      sVar4 = *psVar2;
      if (sVar4 == sVar17) {
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar19) {
          *psVar2 = sVar17 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_00de6964;
        bVar19 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00de6964:
        bVar19 = false;
      }
      if (!bVar19) goto code_r0x00de696c;
      lVar18 = *(long *)(lVar18 + 0x10);
      if (lVar18 != 0) {
        plVar22 = (long *)(lVar18 + -0x28);
        FUN_01e2df14(plVar22,*(undefined8 *)(lVar18 + -0x20),&local_90);
        lVar18 = *(long *)(lVar18 + 8);
        psVar2 = (short *)(lVar18 + 0x1a);
        do {
          sVar17 = *psVar2;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar19) {
            *psVar2 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        goto LAB_00de6aa4;
      }
    }
LAB_00de37d8:
    FUN_01411484(param_2,1);
  }
  return;
code_r0x00de65e0:
  sVar17 = sVar4;
  if (sVar4 == 0) goto LAB_00de667c;
  goto LAB_00de65b4;
code_r0x00de66c0:
  sVar17 = sVar4;
  if (sVar4 == 0) goto LAB_00de8c3c;
  goto LAB_00de6694;
code_r0x00de8c80:
  sVar17 = sVar4;
  if (sVar4 == 0) goto LAB_00de25bc;
  goto LAB_00de8c54;
code_r0x00de6c30:
  sVar17 = sVar4;
  if (sVar4 == 0) goto LAB_00de7438;
  goto LAB_00de6c04;
code_r0x00de6c7c:
  sVar17 = sVar4;
  if (sVar4 == 0) goto LAB_00de70bc;
  goto LAB_00de6c50;
code_r0x00de696c:
  sVar17 = sVar4;
  if (sVar4 == 0) goto LAB_00de37d8;
  goto LAB_00de6940;
code_r0x00de3130:
  sVar17 = sVar4;
  if (sVar4 == 0) goto LAB_00de447c;
  goto LAB_00de3104;
code_r0x00de2bb4:
  sVar17 = sVar4;
  if (sVar4 == 0) {
    return;
  }
  goto LAB_00de2b88;
code_r0x00de6b50:
  sVar17 = sVar4;
  if (sVar4 == 0) goto LAB_00de4470;
  goto LAB_00de6b24;
code_r0x00de2af4:
  sVar17 = sVar4;
  if (sVar4 == 0) goto LAB_00de37d8;
  goto LAB_00de2ac8;
code_r0x00de6cc4:
  sVar17 = sVar4;
  if (sVar4 == 0) goto LAB_00de43bc;
  goto LAB_00de6c98;
code_r0x00de6924:
  sVar17 = sVar4;
  if (sVar4 == 0) goto LAB_00de25f0;
  goto LAB_00de68f8;
code_r0x00de6b98:
  sVar17 = sVar4;
  if (sVar4 == 0) goto LAB_00de3d2c;
  goto LAB_00de6b6c;
}


