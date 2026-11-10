/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e57fe0; name: FUN_00e57fe0
 */


void FUN_00e57fe0(long *param_1,ulong param_2,int param_3)

{
  long *plVar1;
  short *psVar2;
  char *pcVar3;
  long *plVar4;
  long *plVar5;
  int *piVar6;
  long *plVar7;
  undefined8 *puVar8;
  uint uVar9;
  byte bVar10;
  short sVar11;
  bool bVar12;
  char cVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  undefined8 uVar20;
  long lVar21;
  code *pcVar22;
  byte *pbVar23;
  long lVar24;
  ulong uVar25;
  bool bVar26;
  short sVar27;
  long *plVar28;
  ulong uVar29;
  undefined8 *puVar30;
  long *plVar31;
  undefined8 *puVar32;
  long lVar33;
  long *plVar34;
  uint *puVar35;
  ulong uVar36;
  uint *puVar37;
  ulong uVar38;
  float fVar39;
  undefined8 *local_f0;
  undefined8 uStack_e8;
  long *local_e0;
  long *local_d8;
  char *local_d0;
  size_t sStack_c8;
  long *local_c0;
  long *local_b8;
  undefined4 local_b0;
  long local_a8;
  long *local_a0;
  char *local_98;
  size_t local_90;
  long *local_88;
  long *plStack_80;
  undefined4 local_78;
  long local_70 [2];
  
  lVar21 = param_1[1];
  if (lVar21 != 0) {
    lVar16 = *param_1;
    if (*(short *)(lVar21 + 0x1a) != 0) {
      psVar2 = (short *)(lVar21 + 0x1a);
      sVar27 = *(short *)(lVar21 + 0x1a);
LAB_00e58198:
      sVar11 = *psVar2;
      if (sVar11 == sVar27) {
        cVar13 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar26) {
          *psVar2 = sVar27 + 1;
          cVar13 = ExclusiveMonitorsStatus();
        }
        if (cVar13 != '\0') goto LAB_00e581c0;
        bVar26 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00e581c0:
        bVar26 = false;
      }
      if (!bVar26) goto code_r0x00e581c8;
      lVar21 = *(long *)(lVar21 + 0x10);
      plVar1 = (long *)0x0;
      if (lVar21 != 0) {
        plVar1 = (long *)(lVar21 + -0x28);
      }
      if (((param_3 != 0) || ((param_2 >> 0x20 & 0xff) == 0)) || (lVar21 == 0)) goto LAB_00e583a8;
      puVar35 = *(uint **)(*(long *)(lVar16 + 0x150) + 0x1f0);
      uVar9 = *puVar35;
      piVar6 = (int *)((long)puVar35 + (ulong)uVar9);
      if ((*(ushort *)((long)piVar6 - (long)*piVar6) < 5) ||
         (uVar36 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[2], uVar36 == 0)) {
        if (((*PTR_DAT_047d3e28 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar15 != 0)) {
          FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3e28);
        }
        local_a0 = *(long **)PTR_DAT_047d3e30;
        local_98 = *(char **)(PTR_DAT_047d3e30 + 8);
        local_90 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
        plVar31 = *(long **)(PTR_DAT_047d3e30 + 0x18);
        local_88 = plVar31;
        if (plVar31 == (long *)0x0) goto LAB_00e58298;
        (**(code **)(*plVar31 + 0x18))(plVar31);
        FUN_00f806a0(lVar16,&local_a0);
        (**(code **)(*plVar31 + 0x20))(plVar31);
      }
      else {
        puVar37 = (uint *)((long)piVar6 + uVar36);
        uVar38 = (ulong)*puVar37;
        pcVar3 = (char *)((long)puVar37 + uVar38 + 4);
        plVar31 = (long *)&DAT_cbf29ce484222645;
        local_90 = strlen(pcVar3);
        bVar10 = *(byte *)((long)puVar37 + uVar38 + 4);
        if (bVar10 != 0) {
          pbVar23 = (byte *)((long)puVar35 + uVar38 + uVar36 + (ulong)uVar9 + 5);
          do {
            plVar31 = (long *)(((ulong)plVar31 ^ (ulong)bVar10) * 0x100000001b3);
            bVar10 = *pbVar23;
            pbVar23 = pbVar23 + 1;
          } while (bVar10 != 0);
        }
        local_88 = (long *)0x0;
        local_a0 = plVar31;
        local_98 = pcVar3;
LAB_00e58298:
        FUN_00f806a0(lVar16,&local_a0);
      }
      puVar35 = *(uint **)(*(long *)(lVar16 + 0x150) + 0x1f0);
      piVar6 = (int *)((long)puVar35 + (ulong)*puVar35);
      if (((0x12 < *(ushort *)((long)piVar6 - (long)*piVar6)) &&
          (uVar36 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[9], uVar36 != 0)) &&
         ((*(char *)((long)piVar6 + uVar36) != '\0' &&
          ((lVar17 = *(long *)(lVar16 + 0x1c8), lVar17 != 0 && (*(short *)(lVar17 + 0x1a) != 0))))))
      {
        psVar2 = (short *)(lVar17 + 0x1a);
        sVar27 = *(short *)(lVar17 + 0x1a);
        do {
          sVar11 = *psVar2;
          if (sVar11 == sVar27) {
            cVar13 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar26) {
              *psVar2 = sVar27 + 1;
              cVar13 = ExclusiveMonitorsStatus();
            }
            if (cVar13 != '\0') goto LAB_00e58bfc;
            bVar26 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00e58bfc:
            bVar26 = false;
          }
          if (bVar26) {
            lVar17 = *(long *)(lVar17 + 0x10);
            if (lVar17 == 0) break;
            plVar31 = (long *)(lVar17 + -0x28);
            lVar17 = *(long *)(lVar17 + 0x1a0);
            if ((lVar17 == 0) || (*(short *)(lVar17 + 0x1a) == 0)) {
LAB_00e58f18:
              (**(code **)(*plVar31 + 0x60))(plVar31);
              break;
            }
            psVar2 = (short *)(lVar17 + 0x1a);
            sVar27 = *(short *)(lVar17 + 0x1a);
            goto LAB_00e58eb4;
          }
          sVar27 = sVar11;
          if (sVar11 == 0) break;
        } while( true );
      }
      if ((0xe < *(ushort *)((long)piVar6 - (long)*piVar6)) &&
         (uVar36 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[7], uVar36 != 0)) {
        puVar35 = (uint *)((long)piVar6 + uVar36);
        plVar31 = (long *)(lVar16 + 0x1d8);
        lVar33 = *plVar31;
        puVar35 = (uint *)((long)puVar35 + (ulong)*puVar35);
        lVar17 = nn::os::GetCurrentThread();
        if (lVar17 != lVar33) {
          lVar17 = nn::os::GetCurrentThread();
LAB_00e5831c:
          if (*plVar31 == 0) goto code_r0x00e58324;
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar16 + 0x1e0));
          do {
            if (*plVar31 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(lVar16 + 0x1e0));
                while (*plVar31 == 0) {
                  cVar13 = '\x01';
                  bVar26 = (bool)ExclusiveMonitorPass(plVar31,0x10);
                  if (bVar26) {
                    *plVar31 = lVar17;
                    cVar13 = ExclusiveMonitorsStatus();
                  }
                  if (cVar13 == '\0') goto LAB_00e5832c;
                }
              } while( true );
            }
            cVar13 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(plVar31,0x10);
            if (bVar26) {
              *plVar31 = lVar17;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
LAB_00e5832c:
          bVar26 = false;
          goto LAB_00e58330;
        }
        plVar31 = (long *)0x0;
        bVar26 = true;
