/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fea688; name: FUN_00fea688
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00fea688(long param_1)

{
  int *piVar1;
  char *pcVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  short sVar12;
  uint uVar13;
  long lVar14;
  undefined1 (*pauVar15) [16];
  long lVar16;
  uint uVar17;
  bool bVar18;
  long lVar19;
  undefined8 *puVar20;
  long lVar21;
  uint uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  long lVar30;
  int iVar31;
  long lVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  char cVar42;
  float fVar43;
  int iVar47;
  int iVar48;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  int iVar49;
  undefined1 auVar46 [16];
  float fVar50;
  float fVar51;
  float fVar57;
  float fVar58;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar59 [12];
  undefined1 auVar60 [12];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar67;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float local_80;
  float fStack_7c;
  float fStack_78;
  undefined4 uStack_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  
  if (*(char *)(param_1 + 0x66) != '\0') {
    return;
  }
  lVar14 = *(long *)(param_1 + 0x70);
  if (lVar14 == 0) {
    lVar14 = FUN_00c8dda0(*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x30));
    if ((lVar14 != 0) && (plVar29 = *(long **)(lVar14 + 0x120), plVar29 != (long *)0x0)) {
      plVar4 = plVar29 + 5;
      do {
        lVar14 = *plVar4;
        cVar42 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar18) {
          *(int *)plVar4 = (int)lVar14 + 1;
          cVar42 = ExclusiveMonitorsStatus();
        }
      } while (cVar42 != '\0');
      if ((int)lVar14 == -1) {
LAB_00feb50c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      if (((*PTR_DAT_047daf58 & 1) == 0) &&
         (iVar31 = __cxa_guard_acquire(PTR_DAT_047daf58), iVar31 != 0)) {
        FUN_00100190(PTR_LAB_047dd580,PTR_DAT_047daf60,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047daf58);
      }
      plVar28 = (long *)PTR_DAT_047daf60;
      if (plVar29[0x18] != 0) {
        plVar28 = (long *)(plVar29[0x18] + 0x70);
      }
      lVar14 = *plVar28;
      if (lVar14 != 0) {
        piVar1 = (int *)(lVar14 + 0x28);
        do {
          iVar31 = *piVar1;
          cVar42 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar18) {
            *piVar1 = iVar31 + 1;
            cVar42 = ExclusiveMonitorsStatus();
          }
        } while (cVar42 != '\0');
        if (iVar31 == -1) goto LAB_00feb50c;
      }
      plVar28 = *(long **)(param_1 + 0x70);
      *(long *)(param_1 + 0x70) = lVar14;
      if (plVar28 != (long *)0x0) {
        plVar27 = plVar28 + 5;
        do {
          lVar14 = *plVar27;
          iVar31 = (int)lVar14 + -1;
          cVar42 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar18) {
            *(int *)plVar27 = iVar31;
            cVar42 = ExclusiveMonitorsStatus();
          }
        } while (cVar42 != '\0');
        if (iVar31 == 0) {
          (**(code **)(*plVar28 + 0x10))();
        }
        else if ((int)lVar14 == 0) goto LAB_00feaa18;
      }
      do {
        lVar14 = *plVar4;
        iVar31 = (int)lVar14 + -1;
        cVar42 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar18) {
          *(int *)plVar4 = iVar31;
          cVar42 = ExclusiveMonitorsStatus();
        }
      } while (cVar42 != '\0');
      if (iVar31 == 0) {
        (**(code **)(*plVar29 + 0x10))(plVar29);
      }
      else if ((int)lVar14 == 0) {
LAB_00feaa18:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    lVar14 = *(long *)(param_1 + 0x70);
    if (lVar14 == 0) {
      return;
    }
  }
  plVar29 = *(long **)(lVar14 + 0x30);
  plVar4 = *(long **)(lVar14 + 0x38);
  if (plVar29 != plVar4) {
    uVar23 = *(ulong *)(param_1 + 0x78);
    pcVar2 = (char *)(param_1 + 0x25e0);
    plVar28 = plVar29;
LAB_00fea714:
    uVar24 = *(ulong *)(*plVar28 + 0x40);
    if (uVar24 != 0) {
      uVar25 = uVar24 - (uVar24 >> 1 & 0x5555555555555555);
      uVar25 = (uVar25 & 0x3333333333333333) + (uVar25 >> 2 & 0x3333333333333333);
      uVar25 = (uVar25 + (uVar25 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar25 < 2) {
        uVar26 = uVar24 - 1 & uVar23;
      }
      else {
        uVar26 = uVar23;
        if (uVar24 <= uVar23) {
          uVar26 = 0;
          if (uVar24 != 0) {
            uVar26 = uVar23 / uVar24;
          }
          uVar26 = uVar23 - uVar26 * uVar24;
        }
      }
      plVar27 = *(long **)(*(long *)(*plVar28 + 0x38) + uVar26 * 8);
      if ((plVar27 != (long *)0x0) && (plVar27 = (long *)*plVar27, plVar27 != (long *)0x0)) {
        if (uVar25 < 2) {
          do {
            if (plVar27[1] == uVar23) {
              if (plVar27[2] == uVar23) goto LAB_00fea808;
            }
            else if ((plVar27[1] & uVar24 - 1) != uVar26) break;
            plVar27 = (long *)*plVar27;
          } while (plVar27 != (long *)0x0);
        }
        else {
          do {
            uVar25 = plVar27[1];
            if (uVar25 == uVar23) {
              if (plVar27[2] == uVar23) goto LAB_00fea808;
            }
            else {
              if (uVar24 <= uVar25) {
                uVar5 = 0;
                if (uVar24 != 0) {
                  uVar5 = uVar25 / uVar24;
                }
                uVar25 = uVar25 - uVar5 * uVar24;
              }
              if (uVar25 != uVar26) break;
            }
            plVar27 = (long *)*plVar27;
          } while (plVar27 != (long *)0x0);
        }
      }
    }
    goto LAB_00fea810;
  }
  goto LAB_00fea948;
LAB_00fea808:
  if (-1 < (short)plVar27[6]) {
    uVar22 = (uint)*(ushort *)((long)plVar28 + 10) + (int)(short)plVar27[6];
    goto LAB_00fea820;
  }
LAB_00fea810:
  plVar28 = plVar28 + 2;
  if (plVar28 == plVar4) goto code_r0x00fea81c;
  goto LAB_00fea714;
LAB_00fea924:
  if (-1 < (short)plVar28[6]) {
    local_70 = (float)((uint)*(ushort *)((long)plVar29 + 10) + (int)(short)plVar28[6]);
    goto LAB_00fea93c;
  }
LAB_00fea92c:
  plVar29 = plVar29 + 2;
  if (plVar29 == plVar4) goto LAB_00fea938;
  goto LAB_00fea830;
code_r0x00fea81c:
  uVar22 = 0xffff;
LAB_00fea820:
  if (plVar29 != plVar4) {
    uVar23 = *(ulong *)(param_1 + 0x98);
LAB_00fea830:
    uVar24 = *(ulong *)(*plVar29 + 0x40);
    if (uVar24 != 0) {
      uVar25 = uVar24 - (uVar24 >> 1 & 0x5555555555555555);
      uVar25 = (uVar25 & 0x3333333333333333) + (uVar25 >> 2 & 0x3333333333333333);
      uVar25 = (uVar25 + (uVar25 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar25 < 2) {
        uVar26 = uVar24 - 1 & uVar23;
      }
      else {
        uVar26 = uVar23;
        if (uVar24 <= uVar23) {
          uVar26 = 0;
          if (uVar24 != 0) {
            uVar26 = uVar23 / uVar24;
          }
          uVar26 = uVar23 - uVar26 * uVar24;
        }
      }
      plVar28 = *(long **)(*(long *)(*plVar29 + 0x38) + uVar26 * 8);
      if ((plVar28 != (long *)0x0) && (plVar28 = (long *)*plVar28, plVar28 != (long *)0x0)) {
        if (uVar25 < 2) {
          do {
            if (plVar28[1] == uVar23) {
              if (plVar28[2] == uVar23) goto LAB_00fea924;
            }
            else if ((plVar28[1] & uVar24 - 1) != uVar26) break;
            plVar28 = (long *)*plVar28;
          } while (plVar28 != (long *)0x0);
        }
        else {
          do {
            uVar25 = plVar28[1];
            if (uVar25 == uVar23) {
              if (plVar28[2] == uVar23) goto LAB_00fea924;
            }
            else {
              if (uVar24 <= uVar25) {
                uVar5 = 0;
                if (uVar24 != 0) {
                  uVar5 = uVar25 / uVar24;
                }
                uVar25 = uVar25 - uVar5 * uVar24;
              }
              if (uVar25 != uVar26) break;
            }
            plVar28 = (long *)*plVar28;
          } while (plVar28 != (long *)0x0);
        }
      }
    }
    goto LAB_00fea92c;
  }
LAB_00fea938:
  local_70 = 9.18341e-41;
LAB_00fea93c:
  if (-1 < (short)(SUB42(local_70,0) | (ushort)uVar22)) {
    iVar31 = 1;
    *(undefined4 *)(param_1 + 0x1dd0) = 1;
    if (((uint)local_70 & 0xffff) != (uVar22 & 0xffff)) {
      *(undefined4 *)(param_1 + 0x1dd0) = 2;
      uVar17 = (uint)local_70;
      while( true ) {
        uVar13 = FUN_00c9edd0(lVar14,uVar17);
        uVar17 = (uint)(short)uVar13;
        if (((int)uVar17 < 0) || ((uVar13 & 0xffff) == (uVar22 & 0xffff))) break;
        lVar14 = *(long *)(param_1 + 0x70);
        *(int *)(param_1 + 0x1dd0) = *(int *)(param_1 + 0x1dd0) + 1;
      }
      if ((uVar13 & 0xffff) != (uVar22 & 0xffff)) {
        return;
      }
      iVar31 = *(int *)(param_1 + 0x1dd0);
      if (0x3f < iVar31) {
        return;
      }
    }
    if (*(char *)(param_1 + 0x25e1) != '\0') {
      uVar17 = (uint)local_70;
      do {
        iVar31 = iVar31 + -1;
        FUN_0271af88(*(undefined8 *)(param_1 + 0x70),uVar17);
        if ((iVar31 == 0) && (*(char *)(param_1 + 0x68) != '\0')) {
          FUN_00d172e8(*(undefined1 (*) [16])(param_1 + 0x110),*(undefined8 *)(param_1 + 0x70),
                       uVar17);
        }
        if ((uVar17 & 0xffff) == (uVar22 & 0xffff)) break;
        sVar12 = FUN_00c9edd0(*(undefined8 *)(param_1 + 0x70),uVar17);
        uVar17 = (uint)sVar12;
      } while (-1 < (int)uVar17);
    }
    lVar14 = *(long *)(*(long *)(*(long *)(param_1 + 0x58) + 0x30) + 0xe8);
    if (lVar14 == 0) {
      plVar29 = (long *)0x0;
    }
    else {
      plVar29 = *(long **)(lVar14 + 0x48);
    }
    pauVar15 = (undefined1 (*) [16])(**(code **)(*plVar29 + 0x68))(plVar29);
    auVar45 = *pauVar15;
    uVar6 = *(undefined8 *)pauVar15[1];
    uVar7 = *(undefined8 *)(pauVar15[1] + 8);
    fStack_98 = auVar45._8_4_;
    fStack_94 = auVar45._12_4_;
    local_a0 = auVar45._0_4_;
    fStack_9c = auVar45._4_4_;
    auVar45 = pauVar15[2];
    if (*(char *)(param_1 + 0x25e3) == '\0') {
      auVar63 = pauVar15[3];
    }
    else {
      lVar14 = (**(code **)(*plVar29 + 0x68))(plVar29);
      uVar8 = *(undefined4 *)(lVar14 + 0x30);
      uVar9 = *(undefined4 *)(lVar14 + 0x34);
      *(ulong *)(param_1 + 200) = (ulong)*(uint *)(lVar14 + 0x38);
      *(undefined4 *)(param_1 + 0xc0) = uVar8;
      *(undefined4 *)(param_1 + 0xc4) = uVar9;
      auVar63._8_8_ = _UNK_03cabe58;
      auVar63._0_8_ = _DAT_03cabe50;
    }
    if (-1 < (short)SUB42(local_70,0)) {
      lVar14 = (long)*(int *)(param_1 + 0x1dd0);
      do {
        lVar14 = lVar14 + -1;
        lVar30 = param_1 + lVar14 * 0x70;
        *(uint *)(lVar30 + 0x130) = (uint)local_70 & 0xffff;
        lVar16 = FUN_00c4c40c(*(undefined8 *)(param_1 + 0x70));
        fVar51 = *(float *)(lVar16 + 0x30);
        fVar43 = *(float *)(lVar16 + 0x34);
        fVar58 = *(float *)(lVar16 + 0x38);
        fVar67 = *(float *)(lVar16 + 0x3c);
        local_b0 = (float)uVar6;
        fStack_ac = (float)((ulong)uVar6 >> 0x20);
        fStack_a8 = (float)uVar7;
        fStack_a4 = (float)((ulong)uVar7 >> 0x20);
        local_c0 = auVar45._0_4_;
        fStack_bc = auVar45._4_4_;
        fStack_b8 = auVar45._8_4_;
        fStack_b4 = auVar45._12_4_;
        local_d0 = auVar63._0_4_;
        fStack_cc = auVar63._4_4_;
        fStack_c8 = auVar63._8_4_;
        fStack_c4 = auVar63._12_4_;
        auVar52._0_8_ =
             CONCAT44(fStack_9c * fVar51 + fStack_ac * fVar43 + fStack_bc * fVar58 +
                      fStack_cc * fVar67,
                      local_a0 * fVar51 + local_b0 * fVar43 + local_c0 * fVar58 + local_d0 * fVar67)
        ;
        auVar52._8_4_ =
             fStack_98 * fVar51 + fStack_a8 * fVar43 + fStack_b8 * fVar58 + fStack_c8 * fVar67;
        auVar52._12_4_ =
             fStack_94 * fVar51 + fStack_a4 * fVar43 + fStack_b4 * fVar58 + fStack_c4 * fVar67;
        auVar44 = NEON_ext(auVar52,auVar52,8,1);
        *(ulong *)(lVar30 + 0xd8) = (ulong)auVar44._0_4_;
        *(undefined8 *)(lVar30 + 0xd0) = auVar52._0_8_;
        lVar30 = *(long *)(param_1 + 0x70);
        plVar29 = (long *)(lVar30 + 0x450);
        lVar16 = nn::os::GetCurrentThread();
        do {
          lVar32 = *plVar29;
          lVar19 = *(long *)(lVar30 + 0x458);
          cVar42 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar18) {
            *plVar29 = lVar32;
            *(long *)(lVar30 + 0x458) = lVar19;
            cVar42 = ExclusiveMonitorsStatus();
          }
        } while (cVar42 != '\0');
LAB_00feac38:
        while ((lVar32 != 0 && (lVar16 != lVar32))) {
          nn::os::WaitLightEvent((LightEventType *)(lVar30 + 0x460));
          do {
            lVar32 = *plVar29;
            lVar19 = *(long *)(lVar30 + 0x458);
            cVar42 = '\x01';
            bVar18 = (bool)ExclusiveMonitorPass(plVar29,0x10);
            if (bVar18) {
              *plVar29 = lVar32;
              *(long *)(lVar30 + 0x458) = lVar19;
              cVar42 = ExclusiveMonitorsStatus();
            }
          } while (cVar42 != '\0');
        }
        do {
          lVar21 = *plVar29;
          if (lVar21 != lVar32 || *(long *)(lVar30 + 0x458) != lVar19) {
            bVar18 = false;
            ClearExclusiveLocal();
            goto LAB_00feac74;
          }
          cVar42 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar18) {
            *plVar29 = lVar32;
            *(long *)(lVar30 + 0x454) = lVar19 + 1;
            cVar42 = ExclusiveMonitorsStatus();
          }
        } while (cVar42 != '\0');
        bVar18 = true;
LAB_00feac74:
        if (!bVar18) {
          lVar32 = lVar21;
          lVar19 = *(long *)(lVar30 + 0x458);
          goto LAB_00feac38;
        }
        lVar16 = *(long *)(lVar30 + 0x248) +
                 (long)*(short *)(*(long *)(lVar30 + 0xa0) + (long)SUB42(local_70,0) * 2) * 0x30;
        uVar10 = *(undefined8 *)(lVar16 + 0x20);
        uVar11 = *(undefined8 *)(lVar16 + 0x28);
        do {
          lVar16 = *plVar29;
          lVar32 = *(long *)(lVar30 + 0x458);
          cVar42 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar18) {
            *plVar29 = lVar16;
            *(long *)(lVar30 + 0x458) = lVar32;
            cVar42 = ExclusiveMonitorsStatus();
          }
        } while (cVar42 != '\0');
        do {
          lVar19 = *plVar29;
          lVar21 = *(long *)(lVar30 + 0x458);
          if (lVar19 != lVar16 || lVar21 != lVar32) {
            bVar18 = false;
            ClearExclusiveLocal();
            goto LAB_00feacd4;
          }
          cVar42 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar18) {
            *plVar29 = lVar16;
            *(long *)(lVar30 + 0x454) = lVar32 + -1;
            cVar42 = ExclusiveMonitorsStatus();
          }
        } while (cVar42 != '\0');
        bVar18 = true;
LAB_00feacd4:
        if (!bVar18) {
          do {
            lVar16 = *plVar29;
            lVar32 = *(long *)(lVar30 + 0x458);
            if (lVar16 != lVar19 || lVar32 != lVar21) {
              bVar18 = false;
              ClearExclusiveLocal();
              goto joined_r0x00feb3fc;
            }
            cVar42 = '\x01';
            bVar18 = (bool)ExclusiveMonitorPass(plVar29,0x10);
            if (bVar18) {
              *plVar29 = lVar19;
              *(long *)(lVar30 + 0x454) = lVar21 + -1;
              cVar42 = ExclusiveMonitorsStatus();
            }
          } while (cVar42 != '\0');
          bVar18 = true;
joined_r0x00feb3fc:
          if (!bVar18) {
            do {
              lVar19 = *plVar29;
              lVar21 = *(long *)(lVar30 + 0x458);
              if (lVar19 != lVar16 || lVar21 != lVar32) {
                bVar18 = false;
                ClearExclusiveLocal();
                lVar16 = lVar19;
                lVar32 = lVar21;
                goto joined_r0x00feb3fc;
              }
              cVar42 = '\x01';
              bVar18 = (bool)ExclusiveMonitorPass(plVar29,0x10);
              if (bVar18) {
                *plVar29 = lVar16;
                *(long *)(lVar30 + 0x454) = lVar32 + -1;
                cVar42 = ExclusiveMonitorsStatus();
              }
            } while (cVar42 != '\0');
            bVar18 = true;
            lVar16 = lVar19;
            lVar32 = lVar21;
            goto joined_r0x00feb3fc;
          }
        }
        nn::os::SignalLightEvent((LightEventType *)(lVar30 + 0x460));
        lVar16 = param_1 + lVar14 * 0x70;
        *(undefined8 *)(lVar16 + 0x108) = uVar11;
        *(undefined8 *)(lVar16 + 0x100) = uVar10;
        lVar30 = *(long *)(param_1 + 0x70);
        plVar29 = (long *)(lVar30 + 0x450);
        lVar16 = nn::os::GetCurrentThread();
        do {
          lVar32 = *plVar29;
          lVar19 = *(long *)(lVar30 + 0x458);
          cVar42 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar18) {
            *plVar29 = lVar32;
            *(long *)(lVar30 + 0x458) = lVar19;
            cVar42 = ExclusiveMonitorsStatus();
          }
        } while (cVar42 != '\0');
