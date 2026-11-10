/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02249d04; name: FUN_02249d04
 */


void FUN_02249d04(undefined8 param_1)

{
  short *psVar1;
  ulong *puVar2;
  long *plVar3;
  int *piVar4;
  undefined8 **ppuVar5;
  long **pplVar6;
  short sVar7;
  char cVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  char *pcVar15;
  undefined8 uVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  ulong uVar20;
  long lVar21;
  short sVar22;
  ulong *puVar23;
  long *local_148;
  ulong local_140;
  undefined8 *local_138;
  undefined8 local_130;
  undefined8 local_128;
  char *pcStack_120;
  undefined8 local_118;
  long *local_110;
  undefined8 *local_108;
  char *local_100;
  undefined8 local_f8;
  long *local_f0;
  undefined8 *local_e8;
  char *local_e0;
  undefined8 local_d8;
  long *local_d0;
  ulong local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_68;
  ulong *local_60 [2];
  long *local_38;
  
  puVar13 = (undefined8 *)FUN_0140f310();
  local_80 = *puVar13;
  uStack_78 = puVar13[1];
  local_70 = puVar13[2];
  local_68 = (long *)puVar13[3];
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x18))();
  }
  FUN_0140f318(local_60,param_1,&local_80);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (local_60[0] != (ulong *)0x0) {
    puVar23 = local_60[0];
    if (*(short *)((long)local_60[0] + 0x1a) != 0) {
      psVar1 = (short *)((long)local_60[0] + 0x1a);
      sVar22 = *(short *)((long)local_60[0] + 0x1a);
LAB_02249da8:
      sVar7 = *psVar1;
      if (sVar7 == sVar22) {
        cVar8 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar11) {
          *psVar1 = sVar22 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
        if (cVar8 != '\0') goto LAB_02249dcc;
        bVar11 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02249dcc:
        bVar11 = false;
      }
      if (!bVar11) goto code_r0x02249dd4;
      uVar20 = local_60[0][2];
      if (uVar20 == 0) goto LAB_0224a18c;
      lVar21 = FUN_0104b474(uVar20 + 0xe0,&local_c8);
      if (lVar21 != 0) {
        local_e8 = (undefined8 *)0x5f4296f4386634c8;
        local_e0 = "FileName";
        local_d8 = 8;
        local_d0 = (long *)0x0;
        FUN_01315eac(&local_c8,param_1,&local_e8);
        puVar9 = PTR_DAT_047d3e28;
        if (((*PTR_DAT_047d3e28 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3e28);
        }
        puVar10 = PTR_DAT_047d3e30;
        bVar11 = (char)local_c8 != '\0';
        ppuVar5 = (undefined8 **)PTR_DAT_047d3e30;
        if (bVar11) {
          ppuVar5 = &local_c0;
        }
        local_a0 = *ppuVar5;
        puVar13 = (undefined8 *)(PTR_DAT_047d3e30 + 8);
        if (bVar11) {
          puVar13 = &local_b8;
        }
        local_98 = *puVar13;
        puVar13 = (undefined8 *)(PTR_DAT_047d3e30 + 0x10);
        if (bVar11) {
          puVar13 = &local_b0;
        }
        local_90 = *puVar13;
        pplVar6 = (long **)(PTR_DAT_047d3e30 + 0x18);
        if (bVar11) {
          pplVar6 = &local_a8;
        }
        local_88 = *pplVar6;
        if (local_88 != (long *)0x0) {
          (**(code **)(*local_88 + 0x18))();
        }
        if ((char)local_c8 != '\0') {
          if (local_a8 != (long *)0x0) {
            (**(code **)(*local_a8 + 0x20))();
          }
          local_c8 = local_c8 & 0xffffffffffffff00;
        }
        if (local_d0 != (long *)0x0) {
          (**(code **)(*local_d0 + 0x20))();
        }
        local_108 = (undefined8 *)0x28297e26f721399e;
        local_100 = "LabelName";
        local_f8 = 9;
        local_f0 = (long *)0x0;
        FUN_01315eac(&local_c8,param_1,&local_108);
        if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3e28);
        }
        bVar11 = (char)local_c8 != '\0';
        ppuVar5 = (undefined8 **)puVar10;
        if (bVar11) {
          ppuVar5 = &local_c0;
        }
        local_e8 = *ppuVar5;
        puVar13 = (undefined8 *)(puVar10 + 8);
        if (bVar11) {
          puVar13 = &local_b8;
        }
        local_e0 = (char *)*puVar13;
        puVar13 = (undefined8 *)(puVar10 + 0x10);
        if (bVar11) {
          puVar13 = &local_b0;
        }
        local_d8 = *puVar13;
        pplVar6 = (long **)(puVar10 + 0x18);
        if (bVar11) {
          pplVar6 = &local_a8;
        }
        local_d0 = *pplVar6;
        if (local_d0 != (long *)0x0) {
          (**(code **)(*local_d0 + 0x18))();
        }
        if ((char)local_c8 != '\0') {
          if (local_a8 != (long *)0x0) {
            (**(code **)(*local_a8 + 0x20))();
          }
          local_c8 = local_c8 & 0xffffffffffffff00;
        }
        if (local_f0 != (long *)0x0) {
          (**(code **)(*local_f0 + 0x20))();
        }
        if (((*PTR_DAT_047d8ac0 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d8ac0), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d8ea0,PTR_DAT_047d8ac8,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d8ac0);
        }
        uVar14 = *(undefined8 *)PTR_DAT_047d8ac8;
        *(undefined8 *)PTR_DAT_047d8ad0 = uVar14;
        FUN_00f1203c(&local_38,uVar14,&local_a0,&local_e8,0);
        local_128 = 0x2b983cb1f13dc250;
        pcStack_120 = "PaneName";
        local_118 = 8;
        local_110 = (long *)0x0;
        FUN_01315eac(&local_c8,param_1,&local_128);
        if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3e28);
        }
        bVar11 = (char)local_c8 != '\0';
        ppuVar5 = (undefined8 **)puVar10;
        if (bVar11) {
          ppuVar5 = &local_c0;
        }
        local_108 = *ppuVar5;
        puVar13 = (undefined8 *)(puVar10 + 8);
        if (bVar11) {
          puVar13 = &local_b8;
        }
        local_100 = (char *)*puVar13;
        puVar13 = (undefined8 *)(puVar10 + 0x10);
        if (bVar11) {
          puVar13 = &local_b0;
        }
        local_f8 = *puVar13;
        pplVar6 = (long **)(puVar10 + 0x18);
        if (bVar11) {
          pplVar6 = &local_a8;
        }
        local_f0 = *pplVar6;
        if (local_f0 != (long *)0x0) {
          (**(code **)(*local_f0 + 0x18))();
        }
        if ((char)local_c8 != '\0') {
          if (local_a8 != (long *)0x0) {
            (**(code **)(*local_a8 + 0x20))();
          }
          local_c8 = local_c8 & 0xffffffffffffff00;
        }
        if (local_110 != (long *)0x0) {
          (**(code **)(*local_110 + 0x20))();
        }
        FUN_0104d570(&local_c8,lVar21,&local_108);
        if (local_c0 != (undefined8 *)0x0) {
          if ((*(short *)((long)local_c0 + 0x1a) != 0) && (local_c8 != 0)) {
            local_130 = 0;
            local_140 = local_c8;
            local_138 = (undefined8 *)0x0;
            FUN_00c81640(&local_138,&local_c0);
            uVar14 = FUN_0196c644(local_38);
            local_148 = *(long **)(lVar21 + 0x170);
            if (local_148 != (long *)0x0) {
              lVar21 = local_148[6];
              if (*(long *)(lVar21 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("m_object != nullptr","AddReference",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                           ,0x3d);
              }
              psVar1 = (short *)(lVar21 + 0x1a);
              do {
                sVar22 = *psVar1;
                cVar8 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar11) {
                  *psVar1 = sVar22 + 1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (sVar22 == 0) {
                uVar16 = (**(code **)**(undefined8 **)(lVar21 + 0x10))();
                *(undefined8 *)(lVar21 + 8) = uVar16;
                *(undefined4 *)(lVar21 + 0x1c) = 0xfffffffe;
              }
              else if (sVar22 == -1) {
                pcVar15 = "count != 0";
                pcVar17 = "AddReference";
                pcVar18 = 
                "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                ;
                pcVar19 = "Reference counter overflows.";
                goto LAB_0224a684;
              }
            }
            FUN_0104ded0(&local_140,uVar14,&local_148,10);
            if (local_148 != (long *)0x0) {
              lVar21 = local_148[6];
              psVar1 = (short *)(lVar21 + 0x1a);
              do {
                sVar22 = *psVar1;
                cVar8 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar11) {
                  *psVar1 = sVar22 + -1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (sVar22 == 1) {
                *(undefined8 *)(lVar21 + 0x10) = 0;
                (**(code **)(*local_148 + 0x50))();
              }
              else if (sVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                           ,0x60,"Reference counter underflows.");
              }
            }
            puVar13 = local_138;
            if (local_138 != (undefined8 *)0x0) {
              psVar1 = (short *)(local_138 + 3);
              do {
                sVar22 = *psVar1;
                cVar8 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar11) {
                  *psVar1 = sVar22 + -1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (sVar22 == 1) {
                piVar4 = (int *)((long)local_138 + 0x1c);
                do {
                  iVar12 = *piVar4;
                  cVar8 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(piVar4,0x10);
                  if (bVar11) {
                    *piVar4 = -1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
                if (iVar12 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar21 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar21;
                  local_128 = *puVar13;
                  FUN_00c44438(lVar21 + 0x8040,&local_128);
                }
              }
              else if (sVar22 == 0) goto LAB_0224a1ac;
            }
          }
          if (local_c0 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_c0 + 3);
            do {
              sVar22 = *psVar1;
              cVar8 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar11) {
                *psVar1 = sVar22 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (sVar22 == 1) {
              piVar4 = (int *)((long)local_c0 + 0x1c);
              do {
                iVar12 = *piVar4;
                cVar8 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar4,0x10);
                if (bVar11) {
                  *piVar4 = -1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (iVar12 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar21 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar21;
                local_128 = *local_c0;
                FUN_00c44438(lVar21 + 0x8040,&local_128);
              }
            }
            else if (sVar22 == 0) goto LAB_0224a1ac;
          }
        }
        if (local_f0 != (long *)0x0) {
          (**(code **)(*local_f0 + 0x20))();
        }
        if (local_38 != (long *)0x0) {
          plVar3 = local_38 + 5;
          do {
            lVar21 = *plVar3;
            iVar12 = (int)lVar21 + -1;
            cVar8 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar11) {
              *(int *)plVar3 = iVar12;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (iVar12 == 0) {
            (**(code **)(*local_38 + 0x10))();
          }
          else if ((int)lVar21 == 0) {
            pcVar15 = "count != std::numeric_limits<uint32_t>::max()";
            pcVar17 = "DecrementReferenceInternal";
            pcVar18 = 
            "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
            ;
            pcVar19 = "Reference counter underflows.";
LAB_0224a684:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl(pcVar15,pcVar17,pcVar18,0x58,pcVar19);
          }
        }
        if (local_d0 != (long *)0x0) {
          (**(code **)(*local_d0 + 0x20))();
        }
        if (local_88 != (long *)0x0) {
          (**(code **)(*local_88 + 0x20))();
        }
      }
      (**(code **)(*(long *)(uVar20 - 0x28) + 0x60))((long *)(uVar20 - 0x28));
LAB_0224a188:
      puVar23 = local_60[0];
      if (local_60[0] == (ulong *)0x0) {
        return;
      }
    }
LAB_0224a18c:
    puVar2 = puVar23 + 3;
    do {
      sVar22 = (short)*puVar2;
      cVar8 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar11) {
        *(short *)puVar2 = sVar22 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar22 == 1) {
      piVar4 = (int *)((long)puVar23 + 0x1c);
      do {
        iVar12 = *piVar4;
        cVar8 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar11) {
          *piVar4 = -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar12 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar21 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar21;
        local_c8 = *puVar23;
        FUN_00c44438(lVar21 + 0x8040,&local_c8);
      }
    }
    else if (sVar22 == 0) {
LAB_0224a1ac:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
code_r0x02249dd4:
  sVar22 = sVar7;
  if (sVar7 == 0) goto LAB_0224a188;
  goto LAB_02249da8;
}