LAB_00e58330:
        puVar37 = puVar35 + 1;
        uVar36 = (ulong)*puVar35;
        if (uVar36 != 0) {
          puVar35 = puVar37 + uVar36;
          plVar4 = (long *)(lVar16 + 0x228);
          pcVar3 = (char *)(lVar16 + 0x260);
          plVar5 = (long *)(lVar16 + 600);
          do {
            local_a8 = (long)puVar37 + (ulong)*puVar37;
            FUN_00e83e2c(&local_d8,lVar16 + 0x118,&local_a8,&DAT_03c886bc);
            if (((*PTR_DAT_047d4df8 & 1) == 0) &&
               (iVar15 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar15 != 0)) {
              FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d4df8);
            }
            lVar17 = *(long *)PTR_DAT_047d4e00;
            *(long *)PTR_DAT_047d4e08 = lVar17;
            plVar34 = *(long **)(lVar17 + 8);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar15 = __cxa_guard_acquire(&DAT_04865a38), iVar15 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar17 = nn::os::GetTlsValue(DAT_04865a30);
            if (0xf < *(ulong *)(lVar17 + 0x80)) {
LAB_00e58e34:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(long **)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = plVar34;
            *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
            plVar18 = (long *)(**(code **)(*plVar34 + 0x10))(plVar34,0x510,0x10);
            plVar28 = local_d8;
            if (plVar18 == (long *)0x0) {
              (**(code **)(*plVar34 + 0xe8))(plVar34);
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("ptr","Create",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
                         ,0x40);
            }
            local_a0 = local_d8;
            if (local_d8 != (long *)0x0) {
              (**(code **)(*local_d8 + 0x18))(local_d8);
            }
            plVar19 = local_b8;
            local_98 = local_d0;
            local_90 = sStack_c8;
            local_88 = local_c0;
            plStack_80 = local_b8;
            if (local_b8 == (long *)0x0) {
              local_78 = local_b0;
              FUN_00e58f2c(plVar18,&local_a0,lVar16,0,0);
            }
            else {
              (**(code **)(*local_b8 + 0x18))(local_b8);
              local_78 = local_b0;
              FUN_00e58f2c(plVar18,&local_a0,lVar16,0,0);
              (**(code **)(*plVar19 + 0x20))(plVar19);
            }
            if (plVar28 != (long *)0x0) {
              (**(code **)(*plVar28 + 0x20))(plVar28);
            }
            *(undefined4 *)(plVar18 + 3) = 0x100510;
            plVar18[1] = (long)plVar34;
            plVar18[2] = (long)plVar18;
            *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
            (**(code **)(*plVar18 + 0x58))(plVar18);
            FUN_00e54378(plVar18);
            FUN_00ea0a7c(&local_e0,&local_a8);
            local_a0 = (long *)0x0;
            local_98 = (char *)0x0;
            FUN_00c43ef0(&local_a0,plVar18 + 6);
            local_f0 = (undefined8 *)0x0;
            uStack_e8 = 0;
            if ((long *)local_a0[2] == plVar18 + 5) {
              FUN_00e29918(&local_f0,&local_a0);
            }
            plVar34 = local_a0;
            if (local_a0 != (long *)0x0) {
              plVar28 = local_a0 + 3;
              do {
                sVar27 = (short)*plVar28;
                cVar13 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                if (bVar12) {
                  *(short *)plVar28 = sVar27 + -1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
              if (sVar27 == 1) {
                piVar6 = (int *)((long)local_a0 + 0x1c);
                do {
                  iVar15 = *piVar6;
                  cVar13 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(piVar6,0x10);
                  if (bVar12) {
                    *piVar6 = -1;
                    cVar13 = ExclusiveMonitorsStatus();
                  }
                } while (cVar13 != '\0');
                if (iVar15 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar15 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar15 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar17 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar17;
                  local_70[0] = *plVar34;
                  FUN_00c44438(lVar17 + 0x8040,local_70);
                }
              }
              else if (sVar27 == 0) goto LAB_00e58e68;
            }
            plVar34 = (long *)(**(code **)(**(long **)pcVar3 + 0x10))(*(long **)pcVar3,0x40,8);
            if (plVar34 == (long *)0x0) {
              (**(code **)(**(long **)pcVar3 + 0xe8))();
            }
            uVar20 = *(undefined8 *)pcVar3;
            local_a0 = plVar34;
            local_98 = pcVar3;
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar15 = __cxa_guard_acquire(&DAT_04865a38), iVar15 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar17 = nn::os::GetTlsValue(DAT_04865a30);
            plVar28 = local_e0;
            if (lVar17 != 0) {
              if (0xf < *(ulong *)(lVar17 + 0x80)) goto LAB_00e58e34;
              *(undefined8 *)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = uVar20;
              *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
            }
            plVar19 = (long *)PTR_DAT_047d8b70;
            if (local_e0 != (long *)0x0) {
              plVar19 = local_e0 + 6;
            }
            plVar7 = (long *)PTR_PTR_047d4508;
            if (local_e0 != (long *)0x0) {
              plVar7 = local_e0 + 7;
            }
            lVar33 = *plVar7;
            if (local_e0 == (long *)0x0) {
              lVar24 = 0;
            }
            else {
              lVar24 = local_e0[8];
            }
            plVar34[2] = *plVar19;
            plVar34[3] = lVar33;
            plVar34[4] = lVar24;
            plVar34[5] = 0;
            if (local_e0 == (long *)0x0) {
              plVar34[5] = 0;
            }
            else {
              (**(code **)(*local_e0 + 0x18))(local_e0);
              plVar19 = (long *)plVar34[5];
              plVar34[5] = (long)plVar28;
              if (plVar19 != (long *)0x0) {
                (**(code **)(*plVar19 + 0x20))();
              }
            }
            plVar34[6] = 0;
            plVar34[7] = 0;
            FUN_00dbd160(plVar34 + 6,&local_f0);
            if (lVar17 != 0) {
              *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
            }
            local_90 = CONCAT71(local_90._1_7_,1);
            uVar38 = plVar34[2];
            *plVar34 = 0;
            plVar34[1] = uVar38;
            uVar36 = *(ulong *)(lVar16 + 0x230);
            if (uVar36 == 0) {
LAB_00e587a0:
              fVar39 = (float)(*(long *)(lVar16 + 0x280) + 1);
              if ((uVar36 == 0) || (*(float *)(lVar16 + 0x288) * (float)uVar36 < fVar39)) {
                uVar36 = (ulong)(uVar36 < 3 || (uVar36 & uVar36 - 1) != 0) | uVar36 << 1;
                uVar38 = (ulong)(fVar39 / *(float *)(lVar16 + 0x288));
                if (uVar38 <= uVar36) {
                  uVar38 = uVar36;
                }
                FUN_00fe38ac(plVar4,uVar38);
                uVar36 = *(ulong *)(lVar16 + 0x230);
                uVar38 = plVar34[1];
              }
              uVar25 = uVar36 - (uVar36 >> 1 & 0x5555555555555555);
              uVar25 = (uVar25 & 0x3333333333333333) + (uVar25 >> 2 & 0x3333333333333333);
              uVar25 = (uVar25 + (uVar25 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
              if (uVar25 < 2) {
                uVar38 = uVar36 - 1 & uVar38;
              }
              else if (uVar36 <= uVar38) {
                uVar29 = 0;
                if (uVar36 != 0) {
                  uVar29 = uVar38 / uVar36;
                }
                uVar38 = uVar38 - uVar29 * uVar36;
              }
              plVar28 = *(long **)(*plVar4 + uVar38 * 8);
              if (plVar28 == (long *)0x0) {
                *plVar34 = *plVar5;
                *plVar5 = (long)plVar34;
                *(long **)(*plVar4 + uVar38 * 8) = plVar5;
                if (*plVar34 != 0) {
                  uVar38 = *(ulong *)(*plVar34 + 8);
                  if (uVar25 < 2) {
                    uVar38 = uVar38 & uVar36 - 1;
                  }
                  else if (uVar36 <= uVar38) {
                    uVar25 = 0;
                    if (uVar36 != 0) {
                      uVar25 = uVar38 / uVar36;
                    }
                    uVar38 = uVar38 - uVar25 * uVar36;
                  }
                  plVar28 = (long *)(*plVar4 + uVar38 * 8);
                  goto LAB_00e58888;
                }
              }
              else {
                *plVar34 = *plVar28;
LAB_00e58888:
                *plVar28 = (long)plVar34;
              }
              *(long *)(lVar16 + 0x280) = *(long *)(lVar16 + 0x280) + 1;
              local_a0 = (long *)0x0;
            }
            else {
              uVar25 = uVar36 - 1;
              if ((uVar36 & uVar25) == 0) {
                plVar28 = *(long **)(*plVar4 + (uVar25 & uVar38) * 8);
                if (plVar28 == (long *)0x0) goto LAB_00e587a0;
                do {
                  plVar28 = (long *)*plVar28;
                  if ((plVar28 == (long *)0x0) || ((plVar28[1] & uVar25) != (uVar25 & uVar38)))
                  goto LAB_00e587a0;
                } while (plVar28[2] != uVar38);
              }
              else {
                uVar25 = uVar38;
                if (uVar36 <= uVar38) {
                  uVar25 = 0;
                  if (uVar36 != 0) {
                    uVar25 = uVar38 / uVar36;
                  }
                  uVar25 = uVar38 - uVar25 * uVar36;
                }
                plVar28 = *(long **)(*plVar4 + uVar25 * 8);
                if (plVar28 == (long *)0x0) goto LAB_00e587a0;
                do {
                  plVar28 = (long *)*plVar28;
                  if (plVar28 == (long *)0x0) goto LAB_00e587a0;
                  uVar29 = plVar28[1];
                  if (uVar36 <= uVar29) {
                    uVar14 = 0;
                    if (uVar36 != 0) {
                      uVar14 = uVar29 / uVar36;
                    }
                    uVar29 = uVar29 - uVar14 * uVar36;
                  }
                  if (uVar29 != uVar25) goto LAB_00e587a0;
                } while (plVar28[2] != uVar38);
              }
              local_a0 = (long *)0x0;
              if (plVar34 != (long *)0x0) {
                FUN_021a3c60(&local_98,plVar34);
              }
            }
            puVar30 = local_f0;
            if (local_f0 != (undefined8 *)0x0) {
              psVar2 = (short *)(local_f0 + 3);
              do {
                sVar27 = *psVar2;
                cVar13 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                if (bVar12) {
                  *psVar2 = sVar27 + -1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
              if (sVar27 == 1) {
                piVar6 = (int *)((long)local_f0 + 0x1c);
                do {
                  iVar15 = *piVar6;
                  cVar13 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(piVar6,0x10);
                  if (bVar12) {
                    *piVar6 = -1;
                    cVar13 = ExclusiveMonitorsStatus();
                  }
                } while (cVar13 != '\0');
                if (iVar15 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar15 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar15 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar17 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar17;
                  local_a0 = (long *)*puVar30;
                  FUN_00c44438(lVar17 + 0x8040,&local_a0);
                }
              }
              else if (sVar27 == 0) {
LAB_00e58e68:
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                           ,0x33,"Reference counter underflows.");
              }
            }
            if (local_e0 != (long *)0x0) {
              (**(code **)(*local_e0 + 0x20))();
            }
            (**(code **)(*plVar18 + 0x60))(plVar18);
            if (local_b8 != (long *)0x0) {
              (**(code **)(*local_b8 + 0x20))();
            }
            if (local_d8 != (long *)0x0) {
              (**(code **)(*local_d8 + 0x20))();
            }
            puVar37 = puVar37 + 1;
          } while (puVar37 != puVar35);
        }
        if (!bVar26) {
          *plVar31 = 0;
          nn::os::SignalLightEvent((LightEventType *)(plVar31 + 1));
        }
      }
      *(undefined1 *)(lVar16 + 0x44a) = 1;
LAB_00e58358:
      if (*(char *)(lVar16 + 0x449) != '\0') {
        if (((*PTR_DAT_047d4df8 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar15 != 0)) {
          FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d4df8);
        }
        uVar20 = *(undefined8 *)PTR_DAT_047d4e00;
        *(undefined8 *)PTR_DAT_047d4e08 = uVar20;
        lVar17 = 0;
        if (*(long *)(lVar16 + 0x1b8) != 0) {
          lVar17 = *(long *)(lVar16 + 0x1b8) + 0x20;
        }
        FUN_00f3aa48(&local_a0,uVar20,lVar17);
        if (local_a0 != (long *)0x0) {
          lVar17 = local_a0[6];
          psVar2 = (short *)(lVar17 + 0x1a);
          do {
            sVar27 = *psVar2;
            cVar13 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar26) {
              *psVar2 = sVar27 + -1;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          if (sVar27 == 1) {
            *(undefined8 *)(lVar17 + 0x10) = 0;
            (**(code **)(*local_a0 + 0x50))();
          }
          else if (sVar27 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
      }
      bVar26 = true;
      while (!bVar26) {
        psVar2 = (short *)(lVar16 + 0x420);
        do {
          cVar13 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar26) {
            *psVar2 = *psVar2 + -1;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
LAB_00e5837c:
        if ((*(long *)(lVar16 + 0x1c8) == 0) ||
           (lVar16 = *(long *)(*(long *)(lVar16 + 0x1c8) + 0x10), lVar16 == 0)) goto LAB_00e583a8;
        lVar16 = lVar16 + -0x28;
        bVar26 = false;
      }
      if (*(char *)(lVar16 + 1099) != '\0') {
        *(undefined1 *)(lVar16 + 1099) = 0;
        goto LAB_00e5837c;
      }
LAB_00e583a8:
      if (lVar21 != 0) {
        (**(code **)(*plVar1 + 0x60))();
      }
    }
  }
LAB_00e58008:
  lVar21 = param_1[3];
  if ((*(byte *)(lVar21 + 0x61) & 1) != 0) {
    return;
  }
  plVar1 = (long *)(lVar21 + 0x68);
  lVar16 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar13 = '\x01';
    bVar26 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar26) {
      *plVar1 = lVar16;
      cVar13 = ExclusiveMonitorsStatus();
    }
    if (cVar13 == '\0') goto LAB_00e58034;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar21 + 0x70));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar21 + 0x70));
        while (*plVar1 == 0) {
          cVar13 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar26) {
            *plVar1 = lVar16;
            cVar13 = ExclusiveMonitorsStatus();
          }
          if (cVar13 == '\0') goto LAB_00e58034;
        }
      } while( true );
    }
    cVar13 = '\x01';
    bVar26 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar26) {
      *plVar1 = lVar16;
      cVar13 = ExclusiveMonitorsStatus();
    }
  } while (cVar13 != '\0');
