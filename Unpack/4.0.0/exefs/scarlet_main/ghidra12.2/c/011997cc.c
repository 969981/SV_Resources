/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011997cc; name: FUN_011997cc
 */


/* WARNING: Removing unreachable block (ram,0x01199d34) */
/* WARNING: Removing unreachable block (ram,0x01199d38) */
/* WARNING: Removing unreachable block (ram,0x01199d40) */
/* WARNING: Removing unreachable block (ram,0x01199d48) */
/* WARNING: Removing unreachable block (ram,0x0119a330) */
/* WARNING: Removing unreachable block (ram,0x0119a07c) */
/* WARNING: Removing unreachable block (ram,0x0119a080) */
/* WARNING: Removing unreachable block (ram,0x0119a088) */
/* WARNING: Removing unreachable block (ram,0x0119a390) */
/* WARNING: Removing unreachable block (ram,0x0119a754) */
/* WARNING: Removing unreachable block (ram,0x0119a764) */
/* WARNING: Removing unreachable block (ram,0x0119a3a0) */
/* WARNING: Removing unreachable block (ram,0x01199d50) */
/* WARNING: Removing unreachable block (ram,0x01199d54) */

void FUN_011997cc(long param_1,int *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  short *psVar3;
  long *plVar4;
  int *piVar5;
  short sVar6;
  char cVar7;
  bool bVar8;
  undefined8 *puVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  code *pcVar17;
  ulong uVar18;
  long lVar19;
  uint *puVar20;
  uint *puVar22;
  uint *puVar21;
  long lVar23;
  long *plVar24;
  long *plVar25;
  long lVar26;
  long lVar27;
  long *local_180;
  undefined8 local_178;
  long *local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  long *local_150;
  undefined4 local_148;
  long *local_140;
  long *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  long *local_118;
  undefined4 local_110;
  undefined8 *local_108;
  undefined8 uStack_100;
  long *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  long *local_d8;
  undefined4 local_d0;
  long *local_c8;
  long *local_c0;
  undefined8 local_b8;
  long *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long *local_90;
  undefined8 local_88;
  long *local_80;
  long *local_78;
  long *local_70 [2];
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x150));
  *(undefined1 *)(param_1 + 0x72) = 0;
  puVar21 = (uint *)((long)param_2 + (ulong)*(ushort *)((long)param_2 + (4 - (long)*param_2)));
  puVar21 = (uint *)((long)puVar21 + (ulong)*puVar21);
  puVar20 = puVar21 + 1;
  uVar14 = (ulong)*puVar21;
  if (uVar14 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x90);
    plVar2 = (long *)(PTR_DAT_047d8e88 + 0x10);
    puVar21 = puVar20;
    do {
      puVar22 = puVar21 + 1;
      local_c0 = (long *)((long)puVar22 + (ulong)*puVar21);
      FUN_0119aad4(&local_138,param_3,&local_c0,&DAT_03c886bc);
      local_90 = (long *)0x0;
      local_88 = 0;
      local_b8 = 0;
      local_a0 = 0;
      local_98 = 0;
      local_b0 = (long *)0x0;
      local_a8 = 0;
      uVar11 = *(ulong *)(param_1 + 0x80);
      local_c0 = plVar2;
      if (uVar11 < *(ulong *)(param_1 + 0x88)) {
        FUN_0119a888(puVar1,uVar11,&local_c0);
        *(ulong *)(param_1 + 0x80) = uVar11 + 0x40;
      }
      else {
        uVar18 = *(ulong *)(param_1 + 0x98);
        lVar19 = (long)(uVar11 - *(long *)(param_1 + 0x78)) >> 6;
        uVar11 = lVar19 + 1;
        if (0x7ffffffffffffffe < uVar18) {
          uVar18 = 0x7fffffffffffffff;
        }
        if (uVar18 < uVar11) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar15 = *(ulong *)(param_1 + 0x88) - *(long *)(param_1 + 0x78);
        uVar16 = lVar15 >> 5;
        if (uVar11 <= uVar16) {
          uVar11 = uVar16;
        }
        if (uVar18 >> 1 <= (ulong)(lVar15 >> 6)) {
          uVar11 = uVar18;
        }
        if (uVar11 == 0) {
          lVar15 = 0;
        }
        else {
          lVar15 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar11 << 6,8);
          if (lVar15 == 0) {
            (**(code **)(*(long *)*puVar1 + 0xe8))();
          }
        }
        lVar26 = lVar15 + lVar19 * 0x40;
        FUN_0119a888(puVar1,lVar26,&local_c0);
        lVar27 = *(long *)(param_1 + 0x78);
        lVar23 = *(long *)(param_1 + 0x80);
        lVar19 = lVar26 + 0x40;
        if (lVar23 == lVar27) {
          lVar23 = lVar27;
        }
        else {
          do {
            lVar26 = lVar26 + -0x40;
            lVar23 = lVar23 + -0x40;
            FUN_0119a888(puVar1,lVar26,lVar23);
          } while (lVar27 != lVar23);
          lVar27 = *(long *)(param_1 + 0x78);
          lVar23 = *(long *)(param_1 + 0x80);
        }
        *(long *)(param_1 + 0x78) = lVar26;
        *(long *)(param_1 + 0x80) = lVar19;
        lVar19 = *(long *)(param_1 + 0x88);
        *(ulong *)(param_1 + 0x88) = lVar15 + uVar11 * 0x40;
        while (lVar23 != lVar27) {
          lVar23 = lVar23 + -0x40;
          FUN_00db239c(lVar23);
        }
        if (lVar27 != 0) {
          plVar24 = (long *)*puVar1;
          lVar19 = lVar19 - lVar27;
          uVar11 = (**(code **)(*plVar24 + 0xf8))(plVar24);
          if (((uVar11 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
            (**(code **)(*plVar24 + 0x18))(plVar24,lVar27,lVar19,8);
          }
          else {
            FUN_00c48fe8(plVar24,lVar27,lVar19,8);
          }
        }
      }
      FUN_00db239c(&local_c0);
      lVar19 = *(long *)(param_1 + 0x80);
      uVar11 = FUN_00dc5c18(lVar19 + -0x40,1,&local_138,0,0);
      if ((uVar11 & 1) == 0) {
        plVar24 = (long *)0x0;
      }
      else {
        plVar24 = *(long **)(lVar19 + -0x20);
        if (plVar24 != (long *)0x0) {
          lVar19 = plVar24[6];
          if (*(long *)(lVar19 + 0x10) == 0) goto LAB_0119a804;
          psVar3 = (short *)(lVar19 + 0x1a);
          do {
            sVar6 = *psVar3;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar8) {
              *psVar3 = sVar6 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar6 == 0) {
            uVar13 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
            *(undefined8 *)(lVar19 + 8) = uVar13;
            *(undefined4 *)(lVar19 + 0x1c) = 0xfffffffe;
          }
          else if (sVar6 == -1) goto LAB_0119a824;
        }
      }
      local_c0 = (long *)0x0;
      local_b8 = 0;
      FUN_00c43ef0(&local_c0,param_1 + 0x30);
      local_180 = (long *)0x0;
      local_178 = 0;
      if (local_c0[2] == param_1 + 0x28) {
        do {
          uVar13 = local_b8;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(&local_b8,0x10);
          if (bVar8) {
            local_b8 = 0;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        uVar12 = *(undefined8 *)PTR_DAT_047d3910;
        *(undefined8 *)PTR_DAT_047d3918 = uVar12;
        FUN_00c44204(local_70,uVar12,uVar13);
        plVar25 = local_c0;
        local_c0 = (long *)0x0;
        if (plVar25 != (long *)0x0) {
          plVar4 = plVar25 + 3;
          do {
            sVar6 = (short)*plVar4;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar8) {
              *(short *)plVar4 = sVar6 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar6 == 1) {
            piVar5 = (int *)((long)plVar25 + 0x1c);
            do {
              iVar10 = *piVar5;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar5,0x10);
              if (bVar8) {
                *piVar5 = -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar10 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar19 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar19;
              local_108 = (undefined8 *)*plVar25;
              FUN_00c44438(lVar19 + 0x8040,&local_108);
            }
          }
          else if (sVar6 == 0) goto LAB_0119a108;
        }
        plVar25 = local_180;
        if (local_70[0] == (long *)0x0) {
          FUN_0119b8d0(&local_180);
        }
        else {
          local_180 = (long *)0x0;
          if (plVar25 != (long *)0x0) {
            plVar4 = plVar25 + 3;
            do {
              sVar6 = (short)*plVar4;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
              if (bVar8) {
                *(short *)plVar4 = sVar6 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (sVar6 == 1) {
              piVar5 = (int *)((long)plVar25 + 0x1c);
              do {
                iVar10 = *piVar5;
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                if (bVar8) {
                  *piVar5 = -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (iVar10 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar19 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar19;
                local_108 = (undefined8 *)*plVar25;
                FUN_00c44438(lVar19 + 0x8040,&local_108);
              }
            }
            else if (sVar6 == 0) goto LAB_0119a108;
          }
          local_180 = local_70[0];
          local_70[0] = (long *)0x0;
          local_178 = uVar13;
        }
      }
      plVar25 = local_c0;
      if (local_c0 != (long *)0x0) {
        plVar4 = local_c0 + 3;
        do {
          sVar6 = (short)*plVar4;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar8) {
            *(short *)plVar4 = sVar6 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar6 == 1) {
          piVar5 = (int *)((long)local_c0 + 0x1c);
          do {
            iVar10 = *piVar5;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar5,0x10);
            if (bVar8) {
              *piVar5 = -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar19 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar19;
            local_108 = (undefined8 *)*plVar25;
            FUN_00c44438(lVar19 + 0x8040,&local_108);
          }
        }
        else if (sVar6 == 0) goto LAB_0119a108;
      }
      local_170 = local_138;
      if (local_138 != (long *)0x0) {
        (**(code **)(*local_138 + 0x18))();
      }
      local_168 = local_130;
      local_160 = uStack_128;
      local_158 = local_120;
      local_150 = local_118;
      if (local_118 != (long *)0x0) {
        (**(code **)(*local_118 + 0x18))();
      }
      local_148 = local_110;
      if (((*PTR_DAT_047d8c58 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_047d8c58), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d9368,PTR_DAT_047d8c60,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8c58);
      }
      uVar13 = *(undefined8 *)PTR_DAT_047d8c60;
      *(undefined8 *)PTR_DAT_047d8c68 = uVar13;
      FUN_00cbf5d4(&local_140,uVar13,plVar24[1]);
      local_108 = (undefined8 *)0x0;
      uStack_100 = 0;
      FUN_0119ade4(&local_108,&local_180);
      local_d8 = local_150;
      local_f8 = local_170;
      local_170 = (long *)0x0;
      local_f0 = local_168;
      local_e8 = local_160;
      local_e0 = local_158;
      local_150 = (long *)0x0;
      local_d0 = local_148;
      local_c8 = local_140;
      if (local_140 != (long *)0x0) {
        lVar19 = local_140[6];
        if (*(long *)(lVar19 + 0x10) == 0) {
LAB_0119a804:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar3 = (short *)(lVar19 + 0x1a);
        do {
          sVar6 = *psVar3;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar3,0x10);
          if (bVar8) {
            *psVar3 = sVar6 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar6 == 0) {
          uVar13 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
          *(undefined8 *)(lVar19 + 8) = uVar13;
          *(undefined4 *)(lVar19 + 0x1c) = 0xfffffffe;
        }
        else if (sVar6 == -1) {
LAB_0119a824:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
      }
      plVar25 = (long *)0x0;
      if (local_140 != (long *)0x0) {
        plVar25 = local_140 + 0xb;
      }
      if ((*(byte *)((long)plVar24 + 0x6d) & 1) == 0) {
        if ((*(byte *)((long)plVar24 + 0x6c) & 1) == 0) {
          plVar4 = plVar24 + 0xf;
          lVar19 = nn::os::GetCurrentThread();
LAB_01199d88:
          if (*plVar4 == 0) goto code_r0x01199d90;
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(plVar24 + 0x10));
          do {
            if (*plVar4 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(plVar24 + 0x10));
                while (*plVar4 == 0) {
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                  if (bVar8) {
                    *plVar4 = lVar19;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                  if (cVar7 == '\0') goto LAB_01199d98;
                }
              } while( true );
            }
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar8) {
              *plVar4 = lVar19;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
LAB_01199d98:
          if ((*(byte *)((long)plVar24 + 0x6c) & 1) == 0) {
            local_c0 = (long *)0x0;
            local_b8 = 0;
            FUN_0119b66c(&local_c0,&local_108);
            local_b0 = local_f8;
            if (local_f8 != (long *)0x0) {
              (**(code **)(*local_f8 + 0x18))();
            }
            local_a8 = local_f0;
            local_a0 = local_e8;
            local_98 = local_e0;
            local_90 = local_d8;
            if (local_d8 != (long *)0x0) {
              (**(code **)(*local_d8 + 0x18))();
            }
            local_88 = CONCAT44(local_88._4_4_,local_d0);
            local_80 = local_c8;
            if (local_c8 != (long *)0x0) {
              lVar19 = local_c8[6];
              if (*(long *)(lVar19 + 0x10) == 0) goto LAB_0119a804;
              psVar3 = (short *)(lVar19 + 0x1a);
              do {
                sVar6 = *psVar3;
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(psVar3,0x10);
                if (bVar8) {
                  *psVar3 = sVar6 + 1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (sVar6 == 0) {
                uVar13 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
                *(undefined8 *)(lVar19 + 8) = uVar13;
                *(undefined4 *)(lVar19 + 0x1c) = 0xfffffffe;
              }
              else if (sVar6 == -1) goto LAB_0119a824;
            }
            uVar11 = plVar24[0x1a];
            local_78 = plVar25;
            if (uVar11 < (ulong)plVar24[0x1b]) {
              FUN_0119b50c(plVar24[0x1c],uVar11,&local_c0);
              plVar24[0x1a] = uVar11 + 0x90;
            }
            else {
              uVar18 = plVar24[0x1d];
              lVar19 = (long)(uVar11 - plVar24[0x19]) >> 4;
              if (0x7ffffffffffffffe < uVar18) {
                uVar18 = 0x7fffffffffffffff;
              }
              uVar11 = lVar19 * -0x71c71c71c71c71c7 + 1;
              if (uVar18 < uVar11) {
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              lVar15 = plVar24[0x1b] - plVar24[0x19] >> 4;
              uVar16 = lVar15 * 0x1c71c71c71c71c72;
              if (uVar11 <= uVar16) {
                uVar11 = uVar16;
              }
              plVar25 = plVar24 + 0x1c;
              if (uVar18 >> 1 <= (ulong)(lVar15 * -0x71c71c71c71c71c7)) {
                uVar11 = uVar18;
              }
              if (uVar11 == 0) {
                lVar15 = 0;
              }
              else {
                lVar15 = (**(code **)(*(long *)*plVar25 + 0x10))
                                   ((long *)*plVar25,uVar11 * 0x90,0x10);
                if (lVar15 == 0) {
                  (**(code **)(*(long *)*plVar25 + 0xe8))();
                }
              }
              lVar23 = lVar15 + lVar19 * 0x10;
              FUN_0119b50c(plVar24[0x1c],lVar23,&local_c0);
              lVar26 = plVar24[0x19];
              lVar27 = plVar24[0x1a];
              lVar19 = lVar23 + 0x90;
              if (lVar27 == lVar26) {
                lVar27 = lVar26;
              }
              else {
                do {
                  lVar23 = lVar23 + -0x90;
                  lVar27 = lVar27 + -0x90;
                  FUN_00cbf394(plVar25,lVar23,lVar27);
                } while (lVar26 != lVar27);
                lVar26 = plVar24[0x1a];
                lVar27 = plVar24[0x19];
              }
              plVar24[0x19] = lVar23;
              plVar24[0x1a] = lVar19;
              lVar19 = plVar24[0x1b];
              plVar24[0x1b] = lVar15 + uVar11 * 0x90;
              while (lVar15 = lVar26, lVar15 != lVar27) {
                pcVar17 = *(code **)(lVar15 + -0x88);
                lVar26 = lVar15 + -0x90;
                if (pcVar17 != (code *)0x0) {
                  *(undefined8 *)(lVar15 + -0x80) = 0;
                  *(undefined8 *)(lVar15 + -0x78) = 0;
                  *(undefined8 *)(lVar15 + -0x90) = 0;
                  *(undefined8 *)(lVar15 + -0x88) = 0;
                  (*pcVar17)(lVar15 + -0x70);
                }
              }
              if (lVar27 != 0) {
                plVar25 = (long *)*plVar25;
                uVar11 = (**(code **)(*plVar25 + 0xf8))(plVar25);
                if (((uVar11 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar25 + 0x18))(plVar25,lVar27,lVar19 - lVar27,0x10);
                }
                else {
                  FUN_00c48fe8(plVar25,lVar27,lVar19 - lVar27,0x10);
                }
              }
            }
            if (local_80 != (long *)0x0) {
              lVar19 = local_80[6];
              psVar3 = (short *)(lVar19 + 0x1a);
              do {
                sVar6 = *psVar3;
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(psVar3,0x10);
                if (bVar8) {
                  *psVar3 = sVar6 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (sVar6 == 1) {
                *(undefined8 *)(lVar19 + 0x10) = 0;
                (**(code **)(*local_80 + 0x50))();
              }
              else if (sVar6 == 0) goto LAB_0119a7cc;
            }
            if (local_90 != (long *)0x0) {
              (**(code **)(*local_90 + 0x20))();
            }
            if (local_b0 != (long *)0x0) {
              (**(code **)(*local_b0 + 0x20))();
            }
            plVar25 = local_c0;
            if (local_c0 != (long *)0x0) {
              plVar4 = local_c0 + 3;
              do {
                sVar6 = (short)*plVar4;
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                if (bVar8) {
                  *(short *)plVar4 = sVar6 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (sVar6 == 1) {
                piVar5 = (int *)((long)local_c0 + 0x1c);
                do {
                  iVar10 = *piVar5;
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                  if (bVar8) {
                    *piVar5 = -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar10 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar19 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar19;
                  local_70[0] = (long *)*plVar25;
                  FUN_00c44438(lVar19 + 0x8040,local_70);
                }
              }
              else if (sVar6 == 0) goto LAB_0119a108;
            }
          }
          else {
            FUN_0119b108(&local_108,plVar24[0xc],(int)plVar24[0xd]);
          }
          plVar24[0xf] = 0;
          nn::os::SignalLightEvent((LightEventType *)(plVar24 + 0x10));
          goto LAB_01199bb4;
        }
        FUN_0119b108(&local_108,plVar24[0xc],(int)plVar24[0xd]);
      }
LAB_01199bb4:
      if (local_c8 != (long *)0x0) {
        lVar19 = local_c8[6];
        psVar3 = (short *)(lVar19 + 0x1a);
        do {
          sVar6 = *psVar3;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar3,0x10);
          if (bVar8) {
            *psVar3 = sVar6 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar6 == 1) {
          *(undefined8 *)(lVar19 + 0x10) = 0;
          (**(code **)(*local_c8 + 0x50))();
        }
        else if (sVar6 == 0) goto LAB_0119a7cc;
      }
      if (local_d8 != (long *)0x0) {
        (**(code **)(*local_d8 + 0x20))();
      }
      if (local_f8 != (long *)0x0) {
        (**(code **)(*local_f8 + 0x20))();
      }
      puVar9 = local_108;
      if (local_108 != (undefined8 *)0x0) {
        psVar3 = (short *)(local_108 + 3);
        do {
          sVar6 = *psVar3;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar3,0x10);
          if (bVar8) {
            *psVar3 = sVar6 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar6 == 1) {
          piVar5 = (int *)((long)local_108 + 0x1c);
          do {
            iVar10 = *piVar5;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar5,0x10);
            if (bVar8) {
              *piVar5 = -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar19 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar19;
            local_c0 = (long *)*puVar9;
            FUN_00c44438(lVar19 + 0x8040,&local_c0);
          }
        }
        else if (sVar6 == 0) goto LAB_0119a108;
      }
      if (local_140 != (long *)0x0) {
        lVar19 = local_140[6];
        psVar3 = (short *)(lVar19 + 0x1a);
        do {
          sVar6 = *psVar3;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar3,0x10);
          if (bVar8) {
            *psVar3 = sVar6 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar6 == 1) {
          *(undefined8 *)(lVar19 + 0x10) = 0;
          (**(code **)(*local_140 + 0x50))();
        }
        else if (sVar6 == 0) goto LAB_0119a7cc;
      }
      if (local_150 != (long *)0x0) {
        (**(code **)(*local_150 + 0x20))();
      }
      if (local_170 != (long *)0x0) {
        (**(code **)(*local_170 + 0x20))();
      }
      plVar25 = local_180;
      if (local_180 != (long *)0x0) {
        plVar4 = local_180 + 3;
        do {
          sVar6 = (short)*plVar4;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar8) {
            *(short *)plVar4 = sVar6 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar6 == 1) {
          piVar5 = (int *)((long)local_180 + 0x1c);
          do {
            iVar10 = *piVar5;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar5,0x10);
            if (bVar8) {
              *piVar5 = -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar19 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar19;
            local_c0 = (long *)*plVar25;
            FUN_00c44438(lVar19 + 0x8040,&local_c0);
          }
        }
        else if (sVar6 == 0) {
LAB_0119a108:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      lVar19 = plVar24[6];
      psVar3 = (short *)(lVar19 + 0x1a);
      do {
        sVar6 = *psVar3;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar8) {
          *psVar3 = sVar6 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar6 == 1) {
        *(undefined8 *)(lVar19 + 0x10) = 0;
        (**(code **)(*plVar24 + 0x50))(plVar24);
      }
      else if (sVar6 == 0) {
LAB_0119a7cc:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      if (local_118 != (long *)0x0) {
        (**(code **)(*local_118 + 0x20))();
      }
      if (local_138 != (long *)0x0) {
        (**(code **)(*local_138 + 0x20))();
      }
      puVar21 = puVar22;
    } while (puVar22 != puVar20 + uVar14);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x150));
  return;
code_r0x01199d90:
  cVar7 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
  if (bVar8) {
    *plVar4 = lVar19;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_01199d98;
  goto LAB_01199d88;
}