LAB_00fead0c:
        while ((lVar32 != 0 && (lVar16 != lVar32))) {
          nn::os::WaitLightEvent((LightEventType *)(lVar30 + 0x460));
          do {
            lVar32 = *plVar29;
            lVar19 = *(long *)(lVar30 + 0x458);
            cVar42 = '\x01';
            bVar18 = (bool)ExclusiveMonitorPass(plVar29,0x10);
            if (bVar18) {
              *plVar29 = lVar32;
              *(long *)(lVar30 + 0x458) = lVar19;
              cVar42 = ExclusiveMonitorsStatus();
            }
          } while (cVar42 != '\0');
        }
        do {
          lVar21 = *plVar29;
          if (lVar21 != lVar32 || *(long *)(lVar30 + 0x458) != lVar19) {
            bVar18 = false;
            ClearExclusiveLocal();
            goto LAB_00fead48;
          }
          cVar42 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar18) {
            *plVar29 = lVar32;
            *(long *)(lVar30 + 0x454) = lVar19 + 1;
            cVar42 = ExclusiveMonitorsStatus();
          }
        } while (cVar42 != '\0');
        bVar18 = true;
LAB_00fead48:
        if (!bVar18) {
          lVar32 = lVar21;
          lVar19 = *(long *)(lVar30 + 0x458);
          goto LAB_00fead0c;
        }
        lVar16 = *(long *)(lVar30 + 0x248) +
                 (long)*(short *)(*(long *)(lVar30 + 0xa0) + (long)SUB42(local_70,0) * 2) * 0x30;
        auVar60 = *(undefined1 (*) [12])(lVar16 + 0x10);
        uStack_74 = (undefined4)((ulong)*(undefined8 *)(lVar16 + 0x18) >> 0x20);
        do {
          lVar16 = *plVar29;
          lVar32 = *(long *)(lVar30 + 0x458);
          cVar42 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar18) {
            *plVar29 = lVar16;
            *(long *)(lVar30 + 0x458) = lVar32;
            cVar42 = ExclusiveMonitorsStatus();
          }
        } while (cVar42 != '\0');
        do {
          lVar19 = *plVar29;
          lVar21 = *(long *)(lVar30 + 0x458);
          if (lVar19 != lVar16 || lVar21 != lVar32) {
            bVar18 = false;
            ClearExclusiveLocal();
            goto LAB_00feada0;
          }
          cVar42 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar18) {
            *plVar29 = lVar16;
            *(long *)(lVar30 + 0x454) = lVar32 + -1;
            cVar42 = ExclusiveMonitorsStatus();
          }
        } while (cVar42 != '\0');
        bVar18 = true;