LAB_00e58034:
  puVar30 = *(undefined8 **)(lVar21 + 0x80);
  puVar8 = *(undefined8 **)(lVar21 + 0x88);
  if (puVar30 != puVar8) {
    if ((*(byte *)(lVar21 + 0x61) & 1) == 0) {
      (*(code *)*puVar30)(puVar30 + 4);
    }
    if ((*(byte *)(lVar21 + 0x61) & 1) != 0) {
      (*(code *)**(undefined8 **)puVar30[0x10])();
      *(int *)(lVar21 + 100) = *(int *)(lVar21 + 100) + 1;
    }
    while (puVar30 = puVar30 + 0x12, puVar30 != puVar8) {
      if ((*(byte *)(lVar21 + 0x61) & 1) == 0) {
        (*(code *)*puVar30)(puVar30 + 4);
      }
      if ((*(byte *)(lVar21 + 0x61) & 1) != 0) {
        (*(code *)**(undefined8 **)puVar30[0x10])();
        *(int *)(lVar21 + 100) = *(int *)(lVar21 + 100) + 1;
      }
    }
    puVar30 = *(undefined8 **)(lVar21 + 0x80);
    puVar8 = *(undefined8 **)(lVar21 + 0x88);
    if (puVar8 != puVar30) {
      pcVar22 = (code *)puVar8[-0x11];
      puVar32 = puVar8 + -0x12;
      if (pcVar22 != (code *)0x0) {
        puVar8[-0x10] = 0;
        puVar8[-0xf] = 0;
        *puVar32 = 0;
        puVar8[-0x11] = 0;
        (*pcVar22)(puVar8 + -0xe);
      }
      while (puVar8 = puVar32, puVar8 != puVar30) {
        pcVar22 = (code *)puVar8[-0x11];
        puVar32 = puVar8 + -0x12;
        if (pcVar22 != (code *)0x0) {
          puVar8[-0x10] = 0;
          puVar8[-0xf] = 0;
          puVar8[-0x12] = 0;
          puVar8[-0x11] = 0;
          (*pcVar22)(puVar8 + -0xe);
        }
      }
    }
  }
  *(undefined8 **)(lVar21 + 0x88) = puVar30;
  *(undefined1 *)(lVar21 + 0x60) = 1;
  if ((*(byte *)(lVar21 + 0x50) & 1) == 0) {
    FUN_00e2f328(*(undefined8 *)(lVar21 + 0x40),lVar21);
    *(byte *)(lVar21 + 0x50) = 1;
  }
  *(undefined8 *)(lVar21 + 0x68) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar21 + 0x70));
  return;
