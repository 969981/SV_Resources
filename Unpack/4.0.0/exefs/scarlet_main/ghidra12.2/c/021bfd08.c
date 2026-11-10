/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021bfd08; name: FUN_021bfd08
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021bfd08(long param_1,float *param_2)

{
  code *pcVar1;
  int *piVar2;
  short *psVar3;
  long lVar4;
  short sVar5;
  char cVar6;
  undefined *puVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  long *plVar11;
  code *pcVar12;
  long *plVar13;
  bool bVar14;
  long lVar15;
  undefined8 uVar16;
  char *pcVar17;
  ulong uVar18;
  long lVar19;
  undefined8 uVar20;
  byte *pbVar21;
  undefined1 *puVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  long **pplVar26;
  undefined8 *puVar27;
  long *plVar28;
  float fVar29;
  float fVar31;
  float fVar32;
  undefined1 auVar30 [16];
  long *local_298;
  long *local_290;
  undefined7 uStack_288;
  uint local_281;
  long *local_278;
  code *local_270;
  undefined7 local_268;
  undefined1 uStack_261;
  undefined2 uStack_260;
  undefined1 uStack_25e;
  undefined5 uStack_25d;
  long *local_258;
  long **local_250;
  undefined4 local_248;
  undefined2 local_240;
  undefined8 local_230;
  code *local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined1 auStack_210 [96];
  undefined8 local_1b0;
  undefined8 local_1a0;
  code *local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [96];
  undefined8 local_120;
  code *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [96];
  undefined8 local_a0;
  long *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined8 local_80;
  long *local_78;
  
  if (*(char *)(param_1 + 0x7e8) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x7e9) == '\0') {
    if (((*PTR_DAT_047d4df8 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4df8);
    }
    uVar16 = *(undefined8 *)PTR_DAT_047d4e00;
    *(undefined8 *)PTR_DAT_047d4e08 = uVar16;
    *(undefined1 *)(param_1 + 0x7e9) = 1;
    puVar7 = PTR_DAT_047d3910;
    lVar24 = *(long *)(param_1 + 0x810);
    if (*(long *)(param_1 + 0x818) != lVar24) {
      uVar23 = 0;
      do {
        lVar15 = *(long *)(*(long *)(param_1 + 0x848) + uVar23 * 0x10);
        if (lVar15 == 0) {
LAB_021bfe20:
          FUN_00f7176c(&local_298,uVar16,lVar24 + uVar23 * 0x20);
          plVar13 = local_298;
          if (local_298 == (long *)0x0) {
            *(undefined1 *)(param_1 + 0x7e9) = 0;
          }
          else {
            local_270 = (code *)0x0;
            local_268 = 0;
            uStack_261 = 0;
            FUN_00c43ef0(&local_270,local_298 + 6);
            local_290 = (long *)0x0;
            uStack_288 = 0;
            local_281 = local_281 & 0xffffff00;
            if (*(long **)(local_270 + 0x10) == plVar13 + 5) {
              FUN_00e29918(&local_290,&local_270);
            }
            pcVar12 = local_270;
            if (local_270 != (code *)0x0) {
              pcVar1 = local_270 + 0x18;
              do {
                sVar5 = *(short *)pcVar1;
                cVar6 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
                if (bVar14) {
                  *(short *)pcVar1 = sVar5 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (sVar5 == 1) {
                pcVar1 = local_270 + 0x1c;
                do {
                  iVar10 = *(int *)pcVar1;
                  cVar6 = '\x01';
                  bVar14 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
                  if (bVar14) {
                    *(int *)pcVar1 = -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (iVar10 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,puVar7,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar24 = *(long *)puVar7;
                  *(long *)PTR_DAT_047d3918 = lVar24;
                  local_278 = *(long **)pcVar12;
                  FUN_00c44438(lVar24 + 0x8040,&local_278);
                }
              }
              else if (sVar5 == 0) goto LAB_021c05ec;
            }
            FUN_00dbd160(*(long *)(param_1 + 0x848) + uVar23 * 0x10,&local_290);
            plVar13 = local_290;
            if (local_290 != (long *)0x0) {
              plVar28 = local_290 + 3;
              do {
                sVar5 = (short)*plVar28;
                cVar6 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                if (bVar14) {
                  *(short *)plVar28 = sVar5 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (sVar5 == 1) {
                piVar2 = (int *)((long)local_290 + 0x1c);
                do {
                  iVar10 = *piVar2;
                  cVar6 = '\x01';
                  bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar14) {
                    *piVar2 = -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (iVar10 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,puVar7,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar24 = *(long *)puVar7;
                  *(long *)PTR_DAT_047d3918 = lVar24;
                  local_270 = (code *)*plVar13;
                  FUN_00c44438(lVar24 + 0x8040,&local_270);
                }
              }
              else if (sVar5 == 0) {
LAB_021c05ec:
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                           ,0x33,"Reference counter underflows.");
              }
            }
            if (local_298 != (long *)0x0) {
              (**(code **)(*local_298 + 0x60))();
            }
          }
        }
        else if (*(short *)(lVar15 + 0x1a) == 0) {
          lVar24 = *(long *)(param_1 + 0x810);
          goto LAB_021bfe20;
        }
        uVar23 = uVar23 + 1;
        lVar24 = *(long *)(param_1 + 0x810);
      } while (uVar23 < (ulong)(*(long *)(param_1 + 0x818) - lVar24 >> 5));
      if (*(char *)(param_1 + 0x7e9) == '\0') {
        return;
      }
    }
  }
  lVar24 = *(long *)(param_1 + 0x6f8);
  if (*(char *)(lVar24 + 0x10) == '\0') {
    return;
  }
  if (((*PTR_DAT_047d4df8 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  lVar15 = *(long *)PTR_DAT_047d4e00;
  *(long *)PTR_DAT_047d4e08 = lVar15;
  if (*(char *)(lVar15 + 0xb2d0) != '\0') {
    return;
  }
  fVar29 = *(float *)(param_1 + 0xe0) - *param_2;
  fVar31 = *(float *)(param_1 + 0xe4) - param_2[1];
  fVar32 = *(float *)(param_1 + 0xe8) - param_2[2];
  fVar29 = fVar29 * fVar29;
  fVar31 = fVar31 * fVar31;
  fVar32 = fVar32 * fVar32;
  auVar30._0_4_ = fVar29 + fVar31;
  auVar30._4_4_ = fVar32 + 0.0;
  auVar30._8_4_ = fVar29 + fVar31;
  auVar30._12_4_ = fVar32 + 0.0;
  auVar30 = NEON_ext(auVar30,auVar30,4,1);
  fVar29 = auVar30._0_4_ + auVar30._4_4_;
  if (*(float *)(lVar24 + 0xc) * *(float *)(lVar24 + 0xc) <= fVar29) {
    if (*(char *)(param_1 + 0x7ea) == '\0') {
      return;
    }
    local_270 = (code *)&LAB_021c12c8;
    local_268 = 0x2b5debc;
    uStack_261 = 0;
    uStack_260 = 0xdec0;
    uStack_25e = 0xb5;
    uStack_25d = 2;
    local_258 = (long *)&LAB_02b5dec4;
    FUN_00cb7a60(param_1,&local_270);
    pcVar12 = (code *)CONCAT17(uStack_261,local_268);
    if (pcVar12 != (code *)0x0) {
      uStack_260 = 0;
      uStack_25e = 0;
      uStack_25d = 0;
      local_258 = (long *)0x0;
      local_270 = (code *)0x0;
      local_268 = 0;
      uStack_261 = 0;
      (*pcVar12)(&local_250);
    }
    if (*(char *)(param_1 + 0x7f8) != '\0') {
      lVar15 = *(long *)(param_1 + 0x8f8);
      for (lVar24 = *(long *)(param_1 + 0x8f0); lVar24 != lVar15; lVar24 = lVar24 + 0x78) {
        plVar13 = *(long **)(lVar24 + 0x68);
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 0x120))(plVar13,1);
          plVar13 = *(long **)(lVar24 + 0x68);
          *(undefined8 *)(lVar24 + 0x68) = 0;
          if (plVar13 != (long *)0x0) {
            lVar25 = plVar13[6];
            psVar3 = (short *)(lVar25 + 0x1a);
            do {
              sVar5 = *psVar3;
              cVar6 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(psVar3,0x10);
              if (bVar14) {
                *psVar3 = sVar5 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar5 == 1) {
              *(undefined8 *)(lVar25 + 0x10) = 0;
              (**(code **)(*plVar13 + 0x50))();
            }
            else if (sVar5 == 0) goto LAB_021c0e40;
          }
        }
      }
      *(undefined2 *)(param_1 + 0x7f8) = 0;
    }
LAB_021c0c90:
    *(undefined8 *)(param_1 + 0x7f0) = 0;
    *(undefined2 *)(param_1 + 0x7ea) = 0;
    return;
  }
  if (*(float *)(lVar24 + 4) * *(float *)(lVar24 + 4) <= fVar29) {
    if (*(char *)(param_1 + 0x7ea) == '\0') {
      return;
    }
    local_270 = (code *)&LAB_021c12c8;
    local_268 = 0x2b5debc;
    uStack_261 = 0;
    uStack_260 = 0xdec0;
    uStack_25e = 0xb5;
    uStack_25d = 2;
    local_258 = (long *)&LAB_02b5dec4;
    FUN_00cb7a60(param_1,&local_270);
    pcVar12 = (code *)CONCAT17(uStack_261,local_268);
    if (pcVar12 != (code *)0x0) {
      uStack_260 = 0;
      uStack_25e = 0;
      uStack_25d = 0;
      local_258 = (long *)0x0;
      local_270 = (code *)0x0;
      local_268 = 0;
      uStack_261 = 0;
      (*pcVar12)(&local_250);
    }
    if (*(char *)(param_1 + 0x7f8) != '\0') {
      lVar24 = *(long *)(param_1 + 0x8f0);
      lVar15 = *(long *)(param_1 + 0x8f8);
      if (lVar24 != lVar15) {
        if (*(long *)(lVar24 + 0x70) != 0) {
          FUN_0143cdb0(*(long *)(lVar24 + 0x70),0);
        }
        if (lVar24 + 0x78 != lVar15) {
          if (*(long *)(lVar24 + 0xe8) != 0) {
            FUN_0143cdb0(*(long *)(lVar24 + 0xe8),0);
          }
          for (lVar24 = lVar24 + 0xf0; lVar24 != lVar15; lVar24 = lVar24 + 0x78) {
            if (*(long *)(lVar24 + 0x70) != 0) {
              FUN_0143cdb0(*(long *)(lVar24 + 0x70),0);
            }
          }
        }
      }
    }
    goto LAB_021c0c90;
  }
  if (*(char *)(param_1 + 0x7ea) == '\0') {
    if (*(float *)(param_1 + 0x808) <= fVar29) {
      if (*(char *)(param_1 + 0x7f8) == '\0') {
        FUN_00cebc38(&local_298,param_1);
        puVar7 = PTR_DAT_047d94d0;
        lVar24 = *(long *)(param_1 + 0x8f0);
        if (*(long *)(param_1 + 0x8f8) != lVar24) {
          auVar30 = *(undefined1 (*) [16])(param_1 + 0xe0);
          uVar23 = 0;
          do {
            plVar13 = local_298;
            puVar27 = (undefined8 *)(lVar24 + uVar23 * 0x78);
            uVar16 = *(undefined8 *)(param_1 + 8);
            plVar28 = puVar27 + 0xd;
            if (*plVar28 != 0) goto LAB_021c0a88;
            lVar15 = nn::os::GetCurrentThread();
            do {
              lVar25 = *(long *)puVar7;
              lVar19 = *(long *)(puVar7 + 8);
              cVar6 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(puVar7,0x10);
              if (bVar14) {
                *(long *)puVar7 = lVar25;
                *(long *)(puVar7 + 8) = lVar19;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            do {
              while ((lVar25 != 0 && (lVar15 != lVar25))) {
                nn::os::WaitLightEvent((LightEventType *)(puVar7 + 0x10));
                do {
                  lVar25 = *(long *)puVar7;
                  lVar19 = *(long *)(puVar7 + 8);
                  cVar6 = '\x01';
                  bVar14 = (bool)ExclusiveMonitorPass(puVar7,0x10);
                  if (bVar14) {
                    *(long *)puVar7 = lVar25;
                    *(long *)(puVar7 + 8) = lVar19;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
              }
              do {
                lVar4 = *(long *)puVar7;
                if (lVar4 != lVar25 || *(long *)(puVar7 + 8) != lVar19) {
                  bVar14 = false;
                  ClearExclusiveLocal();
                  goto LAB_021c0724;
                }
                cVar6 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(puVar7,0x10);
                if (bVar14) {
                  *(long *)puVar7 = lVar25;
                  *(long *)(puVar7 + 4) = lVar19 + 1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              bVar14 = true;
LAB_021c0724:
              lVar25 = lVar4;
              lVar19 = *(long *)(puVar7 + 8);
            } while (!bVar14);
            plVar13 = plVar13 + 8;
            plVar11 = (long *)(**(code **)(*plVar13 + 0x88))(plVar13);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar15 = nn::os::GetTlsValue(DAT_04865a30);
            if (0xf < *(ulong *)(lVar15 + 0x80)) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(long **)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = plVar11;
            *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
            pcVar12 = (code *)(**(code **)(*plVar11 + 0x10))(plVar11,0x7f0,0x10);
            if (pcVar12 == (code *)0x0) {
              (**(code **)(*plVar11 + 0xe8))(plVar11);
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("ptr","Create",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
                         ,0x40);
            }
            if (((*PTR_DAT_047d3e28 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3e28);
            }
            FUN_00df6fe0(pcVar12,PTR_DAT_047d3e30,0,0,0);
            *(undefined4 *)(pcVar12 + 0x18) = 0x1007f0;
            *(long **)(pcVar12 + 8) = plVar11;
            *(code **)(pcVar12 + 0x10) = pcVar12;
            *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
            lVar15 = *(long *)(pcVar12 + 0x30);
            if (*(long *)(lVar15 + 0x10) == 0) {
LAB_021c1114:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("m_object != nullptr","AddReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x3d);
            }
            psVar3 = (short *)(lVar15 + 0x1a);
            do {
              sVar5 = *psVar3;
              cVar6 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(psVar3,0x10);
              if (bVar14) {
                *psVar3 = sVar5 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar5 == 0) {
              uVar20 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
              *(undefined8 *)(lVar15 + 8) = uVar20;
              *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
            }
            else if (sVar5 == -1) goto LAB_021c1134;
            *(undefined4 *)(pcVar12 + 0x4f8) = 0xffffffff;
            FUN_00df5bb4(pcVar12);
            lVar15 = *(long *)(pcVar12 + 0x30);
            local_270 = pcVar12;
            if (*(long *)(lVar15 + 0x10) == 0) goto LAB_021c1114;
            psVar3 = (short *)(lVar15 + 0x1a);
            do {
              sVar5 = *psVar3;
              cVar6 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(psVar3,0x10);
              if (bVar14) {
                *psVar3 = sVar5 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar5 == 0) {
              uVar20 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
              *(undefined8 *)(lVar15 + 8) = uVar20;
              *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
            }
            else if (sVar5 == -1) {
LAB_021c1134:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != 0","AddReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x58,"Reference counter overflows.");
            }
            (**(code **)(*plVar13 + 0x30))(plVar13,&local_270);
            if (local_270 != (code *)0x0) {
              lVar15 = *(long *)(local_270 + 0x30);
              psVar3 = (short *)(lVar15 + 0x1a);
              do {
                sVar5 = *psVar3;
                cVar6 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(psVar3,0x10);
                if (bVar14) {
                  *psVar3 = sVar5 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (sVar5 == 1) {
                *(undefined8 *)(lVar15 + 0x10) = 0;
                (**(code **)(*(long *)local_270 + 0x50))();
              }
              else if (sVar5 == 0) goto LAB_021c0e40;
            }
            do {
              lVar15 = *(long *)puVar7;
              lVar25 = *(long *)(puVar7 + 8);
              cVar6 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(puVar7,0x10);
              if (bVar14) {
                *(long *)puVar7 = lVar15;
                *(long *)(puVar7 + 8) = lVar25;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            do {
              lVar19 = *(long *)puVar7;
              lVar4 = *(long *)(puVar7 + 8);
              if (lVar19 != lVar15 || lVar4 != lVar25) {
                bVar14 = false;
                ClearExclusiveLocal();
                goto LAB_021c08b4;
              }
              cVar6 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(puVar7,0x10);
              if (bVar14) {
                *(long *)puVar7 = lVar15;
                *(long *)(puVar7 + 4) = lVar25 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            bVar14 = true;
LAB_021c08b4:
            if (!bVar14) {
              do {
                lVar15 = *(long *)puVar7;
                lVar25 = *(long *)(puVar7 + 8);
                if (lVar15 != lVar19 || lVar25 != lVar4) {
                  bVar14 = false;
                  ClearExclusiveLocal();
                  goto joined_r0x021c0f3c;
                }
                cVar6 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(puVar7,0x10);
                if (bVar14) {
                  *(long *)puVar7 = lVar19;
                  *(long *)(puVar7 + 4) = lVar4 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              bVar14 = true;
joined_r0x021c0f3c:
              if (!bVar14) {
                do {
                  lVar19 = *(long *)puVar7;
                  lVar4 = *(long *)(puVar7 + 8);
                  if (lVar19 != lVar15 || lVar4 != lVar25) {
                    bVar14 = false;
                    ClearExclusiveLocal();
                    lVar15 = lVar19;
                    lVar25 = lVar4;
                    goto joined_r0x021c0f3c;
                  }
                  cVar6 = '\x01';
                  bVar14 = (bool)ExclusiveMonitorPass(puVar7,0x10);
                  if (bVar14) {
                    *(long *)puVar7 = lVar15;
                    *(long *)(puVar7 + 4) = lVar25 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                bVar14 = true;
                lVar15 = lVar19;
                lVar25 = lVar4;
                goto joined_r0x021c0f3c;
              }
            }
            nn::os::SignalLightEvent((LightEventType *)(puVar7 + 0x10));
            plVar13 = (long *)*plVar28;
            *plVar28 = 0;
            if (plVar13 != (long *)0x0) {
              lVar15 = plVar13[6];
              psVar3 = (short *)(lVar15 + 0x1a);
              do {
                sVar5 = *psVar3;
                cVar6 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(psVar3,0x10);
                if (bVar14) {
                  *psVar3 = sVar5 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (sVar5 == 1) {
                *(undefined8 *)(lVar15 + 0x10) = 0;
                (**(code **)(*plVar13 + 0x50))();
              }
              else if (sVar5 == 0) goto LAB_021c0e40;
            }
            *plVar28 = (long)pcVar12;
            *(long *)(pcVar12 + 0xe8) = auVar30._8_8_;
            *(long *)(pcVar12 + 0xe0) = auVar30._0_8_;
            if (pcVar12[0xf4] == (code)0x0) {
              pcVar12[0xf4] = (code)0x1;
              (**(code **)(*(long *)pcVar12 + 0x78))(pcVar12);
            }
            lVar15 = *plVar28;
            plVar13 = *(long **)(lVar15 + 0x380);
            *(undefined8 *)(lVar15 + 0x368) = 0xf2ab15ab84f8683b;
            *(char **)(lVar15 + 0x370) = "CLOD Child";
            *(undefined8 *)(lVar15 + 0x378) = 10;
            *(undefined8 *)(lVar15 + 0x380) = 0;
            if (plVar13 != (long *)0x0) {
              (**(code **)(*plVar13 + 0x20))();
            }
            uStack_260 = 0x86bc;
            uStack_25e = 200;
            uStack_25d = 3;
            local_270 = (code *)0x0;
            local_268 = 0xf29ce484222645;
            uStack_261 = 0xcb;
            local_248 = 0;
            local_258 = (long *)0x0;
            local_250 = (long **)0x0;
            local_240 = 0x101;
            local_230 = 0;
            local_228 = (code *)0x0;
            local_220 = 0;
            uStack_218 = 0;
            local_1b0 = 0;
            local_1a0 = 0;
            local_198 = (code *)0x0;
            local_190 = 0;
            uStack_188 = 0;
            local_120 = 0;
            local_118 = (code *)0x0;
            local_110 = 0;
            uStack_108 = 0;
            local_a0 = 0;
            local_98 = (long *)0x0;
            local_90 = &DAT_cbf29ce484222645;
            local_88 = &DAT_03c886bc;
            local_80 = 0;
            local_78 = (long *)0x0;
            pcVar12 = (code *)*puVar27;
            if (pcVar12 == (code *)0x0) {
            }
            else {
              (**(code **)(*(long *)pcVar12 + 0x18))(pcVar12);
              if (local_270 != (code *)0x0) {
                lVar15 = *(long *)local_270;
                local_270 = pcVar12;
                (**(code **)(lVar15 + 0x20))();
                pcVar12 = local_270;
              }
            }
            local_270 = pcVar12;
            lVar15 = lVar24 + uVar23 * 0x78;
            local_268 = (undefined7)*(undefined8 *)(lVar15 + 8);
            uStack_261 = (undefined1)((ulong)*(undefined8 *)(lVar15 + 8) >> 0x38);
            uVar20 = *(undefined8 *)(lVar15 + 0x10);
            uStack_260 = (undefined2)uVar20;
            uStack_25e = (undefined1)((ulong)uVar20 >> 0x10);
            uStack_25d = (undefined5)((ulong)uVar20 >> 0x18);
            local_258 = *(long **)(lVar15 + 0x18);
            pplVar26 = *(long ***)(lVar15 + 0x20);
            if (pplVar26 != (long **)0x0) {
              (*(code *)(*pplVar26)[3])(pplVar26);
            }
            if (local_250 != (long **)0x0) {
              plVar13 = *local_250;
              local_250 = pplVar26;
              (*(code *)plVar13[4])();
              pplVar26 = local_250;
            }
            local_250 = pplVar26;
            lVar15 = lVar24 + uVar23 * 0x78;
            local_248 = *(undefined4 *)(lVar15 + 0x28);
            uVar20 = FUN_010278b0(*plVar28,*(undefined8 *)(*plVar28 + 8),&local_270);
            *(undefined8 *)(lVar15 + 0x70) = uVar20;
            if (local_78 != (long *)0x0) {
              (**(code **)(*local_78 + 0x20))();
            }
            if (local_98 != (long *)0x0) {
              plVar13 = local_98 + 5;
              do {
                lVar15 = *plVar13;
                iVar10 = (int)lVar15 + -1;
                cVar6 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                if (bVar14) {
                  *(int *)plVar13 = iVar10;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar10 == 0) {
                (**(code **)(*local_98 + 0x10))();
              }
              else if ((int)lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint32_t>::max()",
                           "DecrementReferenceInternal",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                           ,0x58,"Reference counter underflows.");
              }
            }
            pcVar12 = local_118;
            if (local_118 != (code *)0x0) {
              local_110 = 0;
              uStack_108 = 0;
              local_120 = 0;
              local_118 = (code *)0x0;
              (*pcVar12)(auStack_100);
            }
            if (local_198 != (code *)0x0) {
              local_190 = 0;
              uStack_188 = 0;
              local_1a0 = 0;
              (*local_198)(auStack_180);
            }
            if (local_228 != (code *)0x0) {
              local_220 = 0;
              uStack_218 = 0;
              local_230 = 0;
              (*local_228)(auStack_210);
            }
            if (local_250 != (long **)0x0) {
              (*(code *)(*local_250)[4])();
            }
            if (local_270 != (code *)0x0) {
              (**(code **)(*(long *)local_270 + 0x20))();
            }
            lVar15 = *(long *)(lVar24 + uVar23 * 0x78 + 0x30);
            if ((lVar15 != 0) && (**(char **)(lVar15 + 0x38) != '\0')) {
              FUN_018cd7b4(&local_290,uVar16);
              uVar16 = FUN_01188b88(*plVar28,*(undefined8 *)(*plVar28 + 8));
              plVar13 = local_290;
              local_278 = local_290 + 4;
              plVar11 = (long *)0x0;
              if (local_290 != (long *)0x0) {
                (**(code **)(*local_278 + 0x10))();
                plVar11 = local_278;
              }
              local_278 = plVar11;
              FUN_00d8fb98(&local_270,PTR_DAT_047d9c40);
              FUN_01188090(uVar16,&local_278,&local_270,0);
              if (local_258 != (long *)0x0) {
                (**(code **)(*local_258 + 0x20))();
              }
              if (local_278 != (long *)0x0) {
                (**(code **)(*local_278 + 0x18))();
              }
              if (plVar13 != (long *)0x0) {
                lVar15 = plVar13[6];
                psVar3 = (short *)(lVar15 + 0x1a);
                do {
                  sVar5 = *psVar3;
                  cVar6 = '\x01';
                  bVar14 = (bool)ExclusiveMonitorPass(psVar3,0x10);
                  if (bVar14) {
                    *psVar3 = sVar5 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (sVar5 == 1) {
                  *(undefined8 *)(lVar15 + 0x10) = 0;
                  (**(code **)(*plVar13 + 0x50))(plVar13);
                }
                else if (sVar5 == 0) goto LAB_021c0e40;
              }
            }
            if (DAT_04841b60 == (code *)0x0) {
              lVar24 = *(long *)(lVar24 + uVar23 * 0x78 + 0x60);
              if ((lVar24 != 0) && (pcVar17 = *(char **)(lVar24 + 0x38), *pcVar17 != '\0')) {
                local_270 = DAT_03d62690;
                uStack_25e = (undefined1)((uint)ram0x03d6269f >> 0x18);
                local_290 = *(long **)pcVar17;
                uStack_260 = *(undefined2 *)(pcVar17 + 0x10);
                local_268 = (undefined7)*(undefined8 *)(pcVar17 + 8);
                uStack_261 = (undefined1)((ulong)*(undefined8 *)(pcVar17 + 8) >> 0x38);
                local_281 = CONCAT13(uStack_25e,CONCAT21(uStack_260,uStack_261));
                uVar18 = (ulong)local_290 & 0xff;
                uStack_288 = local_268;
                if ((int)uVar18 != 0) {
                  puVar22 = &DAT_cbf29ce484222645;
                  pbVar21 = (byte *)((ulong)&local_290 | 1);
                  do {
                    puVar22 = (undefined1 *)(((ulong)puVar22 ^ uVar18) * 0x100000001b3);
                    bVar8 = *pbVar21;
                    uVar18 = (ulong)bVar8;
                    pbVar21 = pbVar21 + 1;
                  } while (bVar8 != 0);
                  if (puVar22 == (undefined1 *)0x9dd5600c5f40920d) goto LAB_021c0a88;
                }
                FUN_01329e04(*plVar28,*(undefined8 *)(*plVar28 + 8),&local_290);
              }
            }
            else {
              (*DAT_04841b60)(&DAT_04841b80,puVar27);
            }
LAB_021c0a88:
            lVar24 = *(long *)(param_1 + 0x8f0);
            uVar23 = uVar23 + 1;
          } while (uVar23 < (ulong)((*(long *)(param_1 + 0x8f8) - lVar24 >> 3) * -0x1111111111111111
                                   ));
        }
        *(undefined1 *)(param_1 + 0x7f8) = 1;
        if (local_298 != (long *)0x0) {
          (**(code **)(*local_298 + 0x60))();
        }
      }
      *(undefined1 *)(param_1 + 0x7ea) = 1;
      *(undefined8 *)(param_1 + 0x800) = 0;
      goto LAB_021c0058;
    }
  }
  else {
LAB_021c0058:
    if (fVar29 <= *(float *)(param_1 + 0x80c)) {
      local_270 = (code *)&LAB_021c12c8;
      local_268 = 0x2b5debc;
      uStack_261 = 0;
      uStack_260 = 0xdec0;
      uStack_25e = 0xb5;
      uStack_25d = 2;
      local_258 = (long *)&LAB_02b5dec4;
      FUN_00cb7a60(param_1,&local_270);
      pcVar12 = (code *)CONCAT17(uStack_261,local_268);
      if (pcVar12 != (code *)0x0) {
        uStack_260 = 0;
        uStack_25e = 0;
        uStack_25d = 0;
        local_258 = (long *)0x0;
        local_270 = (code *)0x0;
        local_268 = 0;
        uStack_261 = 0;
        (*pcVar12)(&local_250);
      }
      *(undefined8 *)(param_1 + 0x800) = 6;
      *(undefined8 *)(param_1 + 0x7f0) = 0;
      *(undefined2 *)(param_1 + 0x7ea) = 0;
    }
  }
  lVar24 = *(long *)(param_1 + 0x800);
  if (lVar24 != 0) {
    if (lVar24 == 6) {
      local_290 = (long *)CONCAT71(local_290._1_7_,1);
      local_250 = &local_290;
      local_270 = (code *)&LAB_02b5dec8;
      local_268 = 0x2b5df1c;
      uStack_261 = 0;
      uStack_260 = 0xdf20;
      uStack_25e = 0xb5;
      uStack_25d = 2;
      local_258 = (long *)&LAB_02b5df2c;
      FUN_00cb7a60(param_1,&local_270);
      pcVar12 = (code *)CONCAT17(uStack_261,local_268);
      if (pcVar12 != (code *)0x0) {
        uStack_260 = 0;
        uStack_25e = 0;
        uStack_25d = 0;
        local_258 = (long *)0x0;
        local_270 = (code *)0x0;
        local_268 = 0;
        uStack_261 = 0;
        (*pcVar12)(&local_250);
      }
      if ((char)local_290 != '\0') {
        *(long *)(param_1 + 0x800) = *(long *)(param_1 + 0x800) + -1;
      }
    }
    else {
      *(long *)(param_1 + 0x800) = lVar24 + -1;
      if ((lVar24 + -1 != 0) && (*(char *)(param_1 + 0x7f8) != '\0')) {
        lVar15 = *(long *)(param_1 + 0x8f8);
        for (lVar24 = *(long *)(param_1 + 0x8f0); lVar24 != lVar15; lVar24 = lVar24 + 0x78) {
          plVar13 = *(long **)(lVar24 + 0x68);
          if (plVar13 != (long *)0x0) {
            (**(code **)(*plVar13 + 0x120))(plVar13,1);
            plVar13 = *(long **)(lVar24 + 0x68);
            *(undefined8 *)(lVar24 + 0x68) = 0;
            if (plVar13 != (long *)0x0) {
              lVar25 = plVar13[6];
              psVar3 = (short *)(lVar25 + 0x1a);
              do {
                sVar5 = *psVar3;
                cVar6 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(psVar3,0x10);
                if (bVar14) {
                  *psVar3 = sVar5 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (sVar5 == 1) {
                *(undefined8 *)(lVar25 + 0x10) = 0;
                (**(code **)(*plVar13 + 0x50))();
              }
              else if (sVar5 == 0) {
LAB_021c0e40:
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                           ,0x60,"Reference counter underflows.");
              }
            }
          }
        }
        *(undefined2 *)(param_1 + 0x7f8) = 0;
      }
    }
  }
  if ((*(char *)(param_1 + 0x7ea) != '\0') && (*(char *)(param_1 + 0x7eb) != '\0')) {
    local_270 = FUN_00cf6d74;
    local_268 = 0x2b5deb0;
    uStack_261 = 0;
    uStack_260 = 0xdeb4;
    uStack_25e = 0xb5;
    uStack_25d = 2;
    local_258 = (long *)&LAB_02b5deb8;
    FUN_00cb7a60(param_1,&local_270);
    pcVar12 = (code *)CONCAT17(uStack_261,local_268);
    if (pcVar12 != (code *)0x0) {
      uStack_260 = 0;
      uStack_25e = 0;
      uStack_25d = 0;
      local_258 = (long *)0x0;
      local_270 = (code *)0x0;
      local_268 = 0;
      uStack_261 = 0;
      (*pcVar12)(&local_250);
    }
  }
  lVar24 = *(long *)(param_1 + 0x7f0);
  if ((lVar24 != 0) && (*(char *)(param_1 + 0x7f8) != '\0')) {
    if (*(char *)(param_1 + 0x7f9) == '\0') {
      lVar15 = *(long *)(param_1 + 0x8f0);
      lVar25 = *(long *)(param_1 + 0x8f8);
      if (lVar15 == lVar25) {
        *(undefined1 *)(param_1 + 0x7f9) = 1;
      }
      else {
        if (*(long **)(lVar15 + 0x68) == (long *)0x0) {
          bVar8 = 1;
        }
        else {
          bVar8 = (**(code **)(**(long **)(lVar15 + 0x68) + 0xd8))();
        }
        if (lVar15 + 0x78 != lVar25) {
          if (*(long **)(lVar15 + 0xe0) != (long *)0x0) {
            bVar9 = (**(code **)(**(long **)(lVar15 + 0xe0) + 0xd8))();
            bVar8 = bVar8 & bVar9;
          }
          for (lVar15 = lVar15 + 0xf0; lVar15 != lVar25; lVar15 = lVar15 + 0x78) {
            if (*(long **)(lVar15 + 0x68) != (long *)0x0) {
              bVar9 = (**(code **)(**(long **)(lVar15 + 0x68) + 0xd8))();
              bVar8 = bVar8 & bVar9;
            }
          }
        }
        *(byte *)(param_1 + 0x7f9) = bVar8 & 1;
        if ((bVar8 & 1) == 0) goto LAB_021c00d8;
        lVar24 = *(long *)(param_1 + 0x7f0);
      }
    }
    *(long *)(param_1 + 0x7f0) = lVar24 + -1;
    if (lVar24 + -1 == 0) {
      local_270 = FUN_00cf6d74;
      local_268 = 0x2b5deb0;
      uStack_261 = 0;
      uStack_260 = 0xdeb4;
      uStack_25e = 0xb5;
      uStack_25d = 2;
      local_258 = (long *)&LAB_02b5deb8;
      FUN_00cb7a60(param_1,&local_270);
      pcVar12 = (code *)CONCAT17(uStack_261,local_268);
      if (pcVar12 != (code *)0x0) {
        uStack_260 = 0;
        uStack_25e = 0;
        uStack_25d = 0;
        local_258 = (long *)0x0;
        local_270 = (code *)0x0;
        local_268 = 0;
        uStack_261 = 0;
        (*pcVar12)(&local_250);
      }
      if (*(char *)(param_1 + 0x7f8) != '\0') {
        lVar24 = *(long *)(param_1 + 0x8f0);
        lVar15 = *(long *)(param_1 + 0x8f8);
        if (lVar24 != lVar15) {
          if (*(long *)(lVar24 + 0x70) != 0) {
            FUN_0143cdb0(*(long *)(lVar24 + 0x70),1);
          }
          if (lVar24 + 0x78 != lVar15) {
            if (*(long *)(lVar24 + 0xe8) != 0) {
              FUN_0143cdb0(*(long *)(lVar24 + 0xe8),1);
            }
            for (lVar24 = lVar24 + 0xf0; lVar24 != lVar15; lVar24 = lVar24 + 0x78) {
              if (*(long *)(lVar24 + 0x70) != 0) {
                FUN_0143cdb0(*(long *)(lVar24 + 0x70),1);
              }
            }
          }
        }
      }
      *(undefined1 *)(param_1 + 0x7eb) = 1;
    }
  }
LAB_021c00d8:
  if (*(char *)(param_1 + 0x7ea) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x7eb) != '\0') {
    return;
  }
  if (*(long *)(param_1 + 0x7f0) != 0) {
    return;
  }
  if (*(char *)(param_1 + 0x7f8) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x7f9) == '\0') {
    lVar24 = *(long *)(param_1 + 0x8f0);
    lVar15 = *(long *)(param_1 + 0x8f8);
    if (lVar24 != lVar15) {
      if (*(long **)(lVar24 + 0x68) == (long *)0x0) {
        bVar8 = 1;
      }
      else {
        bVar8 = (**(code **)(**(long **)(lVar24 + 0x68) + 0xd8))();
      }
      if (lVar24 + 0x78 != lVar15) {
        if (*(long **)(lVar24 + 0xe0) != (long *)0x0) {
          bVar9 = (**(code **)(**(long **)(lVar24 + 0xe0) + 0xd8))();
          bVar8 = bVar8 & bVar9;
        }
        for (lVar24 = lVar24 + 0xf0; lVar24 != lVar15; lVar24 = lVar24 + 0x78) {
          if (*(long **)(lVar24 + 0x68) != (long *)0x0) {
            bVar9 = (**(code **)(**(long **)(lVar24 + 0x68) + 0xd8))();
            bVar8 = bVar8 & bVar9;
          }
        }
      }
      *(byte *)(param_1 + 0x7f9) = bVar8 & 1;
      if ((bVar8 & 1) == 0) {
        return;
      }
      *(undefined8 *)(param_1 + 0x7f0) = 10;
      if (*(char *)(param_1 + 0x7f8) == '\0') {
        return;
      }
      goto LAB_021c0398;
    }
    *(undefined1 *)(param_1 + 0x7f9) = 1;
  }
  *(undefined8 *)(param_1 + 0x7f0) = 10;
LAB_021c0398:
  lVar24 = *(long *)(param_1 + 0x8f0);
  lVar15 = *(long *)(param_1 + 0x8f8);
  if (lVar24 == lVar15) {
    return;
  }
  if (*(long *)(lVar24 + 0x70) != 0) {
    FUN_0143cdb0(*(long *)(lVar24 + 0x70),0);
  }
  if (lVar24 + 0x78 == lVar15) {
    return;
  }
  if (*(long *)(lVar24 + 0xe8) != 0) {
    FUN_0143cdb0(*(long *)(lVar24 + 0xe8),0);
  }
  for (lVar24 = lVar24 + 0xf0; lVar24 != lVar15; lVar24 = lVar24 + 0x78) {
    if (*(long *)(lVar24 + 0x70) != 0) {
      FUN_0143cdb0(*(long *)(lVar24 + 0x70),0);
    }
  }
  return;
}