LAB_00feada0:
        if (!bVar18) {
          do {
            lVar16 = *plVar29;
            lVar32 = *(long *)(lVar30 + 0x458);
            if (lVar16 != lVar19 || lVar32 != lVar21) {
              bVar18 = false;
              ClearExclusiveLocal();
              goto joined_r0x00feb3b4;
            }
            cVar42 = '\x01';
            bVar18 = (bool)ExclusiveMonitorPass(plVar29,0x10);
            if (bVar18) {
              *plVar29 = lVar19;
              *(long *)(lVar30 + 0x454) = lVar21 + -1;
              cVar42 = ExclusiveMonitorsStatus();
            }
          } while (cVar42 != '\0');
          bVar18 = true;
joined_r0x00feb3b4:
          if (!bVar18) {
            do {
              lVar19 = *plVar29;
              lVar21 = *(long *)(lVar30 + 0x458);
              if (lVar19 != lVar16 || lVar21 != lVar32) {
                bVar18 = false;
                ClearExclusiveLocal();
                lVar16 = lVar19;
                lVar32 = lVar21;
                goto joined_r0x00feb3b4;
              }
              cVar42 = '\x01';
              bVar18 = (bool)ExclusiveMonitorPass(plVar29,0x10);
              if (bVar18) {
                *plVar29 = lVar16;
                *(long *)(lVar30 + 0x454) = lVar32 + -1;
                cVar42 = ExclusiveMonitorsStatus();
              }
            } while (cVar42 != '\0');
            bVar18 = true;
            lVar16 = lVar19;
            lVar32 = lVar21;
            goto joined_r0x00feb3b4;
          }
        }
        nn::os::SignalLightEvent((LightEventType *)(lVar30 + 0x460));
        lVar30 = param_1 + lVar14 * 0x70;
        auVar44._12_4_ = uStack_74;
        auVar44._0_12_ = auVar60;
        lVar16 = param_1 + lVar14 * 0x20;
        *(long *)(lVar30 + 0x118) = auVar44._8_8_;
        *(long *)(lVar30 + 0x110) = auVar60._0_8_;
        *(undefined8 *)(lVar16 + 0x1de8) = *(undefined8 *)(lVar30 + 0x108);
        *(undefined8 *)(lVar16 + 0x1de0) = *(undefined8 *)(lVar30 + 0x100);
        *(undefined8 *)(lVar16 + 0x1df8) = *(undefined8 *)(lVar30 + 0x118);
        *(undefined8 *)(lVar16 + 0x1df0) = *(undefined8 *)(lVar30 + 0x110);
        if (((uint)local_70 & 0xffff) == (uVar22 & 0xffff)) break;
        sVar12 = FUN_00c9edd0(*(undefined8 *)(param_1 + 0x70),local_70);
        local_70 = (float)(int)sVar12;
      } while (-1 < (int)local_70);
    }
    lVar14 = *(long *)(*(long *)(*(long *)(param_1 + 0x58) + 0x30) + 0xe8);
    if (lVar14 == 0) {
      plVar29 = (long *)0x0;
    }
    else {
      plVar29 = *(long **)(lVar14 + 0x48);
    }
    pauVar15 = (undefined1 (*) [16])(**(code **)(*plVar29 + 0x68))();
    auVar45 = *pauVar15;
    uVar6 = *(undefined8 *)pauVar15[1];
    uVar7 = *(undefined8 *)(pauVar15[1] + 8);
    fStack_78 = auVar45._8_4_;
    local_80 = auVar45._0_4_;
    fStack_7c = auVar45._4_4_;
    uVar10 = *(undefined8 *)pauVar15[2];
    auVar59 = *(undefined1 (*) [12])pauVar15[2];
    fStack_98 = (float)*(undefined8 *)(pauVar15[2] + 8);
    local_a0 = (float)uVar10;
    fStack_9c = (float)((ulong)uVar10 >> 0x20);
    auVar60 = *(undefined1 (*) [12])pauVar15[3];
    fStack_64 = (float)((ulong)*(undefined8 *)(pauVar15[3] + 8) >> 0x20);
    cVar42 = *(char *)(param_1 + 0x25e3);
    lVar14 = FUN_00c4c40c(*(undefined8 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x130));
    iVar31 = *(int *)(param_1 + 0x1dd0);
    if (1 < iVar31) {
      lVar30 = 0x734;
      lVar16 = 0x1a0;
      auVar45[0] = -(cVar42 == '\0');
      auVar53._8_8_ = _UNK_03cabe58;
      auVar53._0_8_ = _DAT_03cabe50;
      auVar61._12_4_ = fStack_64;
      auVar61._0_12_ = auVar60;
      auVar45[1] = auVar45[0];
      auVar45[2] = auVar45[0];
      auVar45[3] = auVar45[0];
      auVar45[4] = auVar45[0];
      auVar45[5] = auVar45[0];
      auVar45[6] = auVar45[0];
      auVar45[7] = auVar45[0];
      auVar45[8] = auVar45[0];
      auVar45[9] = auVar45[0];
      auVar45[10] = auVar45[0];
      auVar45[0xb] = auVar45[0];
      auVar45[0xc] = auVar45[0];
      auVar45[0xd] = auVar45[0];
      auVar45[0xe] = auVar45[0];
      auVar45[0xf] = auVar45[0];
      auVar61 = auVar61 ^ (auVar61 ^ auVar53) & ~auVar45;
      auVar45 = *(undefined1 (*) [16])(lVar14 + 0x30);
      fVar51 = auVar45._0_4_;
      local_90 = (float)uVar6;
      fStack_8c = (float)((ulong)uVar6 >> 0x20);
      fStack_88 = (float)uVar7;
      fVar43 = auVar45._4_4_;
      fVar58 = auVar45._8_4_;
      fVar67 = auVar45._12_4_;
      local_70 = local_80 * fVar51 + local_90 * fVar43 + auVar59._0_4_ * fVar58 +
                 auVar61._0_4_ * fVar67;
      fStack_6c = fStack_7c * fVar51 + fStack_8c * fVar43 + auVar59._4_4_ * fVar58 +
                  auVar61._4_4_ * fVar67;
      fStack_68 = fStack_78 * fVar51 + fStack_88 * fVar43 + auVar59._8_4_ * fVar58 +
                  auVar61._8_4_ * fVar67;
      do {
        lVar14 = FUN_00c4c40c(*(undefined8 *)(param_1 + 0x70),*(undefined4 *)(param_1 + lVar16));
        fVar51 = *(float *)(lVar14 + 0x30);
        fVar43 = *(float *)(lVar14 + 0x34);
        fVar58 = *(float *)(lVar14 + 0x38);
        fVar67 = *(float *)(lVar14 + 0x3c);
        lVar14 = lVar30 + -0x732;
        lVar16 = lVar16 + 0x70;
        fVar50 = local_80 * fVar51 + local_90 * fVar43 + local_a0 * fVar58 + auVar61._0_4_ * fVar67;
        fVar57 = fStack_7c * fVar51 + fStack_8c * fVar43 + fStack_9c * fVar58 +
                 auVar61._4_4_ * fVar67;
        fVar58 = fStack_78 * fVar51 + fStack_88 * fVar43 + fStack_98 * fVar58 +
                 auVar61._8_4_ * fVar67;
        local_70 = local_70 - fVar50;
        fStack_6c = fStack_6c - fVar57;
        fStack_68 = fStack_68 - fVar58;
        local_70 = local_70 * local_70;
        fStack_6c = fStack_6c * fStack_6c;
        fStack_68 = fStack_68 * fStack_68;
        auVar33._0_4_ = local_70 + fStack_6c;
        auVar33._4_4_ = fStack_68 + 0.0;
        auVar33._8_4_ = local_70 + fStack_6c;
        auVar33._12_4_ = fStack_68 + 0.0;
        auVar45 = NEON_ext(auVar33,auVar33,4,1);
        fVar43 = SQRT(auVar45._0_4_ + auVar45._4_4_);
        fVar51 = 0.0;
        if (0.001 <= fVar43) {
          fVar51 = fVar43;
        }
        *(float *)(param_1 + lVar30 * 4) = fVar51;
        iVar31 = *(int *)(param_1 + 0x1dd0);
        uVar23 = (ulong)iVar31;
        lVar30 = lVar30 + 1;
        local_70 = fVar50;
        fStack_6c = fVar57;
        fStack_68 = fVar58;
      } while (lVar14 < (long)uVar23);
      if (1 < iVar31) {
        lVar14 = 0;
        do {
          lVar16 = lVar14 + 1;
          if (0.001 < *(float *)(param_1 + lVar14 * 4 + 0x1cd0)) {
            lVar32 = *(long *)(param_1 + 0x70);
            plVar29 = (long *)(lVar32 + 0x450);
            uVar22 = *(uint *)(param_1 + lVar16 * 0x70 + 0x130);
            lVar30 = nn::os::GetCurrentThread();
            do {
              lVar19 = *plVar29;
              lVar21 = *(long *)(lVar32 + 0x458);
              cVar42 = '\x01';
              bVar18 = (bool)ExclusiveMonitorPass(plVar29,0x10);
              if (bVar18) {
                *plVar29 = lVar19;
                *(long *)(lVar32 + 0x458) = lVar21;
                cVar42 = ExclusiveMonitorsStatus();
              }
            } while (cVar42 != '\0');
LAB_00feaffc:
            while ((lVar19 != 0 && (lVar30 != lVar19))) {
              nn::os::WaitLightEvent((LightEventType *)(lVar32 + 0x460));
              do {
                lVar19 = *plVar29;
                lVar21 = *(long *)(lVar32 + 0x458);
                cVar42 = '\x01';
                bVar18 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                if (bVar18) {
                  *plVar29 = lVar19;
                  *(long *)(lVar32 + 0x458) = lVar21;
                  cVar42 = ExclusiveMonitorsStatus();
                }
              } while (cVar42 != '\0');
            }
            do {
              lVar3 = *plVar29;
              if (lVar3 != lVar19 || *(long *)(lVar32 + 0x458) != lVar21) {
                bVar18 = false;
                ClearExclusiveLocal();
                goto LAB_00feb038;
              }
              cVar42 = '\x01';
              bVar18 = (bool)ExclusiveMonitorPass(plVar29,0x10);
              if (bVar18) {
                *plVar29 = lVar19;
                *(long *)(lVar32 + 0x454) = lVar21 + 1;
                cVar42 = ExclusiveMonitorsStatus();
              }
            } while (cVar42 != '\0');
            bVar18 = true;
LAB_00feb038:
            if (!bVar18) {
              lVar19 = lVar3;
              lVar21 = *(long *)(lVar32 + 0x458);
              goto LAB_00feaffc;
            }
            lVar30 = *(long *)(lVar32 + 0x248) +
                     (long)*(short *)(*(long *)(lVar32 + 0xa0) +
                                     (-((ulong)(uVar22 >> 0xf) & 1) & 0xfffffffffffe0000 |
                                     ((ulong)uVar22 & 0xffff) << 1)) * 0x30;
            auVar60 = *(undefined1 (*) [12])(lVar30 + 0x20);
            fStack_64 = (float)((ulong)*(undefined8 *)(lVar30 + 0x28) >> 0x20);
            do {
              lVar30 = *plVar29;
              lVar19 = *(long *)(lVar32 + 0x458);
              cVar42 = '\x01';
              bVar18 = (bool)ExclusiveMonitorPass(plVar29,0x10);
              if (bVar18) {
                *plVar29 = lVar30;
                *(long *)(lVar32 + 0x458) = lVar19;
                cVar42 = ExclusiveMonitorsStatus();
              }
            } while (cVar42 != '\0');
            do {
              lVar21 = *plVar29;
              lVar3 = *(long *)(lVar32 + 0x458);
              if (lVar21 != lVar30 || lVar3 != lVar19) {
                bVar18 = false;
                ClearExclusiveLocal();
                goto LAB_00feb098;
              }
              cVar42 = '\x01';
              bVar18 = (bool)ExclusiveMonitorPass(plVar29,0x10);
              if (bVar18) {
                *plVar29 = lVar30;
                *(long *)(lVar32 + 0x454) = lVar19 + -1;
                cVar42 = ExclusiveMonitorsStatus();
              }
            } while (cVar42 != '\0');
            bVar18 = true;
LAB_00feb098:
            if (!bVar18) {
              do {
                lVar30 = *plVar29;
                lVar19 = *(long *)(lVar32 + 0x458);
                if (lVar30 != lVar21 || lVar19 != lVar3) {
                  bVar18 = false;
                  ClearExclusiveLocal();
                  goto joined_r0x00feb45c;
                }
                cVar42 = '\x01';
                bVar18 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                if (bVar18) {
                  *plVar29 = lVar21;
                  *(long *)(lVar32 + 0x454) = lVar3 + -1;
                  cVar42 = ExclusiveMonitorsStatus();
                }
              } while (cVar42 != '\0');
              bVar18 = true;
joined_r0x00feb45c:
              if (!bVar18) {
                do {
                  lVar21 = *plVar29;
                  lVar3 = *(long *)(lVar32 + 0x458);
                  if (lVar21 != lVar30 || lVar3 != lVar19) {
                    bVar18 = false;
                    ClearExclusiveLocal();
                    lVar30 = lVar21;
                    lVar19 = lVar3;
                    goto joined_r0x00feb45c;
                  }
                  cVar42 = '\x01';
                  bVar18 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                  if (bVar18) {
                    *plVar29 = lVar30;
                    *(long *)(lVar32 + 0x454) = lVar19 + -1;
                    cVar42 = ExclusiveMonitorsStatus();
                  }
                } while (cVar42 != '\0');
                bVar18 = true;
                lVar30 = lVar21;
                lVar19 = lVar3;
                goto joined_r0x00feb45c;
              }
            }
            nn::os::SignalLightEvent((LightEventType *)(lVar32 + 0x460));
            fVar51 = auVar60._0_4_;
            fVar43 = auVar60._4_4_;
            fVar58 = auVar60._8_4_;
            auVar34._0_4_ = fVar51 * fVar51 + fVar43 * fVar43;
            auVar34._4_4_ = fVar58 * fVar58 + fStack_64 * fStack_64;
            auVar34._8_4_ = fVar51 * fVar51 + fVar43 * fVar43;
            auVar34._12_4_ = fVar58 * fVar58 + fStack_64 * fStack_64;
            auVar45 = NEON_ext(auVar34,auVar34,4,1);
            lVar14 = param_1 + lVar14 * 0x70;
            auVar35._0_4_ = auVar45._0_4_ + auVar45._4_4_;
            auVar35._4_4_ = auVar45._8_4_ + auVar45._12_4_;
            auVar35._8_4_ = auVar45._0_4_ + auVar45._4_4_;
            auVar35._12_4_ = auVar45._8_4_ + auVar45._12_4_;
            auVar45 = NEON_frsqrte(auVar35,4);
            auVar62._0_4_ = auVar35._0_4_ * auVar45._0_4_;
            auVar62._4_4_ = auVar35._4_4_ * auVar45._4_4_;
            auVar62._8_4_ = auVar35._8_4_ * auVar45._8_4_;
            auVar62._12_4_ = auVar35._12_4_ * auVar45._12_4_;
            auVar63 = NEON_frsqrts(auVar45,auVar62,4);
            auVar54._0_4_ = auVar45._0_4_ * auVar63._0_4_;
            auVar54._4_4_ = auVar45._4_4_ * auVar63._4_4_;
            auVar54._8_4_ = auVar45._8_4_ * auVar63._8_4_;
            auVar54._12_4_ = auVar45._12_4_ * auVar63._12_4_;
            auVar64._0_4_ = auVar35._0_4_ * auVar54._0_4_;
            auVar64._4_4_ = auVar35._4_4_ * auVar54._4_4_;
            auVar64._8_4_ = auVar35._8_4_ * auVar54._8_4_;
            auVar64._12_4_ = auVar35._12_4_ * auVar54._12_4_;
            iVar31 = -(uint)(auVar35._0_4_ == 0.0);
            iVar47 = -(uint)(auVar35._4_4_ == 0.0);
            iVar48 = -(uint)(auVar35._8_4_ == 0.0);
            iVar49 = -(uint)(auVar35._12_4_ == 0.0);
            auVar45 = NEON_frsqrts(auVar54,auVar64,4);
            fVar51 = fVar51 * auVar54._0_4_ * auVar45._0_4_;
            fVar43 = fVar43 * auVar54._4_4_ * auVar45._4_4_;
            fVar58 = fVar58 * auVar54._8_4_ * auVar45._8_4_;
            fStack_64 = fStack_64 * auVar54._12_4_ * auVar45._12_4_;
            auVar46._0_8_ =
                 CONCAT17((byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar47 >> 0x18),
                          CONCAT16((byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar47 >> 0x10),
                                   CONCAT15((byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar47 >> 8),
                                            CONCAT14(SUB41(fVar43,0) & ~(byte)iVar47,
                                                     CONCAT13((byte)((uint)fVar51 >> 0x18) &
                                                              ~(byte)((uint)iVar31 >> 0x18),
                                                              CONCAT12((byte)((uint)fVar51 >> 0x10)
                                                                       & ~(byte)((uint)iVar31 >>
                                                                                0x10),
                                                                       CONCAT11((byte)((uint)fVar51
                                                                                      >> 8) &
                                                                                ~(byte)((uint)iVar31
                                                                                       >> 8),
                                                                                SUB41(fVar51,0) &
                                                                                ~(byte)iVar31)))))))
            ;
            auVar46[8] = SUB41(fVar58,0) & ~(byte)iVar48;
            auVar46[9] = (byte)((uint)fVar58 >> 8) & ~(byte)((uint)iVar48 >> 8);
            auVar46[10] = (byte)((uint)fVar58 >> 0x10) & ~(byte)((uint)iVar48 >> 0x10);
            auVar46[0xb] = (byte)((uint)fVar58 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18);
            auVar46[0xc] = SUB41(fStack_64,0) & ~(byte)iVar49;
            auVar46[0xd] = (byte)((uint)fStack_64 >> 8) & ~(byte)((uint)iVar49 >> 8);
            auVar46[0xe] = (byte)((uint)fStack_64 >> 0x10) & ~(byte)((uint)iVar49 >> 0x10);
            auVar46[0xf] = (byte)((uint)fStack_64 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18);
            *(long *)(lVar14 + 0x128) = auVar46._8_8_;
            *(undefined8 *)(lVar14 + 0x120) = auVar46._0_8_;
            uVar23 = (ulong)*(uint *)(param_1 + 0x1dd0);
          }
          iVar31 = (int)uVar23;
          lVar14 = lVar16;
        } while (lVar16 < iVar31 + -1);
      }
    }
    if (*pcVar2 == '\0') {
      if (1 < iVar31) {
        auVar56._8_8_ = _UNK_03caa5b8;
        auVar56._0_8_ = _DAT_03caa5b0;
        cVar42 = '\0';
        puVar20 = (undefined8 *)(param_1 + 0x150);
        lVar14 = 1;
        while( true ) {
          uVar23 = lVar14 + (ulong)-(uint)(cVar42 == '\0');
          iVar31 = 1;
          if (cVar42 == '\0') {
            iVar31 = -1;
          }
          lVar16 = (long)(iVar31 + (int)lVar14);
          if ((0x3f < (uint)uVar23) ||
             (*(float *)(param_1 + (uVar23 & 0xffffffff) * 4 + 0x1cd0) < 0.001)) {
            lVar16 = param_1 + lVar16 * 0x70;
            puVar20[1] = *(undefined8 *)(lVar16 + 0xe8);
            *puVar20 = *(undefined8 *)(lVar16 + 0xe0);
          }
          else {
            lVar16 = param_1 + lVar16 * 0x70;
            fVar51 = *(float *)(lVar16 + 0xd0) - *(float *)(puVar20 + -2);
            fVar43 = *(float *)(lVar16 + 0xd4) - *(float *)((long)puVar20 + -0xc);
            fVar58 = *(float *)(lVar16 + 0xd8) - *(float *)(puVar20 + -1);
            fVar67 = *(float *)(lVar16 + 0xdc) - *(float *)((long)puVar20 + -4);
            auVar39._0_4_ = fVar51 * fVar51 + fVar43 * fVar43;
            auVar39._4_4_ = fVar58 * fVar58 + fVar67 * fVar67;
            auVar39._8_4_ = fVar51 * fVar51 + fVar43 * fVar43;
            auVar39._12_4_ = fVar58 * fVar58 + fVar67 * fVar67;
            auVar45 = NEON_ext(auVar39,auVar39,4,1);
            auVar40._0_4_ = auVar45._0_4_ + auVar45._4_4_;
            auVar40._4_4_ = auVar45._8_4_ + auVar45._12_4_;
            auVar40._8_4_ = auVar45._0_4_ + auVar45._4_4_;
            auVar40._12_4_ = auVar45._8_4_ + auVar45._12_4_;
            auVar45 = NEON_frsqrte(auVar40,4);
            auVar74._0_4_ = auVar40._0_4_ * auVar45._0_4_;
            auVar74._4_4_ = auVar40._4_4_ * auVar45._4_4_;
            auVar74._8_4_ = auVar40._8_4_ * auVar45._8_4_;
            auVar74._12_4_ = auVar40._12_4_ * auVar45._12_4_;
            auVar63 = NEON_frsqrts(auVar45,auVar74,4);
            auVar71._0_4_ = auVar45._0_4_ * auVar63._0_4_;
            auVar71._4_4_ = auVar45._4_4_ * auVar63._4_4_;
            auVar71._8_4_ = auVar45._8_4_ * auVar63._8_4_;
            auVar71._12_4_ = auVar45._12_4_ * auVar63._12_4_;
            auVar75._0_4_ = auVar40._0_4_ * auVar71._0_4_;
            auVar75._4_4_ = auVar40._4_4_ * auVar71._4_4_;
            auVar75._8_4_ = auVar40._8_4_ * auVar71._8_4_;
            auVar75._12_4_ = auVar40._12_4_ * auVar71._12_4_;
            iVar31 = -(uint)(auVar40._0_4_ == 0.0);
            iVar47 = -(uint)(auVar40._4_4_ == 0.0);
            iVar48 = -(uint)(auVar40._8_4_ == 0.0);
            iVar49 = -(uint)(auVar40._12_4_ == 0.0);
            auVar45 = NEON_frsqrts(auVar71,auVar75,4);
            fVar51 = fVar51 * auVar71._0_4_ * auVar45._0_4_;
            fVar43 = fVar43 * auVar71._4_4_ * auVar45._4_4_;
            fVar58 = fVar58 * auVar71._8_4_ * auVar45._8_4_;
            fVar67 = fVar67 * auVar71._12_4_ * auVar45._12_4_;
            fVar51 = (float)CONCAT13((byte)((uint)fVar51 >> 0x18) & ~(byte)((uint)iVar31 >> 0x18),
                                     CONCAT12((byte)((uint)fVar51 >> 0x10) &
                                              ~(byte)((uint)iVar31 >> 0x10),
                                              CONCAT11((byte)((uint)fVar51 >> 8) &
                                                       ~(byte)((uint)iVar31 >> 8),
                                                       SUB41(fVar51,0) & ~(byte)iVar31)));
            auVar60._0_8_ =
                 CONCAT17((byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar47 >> 0x18),
                          CONCAT16((byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar47 >> 0x10),
                                   CONCAT15((byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar47 >> 8),
                                            CONCAT14(SUB41(fVar43,0) & ~(byte)iVar47,fVar51))));
            auVar60[8] = SUB41(fVar58,0) & ~(byte)iVar48;
            auVar60[9] = (byte)((uint)fVar58 >> 8) & ~(byte)((uint)iVar48 >> 8);
            auVar60[10] = (byte)((uint)fVar58 >> 0x10) & ~(byte)((uint)iVar48 >> 0x10);
            auVar60[0xb] = (byte)((uint)fVar58 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18);
            auVar66[0xc] = SUB41(fVar67,0) & ~(byte)iVar49;
            auVar66._0_12_ = auVar60;
            auVar66[0xd] = (byte)((uint)fVar67 >> 8) & ~(byte)((uint)iVar49 >> 8);
            auVar66[0xe] = (byte)((uint)fVar67 >> 0x10) & ~(byte)((uint)iVar49 >> 0x10);
            auVar66[0xf] = (byte)((uint)fVar67 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18);
            fVar43 = (float)((ulong)auVar60._0_8_ >> 0x20);
            fVar43 = fVar43 * fVar43;
            fVar58 = auVar60._8_4_ * auVar60._8_4_;
            fVar67 = auVar66._12_4_ * auVar66._12_4_;
            auVar41._0_4_ = fVar51 * fVar51 + fVar43;
            auVar41._4_4_ = fVar58 + fVar67;
            auVar41._8_4_ = fVar51 * fVar51 + fVar43;
            auVar41._12_4_ = fVar58 + fVar67;
            auVar45 = NEON_ext(auVar41,auVar41,4,1);
            auVar69._0_4_ = -(uint)(auVar45._0_4_ + auVar45._4_4_ == 0.0);
            auVar69._4_4_ = auVar69._0_4_;
            auVar69._8_4_ = auVar69._0_4_;
            auVar69._12_4_ = auVar69._0_4_;
            auVar66 = auVar66 ^ (auVar66 ^ auVar56) & auVar69;
            puVar20[1] = auVar66._8_8_;
            *puVar20 = auVar66._0_8_;
          }
          lVar14 = lVar14 + 1;
          if (*(int *)(param_1 + 0x1dd0) <= lVar14) break;
          puVar20 = puVar20 + 0xe;
          cVar42 = *pcVar2;
        }
      }
    }
    else if (1 < iVar31) {
      auVar55._8_8_ = _UNK_03caa5b8;
      auVar55._0_8_ = _DAT_03caa5b0;
      cVar42 = '\x01';
      puVar20 = (undefined8 *)(param_1 + (ulong)(iVar31 - 2) * 0x70 + 0xe0);
      uVar23 = (ulong)(iVar31 - 2);
      while( true ) {
        uVar24 = uVar23 + -(uint)(cVar42 == '\0');
        iVar31 = 1;
        if (cVar42 == '\0') {
          iVar31 = -1;
        }
        lVar14 = (long)(iVar31 + (int)uVar23);
        if ((0x3f < (uint)uVar24) ||
           (*(float *)(param_1 + (uVar24 & 0xffffffff) * 4 + 0x1cd0) < 0.001)) {
          lVar14 = param_1 + lVar14 * 0x70;
          puVar20[1] = *(undefined8 *)(lVar14 + 0xe8);
          *puVar20 = *(undefined8 *)(lVar14 + 0xe0);
        }
        else {
          lVar14 = param_1 + lVar14 * 0x70;
          fVar51 = *(float *)(lVar14 + 0xd0) - *(float *)(puVar20 + -2);
          fVar43 = *(float *)(lVar14 + 0xd4) - *(float *)((long)puVar20 + -0xc);
          fVar58 = *(float *)(lVar14 + 0xd8) - *(float *)(puVar20 + -1);
          fVar67 = *(float *)(lVar14 + 0xdc) - *(float *)((long)puVar20 + -4);
          auVar36._0_4_ = fVar51 * fVar51 + fVar43 * fVar43;
          auVar36._4_4_ = fVar58 * fVar58 + fVar67 * fVar67;
          auVar36._8_4_ = fVar51 * fVar51 + fVar43 * fVar43;
          auVar36._12_4_ = fVar58 * fVar58 + fVar67 * fVar67;
          auVar45 = NEON_ext(auVar36,auVar36,4,1);
          auVar37._0_4_ = auVar45._0_4_ + auVar45._4_4_;
          auVar37._4_4_ = auVar45._8_4_ + auVar45._12_4_;
          auVar37._8_4_ = auVar45._0_4_ + auVar45._4_4_;
          auVar37._12_4_ = auVar45._8_4_ + auVar45._12_4_;
          auVar45 = NEON_frsqrte(auVar37,4);
          auVar72._0_4_ = auVar37._0_4_ * auVar45._0_4_;
          auVar72._4_4_ = auVar37._4_4_ * auVar45._4_4_;
          auVar72._8_4_ = auVar37._8_4_ * auVar45._8_4_;
          auVar72._12_4_ = auVar37._12_4_ * auVar45._12_4_;
          auVar63 = NEON_frsqrts(auVar45,auVar72,4);
          auVar70._0_4_ = auVar45._0_4_ * auVar63._0_4_;
          auVar70._4_4_ = auVar45._4_4_ * auVar63._4_4_;
          auVar70._8_4_ = auVar45._8_4_ * auVar63._8_4_;
          auVar70._12_4_ = auVar45._12_4_ * auVar63._12_4_;
          auVar73._0_4_ = auVar37._0_4_ * auVar70._0_4_;
          auVar73._4_4_ = auVar37._4_4_ * auVar70._4_4_;
          auVar73._8_4_ = auVar37._8_4_ * auVar70._8_4_;
          auVar73._12_4_ = auVar37._12_4_ * auVar70._12_4_;
          iVar31 = -(uint)(auVar37._0_4_ == 0.0);
          iVar47 = -(uint)(auVar37._4_4_ == 0.0);
          iVar48 = -(uint)(auVar37._8_4_ == 0.0);
          iVar49 = -(uint)(auVar37._12_4_ == 0.0);
          auVar45 = NEON_frsqrts(auVar70,auVar73,4);
          fVar51 = fVar51 * auVar70._0_4_ * auVar45._0_4_;
          fVar43 = fVar43 * auVar70._4_4_ * auVar45._4_4_;
          fVar58 = fVar58 * auVar70._8_4_ * auVar45._8_4_;
          fVar67 = fVar67 * auVar70._12_4_ * auVar45._12_4_;
          fVar51 = (float)CONCAT13((byte)((uint)fVar51 >> 0x18) & ~(byte)((uint)iVar31 >> 0x18),
                                   CONCAT12((byte)((uint)fVar51 >> 0x10) &
                                            ~(byte)((uint)iVar31 >> 0x10),
                                            CONCAT11((byte)((uint)fVar51 >> 8) &
                                                     ~(byte)((uint)iVar31 >> 8),
                                                     SUB41(fVar51,0) & ~(byte)iVar31)));
          auVar59._0_8_ =
               CONCAT17((byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar47 >> 0x18),
                        CONCAT16((byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar47 >> 0x10),
                                 CONCAT15((byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar47 >> 8),
                                          CONCAT14(SUB41(fVar43,0) & ~(byte)iVar47,fVar51))));
          auVar59[8] = SUB41(fVar58,0) & ~(byte)iVar48;
          auVar59[9] = (byte)((uint)fVar58 >> 8) & ~(byte)((uint)iVar48 >> 8);
          auVar59[10] = (byte)((uint)fVar58 >> 0x10) & ~(byte)((uint)iVar48 >> 0x10);
          auVar59[0xb] = (byte)((uint)fVar58 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18);
          auVar65[0xc] = SUB41(fVar67,0) & ~(byte)iVar49;
          auVar65._0_12_ = auVar59;
          auVar65[0xd] = (byte)((uint)fVar67 >> 8) & ~(byte)((uint)iVar49 >> 8);
          auVar65[0xe] = (byte)((uint)fVar67 >> 0x10) & ~(byte)((uint)iVar49 >> 0x10);
          auVar65[0xf] = (byte)((uint)fVar67 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18);
          fVar43 = (float)((ulong)auVar59._0_8_ >> 0x20);
          fVar43 = fVar43 * fVar43;
          fVar58 = auVar59._8_4_ * auVar59._8_4_;
          fVar67 = auVar65._12_4_ * auVar65._12_4_;
          auVar38._0_4_ = fVar51 * fVar51 + fVar43;
          auVar38._4_4_ = fVar58 + fVar67;
          auVar38._8_4_ = fVar51 * fVar51 + fVar43;
          auVar38._12_4_ = fVar58 + fVar67;
          auVar45 = NEON_ext(auVar38,auVar38,4,1);
          auVar68._0_4_ = -(uint)(auVar45._0_4_ + auVar45._4_4_ == 0.0);
          auVar68._4_4_ = auVar68._0_4_;
          auVar68._8_4_ = auVar68._0_4_;
          auVar68._12_4_ = auVar68._0_4_;
          auVar65 = auVar65 ^ (auVar65 ^ auVar55) & auVar68;
          puVar20[1] = auVar65._8_8_;
          *puVar20 = auVar65._0_8_;
        }
        if ((long)uVar23 < 1) break;
        puVar20 = puVar20 + -0xe;
        cVar42 = *pcVar2;
        uVar23 = uVar23 - 1;
      }
    }
    FUN_00fedd38(param_1);
    *(undefined1 *)(param_1 + 0x66) = 1;
    return;
  }
LAB_00fea948:
  *(undefined1 *)(param_1 + 0x65) = 0;
  return;
}