code_r0x00e581c8:
  sVar27 = sVar11;
  if (sVar11 == 0) goto LAB_00e58008;
  goto LAB_00e58198;
LAB_00e58eb4:
  sVar11 = *psVar2;
  if (sVar11 == sVar27) {
    cVar13 = '\x01';
    bVar26 = (bool)ExclusiveMonitorPass(psVar2,0x10);
    if (bVar26) {
      *psVar2 = sVar27 + 1;
      cVar13 = ExclusiveMonitorsStatus();
    }
    if (cVar13 != '\0') goto LAB_00e58ed8;
    bVar26 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_00e58ed8:
    bVar26 = false;
  }
  if (bVar26) {
    if (*(long *)(lVar17 + 0x10) == 0) goto LAB_00e58f18;
    (**(code **)(*(long *)(*(long *)(lVar17 + 0x10) + -0x28) + 0x60))();
    (**(code **)(*plVar31 + 0x60))(plVar31);
    goto LAB_00e58358;
  }
  sVar27 = sVar11;
  if (sVar11 == 0) goto LAB_00e58f18;
  goto LAB_00e58eb4;
code_r0x00e58324:
  cVar13 = '\x01';
  bVar26 = (bool)ExclusiveMonitorPass(plVar31,0x10);
  if (bVar26) {
    *plVar31 = lVar17;
    cVar13 = ExclusiveMonitorsStatus();
  }
  if (cVar13 == '\0') goto LAB_00e5832c;
  goto LAB_00e5831c;
}


