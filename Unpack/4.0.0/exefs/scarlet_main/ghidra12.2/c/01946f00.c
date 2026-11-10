/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01946f00; name: FUN_01946f00
 */


void FUN_01946f00(long param_1)

{
  short *psVar1;
  ulong *puVar2;
  int *piVar3;
  ulong *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long **pplVar7;
  short sVar8;
  char cVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  bool bVar13;
  ushort uVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  short sVar21;
  float extraout_s0;
  float fVar22;
  float extraout_var;
  float fVar27;
  float extraout_var_00;
  float fVar28;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 in_q3 [16];
  undefined8 local_110;
  float fStack_108;
  ulong *local_100;
  undefined8 uStack_f8;
  undefined8 *local_f0;
  char *local_e8;
  undefined8 local_e0;
  long *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long *local_b8;
  ulong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long *local_90;
  ulong *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long *local_60;
  ulong *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  fStack_108 = in_q3._8_4_;
  local_110 = in_q3._0_8_;
  local_78 = *(undefined8 *)(param_1 + 0x110);
  uStack_70 = *(undefined8 *)(param_1 + 0x118);
  local_68 = *(undefined8 *)(param_1 + 0x120);
  plVar19 = *(long **)(param_1 + 0x128);
  local_60 = plVar19;
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 0x18))(plVar19);
  }
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    local_58 = (ulong *)0x0;
    uStack_50 = 0;
  }
  else {
    (**(code **)(param_1 + 0x10))(&local_58,param_1 + 0x30,&local_78);
    plVar19 = local_60;
  }
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 0x20))(plVar19);
  }
  if (local_58 != (ulong *)0x0) {
    if (*(short *)((long)local_58 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_58 + 0x1a);
      sVar21 = *(short *)((long)local_58 + 0x1a);
LAB_01946fb0:
      sVar8 = *psVar1;
      if (sVar8 == sVar21) {
        cVar9 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar13) {
          *psVar1 = sVar21 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
        if (cVar9 != '\0') goto LAB_01946fd4;
        bVar13 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01946fd4:
        bVar13 = false;
      }
      if (!bVar13) goto code_r0x01946fdc;
      plVar19 = (long *)(local_58[2] - 0x28);
      if (local_58[2] == 0) goto LAB_019470a0;
      local_88 = (ulong *)0x0;
      uStack_80 = 0;
      FUN_01340a44(&local_b0,param_1,1);
      if ((char)local_b0 != '\0') {
        local_d0 = local_a8;
        uStack_c8 = local_a0;
        local_c0 = local_98;
        local_b8 = local_90;
        if (local_90 != (long *)0x0) {
          (**(code **)(*local_90 + 0x18))();
        }
        if (*(code **)(param_1 + 0x10) == (code *)0x0) {
          local_f0 = (undefined8 *)0x0;
          local_e8 = (char *)0x0;
        }
        else {
          (**(code **)(param_1 + 0x10))(&local_f0,param_1 + 0x30,&local_d0);
        }
        FUN_00d0a34c(&local_88,&local_f0);
        puVar6 = local_f0;
        if (local_f0 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_f0 + 3);
          do {
            sVar21 = *psVar1;
            cVar9 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar13) {
              *psVar1 = sVar21 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (sVar21 == 1) {
            piVar3 = (int *)((long)local_f0 + 0x1c);
            do {
              iVar15 = *piVar3;
              cVar9 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar13) {
                *piVar3 = -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (iVar15 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar15 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar15 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar16 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar16;
              local_48 = *puVar6;
              FUN_00c44438(lVar16 + 0x8040,&local_48);
            }
          }
          else if (sVar21 == 0) goto LAB_019470c0;
        }
        if (local_b8 != (long *)0x0) {
          (**(code **)(*local_b8 + 0x20))();
        }
        if ((char)local_b0 != '\0') {
          if (local_90 != (long *)0x0) {
            (**(code **)(*local_90 + 0x20))();
          }
          local_b0 = local_b0 & 0xffffffffffffff00;
        }
      }
      if (local_88 != (ulong *)0x0) {
        if (*(short *)((long)local_88 + 0x1a) != 0) {
          psVar1 = (short *)((long)local_88 + 0x1a);
          sVar21 = *(short *)((long)local_88 + 0x1a);
LAB_01947204:
          sVar8 = *psVar1;
          if (sVar8 == sVar21) {
            cVar9 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar13) {
              *psVar1 = sVar21 + 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
            if (cVar9 != '\0') goto LAB_01947228;
            bVar13 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01947228:
            bVar13 = false;
          }
          if (!bVar13) goto code_r0x01947230;
          uVar17 = local_88[2];
          plVar20 = (long *)(uVar17 - 0x28);
          if (uVar17 == 0) goto LAB_019474a0;
          lVar16 = FUN_01104bd8(uVar17 + 0xe0,&local_b0);
          plVar5 = (long *)(uVar17 + 0xd0);
          if (lVar16 != 0) {
            plVar5 = (long *)(lVar16 + 0x128);
          }
          FUN_01340a44(&local_b0,param_1,0x100000001);
          if (((*PTR_DAT_047d3e28 & 1) == 0) &&
             (iVar15 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar15 != 0)) {
            FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3e28);
          }
          bVar13 = (char)local_b0 != '\0';
          local_f0 = (undefined8 *)PTR_DAT_047d3e30;
          if (bVar13) {
            local_f0 = &local_a8;
          }
          local_f0 = (undefined8 *)*local_f0;
          puVar6 = (undefined8 *)(PTR_DAT_047d3e30 + 8);
          if (bVar13) {
            puVar6 = &local_a0;
          }
          local_e8 = (char *)*puVar6;
          puVar6 = (undefined8 *)(PTR_DAT_047d3e30 + 0x10);
          if (bVar13) {
            puVar6 = &local_98;
          }
          local_e0 = *puVar6;
          pplVar7 = (long **)(PTR_DAT_047d3e30 + 0x18);
          if (bVar13) {
            pplVar7 = &local_90;
          }
          local_d8 = *pplVar7;
          if (local_d8 != (long *)0x0) {
            (**(code **)(*local_d8 + 0x18))();
          }
          if ((char)local_b0 != '\0') {
            if (local_90 != (long *)0x0) {
              (**(code **)(*local_90 + 0x20))();
            }
            local_b0 = local_b0 & 0xffffffffffffff00;
          }
          if (*local_e8 == '\0') {
            lVar16 = (**(code **)(*plVar20 + 0x68))(plVar20);
            fStack_108 = SUB164(*(undefined1 (*) [16])(lVar16 + 0x30),8);
            local_110 = SUB168(*(undefined1 (*) [16])(lVar16 + 0x30),0);
          }
          else {
            (**(code **)(*plVar5 + 0x50))(plVar5,&local_f0);
          }
          local_100 = (ulong *)0x0;
          uStack_f8 = 0;
          FUN_00d0a71c(&local_100,&local_58);
          lVar16 = FUN_01180e7c(param_1,&local_100);
          puVar2 = local_100;
          if (local_100 != (ulong *)0x0) {
            puVar4 = local_100 + 3;
            do {
              sVar21 = (short)*puVar4;
              cVar9 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(puVar4,0x10);
              if (bVar13) {
                *(short *)puVar4 = sVar21 + -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (sVar21 == 1) {
              piVar3 = (int *)((long)local_100 + 0x1c);
              do {
                iVar15 = *piVar3;
                cVar9 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar13) {
                  *piVar3 = -1;
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
              if (iVar15 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar15 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar15 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar18 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar18;
                local_b0 = *puVar2;
                FUN_00c44438(lVar18 + 0x8040,&local_b0);
              }
            }
            else if (sVar21 == 0) goto LAB_019470c0;
          }
          if (lVar16 != 0) {
            FUN_0211a080(lVar16);
            fVar22 = extraout_s0 - (float)local_110;
            fVar27 = extraout_var - (float)((ulong)local_110 >> 0x20);
            fVar22 = fVar22 * fVar22;
            fVar27 = fVar27 * fVar27;
            fVar28 = (extraout_var_00 - fStack_108) * (extraout_var_00 - fStack_108);
            auVar23._0_4_ = fVar22 + fVar27;
            auVar23._4_4_ = fVar28 + 0.0;
            auVar23._8_4_ = fVar22 + fVar27;
            auVar23._12_4_ = fVar28 + 0.0;
            auVar23 = NEON_ext(auVar23,auVar23,4,1);
            uVar17 = FUN_021237ec(param_1,0x200000001);
            fVar22 = 1.0;
            if ((uVar17 & 0xff) != 0) {
              fVar22 = (float)(uVar17 >> 0x20);
            }
            auVar24._0_4_ = SQRT(auVar23._0_4_ + auVar23._4_4_) / fVar22;
            auVar11 = *(undefined1 (*) [16])(lVar16 + 0xa0);
            auVar23 = *(undefined1 (*) [16])(lVar16 + 0xa0);
            uVar14 = FUN_012595d8(param_1,0x300000001);
            iVar15 = -(uint)(uVar14 < 0x100 || (uVar14 & 0xff) == 0);
            auVar24._4_12_ = auVar23._4_12_;
            auVar10._4_4_ = iVar15;
            auVar10._0_4_ = iVar15;
            auVar10._8_4_ = iVar15;
            auVar10._12_4_ = iVar15;
            auVar23 = auVar24 ^ (auVar24 ^ auVar11) & auVar10;
            auVar25._8_8_ = auVar23._8_8_;
            uVar14 = FUN_012595d8(param_1,0x400000001);
            iVar15 = -(uint)(uVar14 < 0x100 || (uVar14 & 0xff) == 0);
            auVar25._0_4_ = auVar23._0_4_;
            auVar25._4_4_ = auVar24._0_4_;
            auVar11._4_4_ = iVar15;
            auVar11._0_4_ = iVar15;
            auVar11._8_4_ = iVar15;
            auVar11._12_4_ = iVar15;
            auVar25 = auVar25 ^ (auVar25 ^ auVar23) & auVar11;
            auVar26._0_8_ = auVar25._0_8_;
            uVar14 = FUN_012595d8(param_1,0x500000001);
            iVar15 = -(uint)(uVar14 < 0x100 || (uVar14 & 0xff) == 0);
            auVar26._12_4_ = auVar25._12_4_;
            auVar26._8_4_ = auVar24._0_4_;
            *(undefined1 *)(lVar16 + 0xe0) = 1;
            auVar12._4_4_ = iVar15;
            auVar12._0_4_ = iVar15;
            auVar12._8_4_ = iVar15;
            auVar12._12_4_ = iVar15;
            auVar26 = auVar26 ^ (auVar26 ^ auVar25) & auVar12;
            *(long *)(lVar16 + 0xa8) = auVar26._8_8_;
            *(long *)(lVar16 + 0xa0) = auVar26._0_8_;
          }
          if (local_d8 != (long *)0x0) {
            (**(code **)(*local_d8 + 0x20))();
          }
          (**(code **)(*plVar20 + 0x60))(plVar20);
LAB_0194749c:
          if (local_88 == (ulong *)0x0) goto LAB_01947088;
        }
LAB_019474a0:
        puVar4 = local_88;
        puVar2 = local_88 + 3;
        do {
          sVar21 = (short)*puVar2;
          cVar9 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar13) {
            *(short *)puVar2 = sVar21 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar21 == 1) {
          piVar3 = (int *)((long)local_88 + 0x1c);
          do {
            iVar15 = *piVar3;
            cVar9 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar13) {
              *piVar3 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar15 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar15 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar15 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar16 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar16;
            local_b0 = *puVar4;
            FUN_00c44438(lVar16 + 0x8040,&local_b0);
          }
        }
        else if (sVar21 == 0) goto LAB_019470c0;
      }
LAB_01947088:
      (**(code **)(*plVar19 + 0x60))(plVar19);
LAB_0194709c:
      if (local_58 == (ulong *)0x0) {
        return;
      }
    }
LAB_019470a0:
    puVar4 = local_58;
    puVar2 = local_58 + 3;
    do {
      sVar21 = (short)*puVar2;
      cVar9 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar13) {
        *(short *)puVar2 = sVar21 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar21 == 1) {
      piVar3 = (int *)((long)local_58 + 0x1c);
      do {
        iVar15 = *piVar3;
        cVar9 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar13) {
          *piVar3 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar15 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar15 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_b0 = *puVar4;
        FUN_00c44438(lVar16 + 0x8040,&local_b0);
      }
    }
    else if (sVar21 == 0) {
LAB_019470c0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
code_r0x01946fdc:
  sVar21 = sVar8;
  if (sVar8 == 0) goto LAB_0194709c;
  goto LAB_01946fb0;
code_r0x01947230:
  sVar21 = sVar8;
  if (sVar8 == 0) goto LAB_0194749c;
  goto LAB_01947204;
}


